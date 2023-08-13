import java.util.Arrays;
import java.util.*;
import java.util.Scanner; 
public class SetA3 {
    
        public static void main(String[] args) {  
            int n,i;  
            Scanner sc=new Scanner(System.in);  
            System.out.print("Enter the number of elements you want to store: ");  
            n=sc.nextInt();  
            
            int[] array = new int[n];  
            System.out.println("Enter the elements of the array: ");  
            for(i=0; i<n; i++)  
            {     
            array[i]=sc.nextInt();  
            } 
              //Arrays.sort(array, Collections.reverseOrder());
              //System.out.println(Arrays.toString(array));
              
              int index=-1;
              for (i = 0; i <array.length; i++){
                index=i;
                for (int j = i ; j <= array.length-1; j++)
                {
                    if (array[j] > array[index])
                         {
                         index = j;
                        }
                }
                int temp = array[i];
                array[i] = array[index];
                array[index] = temp;
                }
                for (i = 0; i < array.length; i++)
                {
                    System.out.print(array[i] + ",");
                }


            System.out.println("Array elements are: "+array[i]); 
            int sum = 0;   
            for (i = 0; i < array.length; i++) {  
               sum = sum + array[i];  
            }  
            System.out.println("Sum of all the elements of an array: " + sum);  
        }  
    
    
}
