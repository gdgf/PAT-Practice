//c++代码
#include<cstdio>
#include<algorithm>
using namespace std;
 
/*题目所需所有常量与变量：n=点数，maxn=点的编号范围，e=边数,s=起点,d=终点*/
const int INF = 1000000000; 
const int maxn = 510;       
int n, e, s, d;
 
/*关于边的变量：el（edge_length缩写）存储边权(本例为城市之间的距离)*/
int el[maxn][maxn];
 
/*关于点的变量：v存储点是否被访问过，noh(node_hands缩写)存储点权(本例为每个城市的人手)*/
int v[maxn];
int noh[maxn];
 
/*关于路径的变量：pathl(path_length缩写)存储从起点到所有点的最短路径的边权(本例为起点城市到所有城市的最短路径的距离)，
pathc(path_count缩写)存储从起点到其他点的最短路径的数目；maxh(max_hands缩写)存储从起点到其他点的全部最短路径中的点权最大值(本例为起点城市到其他城市的所有最短路径中，人手最多的那条路径的人手数)*/
int pathl[maxn];
int pathc[maxn];
int maxh[maxn];
 
/*用dijkstra求出起点到所有点的最短路径，并记录最短路径中点权的最大值*/
void dijkstra() {
	
/*初始化所有属性：起点到自身的最短路径距离path[s]为0，其最短路径数目pathc[s]只有一条；
其最短路径上的人数就是起点城市本身的人数maxh[s]=noh[s]；
将起点到其他点的最短路径距离初始化为无穷大；*/
 
	fill(pathl, pathl + maxn, INF);
	pathl[s] = 0;
	pathc[s] = 1;
	maxh[s] = noh[s];
 
/*不断更新起点到其他点的最短路径，并更新最短路径中的点权*/
	while (1) {
	  
/*找出本轮尚未确定最短路径的城市中，起点到剩余城市中，距离最小minl的那个城市mini。
如果minl是无穷大，证明起点城市与剩余城市均不可达，即不连通；
如果mini就是目标城市d，则表明已经确定起点城市到目标城市的最短路径，提前结束寻找。
否则，将本轮能确定最短路径的城市mini设为已经处理好,v[mini]=1；
*/
		int minl = INF, mini = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] == 1)continue;
			if (pathl[i] < minl) {
				minl = pathl[i];
				mini = i;
			}
		}
		if (minl == INF || mini == d)break;
		v[mini] = 1;
	
/*尝试从起点城市-城市mini-其他城市i，如果路径更短，则更新;*/
		for (int i = 0; i < n; i++) {
			if (v[i] == 1 || el[mini][i] == 0)continue;
/*如果城市i已经处理好，或者城市mini到不了城市i，则跳过；*/
			int templ = pathl[mini] + el[mini][i];
			int temph = maxh[mini] + noh[i];
			if (templ < pathl[i]) {
				pathl[i] = templ;
				maxh[i] = temph;
				pathc[i] = pathc[mini];
			}
/*如果从城市mini过去城市i的路径更短，则更新所有属性*/			
			else if (templ == pathl[i]) {
				pathc[i] += pathc[mini];
				if (temph > maxh[i]) {
					maxh[i] = temph;
				}
/*如果从城市mini到城市i的路径跟之前的路径距离相同，则更新最短路径数。但人手更多,即点权更大，则更新最多人手数*/
			}
		}
	}
}
 
 
int main() {
/*接收所有数据*/
	scanf("%d %d %d %d", &n, &e, &s, &d);
	for (int i = 0; i < n; i++) {
		scanf("%d", &noh[i]);
	}
	for (int i = 0; i < e; i++) {
		int in1, in2, in3;
		scanf("%d %d %d", &in1, &in2, &in3);
		el[in1][in2] = el[in2][in1] = in3;
	}
 
/*用dijkstra求出起点到所有点的最短路径*/
	dijkstra();
 
/*输出起点到目标的最短路径的数目，以及所有最短路径中，最大的人手数*/
	printf("%d %d\n", pathc[d], maxh[d]);
 
	return 0;
}