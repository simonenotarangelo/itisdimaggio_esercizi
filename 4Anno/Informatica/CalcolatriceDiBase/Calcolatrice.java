import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Calcolatrice implements ActionListener
{ 
    JFrame frame;
    JPanel panel;
    JTextField casella, casella1, casella2;
    Container c;
    JButton calcolaButton;
    JRadioButton bottone1,bottone2,bottone3,bottone4;
    public Calcolatrice()
    {
        frame = new JFrame("Calcolatrice");
        frame.setSize(250,280);
        frame.setResizable(false);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        panel = new JPanel();
        c = frame.getContentPane();

        casella = new JTextField(20);
        panel.add(new JLabel("Operatore1"));
        panel.add(casella);

        casella1 = new JTextField(20);
        panel.add(new JLabel("Operatore2:"));
        panel.add(casella1);

        ButtonGroup bottoni = new ButtonGroup();
        bottone1 = new JRadioButton("Addizione");
        bottone1.addActionListener(this);
        bottone2 = new JRadioButton("Sottrazione");
        bottone2.addActionListener(this);
        bottone3 = new JRadioButton("Moltiplicazione");
        bottone3.addActionListener(this);
        bottone4 = new JRadioButton("Divisione");
        bottone4.addActionListener(this);

        bottoni.add(bottone1);
        bottoni.add(bottone2);
        bottoni.add(bottone3);
        bottoni.add(bottone4);

        panel.add(bottone1);
        panel.add(bottone2);
        panel.add(bottone3);
        panel.add(bottone4);

        casella2 = new JTextField(20);
        panel.add(new JLabel("Risultato:"));
        panel.add(casella2);

        c.add(panel);
        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
            double operatore1=Double.parseDouble(casella.getText());
            double operatore2=Double.parseDouble(casella1.getText());
            double risultato;
            if (bottone1.isSelected()) 
            {
                risultato=operatore1+operatore2;
                casella2.setText(Double.toString(risultato));
            }
            
            if(bottone2.isSelected())
            {
                risultato=operatore1-operatore2;
                casella2.setText(Double.toString(risultato));
            }
            
            if(bottone3.isSelected())
            {
                risultato=operatore1*operatore2;
                casella2.setText(Double.toString(risultato));
            }
            
            if(bottone4.isSelected())
            {
                risultato=operatore1/operatore2;
                casella2.setText(Double.toString(risultato));
            }
    }
}