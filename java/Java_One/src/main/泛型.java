package main;

import java.util.ArrayList;
import java.util.Arrays;

public class 泛型 {
    public static void main(String[] args) {
        // 泛型的好处 统一数据类型
        // 泛型不可以写基本数据类型
        ArrayList<String> list = new ArrayList<>();
        list.add("23");
    }

    public class MyArrayList<E> {
        // 当编写一个类的时候,不确定类型,就可以编写为泛型类
        // 语法如上 E可以替换为任意字符
        Object[] obj = new Object[10];
        int size = 0;

        // E表示不确定的类型,该类型在类的后面已经定义过了
        // e 形参的名字,变量名
        public boolean add(E e) {
            obj[size] = e;
            size++;
            return true;
        }

        public E get(int index) {
            return (E) obj[index];
        }

        @Override
        public String toString() {
            return Arrays.toString(obj);
        }
    }
}
