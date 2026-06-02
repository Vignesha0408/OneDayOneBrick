def main():
    def addRows(a,b):
        for i in range(len(a)):
            a[i]=a[i]+b[i]
        return a;
    def reduseLastRow(a):
        b=[]
        for i in range(len(a)-1):
            if(a[i]>a[i+1]):
                b.append(a[i])
            else :
                b.append(a[i+1])
        b.append(0)
        return b;
 

    triangle=[[3, 0, 0, 0], [7, 4, 0, 0],[2, 4, 6, 0],[8, 5, 9, 3]];
    for i in range(len(triangle)-1):
        triangle[-2]=addRows(triangle[-2],reduseLastRow(triangle[-1]))
        triangle.pop()
    print(triangle[0][0])


main()
 


 
