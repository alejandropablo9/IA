public class Puzzle {
	
	private int tablero[][] = {{1, 2, 3}, 
					   {4, 0, 8}, 
					   {6 , 5, 7}};
	private int x;
	private int y;
	
	public Puzzle(){
		
	}
			
	public int[][] getTablero() {
		return tablero;
	}

	public void setTablero(int[][] tablero) {
		this.tablero = tablero;
	}

	public void posicionVacio(){		
		for(int i = 0; i < tablero.length; i++){
			for (int j = 0; j < tablero[i].length; j++) {
				if(tablero[i][j] == 0){
					x=j;
					y=i;
				}
		    }
		 }
	}
	
	public boolean puedeIralaDerecha(){
		if((x+1) < 3)
			return true;
		return false;
	}

	public boolean puedeIraAbajo(){
		if((y+1) < 3)
			return true;
		return false;
	}

	public boolean puedeIralaIzquierda(){
		if((x-1) >= 0)
			return true;
		return false;
	}

	public boolean puedeIraArriba(){
		if((y-1) >= 0)
		   return true;
		return false;
	}

	public void iralaDerecha(){
		int aux = tablero[y][x+1];
		tablero[y][x+1] = tablero[y][x];
		tablero[y][x] = aux;;
		x = x+1;
	}

	public void iraAbajo(){
		int aux = tablero[y+1][x];
		tablero[y+1][x] = tablero[y][x];
		tablero[y][x] = aux;
		y = y+1;
	}

	public void iralaIzquierda(){
		int aux = tablero[y][x-1];
		tablero[y][x-1] = tablero[y][x];
		tablero[y][x] = aux;
		x = x-1;
	}

	public void iraArriba(){
		int aux = tablero[y-1][x];
		tablero[y-1][x] = tablero[y][x];
		tablero[y][x] = aux;
		y = y-1;
	}

	public int getXVacio(){
		return x;
	}

	public int getYVacio(){
		return y;
	}

	public boolean esSolucion(){		
		int valor = 1;
		for(int i = 0; i < tablero.length; i++){
		   for(int j = 0; j < tablero[i].length; j++){
			   if(tablero[i][j] != valor){
				   break;
		      }else{
		    	  valor++;
		      }
		   }
		 }
		  if(valor == 9){
			  return true;
		  }		 
		  return false;
		}

	public void imprime_matriz(){
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				System.out.printf("%d\t", tablero[i][j]);
			}
			System.out.printf("\n");
		}
		System.out.printf("\n");
	}
}
