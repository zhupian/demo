import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class test {
    public static void main(String[] args) {
        System.out.println("啥！！");
        List<String> list = Arrays.asList("banana", "apple", "cherry", "sd", "sdfsdfsdfsd");
        Collections.sort(list, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return o1.length() - o2.length(); // 按字符串长度排序
            }
        });
        for (String s : list)
            System.out.println(s);
    }
}
