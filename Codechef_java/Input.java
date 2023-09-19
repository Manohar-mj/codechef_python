import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		// your code goes here
		Scanner objName = new Scanner(System.in);
		String varName = objName.nextLine();
		System.out.println(varName);
	}
}


import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		// update your code below this line
		Scanner obj=new Scanner(System.in);
		int val=obj.nextInt();
		System.out.println(val*4);



	}
}




You have already seen how to read a String. Let's see how to read the other datatype values.

nextInt(): Reads integer values.
nextFloat(): Reads float value.
nextDouble(): Reads double value.
nextBoolean(): Reads boolean value.
nextLine(): Reads string value until newline character ('\n') is encountered.
next(): Reads string value until space or newline character is encountered.




import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
		// your code goes here
		Scanner read = new Scanner(System.in);
		String x = read.nextLine();
		System.out.println("Hello " + x);
	}
}

