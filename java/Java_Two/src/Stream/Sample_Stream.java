package Stream;

import java.util.ArrayList;

public class Sample_Stream {
    public static void main(String[] args) {
        ArrayList<String> list=new ArrayList<>();
        list.add("abc");
        list.add("absdf");
        list.add("bcs");
        list.add("abcde");
        list.add("wdf");
        list.add("a");
        list.add("wggr");
        list.add("badw");
        //1.把所有a开头的元素放到新集合
        ArrayList<String> a1=new ArrayList<>();
        for(String name:list){
            if(name.charAt(0)=='a')
                a1.add(name);
        }
        System.out.println(a1);
        //2.把所有a开头的且长度为3的元素放到新集合
        ArrayList<String> a2=new ArrayList<>();
        for(String name:list){
            if(name.charAt(0)=='a'&&name.length()==3){
                a2.add(name);
            }
        }
        System.out.println(a2);

        //使用stream流实现
        list.stream().filter(name->name.charAt(0)=='a').filter(name->name.length()==3).forEach(name-> System.out.println(name));
    }
}
