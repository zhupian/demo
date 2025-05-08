package 可变参数;

public class arges2 {
    public static void main(String[] args) {
        // 可变参数
        // 底层是个数组
        System.out.println(GetSum(2, 3, 4, 5, 2, 35, 32));
    }

    public static int GetSum(int... arr) {
        int sum = 0;
        for (int x : arr) {
            sum += x;
        }
        return sum;
        // 注意 在方法的形参中只能有一个可变参数
        // public static int GetSum(int... arr,int...brr) ✕
        // 如果有其他形参,可变参数写在最后
        // public static int GetSum(int x,int... arr) ✓
    }
}
