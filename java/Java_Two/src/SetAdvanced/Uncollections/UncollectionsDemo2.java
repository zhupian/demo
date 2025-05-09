package SetAdvanced.Uncollections;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class UncollectionsDemo2 {
    public static void main(String[] args) {
        HashMap<String ,Integer> hm=new HashMap<>();
        for(int i=1;i<=10;i++){
            hm.put("i"+i,i);
        }
        //创建一个不可变的集合   1
        Set<Map.Entry<String,Integer>> entries=hm.entrySet();
        Map.Entry[] arr=new Map.Entry[0];
        arr = entries.toArray(arr);
        //toArray用法将集合元素复制到指定类型的数组中
        // 用法1：传入空数组
        //String[] array1 = list.toArray(new String[0]);
        // 用法2：传入长度足够的数组
        //String[] array2 = new String[list.size()];
        //list.toArray(array2);

        // 转换为 Map.Entry[] 数组(利用链式编程)  2
        Map.Entry<String, Integer>[] entryArray = hm.entrySet().toArray(new Map.Entry[0]);
        Map map=Map.ofEntries(arr);

        //终极简化方法
        Map<String, Integer> mp = Map.copyOf(hm);
        // 遍历数组
        for (Map.Entry<String, Integer> entry : entryArray) {
            System.out.println(entry.getKey() + " -> " + entry.getValue());
        }
    }
}
