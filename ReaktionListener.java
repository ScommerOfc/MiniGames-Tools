import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ReaktionListener extends Reaktionstest implements ActionListener {

	@Override
	public void actionPerformed(ActionEvent e) {
		String erg = e.getActionCommand();
		test = true;
		
	}

}
