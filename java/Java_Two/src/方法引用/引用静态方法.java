package 方法引用;

import javax.naming.InterruptedNamingException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.stream.Stream;

public class 引用静态方法 {
    //"1","2","3","4","5"转化为int类型
    public static void main(String[] args) {
        ArrayList<String> s=new ArrayList<>();
        Collections.addAll(s,"1","2","3","4","5");
        Stream<String>st=s.stream();
        st.map(new Function<String, Integer>() {
            @Override
            public Integer apply(String string) {
                return Integer.parseInt(string);
            }
        }).forEach(System.out::println);
        //st.map(Integer::parseInt).forEach(System.out::println);
    }
}
