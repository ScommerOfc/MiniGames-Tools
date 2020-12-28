import java.awt.*;

public class Reaktionstest extends Frame {
	/**
	 Author: Paul
	 Created: 09.12.2020
	 Version: 1.1.3
	 */
	private static final long serialVersionUID = 1L;
	public static boolean test=false;
	public static void main(String[] args) throws InterruptedException	  {
		Reaktionstest frameGui = new Reaktionstest();
		Button buttonPress= new Button("Drücken");
		ReaktionListener h = new ReaktionListener();
		FensterListener fl=new FensterListener();
		Label labelTime=new Label();
		double d;
		int i;
		long timeStart=0;
		long timeStop=0;
		frameGui.setTitle("Reaktionstest - Paul");
		frameGui.setSize(1000, 800);
		frameGui.add(buttonPress);
		frameGui.add(labelTime);
		frameGui.addWindowListener(fl);
		frameGui.setLayout(null);
		buttonPress.setBounds(200, 100, 500, 300);
		labelTime.setBounds(350, 40, 225, 30);
		frameGui.setBackground(Color.white);
		buttonPress.addActionListener(h);
		frameGui.setVisible(true);
		while(true) {
			labelTime.setText("Du hast "+(timeStop-timeStart)+" Millisekunden gebraucht");
			d=Math.random()*5000+2000;
			i=(int)d;
			Thread.sleep(1000);
			frameGui.setBackground(Color.red);
			labelTime.setBackground(Color.red);
			Thread.sleep(i);
			frameGui.setBackground(Color.green);
			labelTime.setBackground(Color.green);
			timeStart=System.currentTimeMillis();
			test=false;
			while(true) {
				Thread.sleep(100);
				if(test==true)
					break;
			}
			timeStop=System.currentTimeMillis();
			System.out.println("Du hast "+(timeStop-timeStart)+" Millisekunden gebraucht");
			test=false;
 
			}
	}
}
