import java.util.ArrayList;
import java.util.Collection;

public class collection {
    public static void main(String[] args) {
        // 集合体系结构
        // collection单列集合和Map双列集合
        // collection=list+set
        // list系列集合添加的元素有序,可重复,有索引
        // set系列及和添加的元素无序,不重复,无索引
        // collection是单列集合的祖宗接口,它的功能全部单列集合都可以继承
        // add(),clear(),remove(),contains(),isEmpty(),size();
        Collection<String> coll = new ArrayList<>();
        coll.add("a");
        coll.add("abc");
        // coll.clear();
        coll.remove("abc");
        System.out.println(coll);
        boolean ok = coll.contains("a");
        System.out.println(ok);
        System.out.println(coll.isEmpty());
        System.out.println(coll.size());
    }
}
