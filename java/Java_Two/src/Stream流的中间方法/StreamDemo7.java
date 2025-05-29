package Stream流的中间方法;

import java.util.ArrayList;
import java.util.Collections;
import java.util.function.Function;

public class StreamDemo7  {
    public static void main(String[] args) {
        //map  转换流中的数据类型
        ArrayList<String> list=new ArrayList();
        Collections.addAll(list,"a-23","b-234","c-145","d-897","e-9","s-0");
        //现在想要提取list中的数字

        //第一个类型 流中原本的类型  第二个是目标类型
        //apply的形参s 一次表示流里面的每一个数据
        //显而易见  返回值就是表示转换后的类型
        list.stream().map(new Function<String,Integer>() {
            @Override
            public Integer apply(String s) {
                int target=0;
                for(int i=0;i<s.length();i++){
                    char c=s.charAt(i);
                    if(c>='0'&&c<='9') target=target*10+c-'0';
                }
                return target;
            }
        }).forEach(System.out::print);
        System.out.println("=======");
        list.stream().map(s->Integer.parseInt(s.split("-")[1])).forEach(System.out::print);
    }
}
