// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).

// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)



import java.util.*;
public class SumProduct {
	
	public static void main(String[] args) {
		// Write your code here
		Scanner Sc=new Scanner(System.in);
		int num=Sc.nextInt();
		int choice=Sc.nextInt();
		int sum=0;
		int product=1;
		if(choice==1){
			for(int i=0;i<=num;i++){
				sum=sum+i;
			}
			System.out.println(sum);
		}
		else if(choice==2){
			for(int i=1;i<=num;i++){
				product=product*i;
			}
			System.out.println(product);
		}
		else{
			System.out.println(-1);
		}
		Sc.close();
	}
}