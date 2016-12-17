public class Busqueda {
	private boolean solucion = false;
	private Presentacion pr;
	public Busqueda(boolean solucion, Presentacion pr){
		this.solucion = solucion;
		this.pr = pr;
	}
		
	public boolean isSolucion() {
		return solucion;
	}

	public void setSolucion(boolean solucion) {
		this.solucion = solucion;
	}

	public void busqueda_profundidad(Puzzle p, int profundidad, int limite){
	  if(!isSolucion()){
	    System.out.printf("profundidad = %d\n", profundidad);
	    pr.setMatriz(p.getTablero());
	    pr.actualizar_matriz();
	    p.imprime_matriz();
	    if(p.esSolucion()){
	    	System.out.printf("Solucion Encontrada :)\n");
	    	setSolucion(true);
	    }else if(profundidad == limite){
	    	return;
	    }
	    if(p.puedeIralaDerecha()){
	    	p.iralaDerecha();
	    	busqueda_profundidad(p, profundidad + 1, limite);
	    }
	    if(p.puedeIraAbajo()){
	    	p.iraAbajo();
	    	busqueda_profundidad(p, profundidad + 1, limite);
	    }
	    if(p.puedeIralaIzquierda()){
	    	p.iralaIzquierda();
	    	busqueda_profundidad(p, profundidad + 1, limite);
	    }
	    if(p.puedeIraArriba()){
	    	p.iraArriba();
	    	busqueda_profundidad(p, profundidad + 1, limite);
	    }
	  }
	}

}
