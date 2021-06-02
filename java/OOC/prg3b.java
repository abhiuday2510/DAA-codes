package OOC;
import java.util.*;
public class prg3b {
	static int randomInteger;
	public static void main(String[] args){
		System.out.println("For 10 Random numbers");
		MyThread1 thread1 = new MyThread1();
		thread1.start();
	}
}
class MyThread1 extends Thread{
	public void run() {
		int i = 0;
		try {
			while(i<5) {
				Random random = new Random();
				prg3b.randomInteger = random.nextInt(15);
				System.out.println((i+1)+" Random integer is "+prg3b.randomInteger);
				new MyThread2().start();
				new MyThread3().start();
				Thread.sleep(5);
				System.out.println("\n");
				i++;
			}
		}
		catch (InterruptedException exception) {
			exception.printStackTrace();
		}
	}
}
class MyThread2 extends Thread {
	public void run() {
		System.out.println("Square of "+prg3b.randomInteger + " is " +prg3b.randomInteger * prg3b.randomInteger );
	}
}
class MyThread3 extends Thread {
	public void run() {
		System.out.println("Cube of "+prg3b.randomInteger + " is " + prg3b.randomInteger * prg3b.randomInteger *
		prg3b.randomInteger );
		
	}
}
