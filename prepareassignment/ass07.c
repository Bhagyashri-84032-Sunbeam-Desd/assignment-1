/*write a java program to accept a number from user using command line argument and display in table */

class MultiTab
{
	public static void main(String[] args)
	{
		int i;
		int num = Integer.parseInt(args[0]);
		for(i=1; i<=10; i++)
		{
			System.out.println(num+ " * " +i+ " = "+num * i);
		}
	}
}
