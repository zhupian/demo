package text;

import java.util.Random;

public class Text {
    public static void main(String[] args) {
        int[] arr = new int[16];
        for (int i = 0; i < 16; i++)
            arr[i] = i;
        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            int index = r.nextInt(arr.length);
            int p = arr[i];
            arr[i] = arr[index];
            arr[index] = p;
        }
        for (int i = 0; i < 16; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
        int[][] date = new int[4][4];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                date[i][j] = arr[i * 4 + j];
                System.out.print(date[i][j] + " ");
            }
            System.out.println();
        }
    }
}
