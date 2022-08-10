
class Main {

    public static void main(String[] args) {
        // write your code here
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 32, 54, 65 };

        reverseArray(arr);

        printArray(arr);

    }

    // reversing an array
    private static void reverseArray(int[] arr) {
        int start = 0, end = arr.length - 1;

        while (start < end) {

            swap(arr, start, end);
            start++;
            end--;

        }
    }

    private static void swap(int arr[], int start, int end) {

        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

    }

    private static void printArray(int[] arr) {

        for (int item : arr) {
            System.out.print(item + " ");
        }
        System.out.println();

    }

}
