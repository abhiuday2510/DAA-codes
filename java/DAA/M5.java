package DAA;

import java.util.Scanner;
import java.util.Random;
import java.io.*;
class MergeSort 
{
int[ ] inputArr; 
int[ ] tempMergArr;
int cnt;
int n; 
	void process( ) throws IOException
	{
		Scanner scanner = new Scanner(System.in); 
		System.out.print("Enter the number of elements to sorted:(>5000):");
		n = scanner.nextInt();
		inputArr=new int[n];
		tempMergArr = new int[n];
		getRandomNumbers(inputArr);
		cnt = 0; 
		doMergeSort(0, inputArr.length-1);
		PrintWriter outA = new PrintWriter(new File("mrg_asort.txt")); 
		for (int i :inputArr) 
			outA.print(i + " ");
		outA.close();
		System.out.println("The time complexity is ... " + cnt);
		scanner.close();
	}
	void getRandomNumbers(int[ ] inputArr) throws IOException 
	{
		Random rand = new Random();
		int number, count = 0;
		PrintWriter out = new PrintWriter(new File("Mrandom.txt"));
		 while (count<n) {
			number = rand.nextInt(n) + 1;
			inputArr[count] = number;
			out.print(number + " ");
			count++;
		}
		out.close();
		System.out.println("The total numbers generated: " + count);
	}
	void doMergeSort(int lowerIndex, int higherIndex) 
	{
		if (lowerIndex<higherIndex)
		{
			int middle = lowerIndex + (higherIndex - lowerIndex) / 2;
			doMergeSort(lowerIndex, middle);
			doMergeSort(middle+1, higherIndex);
			mergeParts(lowerIndex, middle, higherIndex);
		}
	}
	void mergeParts(int lowerIndex, int middle, int higherIndex) 
	 {
		for (int i = lowerIndex; i<= higherIndex; i++) 
		tempMergArr[i] = inputArr[i];
		int i = lowerIndex;
		int j = middle + 1;
		int k = lowerIndex;
		while (i<= middle&&j<= higherIndex)
		{ 
			 if (tempMergArr[i] <= tempMergArr[j])
			{ 
				inputArr[k] = tempMergArr[i];
				i++;
				cnt++;
			} 
			else 
			{
				inputArr[k] = tempMergArr[j];
				j++;
				cnt++;
			}
			 k++;
		}
		while (i<= middle)
		{
			inputArr[k] = tempMergArr[i];
			k++;
			i++;
		}
		 while(j<=higherIndex)
		 {
			inputArr[k] = tempMergArr[j];
			k++;
			j++;
		 }
	}
}

public class M5 {
	public static void main(String args[]) throws IOException {
		MergeSort msort = new MergeSort();
		msort.process();
		}
}
