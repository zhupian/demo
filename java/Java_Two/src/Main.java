import java.util.*;

public class Main {
    public static void fn(Scanner sc) {
        int n = sc.nextInt();
        int mex = -1;
        for (int i = 1; i <= 2 * n; i++) {
            int x = sc.nextInt();
            if (mex == -1) mex = x;
            else if (mex == x) mex = -1;
        }
        System.out.println(mex == -1 ? "Yes" : "No");  // 简化输出
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            fn(sc);  // 传递共享的 Scanner 对象
        }
        sc.close();  // 结束后关闭
    }
}