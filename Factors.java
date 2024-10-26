// Write a program that takes a number as input and prints all its factors except 1 and the number itself. If the number has only two factors (1 and the number itself), then the program should print -1.

import java.util.Scanner;

public class Factors {
    
    public static void main(String[] args) {
        // Write your code here
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        boolean hasfactor=false;
        for(int i=2;i<num;i++){
            if(num%i==0){
                System.out.print(i+ " ");
                hasfactor=true;
            }
        }
        if(!hasfactor){
            System.out.println(-1);
        }
        
    }
}
