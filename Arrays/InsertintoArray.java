import java.util.Scanner;

public class InsertintoArray {

    public static void PrintArray(int[] array, int c) {

        for (int i = 0; i < c + 5; i++) {
            System.out.print(array[i] + " ");
        }

        System.out.println();

    }

    /*********** LOGIC *************************/
    public static void InsertElement(int[] array, int element, int position, int c) {

        for (int i = c - position; i > 0; i--) {
            array[i + 1] = array[i];
        }

        array[position] = element;
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

        InsertElement(arr, 8, 1, count);

        PrintArray(arr, count);

        sc.close();

    }
}