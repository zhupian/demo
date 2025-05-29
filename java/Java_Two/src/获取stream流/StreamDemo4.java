package 获取stream流;

import java.util.stream.Stream;

public class StreamDemo4 {
    public static void main(String[] args) {
        //零散的数据用stream流打印
        //stream接口中静态方法of的细节
        //方法的形参可以接受一堆数据,也可以接受数组
        // 但是数组必须要是引用数据类型,否则会把整个数组当成一个元素放到流当中
        Stream.of(1,2,3,"sd","a").forEach(System.out::println);
    }
}
