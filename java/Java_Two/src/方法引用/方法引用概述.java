package 方法引用;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class 方法引用概述 {
    public static int compare(int a, int b){
        return a-b;
    }
    public static void main(String[] args) {
        //方法引用：就是把已经有的方法拿过来用,当作是函数式接口中抽象方法的方法体
        ArrayList<Integer> arr=new ArrayList<>();
        arr.add(22);
        Collections.addAll(arr,23,34,234,5,4,5,32,3,2);
        arr.sort(方法引用概述::compare);
        System.out.println(arr);
    }

}
