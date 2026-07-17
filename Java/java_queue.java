import java.util.*;
public class java_queue
{
	public static void main(String[] args){
		Queue<Integer> q = new LinkedList<>();
		q.offer(10);
		q.offer(11);
		q.offer(12);
		q.poll();
		System.out.print(q);
	}
}