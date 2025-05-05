import java.util.Scanner;

public class practise3 {
    public static void main(String[] args) {
        // 实现toBinaryString 将10进制转换成字符串2进制
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int x = Integer.parseInt(s);
        String ans = "";
        for (int i = 30; i >= 0; i--) {
            if ((x >> i & 1) == 1)
                ans += "1";
            else
                ans += "0";
        }
        System.out.println(ans);
        sc.close();
    }
}
