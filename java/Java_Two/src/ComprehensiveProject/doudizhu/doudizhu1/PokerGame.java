package ComprehensiveProject.doudizhu.doudizhu1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

public class PokerGame {
    // 准备牌,用静态代码块(随着类的加载而加载,且只执行一次)
    static ArrayList<String> list = new ArrayList<>();
    static HashMap<String, Integer> map = new HashMap<>();
    ArrayList<String> Player1 = new ArrayList<>();
    ArrayList<String> Player2 = new ArrayList<>();
    ArrayList<String> Player3 = new ArrayList<>();
    ArrayList<String> Lord = new ArrayList<>();
    static {
        String[] color = { "♡", "♢", "♤", "♧" };
        String[] number = { "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2" };
        // 初始化牌的大小,并添加牌
        for (int i = 0; i < color.length; i++) {
            for (int j = 0; j < number.length; j++) {
                String t =   color[i]+number[j];
                list.add(t);
                map.put(t, j * 10 + i);
            }
        }
        list.add("大王");
        list.add("小王");
        map.put("小王", 130);
        map.put("大王", 140);

    }

    public PokerGame() {
        // 洗牌,发牌,看牌
        Shuffle();
        DealCards();
        SortBoth();

        LookPoker("Player1", Player1);
        LookPoker("Player2", Player2);
        LookPoker("Player3", Player3);
        LookPoker("Lord", Lord);
    }

    public void Shuffle() {
        Collections.shuffle(list);
    }

    public void DealCards() {
        for (int i = 0; i < list.size(); i++) {
            String poker = list.get(i);
            if (i <= 2) {
                Lord.add(poker);
                continue;
            }
            if (i % 3 == 0)
                Player1.add(poker);
            else if (i % 3 == 1)
                Player2.add(poker);
            else
                Player3.add(poker);
        }
    }

    public void SortBoth() {
        Sort(Player1);
        Sort(Player2);
        Sort(Player3);
    }

    public void LookPoker(String name, ArrayList<String> list) {
        System.out.print(name + ": ");
        for (String poker : list) {
            System.out.print(poker+" ");
        }
        System.out.println();
    }

    public void Sort(ArrayList<String> list) {
        Collections.sort(list, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return map.get(o1) - map.get(o2);
            }
        });
    }
}
