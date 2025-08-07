package 方法引用;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.function.Function;
import java.util.stream.Collectors;

public class 引用构造方法 {
    public static void main(String[] args) {
        //格式  类名::new
        ArrayList<String> list = new ArrayList<>();
        Collections.addAll(list, "a,1", "b,3", "sd,23", "ab,23", "sd,9");
        //需求 集合里面存储姓名和年龄，要求封装Student对象并收集到list集合中去
        /*List<Student> newlist = list.stream().map(new Function<String, Student>() {
            @Override
            public Student apply(String string) {
                String[] arr = string.split(",");
                String name = arr[0];
                int age = Integer.parseInt(arr[1]);
                return new Student(name, age);
            }
        }).toList();

        System.out.println(newlist);*/

        List<Student> newlist = list.stream().map(Student::new).toList();
        System.out.println(newlist);
    }
}
