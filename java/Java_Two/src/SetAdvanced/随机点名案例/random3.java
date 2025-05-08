package 随机点名案例;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Random;
import java.util.Scanner;

public class random3 {
    public static void main(String[] args) {
        // 点过名的不点了,点完了开始第二轮
        ArrayList<String> list = new ArrayList<>(
                Arrays.asList("张伟", "李娜", "王强", "刘芳", "陈勇", "杨丽", "黄杰", "周敏", "徐浩", "孙婷"));
        ArrayList<Integer> index = new ArrayList<>();
        Collections.addAll(index, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
        System.out.println("输入随机次数");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Random r = new Random();
        for (int i = 1; i <= n; i++) {
            int t = r.nextInt(index.size());
            // System.out.println(t + " " + index);
            System.out.println(list.get(index.get(t)));
            index.remove(t);
            if (i % 10 == 0)
                Collections.addAll(index, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
        }
        sc.close();
    }
}
