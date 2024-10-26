// Write a program to print the first x terms of the mathematical series 3N + 2 which are not multiples of 4.

// The series is defined as:T(N) = 3N + 2, where N is a positive integer starting from 1. Your task is to print the first x terms of this series, but you should exclude any term that is a multiple of 4.

import java.util.Scanner;

public class TermsOfAP {
	
	public static void main(String[] args) {
		// Write your code here
		Scanner Sc=new Scanner(System.in);
		int x=Sc.nextInt();
		int count=0;
		int N=0;

		while(count<x){
			int term=3*N+2;
			if(term%4!=0 && term!=2){
				System.out.print(term+ " ");
				count++;
			}
			N++;
		}
	}
}
