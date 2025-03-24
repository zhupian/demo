package text;

import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JButton;
import javax.swing.JFrame;

public class myJframe implements KeyListener {
    public myJframe() {
        JFrame JFrame = new JFrame();
        JFrame.setSize(603, 603);
        JFrame.setTitle("事件演示");
        JFrame.setAlwaysOnTop(true);
        JFrame.setLocationRelativeTo(null);
        JFrame.setDefaultCloseOperation(3);
        JFrame.setLayout(null);
        JButton jtb = new JButton("点我");
        jtb.setBounds(0, 0, 100, 100);
        // addActionListener 表示要给组件添加哪个事件监听(鼠标左键点击,空格);
        // jtb.addActionListener(new MyActionListener());
        // jtb.addActionListener(new ActionListener() {
        // @Override
        // public void actionPerformed(ActionEvent e) {
        // System.out.println("别点我！！");
        // // 匿名内部类
        // }
        // });
        jtb.addKeyListener(this);
        JFrame.getContentPane().add(jtb);
        JFrame.setVisible(true);
    }

    @Override
    public void keyTyped(KeyEvent e) {
        // System.out.println("————————");
    }

    @Override
    public void keyPressed(KeyEvent e) {
        System.out.println("按下不松");
    }
    // 按下一个按键不松开,会重复调用;

    @Override
    public void keyReleased(KeyEvent e) {
        // System.out.println("松开按键");
        // 获取按键编号
        int code = e.getKeyCode();
        if (code == 65)
            System.out.println("按的是A");
        else if (code == 66)
            System.out.println("按的是B");
        System.out.println(code);

    }
}
