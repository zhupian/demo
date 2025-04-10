import java.util.ArrayList;
import java.util.Scanner;

public class practise1 {
    public static void main(String[] args) {
        // 键盘录入一些1~100的整数,并添加到集合中,直到集合中的和大于200
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<>();
        int x = 0;
        while (x <= 200) {
            String s = sc.nextLine();
            int num = Integer.parseInt(s);
            if (num >= 1 && num <= 100) {
                x += num;
                list.add(num);
            } else
                System.out.println("输入应该在1~100范围内");
        }
        System.out.println("总和是" + x);
        for (int i = 0; i < list.size(); i++)
            System.out.println(list.get(i));
        sc.close();
    }
}
