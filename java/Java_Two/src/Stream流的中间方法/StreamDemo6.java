package Stream流的中间方法;

import java.util.ArrayList;
import java.util.Collections;
import java.util.stream.Stream;

public class StreamDemo6 {
    public static void main(String[] args) {
        //distinct  元素去重 ,依赖（hashCode和equals方法)
        //concat  合并a和b两个流为一个流


        ArrayList<String> list=new ArrayList<>();
        ArrayList<String> list2=new ArrayList<>();
        Collections.addAll(list,"a","b","c","d","e","a","a");
        list.add("abc");
        list.add("bcd");
        list.add("cdf");
        list.add("cdf");
        list.add("cdf");
        list.add("cdf");
        Collections.addAll(list2,"abc","dfsd","w3r","sg3");
        //去重
        list.stream().distinct().forEach(System.out::print);
        System.out.println();
        System.out.println("========");
        //合并
        Stream.concat(list.stream(),list2.stream()).forEach(System.out::print);
    }
}
