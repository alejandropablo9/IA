import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.Color;

public class Presentacion extends JFrame{
	private JButton botones [][] = new JButton [3][3];
	private int matriz[][] = new int [3][3];
	
	public Presentacion(int[][] matriz){
		this.matriz = matriz;
		init();
	}
	
	public int[][] getMatriz() {
		return matriz;
	}

	public void setMatriz(int[][] matriz) {
		this.matriz = matriz;		
	}

	public void init(){
		setSize(300,350);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);
		for(int i = 0 ; i < botones.length; i++) {
			for(int j = 0 ; j < botones[i].length; j++) {
				botones[i][j] = new JButton(matriz[i][j] + "");
				botones[i][j].setBounds(j * 100,i * 100, 70,70);
				botones[i][j].setBackground(Color.WHITE);
				if(matriz[i][j] == 0) {
					botones[i][j].setBackground(Color.BLUE);
				}
				add(botones[i][j]);
			}		 
		}
	}
	
	public void actualizar_matriz(){
		for(int i = 0; i < botones.length; i++){
			for(int k = 0; k < botones[i].length; k++){
				botones[i][k].setText(matriz[i][k] + "");
				if(matriz[i][k] == 0)
					botones[i][k].setBackground(Color.BLUE);
				else
					botones[i][k].setBackground(Color.WHITE);
			}
		}
	}
}
