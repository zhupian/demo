
import java.util.Arrays;

public class test {
    public static void main(String[] args) {
        Integer[] arr = { 23, 4, 5, 2, 3, 5 };
        Arrays.sort(arr, (Integer o1, Integer o2) -> {
            return o1 - o2;
        });
        System.out.println(Arrays.toString(arr));
    }
}
