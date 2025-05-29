package 获取stream流;

import java.util.Arrays;

public class StreamDemo3 {
    public static void main(String[] args) {
        //数组获取stream流
        int[] arr={1,2,3,4,5,6,7};
        String[] s={"abc","cds","sda"};

        //获取stream流
        //普通数据类型
        Arrays.stream(arr).forEach(System.out::print);
        System.out.println("======");
        //引用数据类型
        Arrays.stream(s).forEach(System.out::print);

    }
}
