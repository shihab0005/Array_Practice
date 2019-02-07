
import java.util.Scanner;

/**
 *
 * @author SK
 */
public class Second_largest_number_in_Array {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter The Size Of Array :");
        int n = input.nextInt();
        int largest = Integer.MIN_VALUE;
        int second_largest = Integer.MIN_VALUE;

        System.out.println("Enter " + n + " Elements :");
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                second_largest = largest;
                largest = arr[i];
            } else if (arr[i] > second_largest && arr[i] != largest) {
                second_largest = arr[i];
            }

        }
        if (second_largest == Integer.MIN_VALUE) {
            System.out.println("There is no second largest value in array !");
        } else {
            System.out.println("Second largest value is :" + second_largest);
        }

    }

}
