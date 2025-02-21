/**
 * Do-while loop implementation in Java.
 * 
 * initialize;
 * do { statements; next; } while (test);
 * 
 */
public class DoWhile {

    /**
     * Determine if a number is prime.
     * 
     * @param number
     * @return true if a number is prime
     */
    public static boolean isPrime(int number) {

        /* 0 is forbidden, 1 already determine a prime number. */
        int divisor = 2;

        /* Verify if the number have a divisor other than itself. */
        do {

            /* Verify if the number is divisible without remainders. */
            if (number % divisor == 0) {
                return false;
            }

            /* Iterate through each divisor for a complete coverage. */
            divisor++;
        } while (divisor < number);

        /* Every divisor beside 1 return false, the number is prime. */
        return true;
    }

    /**
     * Entry point of the program.
     * 
     * @param args
     */
    public static void main(String[] args) {

        int number = 5;

        boolean result = isPrime(number);

        if (result) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
    }
}
