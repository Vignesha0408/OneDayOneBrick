class Node{
    int data;
    Node link;
    Node(int data)
    {
        this.data=data;
        this.link=null;
    }
}

class stack
{
    Node top = null;
    public void push(int data)
    {
        Node nn = new Node(data);
        nn.link=top;
        top=nn;
    }
    public int pop()
    {
        int x= top.data;
        top=top.link;
        System.out.println( x+" is poped");
        return x;
    }
}

public class stackWithLinkedlist{
    public static void main(String[] args)
    {
        stack s=new stack();
        s.push(5);
        s.push(6);
        s.pop();
        s.pop();
     }
}