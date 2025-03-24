package ZhuPianUl;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.Random;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.border.BevelBorder;

public class GameJFrame extends JFrame implements KeyListener, ActionListener {
    int[][] date = new int[4][4];
    int[][] win = {
            { 0, 1, 2, 3 },
            { 4, 5, 6, 7 },
            { 8, 9, 10, 11 },
            { 12, 13, 14, 15 },
    };
    int sum = 0;
    int x = 0, y = 0;
    String path = "image\\2";

    JMenuItem Newpuzzle = new JMenuItem("新拼图");
    JMenuItem NewLogin = new JMenuItem("重新登录");
    JMenuItem GameOver = new JMenuItem("关闭拼图");

    JMenuItem ohou = new JMenuItem("哦豁");

    public GameJFrame() {
        System.out.println(x + " " + y);
        // 初始化页面
        initJFrame();
        // 初始化菜单
        initJMenuBar();
        // 初始化数据(打乱)
        initDate();
        // 初始化照片
        initImage();
        this.setVisible(true);// 让界面显示出来

    }

    private void initDate() {
        int[] arr = new int[16];
        for (int i = 0; i < 16; i++)
            arr[i] = i;
        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            int index = r.nextInt(arr.length);
            int p = arr[i];
            arr[i] = arr[index];
            arr[index] = p;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (arr[i * 4 + j] == 15) {
                    x = i;
                    y = j;
                    // 记录位置
                }
                date[i][j] = arr[i * 4 + j];
            }
        }
    }

    private void initJFrame() {
        // 取消默认的居中位置,只有取消了才会按照XY轴的形式添加组件
        this.setLayout(null);
        this.setSize(806, 806);
        this.setTitle("拼图");// 设置标题
        this.setAlwaysOnTop(true);// 设置界面置顶
        this.setLocationRelativeTo(null);// 居中
        this.setDefaultCloseOperation(3);// 设置默认的关闭模式
        // 添加键盘监听事件
        this.addKeyListener(this);
    }

    private void initJMenuBar() {
        JMenuBar JMenuBar = new JMenuBar();
        // 创建菜单上面的两个选项的对象 功能 关于我们
        JMenu functionMenu = new JMenu("功能");
        JMenu AboutMenu = new JMenu("简介");
        // 创建条目对象

        // 将条目添加到选项中
        functionMenu.add(Newpuzzle);
        functionMenu.add(NewLogin);
        functionMenu.add(GameOver);

        AboutMenu.add(ohou);

        // 给条目绑定事件
        Newpuzzle.addActionListener(this);
        NewLogin.addActionListener(this);
        GameOver.addActionListener(this);
        ohou.addActionListener(this);
        JMenuBar.add(functionMenu);
        JMenuBar.add(AboutMenu);

        this.setJMenuBar(JMenuBar);// 为界面设置菜单
    }

    private void initImage() {
        this.getContentPane().removeAll();// 清除图片

        if (check()) {
            ImageIcon win1 = new ImageIcon("image\\sport\\win1.jpg");
            ImageIcon win2 = new ImageIcon("image\\sport\\win2.jpg");
            JLabel win; // 声明在外部
            // 根据路径选择图片
            if (path.equals("image\\1")) {
                win = new JLabel(win1);
            } else {
                win = new JLabel(win2);
            }
            win.setBounds(247, 371, 312, 304);
            this.getContentPane().add(win);
        }

        JLabel step = new JLabel("步数：" + sum);
        step.setBounds(10, 10, 50, 50);
        this.getContentPane().add(step);

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                int num = date[i][j];

                String s = path + "\\" + (num / 4 + 1) + '_' + (num % 4 + 1) + ".png";
                JLabel JLabel = new JLabel(new ImageIcon(s));
                JLabel.setBounds(162 * j + 79, 162 * i + 79, 162, 162);
                JLabel.setBorder(new BevelBorder(1));
                // 0 表示线凸出来 1 表示凹进去 但是我看不出来 哈哈
                this.getContentPane().add(JLabel);
            }

        }
        // 背景图片
        JLabel backimage = new JLabel(new ImageIcon("image\\sport\\background.jpg"));
        backimage.setBounds(0, 0, 806, 806);
        this.getContentPane().add(backimage);

        // 刷新一下
        this.getContentPane().repaint();
    }

    @Override
    public void keyTyped(KeyEvent e) {
    }

    @Override
    public void keyPressed(KeyEvent e) {
        int code = e.getKeyCode();
        System.out.println(code);
        if (code == 65) {
            this.getContentPane().removeAll();
            JLabel all = new JLabel(new ImageIcon(path + "\\" + "all.jpg"));
            all.setBounds(79, 79, 648, 648);
            this.getContentPane().add(all);
            JLabel backimage = new JLabel(new ImageIcon("image\\sport\\background.jpg"));
            backimage.setBounds(0, 0, 806, 806);
            this.getContentPane().add(backimage);
            this.getContentPane().repaint();
        }
    }

    @Override
    public void keyReleased(KeyEvent e) {
        // 比赛胜利之后拼图就不可以移动了
        if (check())
            return;
        // 对上下左右判断
        // 左37 上38 右39 下40
        int code = e.getKeyCode();
        if (code == 37 && y <= 2) {
            System.out.println("向左移动");
            date[x][y] = date[x][y + 1];
            date[x][y + 1] = 15;
            y++;
            sum++;
            initImage();
        } else if (code == 38 && x <= 2) {
            System.out.println("向上移动");
            date[x][y] = date[x + 1][y];
            date[x + 1][y] = 15;
            x++;
            sum++;
            initImage();
        } else if (code == 39 && y >= 1) {
            System.out.println("向右移动");
            date[x][y] = date[x][y - 1];
            date[x][y - 1] = 15;
            y--;
            sum++;
            initImage();
        } else if (code == 40 && x >= 1) {
            System.out.println("向下移动");
            date[x][y] = date[x - 1][y];
            date[x - 1][y] = 15;
            x--;
            sum++;
            initImage();
        } else if (code == 65) {
            initImage();// 松开切换华容道
        } else if (code == 87) {
            date = new int[][] {
                    { 0, 1, 2, 3 },
                    { 4, 5, 6, 7 },
                    { 8, 9, 10, 11 },
                    { 12, 13, 14, 15 },
            };
            initImage();
        }
        System.out.println(x + " " + y);

    }

    public boolean check() {
        for (int i = 0; i < date.length; i++) {
            for (int j = 0; j < 4; j++) {
                if (date[i][j] != win[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        Object obj = e.getSource();
        if (obj == Newpuzzle) {
            System.out.println("重新游戏");
            // 计步器归零
            int cn = path.charAt(path.length() - 1) - '0';
            Random r = new Random();
            int x = r.nextInt(6) + 1; // 生成1-6之间的随机数
            // 生成 [1,6] 的整数
            while (cn == x) {
                x = (int) Math.ceil(Math.random() * 6);
                System.out.println(cn + " " + x);
            }
            path = "image\\" + x;
            sum = 0;
            // 再次打乱二维数组
            initDate();
            // 重新加载图片
            initImage();

        } else if (obj == NewLogin) {
            System.out.println("重新登陆");
            // 关闭当前游戏界面
            this.setVisible(false);
            // 打开登陆界面
            new LoginJFrame();
        } else if (obj == GameOver) {
            System.out.println("关闭游戏");
            // 关闭虚拟机
            System.exit(0);
        } else if (obj == ohou) {
            System.out.println("简介");
            new introduction();
        }

    }
}
