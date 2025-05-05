import java.util.Scanner;

public class practise2 {
    public static void main(String[] args) {
        // 实现parseint效果,将字符串转成整数
        // 字符串只有数字 length>=1&&length<=10 0不开头

        // 先校验

        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (s.matches("[1-9]\\d{0,9}")) {
            long ans = 0, x = 10;
            for (int i = 0; i < s.length(); i++) {
                ans = (ans * x) + (s.charAt(i) - '0');
            }
            System.out.println(ans);
        } else {
            System.out.println("数据有问题");
        }
        sc.close();
    }
}
