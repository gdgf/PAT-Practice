
def createFile(): 
    for i in range(1,155):
        filename=str(1000+i)+".cpp"
        fd = open(filename, mode="w", encoding="utf-8")
        fd.close()
if __name__ == "__main__":
    createFile()