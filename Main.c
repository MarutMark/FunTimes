import java.awt.*;
import java.awt.event.*;
import java.swing.*;
public class Frame1 extends JFrame
{
  JPanel pane = new JPanel();
  Frame1() 
  {
    super("My Simple Frame"); setBounds(100,100,300,100);
    setDefaultCloseOperation(JFrame.Exit_ON_ClOSE);
    Container con = this.getContentPane();
    con.add(pane);
    pane.add(FirstPane);
    setVisible(true);
  }
  public static void main (String args[]){new Frame1()};}
  }
