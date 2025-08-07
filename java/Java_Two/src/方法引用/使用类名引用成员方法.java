package 方法引用;

import java.util.ArrayList;
import java.util.Collections;
import java.util.function.Function;

public class 使用类名引用成员方法 {
    public static void main(String[] args) {
        //格式 类名::成员方法 String::substring
        ArrayList<String> list=new ArrayList<>();
        Collections.addAll(list,"abc","Agh","nid","uih","Gde");
        //正常写法
        /*list.stream().map(new Function<String, String>() {
            @Override
            public String apply(String s) {
                return s.toUpperCase();
            }
        }).forEach(s -> System.out.print(s+" "));*/
        list.stream().map(String::toUpperCase).forEach(System.out::println);
        //但是也有局限性 不能引用所有类中的成员方法
        //是和抽象方法中的第一个参数有关，这个参数是什么类型的，那么就只能引用这个类中的方法
    }
}
