import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.function.Consumer;

public class collection {
    public static void main(String[] args) {
        // 集合体系结构
        // collection单列集合和Map双列集合
        // collection=list+set
        // list系列集合添加的元素有序,可重复,有索引
        // set系列及和添加的元素无序,不重复,无索引
        // collection是单列集合的祖宗接口,它的功能全部单列集合都可以继承
        // add(),clear(),remove(),contains(),isEmpty(),size();
        Collection<Integer> coll = new ArrayList<>();
        coll.add(23);
        coll.add(4);
        coll.add(5);
        coll.add(6);
        coll.add(7);
        // coll.clear();
        coll.remove(3);
        System.out.println(coll);
        boolean ok = coll.contains(2);
        System.out.println(ok);
        System.out.println(coll.isEmpty());
        System.out.println(coll.size());

        // 迭代器遍历 iterator(); 默认指向0索引
        // hasNext() 判断当前位置是否有元素,有元素就返回true,else返回false
        // E next() 获取当前位置的元素,并将迭代器对象移向下一个位置
        Iterator<Integer> it = coll.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
            // coll.remove(it.next());
            // 在进行迭代器遍历的时候不可以用集合的方法进行增加或删除
        }
        for (Integer x : coll) { // coll.for 快速生成
            System.out.println(x);
        }

        // 匿名内部类写法
        coll.forEach(new Consumer<Integer>() {
            @Override
            public void accept(Integer k) {
                System.out.println(k);
            }
        });

        // lambda写法
        coll.forEach((Integer f) -> {
            System.out.println(f);
        });
    }
}
