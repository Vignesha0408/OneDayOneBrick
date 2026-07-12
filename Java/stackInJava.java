import java.util.*;
public class stackInJava{
	public static void main(String[] args)
	{
		Stack<Integer> stack = new Stack<>();
		stack.push(50);
		stack.push(55);
		stack.push(50);
		System.out.println(stack.pop()+" is poped");
		System.out.println(stack);
		System.out.println(stack.peek()+" is peek");
		System.out.println(stack.size()+" is size");
		System.out.println(stack.isEmpty()+" =is empty");
		stack.push(51);
		stack.push(52);
		stack.push(53);
		System.out.println(stack.search(53)+" top 53 search");
		stack.clear();
	}
	
}