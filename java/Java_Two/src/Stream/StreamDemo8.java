package Stream;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.function.Consumer;
import java.util.function.IntFunction;

public class StreamDemo8 {
    public static void main(String[] args) {
        //forEach     遍历
        //count       统计
        //toArray()   收集流中的数据,放到数组中

        ArrayList<String> list=new ArrayList<>();
        Collections.addAll(list,"a","b","c","d","e","a","a");
        list.add("abc");
        list.add("bcd");
        list.add("cdf");
        list.add("cdf");
        list.add("cdf");
        list.add("cdf");
        list.stream().forEach(new Consumer<String>() {
            @Override
            public void accept(String s) {
                System.out.print(s+" ");
            }
        });

        System.out.println("-------");
        list.stream().forEach(s-> System.out.print(s+" "));

        System.out.println("-------");
        //count 方法
        System.out.println(list.stream().count());


        System.out.println("-------");
        //toArray方法
        //IntFunction 的泛型:具体类型的数组
        //apply的形参:流中的数据的个数,要和数据的长度保持一致
        //apply的返回值:具体类型的数据
        //方法体:就是创建数组

        //toArray方法的参数的作用:只是指定返回的数组类型
        String[] arr = list.stream().toArray(new IntFunction<String[]>() {
            @Override
            public String[] apply(int value) {
                return new String[value];//value表示数组的长度
            }
        });
        System.out.println(Arrays.toString(arr));
        System.out.println("--------");
        //lambda表达式写法
        System.out.println(Arrays.toString(list.stream().toArray(value -> new String[value])));
    }
}
