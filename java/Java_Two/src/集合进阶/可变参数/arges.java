package 可变参数;

public class arges {
    public static void main(String[] args) {
        // 求n个数据的和
        int[] arr = { 1, 2, 3, 4, 5, 6, 7 };
        int sum = GetSum(arr);
        System.out.println(sum);
    }

    public static int GetSum(int[] ans) {
        int sum = 0;
        for (int x : ans) {
            sum += x;
        }
        return sum;
    }
    // 但是这样有点麻烦
}
