
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author SK
 */
public class maxMinOfArray {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter The Size Of Array :");
        int n = input.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " Elements in Array :");
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (max < arr[i]) {
                max = arr[i];

            }           
        }
        System.out.println("The Maximum Value In Array is :" + max);
        int min = arr[0];
        for (int i = 1; i < n; i++) {
            if (min > arr[i]) {
                min = arr[i];

            }   
        }
        System.out.println("The Minimum Value In Array is :" + min);
    }
}
