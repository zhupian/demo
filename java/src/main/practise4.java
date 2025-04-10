import java.util.Scanner;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class practise4 {
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        System.out.print("请输入您的出生日期（格式：yyyy年MM月dd日，例如2025年04月10日）：");
        String birthday = sc.nextLine();

        // 日期解析
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy年MM月dd日");
        Date birthDate = sdf.parse(birthday);

        // 获取当前时间
        Date currentDate = new Date();

        // 计算毫秒差并转换天数
        long timeDifference = currentDate.getTime() - birthDate.getTime();
        long daysLived = timeDifference / (1000 * 60 * 60 * 24);

        System.out.println("您已经存活了 " + daysLived + " 天");
        sc.close();
    }
}