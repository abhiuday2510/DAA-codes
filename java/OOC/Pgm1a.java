package OOC;

import java.util.*;

class Student
{
	String USN,Name,Branch,Phone;
	void read()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the USN:");
		USN=sc.next();
		System.out.println("enter the name:");
		Name=sc.next();
		System.out.println("enter the branch:");
		Branch=sc.next();
		System.out.println("enter the phone no:");
		Phone=sc.next();
	}
	void display()
	{
		System.out.println("\nStudent details are:-");
		System.out.println("USN="+this.USN);
		System.out.println("Name="+this.Name);
		System.out.println("Branch="+this.Branch);
		System.out.println("Phone no="+this.Phone);
	}
}
public class Pgm1a {
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the number of students:");
		int n=sc.nextInt();
		Student []s=new Student[n];
		for(int i=0;i<n;i++)
		{
			System.out.println("enter the details for student"+(i+1));
			s[i]=new Student();
			s[i].read();
		}
		System.out.println("the student details are :-");
		for(int i=0;i<n;i++)
		{
			System.out.println("details for"+(i+1)+"student are :-");
			s[i].display();
		}
	}
}
