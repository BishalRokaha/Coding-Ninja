// Given a binary number as an integer N, convert it into decimal and print.

import java.util.*;

public class BinaryToDecimal {
    public static void main(String[] args) {
		// Write your code here
		Scanner Sc=new Scanner(System.in);
		String binary=Sc.next();
		
		int decimal=Integer.parseInt(binary,2);

		System.out.println(decimal);
	}
}
