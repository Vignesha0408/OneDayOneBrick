import math
def main():
    def checkLeap(year):
        if year%100 ==0:
            if year%400==0:
                return True
            else:
                return False 
        elif year%4 == 0:
            return True
        else:
            return False

    def totalDays(year):
        if(checkLeap(year)):
            return 366
        else:
            return 365

    def oddDays(year):
        if checkLeap(year):
            return 2
        else:
            return 1

    def firstDay(year):
        days=["sun", "mon", "tue", "wed", "thu", "fri", "sat"]
        odddays=0;
        for i in range(1,year):
            odddays+=oddDays(i)
        return days[(1+odddays)%7]

    def entireDays(y1,y2):
        d=0
        match (firstDay(y1)):
            case   "sun":d+=0
            case   "mon":d-=6
            case   "tue":d-=5
            case   "wed":d-=4
            case   "thu":d-=3
            case   "fri":d-=2
            case   "sat":d-=1
        for i in range(y1,y2+1):
            d=d+totalDays(i)
        return d


    def totalSundays(y1,y2):
        print(entireDays(y1,y2)//7+1)

    totalSundays(2001,2001)
         
 
            
             
    
     
        
main()