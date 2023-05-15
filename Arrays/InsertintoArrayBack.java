import java.util.Scanner;

public class InsertintoArrayBack {

    public static void PrintArray(int[] array, int c) {

        for (int i = 0; i < c + 5; i++) {
            System.out.print(array[i] + " ");
        }

        System.out.println();

    }

    // Logic
    public static void InsertElementBack(int[] array, int element, int c) {

        array[c] = element;
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

        InsertElementBack(arr, 8, count);

        PrintArray(arr, count);

        sc.close();

    }
}
