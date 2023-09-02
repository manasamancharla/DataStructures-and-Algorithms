import java.util.Scanner;

public class SearchinArray {

    public static void PrintArray(int[] array, int c) {

        for (int i = 0; i < c + 5; i++) {
            System.out.print(array[i] + " ");
        }

        System.out.println();

    }

    /*********** LOGIC *************************/
    public static int SearchElement(int[] array, int element) {
        
        if (array.length == 0){
            System.out.println("The array is empty");
            return -1;
         }

        for (int i = 0; i <= array.length -1; i++) {
            if (array[i] == element){
                System.out.println("The number is present at " + i + " position");
                return 1;
            }
    
        }

        System.out.println("The number does not exist");   
        return -1;


    }

    public static void main(String[] args) {

        int count = 0;
        int[] arr = new int[20];

        int choice;

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < arr.length; i++) {

            System.out.println("Do you want to enter an element?, Enter 1 or 0");

            choice = sc.nextInt();

            if (choice == 1) {
                System.out.println("Enter an element");
                arr[i] = sc.nextInt();
                count++;
            }

            if (choice == 0) {
                System.out.println("Okay");
                break;
            }

        }

        PrintArray(arr, count);

        SearchElement(arr, 8);

        sc.close();

    }
}