package ZhuPianUl;

import javax.swing.*;
import java.awt.*;

public class RegisterJFrame extends JFrame {
    public RegisterJFrame() {
        initUI();
        this.setVisible(true);// 让界面显示出来
    }

    private void initUI() {
        setSize(400, 300);
        setTitle("用户注册");
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        setLocationRelativeTo(null);
        setResizable(false);

        JPanel mainPanel = new JPanel(new BorderLayout(10, 10));
        JPanel inputPanel = new JPanel(new GridLayout(3, 2, 5, 5));
        JPanel buttonPanel = new JPanel(new FlowLayout());

        JTextField userField = new JTextField(15);
        JPasswordField passField = new JPasswordField(15);
        JPasswordField confirmField = new JPasswordField(15);

        inputPanel.add(new JLabel("用户名:"));
        inputPanel.add(userField);
        inputPanel.add(new JLabel("密码:"));
        inputPanel.add(passField);
        inputPanel.add(new JLabel("确认密码:"));
        inputPanel.add(confirmField);

        JButton registerBtn = new JButton("立即注册");
        JButton cancelBtn = new JButton("返回登录");

        buttonPanel.add(registerBtn);
        buttonPanel.add(cancelBtn);

        mainPanel.add(inputPanel, BorderLayout.CENTER);
        mainPanel.add(buttonPanel, BorderLayout.SOUTH);
        mainPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

        // 注册逻辑
        registerBtn.addActionListener(e -> {
            String username = userField.getText().trim();
            String password = new String(passField.getPassword());
            String confirm = new String(confirmField.getPassword());

            if (username.isEmpty() || password.isEmpty()) {
                JOptionPane.showMessageDialog(this, "请输入完整信息");
                return;
            }

            if (!password.equals(confirm)) {
                JOptionPane.showMessageDialog(this, "两次密码不一致");
                return;
            }

            if (LoginJFrame.userExists(username)) {
                JOptionPane.showMessageDialog(this, "用户名已存在");
                return;
            }

            LoginJFrame.addUser(username, password);
            JOptionPane.showMessageDialog(this, "注册成功！");
            new LoginJFrame().setVisible(true);
            this.dispose();
        });

        // 返回登录
        cancelBtn.addActionListener(e -> {
            new LoginJFrame().setVisible(true);
            this.dispose();
        });

        add(mainPanel);
    }
}
