package main;

import java.util.ArrayList;
import java.util.List;

public class list {
    public static void main(String[] args) {
        // List集合
        // add(index,element),remove(index),set(index,element),get(index);
        List<String> list = new ArrayList<>();
        list.add("a ");
        list.add("b");
        list.add("c");
        list.add(2, "abc");
        list.set(1, "2343");
        list.remove(0);
        System.out.println(list.get(0));
        System.out.println(list);
    }
};
