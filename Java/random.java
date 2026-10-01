import java.util.*;
class a{
    public static void main(String[] args)
    {
        System.out.println("Number guessing game");
        Random rand = new Random();
        int x= rand.nextInt(5)+1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number");
        int y= sc.nextInt();
        System.out.println("Computer guess:"+x+"\nYou guess:"+y);
        if(x==y) System.out.println("youwon");
        else System.out.println("youloose");

        sc.close();
    }
}
