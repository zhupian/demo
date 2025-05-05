package 随机点名案例;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Random;

public class random2 {
    public static void main(String[] args) {
        // 随机点名 70%男生 30%女生
        ArrayList<String> list1 = new ArrayList<>(Arrays.asList("张伟", "王强", "陈勇", "黄杰", "周敏", "徐浩", "孙传"));
        ArrayList<String> list2 = new ArrayList<>(Arrays.asList("李娜", "刘芳", "杨丽"));
        // 创建不可变列表 qwen教的
        // List<String> list1 = List.of("张伟", "王强", "陈勇", "黄杰", "周敏", "徐浩", "孙传");
        // List<String> list2 = List.of("李娜", "刘芳", "杨丽");
        Random r = new Random();
        int x = r.nextInt(1, 11);
        if (x <= 7)
            System.out.println(list1.get(x - 1));
        else
            System.out.println(list2.get(x - 8));
    }
}
