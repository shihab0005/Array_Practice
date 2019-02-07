
import java.util.Scanner;

/**
 *
 * @author SK
 */
public class SumElementsOfArray {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter The Size Of Array :");
        int number = input.nextInt();
        int[] arr = new int[number];
        int sum = 0;
        System.out.println("Enter " + number + " Elements In Array :");
        for (int i = 0; i < number; i++) {
            arr[i] = input.nextInt();
        }
        for (int i = 0; i < number; i++) {
            sum = sum + arr[i];

        }
        System.out.print("Sum of All Elements Of Array is :" + sum);
    }

}
