package 随机点名案例;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class random {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        Collections.addAll(list, "张伟", "李娜", "王强", "刘芳", "陈勇", "杨丽", "黄杰", "周敏", "徐浩", "孙婷");
        Random r = new Random();
        int t = r.nextInt(list.size());
        System.out.println(list.get(t));

        // 第二种随机方式
        Collections.shuffle(list);
        System.out.println(list.get(0));
    }
}