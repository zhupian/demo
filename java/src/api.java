import java.io.IOException;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.Instant;
import java.time.ZoneId;
import java.time.ZonedDateTime;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;
import java.util.Random;
import java.util.Scanner;
import java.util.Set;
import java.util.StringJoiner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class api {
    public static void main(String[] args) throws IOException, ParseException {
        Scanner sc = new Scanner(System.in);
        // this 方法调用者的地址值
        // 字符串比较 基本数据类型和引用数据类型不可比较 “==”比较的是地址
        String s1 = "sdf";
        String s2 = new String("sdf");
        boolean ok = s1.equals(s2);// 比较字符;
        if (ok)
            System.out.println("s1==s2");
        boolean ok1 = s1.equalsIgnoreCase(s2);
        if (ok1)
            System.out.println("s1==s1且忽略大小写");

        // StringBuilder的作用是提高字符串的操作效率 是一个容器,中的字符串可以改变
        StringBuilder sb = new StringBuilder();
        sb.append("sdfs");// 添加元素
        sb.reverse();// 反转
        sb.length();
        sb.toString();// 最后还需要转成字符串
        // StringJoiner 括号的内容为 间隔符号,//开始符号,//结束符号
        StringJoiner sj = new StringJoiner("---", "[", "]");
        sj.add("add").add("bbb").add("ccc");
        sj.length();
        sj.toString();
        System.out.println(sj); // 添加内容,返回对象本身

        // 数组和集合 数组长度固定,可以存基本数据类型,引用数据类型
        // 集合长度可变,能存引用数据类型
        ArrayList<String> arr = new ArrayList<>();
        arr.add("abc");// 增
        arr.add("sdfsdf");
        arr.add("sdfefvwe");
        arr.add("abc");
        arr.remove("a");// 删
        arr.remove(0);// 删
        arr.set(1, "ddd");// 改
        arr.get(2);// 查
        arr.size();

        // 封装 当类与类之间存在相同的内容时，并满足子类是父类的一种
        // public class 子类 extends 父类{}
        // final修饰的方法是最终方法,不能被重写 public final void show(){}
        // final修饰的类不能被继承 final class fu{}
        // final修饰的变量只能被赋值一次 final String s = "23";
        // 但是修饰的引用数据类型是地址不会改变,内部的值可以改变
        final int[] at = { 1, 2, 3, 4 };
        at[0] = 10;
        for (int i = 0; i < at.length; i++) {
            System.out.println(at[i]);
        }
        // 静态代码块 static{} 随着类的加载而加载,自动触发,只执行一次
        // 在类加载的时候,做数据的初始化
        // 抽象类 比如父有work()方法,对应的子类有student和teacher 两个子类的work不同
        // 这时候使用 抽象类会强制子类重写work方法
        // public abstract void work()

        // Math abs,ceil,floor,round(四舍五入),max,min,random,sqrt等等 和c++差不多
        System.out.println(Math.abs(-2147483648));
        System.out.println(Math.pow(16, 0.5));

        // System 工具类 提供了一些与系统相关的方法
        // 时间原点 1970年1月1日8.00
        // System.exit(0);// 0 正常停止 !0 异常停止
        long l = System.currentTimeMillis();
        System.out.println(l);
        // arraycopy(数据源数组,拷贝起始索引,目的地数组,目的数组起始索引,拷贝个数)
        int[] arr1 = { 1, 2, 3, 4, 5, 6, 6, 7, 3 };
        int[] arr2 = new int[10];
        System.arraycopy(arr1, 0, arr2, 0, 6);

        // API Runtime(当前虚拟机运行环境)
        Runtime r1 = Runtime.getRuntime();
        Runtime r2 = Runtime.getRuntime();
        System.out.println(r1 == r2);// 不管那个类中获取的都是同一个对象
        // exit停止虚拟机
        // Runtime r3 = Runtime.getRuntime();
        // r3.exit(0);
        // 3获得cpu的线程数
        System.out.println(Runtime.getRuntime().availableProcessors());
        // 4.总内存大小 /byte
        System.out.println(Runtime.getRuntime().maxMemory() / 1024 / 1024);
        // 5.获取虚拟机已经从系统中获得的内存大小
        System.out.println(Runtime.getRuntime().totalMemory() / 1024 / 1024);
        // 6.剩余内存的大小
        System.out.println(Runtime.getRuntime().freeMemory() / 1024 / 1024);
        // 7.cmd的命令
        // Runtime.getRuntime().exec("notepad");// 利用cmd打开记事本
        // shutdown 关机 加上参数才能执行 -s 默认一分钟后关机
        // -s -t 指定时间关机 -a 取消关机操作 -r 关机并重启
        // Runtime.getRuntime().exec("shutdown -a");

        Object obj = new Object();
        String str1 = obj.toString();
        System.out.println(str1);
        // clone 拷贝
        // BigInteger(int num,Random rnd) 获取随机大整数[0,2^(num-1)];
        // BigInteger(string val,(int radix)) 获取指定大的数(可指定进制)
        // 对象一旦创建 内部的值不可改变
        Random r = new Random();
        BigInteger x = new BigInteger(10, r);
        BigInteger val1 = BigInteger.valueOf(2l);
        BigInteger val2 = BigInteger.valueOf(8l);
        System.out.println(x);
        // 静态方法获取BigInteger对象
        // 这种方法max_value=long 但是对常用的数 -16~16提前创建好了(地址一样);
        BigInteger va1 = BigInteger.valueOf(16l);
        BigInteger va2 = BigInteger.valueOf(16l);
        System.out.println(va1 == va2);
        // BigInterger 方法
        // add,subtract,multiply,divide,divideAndReminder(返回数组,存商和余数);
        // equls,pow,max/min,intValue(转换成int)
        BigInteger val1add = val1.add(val2);
        System.out.println(val1add);
        BigInteger[] arrs = val2.divideAndRemainder(val1);
        System.out.println(arrs.length + " " + arrs[0] + " " + arrs[1]);
        // BigDecimal 内部的值也无法改变 [0,10]的整数提前被创建好了
        // BigDecimal bd1 = new BigDecimal(0.01); 不精确 不建议使用
        // 方法包括 valueOf,add,subtract,multiply,divide;
        BigDecimal bd1 = new BigDecimal("0.02");
        BigDecimal bd2 = new BigDecimal("0.04");
        BigDecimal bd3 = bd1.divide(bd2);
        BigDecimal.valueOf(0.234);
        System.out.println(bd1 + " " + bd2 + " " + bd3);

        // 正则表达式 matches()
        // 单字符
        // [abc] 只能是abc [^abc]不能是abc
        // [a-zA-Z] a到z A到Z [a-b[m-p]] a到b或m到p
        // [a-z&&[def]] a到z与def的交集
        // . 任何字符
        // \d 表示[0-9] \D [^0-9] \s 一个空白字符 \S 非空白字符
        // \w [a-zA-z_0-9] \W 一个非单词字符 [^\w]
        // 数量词
        // ? 一次或零次 * 零次或多次 + 一次或多次
        // {n} 正好n次 {n,} 至少n次 {n,m}至少n次但不超过m次

        // (?i)abc 忽略abc的大小写
        // String s="java(?=11|7|17)" ?理解为前面的数据java =表示后面要拼接的数据
        // 但是只获取前面前半部分
        // ?: 是获取整体 ?! 忽略
        String phone = "17518711684";
        String outphone = "020-2342523";
        phone.matches("[1][3-9][0-9]{9}");
        outphone.matches("[0][0-9]{3,4}-?[0-9]{3,6}");

        // Matcher 文本匹配器按照正则表达式的规则去从头读取字符串
        // Pattern 表示正则表达式
        String strs = "tom.riddle+regexone@hogwegexone@hogwart@s.@com";
        Pattern p = Pattern.compile("\\w@\\w"); // p 规则
        Matcher m = p.matcher(strs);
        // 如果没找到 false else 记录起始索引和结束索引+1
        boolean ok3 = m.find();
        // 根据find方法记录索引并截取 subString[起始索引,结束索引);包头不包尾
        String ss1 = m.group(0);
        System.out.println(ss1);

        while (m.find()) {
            System.out.println(m.group(0));
        }
        // 贪婪爬取 and 非贪婪爬取
        // 爬取数据的时候尽可能地多获取数据,反之亦反
        // java中默认是贪婪爬取 如果在 * + 后面加上？ 就是非贪婪爬取
        String sss = "abbbbbbbbbbbaaaaaa";
        Pattern p1 = Pattern.compile("ab+?");
        Matcher m1 = p1.matcher(sss);
        while (m1.find()) {
            System.out.println(m1.group(0));
        }
        // 新方法 replaceAll 按照正则表达式的规则进行替换
        // split 按照正则表达式的规则切割字符串
        String as = "人sdfwever34fd3f人fdsf34vge4rgfber人";
        System.out.println(as.replaceAll("\\w+", "vs"));
        for (int i = 0; i < as.split("\\w+").length; i++) {
            System.out.println(i);
            System.out.println(as.split("\\w+")[i]);
        }
        // 捕获分组与非捕获分组
        // 从左到右第几个左括号就是第几组(()\\2()\\3)\\1
        // a234a bdfb #ba# dfaf 例如判断首字符与末字符是否相同
        String buhuo = "((.)\\2*).+\\1";// \\1 将第一组数据拿出来再用一次
        // 在正则表达式中，反向引用 \1 的位置和匹配结果完全取决于正则表达式的整体结构，而非固定的“下一个”或“最后一个”
        System.out.println("1112342123111".matches(buhuo));
        // buhuo可以抓取首位相同且“首”全部相同

        String str2 = "我要学学学学编编编编程程程程程";// 替换为我要学编程
        // 正则内部使用 \\组号
        // 正则外部使用 $组号 (.)\\1+
        String ans = str2.replaceAll("(.)\\1+", "$1");
        System.out.println(str2 + " " + ans);

        // 非捕获分组
        // 分组后不需要再用本组数据,仅仅是把数据括起来
        // ?: 获取所有 ?= 获取前面部分 ?! 获取不是指定内容的前面部分
        // 特点 不占用组号

        // jdk7-date
        // date类是用来描述时间的javabean类
        // 1.创建对象表示一个时间
        Date d = new Date();
        System.out.println(d);
        // 2.创建对象表示一个指定时间
        Date d1 = new Date(0L);// 从时间原点开始过了0毫秒的时间
        // 中国在东八区 +8小时
        System.out.println(d1);
        // 3.setTime 修改时间
        d1.setTime(1000L);
        System.out.println(d1);
        // 4.获取当前时间的毫秒值
        long time = d1.getTime();
        // 应用 可以比较两个date时间的前后
        // 为什么不可以用date? date是对象,不可以比较
        System.out.println(time);
        Random rrr = new Random();
        Date rrr1 = new Date(Math.abs(rrr.nextInt(Integer.MAX_VALUE)));
        Date rrr2 = new Date(Math.abs(rrr.nextInt(Integer.MAX_VALUE)));
        long kkk1 = rrr1.getTime();
        long kkk2 = rrr2.getTime();
        if (kkk1 > kkk2)
            System.out.println(rrr1 + "时间在" + rrr2 + "前面");
        else
            System.out.println(rrr1 + "时间在" + rrr2 + "后面");

        // SimpleDateFormate
        // 格式化： 把时间变成我们喜欢的格式 解析：把字符串表示的时间变成Date对象
        // 格式 yyyy-MM-dd HH:mm:ss
        // 空参构造
        SimpleDateFormat sim1 = new SimpleDateFormat();
        Date ddd1 = new Date(0L);
        String formate1 = sim1.format(ddd1);
        System.out.println(formate1);

        // 利用带参构造指定格式
        String geshi = "yyyy-MM-dd HH:mm:ss";
        SimpleDateFormat sim2 = new SimpleDateFormat(geshi);
        Date ddd2 = new Date(0L);
        System.out.println(sim2.format(ddd2));

        // 解析格式
        String jiexi = "2025-12-23 2-2-34";
        SimpleDateFormat sim3 = new SimpleDateFormat("yyyy-MM-dd HH-mm-ss");
        Date ddd3 = sim3.parse(jiexi);
        System.out.println(ddd3);

        // 例子 将2000-11-11转换成2000年11月11日
        // 2000-11-11=>date=>200年11月11日
        String ri = "2000-11-11";
        SimpleDateFormat sim4 = new SimpleDateFormat("yyyy-MM-dd");
        Date ddd4 = sim4.parse(ri);
        SimpleDateFormat sim5 = new SimpleDateFormat("yyyy年MM月dd日");
        System.out.println(sim5.format(ddd4));

        // Calendar对象 是一个抽象类,不能直接new 而是通过一个静态方法获取到子类对象
        Calendar c = Calendar.getInstance();
        // 细节 月份的范围 [0-11] 星期 1(周末) 2(周一) 3 4 5 6 7
        // 修改日历对象
        Date cal = new Date(0L);
        c.setTime(cal);
        System.out.println(c);
        // get 获取日期信息
        for (int i = 0; i <= 16; i++) {
            System.out.println(c.get(i));
        }
        // get的返回值 0 纪元 1 年 2 月 3 一年的第几周 4 一月的第几周
        // 5 一个月中的第几天(日期); 具体可以看源码

        // set 修改日历的信息
        c.set(Calendar.YEAR, 2000);
        c.set(Calendar.MONTH, 11);
        System.out.println(c.get(1));

        // add增加或减少
        c.add(Calendar.MONTH, -1);
        c.add(Calendar.YEAR, 1);
        System.out.println(c.get(2));

        sc.close();

        // jdk8新增时间类,更方便,更安全
        // zoneID
        // 1.获取所有时区
        Set<String> zoneIds = ZoneId.getAvailableZoneIds();
        // 不支持for索引
        // System.out.println(zoneIds);

        // 2.ZoneId.systemDefault(); 获取系统默认时间
        ZoneId zoneIds2 = ZoneId.systemDefault();
        System.out.println(zoneIds2);

        // 3.获取指定时区
        ZoneId.of("Asia/Shanghai");

        // Instant时间戳
        // 1.获取当前时间戳的instant对象 标准时间
        Instant now = Instant.now();
        System.out.println(now);

        // 2.根据指定时间获取instant对象
        Instant instant1 = Instant.ofEpochMilli(1000L);
        System.out.println(instant1);
        Instant instant2 = Instant.ofEpochSecond(1L);
        System.out.println(instant2);
        Instant instant3 = Instant.ofEpochSecond(1, 1000000000);
        System.out.println(instant3);// 一秒加1e9纳秒

        // 3.atZone 指定时区
        ZonedDateTime time3 = Instant.now().atZone(ZoneId.of("Asia/Shanghai"));
        System.out.println(time3);

        // 4.isXxx 判断系列方法
        Instant instant6 = Instant.ofEpochSecond(23l);
        Instant instant7 = Instant.ofEpochSecond(64l);
        boolean res = instant6.isBefore(instant7);
        System.out.println(res);

        // 5.minXxxx 减少时间系列方法
        Instant instant8 = Instant.ofEpochSecond(23323234l);
        System.out.println(instant8);
        Instant instant9 = instant8.minusSeconds(432l);
        System.out.println(instant9);

        // 6.plusXxxx 增加时间系列方法
        // ……………………

        // ZoneDateTime 好多方法和之前差不多
        // 懒得看了 到时候自己查文档吧

        // 包装类 基本数据类型对应的引用数据类型( jdk5以后)
        Integer xi = 10;
        Integer xj = 10;
        Integer xs = xi + xj;
        System.out.println(xs);
        // Integer成员方法
        String Ins1 = Integer.toBinaryString(100);// 2进制
        System.out.println(Ins1);
        String Ins2 = Integer.toOctalString(100);// 8进制
        System.out.println(Ins2);
        String Ins3 = Integer.toHexString(100);// 16进制
        System.out.println(Ins3);
        int Ins4 = Integer.parseInt(Ins3);// String转int
        System.out.println(Ins4);

        // lambda表达式只能简化函数式接口的匿名内部类的写法
        // 函数式接口:有且只有一个抽象方法的接口叫做函数式接口
        // 接口上方可以加@FunctionalInterface注解
    }

}
