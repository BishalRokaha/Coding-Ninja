// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

// Hint : Use type casting



import java.util.Scanner;

public class FahrenheitToCelcius {
    public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
		Scanner s = new Scanner(System.in);
        int start = s.nextInt();
        int end = s.nextInt();
        int step = s.nextInt(); 
        int currentFahrenhietValue = start;
        while(currentFahrenhietValue <= end){
			int celsiusValue = (int)((5.0 / 9) * (currentFahrenhietValue - 32)); 
            System.out.println(currentFahrenhietValue +"\t" +celsiusValue); 
            currentFahrenhietValue += step;

		}  
	}
}
