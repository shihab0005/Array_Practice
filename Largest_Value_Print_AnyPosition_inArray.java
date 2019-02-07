
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
public class Largest_Value_Print_AnyPosition_inArray {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter Size Of Array :");
        int n= input.nextInt();
        System.out.println("Enter "+n+" Elements :");
        int []arr=new int[n];
        
        for (int i = 0; i < n; i++) {
            arr[i]=input.nextInt();
            
        }
        System.out.println("Enter The Position :");
        int position=input.nextInt();
        
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if(arr[i]<arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
                
            }
            if(i==position-1){
                System.out.println(position+" Largest value is :"+arr[i]);
            }
            
        }
    }
    
}
