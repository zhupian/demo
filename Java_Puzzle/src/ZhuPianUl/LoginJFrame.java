package ZhuPianUl;

import javax.swing.*;
import java.awt.*;
import java.util.HashMap;
import java.util.Map;

public class LoginJFrame extends JFrame {
    private static final Map<String, String> users = new HashMap<>();

    static {
        users.put("admin", "123"); // 初始测试账号
    }

    public LoginJFrame() {
        initUI();
        this.setVisible(true);// 让界面显示出来
    }

    private void initUI() {
        setSize(350, 250);
        setTitle("拼图登录");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setResizable(false);

        JPanel mainPanel = new JPanel(new BorderLayout(10, 10));
        JPanel inputPanel = new JPanel(new GridLayout(2, 2, 5, 5));
        JPanel buttonPanel = new JPanel(new FlowLayout());

        JTextField userField = new JTextField(15);
        JPasswordField passField = new JPasswordField(15);

        inputPanel.add(new JLabel("用户名:"));
        inputPanel.add(userField);
        inputPanel.add(new JLabel("密码:"));
        inputPanel.add(passField);

        JButton loginBtn = new JButton("登录");
        JButton registerBtn = new JButton("注册账号");

        buttonPanel.add(loginBtn);
        buttonPanel.add(registerBtn);

        mainPanel.add(inputPanel, BorderLayout.CENTER);
        mainPanel.add(buttonPanel, BorderLayout.SOUTH);
        mainPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));

        // 登录逻辑
        loginBtn.addActionListener(e -> {
            String username = userField.getText().trim();
            String password = new String(passField.getPassword());

            if (username.isEmpty() || password.isEmpty()) {
                JOptionPane.showMessageDialog(this, "账号密码不能为空");
                return;
            }

            if (users.containsKey(username) && users.get(username).equals(password)) {
                new GameJFrame().setVisible(true);
                this.dispose();
            } else {
                JOptionPane.showMessageDialog(this, "登录失败，请检查账号密码");
            }
        });

        // 跳转注册
        registerBtn.addActionListener(e -> {
            new RegisterJFrame().setVisible(true);
            this.dispose();
        });

        add(mainPanel);
    }

    public static void addUser(String username, String password) {
        users.put(username, password);
    }

    // 在 LoginJFrame 类中添加这个方法
    public static boolean userExists(String username) {
        return users.containsKey(username);
    }
}