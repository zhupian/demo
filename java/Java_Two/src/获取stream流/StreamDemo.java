package 获取stream流;

import java.util.ArrayList;
import java.util.Collections;
import java.util.function.Consumer;
import java.util.stream.Stream;

public class StreamDemo {
    public static void main(String[] args) {
        //stream流使用步骤
        //1 先得到stream流,并把数据放上去
        //2 利用stream流中的api进行各种操作
        //list.stream().filter(name->name.charAt(0)=='a').filter(name->name.length()==3).forEach(name-> System.out.println(name));
        //单列集合获取stream流
        ArrayList<String> list=new ArrayList<>();
        Collections.addAll(list,"a","b","b","b","b","b","b","b","b","b");
        //获取到一条流水线上,并把集合上的数据放到流水线上
        Stream<String> stream1=list.stream();
        //使用终结方法打印一下流水线上的所有数据
        stream1.forEach(new Consumer<String>() {
            @Override
            public void accept(String s) {
                //s 依次表示流水线上的数据
                System.out.print(s);
            }
        });
        System.out.println();
        //等价于
        list.stream().forEach(s-> System.out.print(s));
    }
}
