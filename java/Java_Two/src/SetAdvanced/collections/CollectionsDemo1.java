package SetAdvanced.collections;

import java.util.ArrayList;
import java.util.Collections;

public class CollectionsDemo1 {
    public static void main(String[] args) {
        // collections是集合的工具类
        ArrayList<String> list = new ArrayList<>();
        // 批量添加
        Collections.addAll(list, "ada", "ad", "brt", "sdg");
        for (String s : list)
            System.out.println(s);
        // 打乱集合
        Collections.shuffle(list);
        System.out.println(list);

        // sort
        Collections.sort(list);
        System.out.println(list);
    }
}
