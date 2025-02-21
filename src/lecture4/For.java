/**
 * For loop implementation in Java.
 * 
 * for (initialize; test; next) { statements; }
 * 
 */
public class For {

    /**
     * Determine if a number is prime.
     * 
     * @param number
     * @return true if a number is prime
     */
    public static boolean isPrime(int number) {

        /* Verify if the number have a divisor other than itself. */
        for (int divisor = 2; divisor < number; divisor++) {

            /* Verify if the number is divisible without remainders. */
            if (number % divisor == 0) {
                return false;
            }
        }

        /* Every divisor beside 1 return false, the number is prime. */
        return true;
    }

    /**
     * Entry point of the program.
     * 
     * @param args
     */
    public static void main(String[] args) {

        int number = 3;

        boolean result = isPrime(number);

        if (result) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
    }
}
