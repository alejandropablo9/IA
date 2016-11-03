#include<TorresHanoi.h>

void TorresHanoi::inicializa(int dis){
  discos = dis;
  for(int i = discos; i >= 1; i--){
    torre_inicial.push(i);
  }
}

bool TorresHanoi::estaVaciaTorre_inicial(){
  return torre_inicial.empty();
}

bool TorresHanoi::estaVaciaTorre_auxiliar(){
  return torre_auxiliar.empty();
}

bool TorresHanoi::estaVaciaTorre_objetivo(){
  return torre_objetivo.empty();
}

int TorresHanoi::alturadeTorre_inicial() {
  return torre_inicial.size();
}

int TorresHanoi::alturadeTorre_auxiliar() {
  return torre_auxiliar.size();
}

int TorresHanoi::alturadeTorre_objetivo() {
  return torre_objetivo.size();
}

int TorresHanoi::sacardeTorre_inicial(){
  int top = torre_inicial.top();
  torre_inicial.pop();
  return top;
}

int TorresHanoi::sacardeTorre_auxiliar(){
  int top = torre_auxiliar.top();
  torre_auxiliar.pop();
  return top;
}

int TorresHanoi::sacardeTorre_objetivo(){
  int top = torre_objetivo.top();
  torre_objetivo.pop();
  return top;
}

void TorresHanoi::ponerEnTorre_inicial(int value){
  torre_inicial.push(value);
}

void TorresHanoi::ponerEnTorre_auxiliar(int value){
  torre_auxiliar.push(value);
}

void TorresHanoi::ponerEnTorre_objetivo(int value){
  torre_objetivo.push(value);
}

int TorresHanoi::verCimaTorre_inicial(){
  return torre_inicial.top();
}

int TorresHanoi::verCimaTorre_auxiliar(){
  return torre_auxiliar.top();
}

int TorresHanoi::verCimaTorre_objetivo(){
  return torre_objetivo.top();
}

bool TorresHanoi::verificasiMovimientodeTorreInicialaAuxiliar(){
  if(!estaVaciaTorre_inicial())
    if(estaVaciaTorre_auxiliar())
      return true;
  if(!estaVaciaTorre_inicial())
    if(verCimaTorre_inicial() < verCimaTorre_auxiliar())
      return true;
  return false;
}

bool TorresHanoi::verificasiMovimientodeTorreInicialaObjetivo(){
  if(!estaVaciaTorre_inicial())
    if(estaVaciaTorre_objetivo())
      return true;
  if(!estaVaciaTorre_inicial())
    if(verCimaTorre_inicial() < verCimaTorre_objetivo())
      return true;
  return false;
}

bool TorresHanoi::verificasiMovimientodeTorreAuxiliaraInicial(){
  if(!estaVaciaTorre_auxiliar())
    if(estaVaciaTorre_inicial())
      return true;
  if(!estaVaciaTorre_auxiliar())
    if(verCimaTorre_auxiliar() < verCimaTorre_inicial())
      return true;
  return false;
}

bool TorresHanoi::verificasiMovimientodeTorreAuxiliaraObjetivo(){
  if(!estaVaciaTorre_auxiliar())
    if(estaVaciaTorre_objetivo())
      return true;
  if(!estaVaciaTorre_auxiliar())
    if(verCimaTorre_auxiliar() < verCimaTorre_objetivo())
      return true;
  return false;
}

bool TorresHanoi::verificasiMovimientodeTorreObjetivoaInicial(){
  if(!estaVaciaTorre_objetivo())
    if(estaVaciaTorre_inicial())
      return true;
  if(!estaVaciaTorre_objetivo())
    if(verCimaTorre_objetivo() < verCimaTorre_inicial())
      return true;
  return false;
}

bool TorresHanoi::verificasiMovimientodeTorreObjetivoaAuxiliar(){
  if(!estaVaciaTorre_objetivo())
    if(estaVaciaTorre_auxiliar())
      return true;
  if(!estaVaciaTorre_objetivo())
    if(verCimaTorre_objetivo() < verCimaTorre_auxiliar())
      return true;
  return false;
}

bool TorresHanoi::esSolucion(){
  //cout << discos <<"\n";
  //cout << alturadeTorre_objetivo();
  if(alturadeTorre_objetivo() == discos)
    return true;
  return false;
}

void TorresHanoi::verTorres(){
  stack<int> torre_i;
  stack<int> torre_a;
  stack<int> torre_o;

  int topI = alturadeTorre_inicial();
  int topA = alturadeTorre_auxiliar();
  int topO = alturadeTorre_objetivo();
  int m;

  if(topI>topA)
    m = topI;
  else
    m = topA;
  if(m < topO)
    m = topO;

  while(m > 0){
    if(alturadeTorre_inicial() == m){
      cout <<torre_inicial.top()<<"\t";
      torre_i.push(torre_inicial.top());
      torre_inicial.pop();
    }else{
      cout <<" "<<"\t";
    }
    if(alturadeTorre_auxiliar() == m){
      cout <<torre_auxiliar.top()<<"\t";
      torre_a.push(torre_auxiliar.top());
      torre_auxiliar.pop();
    }else{
      cout <<" "<<"\t";
    }
    if(alturadeTorre_objetivo() == m){
      cout <<torre_objetivo.top();
      torre_o.push(torre_objetivo.top());
      torre_objetivo.pop();
    }else{
      cout <<" "<<"\t";
    }
    cout <<"\n";
    m--;
  }
  cout <<"\n";

  while(!torre_i.empty()){
    torre_inicial.push(torre_i.top());
    torre_i.pop();
  }

  while(!torre_a.empty()){
    torre_auxiliar.push(torre_a.top());
    torre_a.pop();
  }

  while(!torre_o.empty()){
    torre_objetivo.push(torre_o.top());
    torre_o.pop();
  }
}

void TorresHanoi::MoverdeTorre_inicialaTorre_auxiliar(){
  ponerEnTorre_auxiliar(sacardeTorre_inicial());
}

void TorresHanoi::MoverdeTorre_inicialaTorre_objetivo(){
  ponerEnTorre_objetivo(sacardeTorre_inicial());
}

void TorresHanoi::MoverdeTorre_auxiliaraTorre_inicial(){
  ponerEnTorre_inicial(sacardeTorre_auxiliar());
}

void TorresHanoi::MoverdeTorre_auxiliaraTorre_objetivo(){
  ponerEnTorre_objetivo(sacardeTorre_auxiliar());
}

void TorresHanoi::MoverdeTorre_objetivoaTorre_inicial(){
  ponerEnTorre_inicial(sacardeTorre_objetivo());
}

void TorresHanoi::MoverdeTorre_objetivoaTorre_auxiliar(){
  ponerEnTorre_auxiliar(sacardeTorre_objetivo());
}
