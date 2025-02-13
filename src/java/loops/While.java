/**
 * While loop implementation in Java.
 * 
 * initialize;
 * while (test) { statements; next; }
 * 
 */
public class While {

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
        while (divisor < number) {

            /* Verify if the number is divisible without remainders. */
            if (number % divisor == 0) {
                return false;
            }

            /* Iterate through each divisor for a complete coverage. */
            divisor++;
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

        int number = 4;

        boolean result = isPrime(number);

        if (result) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }
    }
}