package ZhuPianUl;

import java.awt.Font;

import javax.swing.BorderFactory;
import javax.swing.BoxLayout;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextArea;

public class introduction extends JFrame {
    public introduction() {
        // 窗口设置
        setSize(408, 430);
        setTitle("简介");
        setAlwaysOnTop(true);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE); // 改为3的等效常量

        // 内容面板设置
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

        // 文本组件
        JTextArea text = new JTextArea();
        text.setText("这是一个简易版的华容道.\n\n\n1.可以通过键盘的上下左右移动图片。绑定的快捷键：\n2. 英文状态下长按A预览结果\n3. 按W直接获胜\n\n\n左上角有步数显示");
        text.setWrapStyleWord(true);
        text.setLineWrap(true);
        text.setEditable(false);
        text.setFont(new Font("宋体", Font.PLAIN, 14));

        panel.add(text);
        add(panel);
        setVisible(true);
    }
}
