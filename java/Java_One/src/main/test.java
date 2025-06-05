package main;

import java.util.ArrayList;
import java.util.Arrays;

public class test {
    public static void main(String[] args) {
        // Integer[] arr = { 23, 4, 5, 2, 3, 5 };
        // Arrays.sort(arr, (Integer o1, Integer o2) -> {
        // return o1 - o2;
        // });
        // System.out.println(Arrays.toString(arr));
        ArrayList<Integer> dp = new ArrayList<>(Arrays.asList(0, 1, 1));
        for (int i = 3; i <= 12; i++) {
            int x = dp.get(i - 1) + dp.get(i - 2);
            dp.add(x);
        }
        System.out.println(dp.get(12));
        System.out.println(fn(12));
    }

    public static int fn(int x) {
        if (x <= 2)
            return 1;
        else
            return fn(x - 1) + fn(x - 2);
    }
}
