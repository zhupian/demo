package SetAdvanced.Uncollections;

import java.util.*;

public class UncollectionsDemo1 {
    public static void main(String[] args) {
        //不可变集合的意义
        //如果某个数据不能被修改,把他防御性的拷贝到不可变集合中是个好的实践
        List<Integer> list= List.of(1,2,3,4,5,6);
        System.out.println(list.get(3));
        //list.remove(0); 报错
        Set<Integer> set= Set.of(1,2,3,4,5,6);
        for(int x:set){
            System.out.println(x+" ");
        }
        Map<Integer,Integer> map= Map.of(1,2,2,3,5,6,7,8);
        //Map.of最多传10个键值对

        //三种获取map值的方法
        Set<Integer> keys=map.keySet();//获取键集合
        Collection<Integer> values=map.values();//获取值集合
        Set<Map.Entry<Integer,Integer>> entries=map.entrySet();//获取键和值集合
        for(int key:keys){
            int value=map.get(key);
            System.out.println(key+" "+value);
        }
        for (Map.Entry<Integer, Integer> entire : map.entrySet()) {
            Integer key = entire.getKey();
            Integer value = entire.getValue();
            System.out.println(key+" "+value);
        }

    }
}
