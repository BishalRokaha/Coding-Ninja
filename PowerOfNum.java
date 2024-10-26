// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.( Note : For this question, you can assume that 0 raised to the power of 0 is 1)

import java.util.Scanner;

public class PowerOfNum {
    
    public static void main(String[] args) {
        // Write your code here
        Scanner Sc=new Scanner(System.in);
        int x=Sc.nextInt();
        int n=Sc.nextInt();
        int pow=1;
        for(int i=0;i<n;i++){
            pow*=x;
        }
        System.out.println(pow);
        
    }
}
