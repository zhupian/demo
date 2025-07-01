package Stream;

import java.util.ArrayList;
import java.util.Collections;

public class StreamDemo5 {
    public static void main(String[] args) {
        //filter  过滤
        //skip 跳过前面几个元素
        //skip 跳过前面几个元素


        //filter  过滤
        ArrayList<String> list=new ArrayList<>();
        Collections.addAll(list,"a","b","c","d","e");
        list.add("abc");
        list.add("bcd");
        list.add("cdf");
        //匿名内部类写法
       /* list.stream().filter(new Predicate<String>() {
            @Override
            public boolean test(String s) {
                //返回值为true  当前值留下
                //反之亦反
                return s.charAt(0)=='a';
                //留下a
            }
        }).forEach(System.out::println);*/
        list.stream().filter(s->s.charAt(0)=='a').forEach(System.out::println);

        //注意！
        //Stream<String> st1=list.stream().filter((s->s.charAt(0)=='b'));
        //st1.forEach(System.out::println);
        //st1.forEach(System.out::println); 这里会报错！！
        //因为原来的stream流只能使用一次,所以没有留下的必要,那么就建议使用链式编程

        System.out.println("=======");
        //limit 获取前面几个元素
        list.stream().limit(4).forEach(System.out::println);
        System.out.println("=======");
        //skip 跳过前面几个元素
        list.stream().skip(5).forEach(System.out::println);
        //嵌套使用
        System.out.println("=======");
        list.stream().skip(3).limit(2).forEach(System.out::println);
    }
}
