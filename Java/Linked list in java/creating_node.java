class Node{
    int data;
    Node next;

}

class creating_node{
    public static void main(String[] args)
    {
        Node first =new Node();
        first.data=5;
        first.next=null;

        Node second =new Node();
        second.data=50;
        second.next=null;
        first.next=second;

        System.out.println(" x= "+first.next.data);

    }
}