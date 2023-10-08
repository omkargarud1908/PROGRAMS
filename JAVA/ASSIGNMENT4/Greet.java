import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Greet extends JFrame implements ActionListener 
{
    private JLabel l1, l2;
    private JButton b1;
    private JTextField t1;

    public Greet(String s) 
    {
        super(s);
        l1 = new JLabel("Username:");
        l2 = new JLabel();
        t1 = new JTextField(20);
        b1 = new JButton("Click Here!!!");

        setLayout(new FlowLayout());
        add(l1);
        add(t1);
        add(b1);
        add(l2);

        b1.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) 
    {
        if (e.getSource() == b1) {
            String uname = t1.getText();
            l2.setText("\nGoodDay " + uname); 
        }
    }

    public static void main(String[] args) 
    {
        Greet frame = new Greet("Greet Application");
        frame.setSize(300, 150);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
