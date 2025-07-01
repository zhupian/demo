package Stream;

import java.util.HashMap;

public class StreamDemo2 {
    public static void main(String[] args) {
        //双列集合的stream
        //无法直接使用stream 需要用单列集合转换
        HashMap<Integer,Integer> hm=new HashMap<>();
        hm.put(1,2);
        hm.put(3,4);
        hm.put(5,6);
        hm.put(7,8);
        hm.put(9,10);
        //1.获取stream流
        hm.keySet().stream().forEach(s-> System.out.println(s));
        //2.获取stream流
        hm.entrySet().stream().forEach(s-> System.out.println(s));
    }
}
