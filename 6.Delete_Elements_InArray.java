
import java.util.Scanner;

/**
 *
 * @author SK
 */
public class Delete_Elements_InArray {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        

        System.out.print("Enter Size Of Array :");
        int n = input.nextInt();

        System.out.println("Enter " + n + " Elements :");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();

        }
        int count = 0;
        System.out.print("Enter Value To delete From Array :");
        int deleteValue = input.nextInt();
        for (int i = 0; i < n; i++) {
            if (deleteValue == arr[i]) {
                for (int j = i; j < n-1; j++) {
                    arr[j] = arr[j + 1];

                }
                count = count + 1;
                break;
            }
        }
        if(count==0){
            System.out.println("Value Not Found !!");
        }
        else{
            System.out.println("Elements Delete Successfully");
            for ( int i = 0; i < n-1; i++) {
                System.out.println(arr[i]+" ");
            }
        
        }
    }

}
