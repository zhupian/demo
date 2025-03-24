import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringJoiner;

public class api {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 字符串比较 基本数据类型和引用数据类型不可比较 “==”比较的是地址
        String s1 = "sdf";
        String s2 = new String("sdf");
        boolean ok = s1.equals(s2);// 比较字符;
        if (ok)
            System.out.println("s1==s2");
        boolean ok1 = s1.equalsIgnoreCase(s2);
        if (ok1)
            System.out.println("s1==s1且忽略大小写");

        // StringBuilder的作用是提高字符串的操作效率 是一个容器,中的字符串可以改变
        StringBuilder sb = new StringBuilder();
        sb.append("sdfs");// 添加元素
        sb.reverse();// 反转
        sb.length();
        sb.toString();// 最后还需要转成字符串
        // StringJoiner 括号的内容为 间隔符号,//开始符号,//结束符号
        StringJoiner sj = new StringJoiner("---", "[", "]");
        sj.add("add").add("bbb").add("ccc");
        sj.length();
        sj.toString();
        System.out.println(sj); // 添加内容,返回对象本身

        // 数组和集合 数组长度固定,可以存基本数据类型,引用数据类型
        // 集合长度可变,能存引用数据类型
        ArrayList<String> arr = new ArrayList<>();
        arr.add("abc");// 增
        arr.add("sdfsdf");
        arr.add("sdfefvwe");
        arr.add("abc");
        arr.remove("a");// 删
        arr.remove(0);// 删
        arr.set(1, "ddd");// 改
        arr.get(2);// 查
        arr.size();

        // 封装 当类与类之间存在相同的内容时，并满足子类是父类的一种
        // public class 子类 extends 父类{}
        // final修饰的方法是最终方法,不能被重写 public final void show(){}
        // final修饰的类不能被继承 final class fu{}
        // final修饰的变量只能被赋值一次 final String s = "23";
        // 但是修饰的引用数据类型是地址不会改变,内部的值可以改变
        final int[] at = { 1, 2, 3, 4 };
        at[0] = 10;
        for (int i = 0; i < at.length; i++) {
            System.out.println(at[i]);
        }
        // 静态代码块 static{} 随着类的加载而加载,自动触发,只执行一次
        // 在类加载的时候,做数据的初始化
        // 抽象类 比如父有work()方法,对应的子类有student和teacher 两个子类的work不同
        // 这时候使用 抽象类会强制子类重写work方法
        // public abstract void work()
        sc.close();

    }

}
