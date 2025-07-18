package 方法引用;

import java.util.ArrayList;
import java.util.function.Predicate;

public class 引用其他类的成员方法 {
    public static void main(String[] args) {
        //格式 对象::成员方法
        //其他类  其他类对象::成员方法
        //本类  this::成员方法
        //父类  super::成员方法
        ArrayList<String> list=new ArrayList<>();
        list.add("abc");
        list.add("absdf");
        list.add("bcs");
        list.add("abcde");
        list.add("wdf");
        list.add("a24");
        list.add("wggr");
        list.add("badw");
        list.add("abe");
        //引用所有a开头&&长度为3
        list.stream().filter(new Predicate<String>() {
            @Override
            public boolean test(String string) {
                if(string.charAt(0)=='a'&&string.length()==3) return true;
                else return false;
            }
        }).forEach(System.out::print);
        System.out.println("------------");
        //使用引用  其它类
        list.stream().filter(new StringOperation()::StringJudge).forEach(System.out::print);
        System.out.println("------------");
        //在本类
        //这里this会报错 因为静态方法中不可以有this 所以this写成new 引用其他类的成员方法
        list.stream().filter(new 引用其他类的成员方法()::StringJudge).forEach(System.out::print);
    }
    boolean  StringJudge(String s){
        return s.charAt(0)=='a'&&s.length()==3;
    }
}
