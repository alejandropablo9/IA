#include<TorresHanoi.h>

void TorresHanoi::inicializa(int discos){
  for(int i = 1; i <= discos; i++){
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
