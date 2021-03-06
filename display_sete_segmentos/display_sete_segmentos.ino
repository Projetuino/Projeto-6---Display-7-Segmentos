//Mapeamento dos pinos do display na
//sequencia {a, b, c, d, e, f, g, DP}
const int pinos[8] = {5, 4, 9, 10, 11, 6, 7, 8};
const int numeros[10][8] = {
    {1, 1, 1, 1, 1, 1, 0, 0}, 
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1, 0},
    {1, 1, 1, 1, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {1, 0, 1, 1, 0, 1, 1, 0},
    {1, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 0, 1, 1, 0}};

void setup() {
  for(int i = 0; i < 8; i++){
    pinMode(pinos[i], OUTPUT);
  }
}

void loop() {
  for(int n = 0; n <= 9; n++){
    mostrarNumero(n);
    delay(1000);
  }
}

void mostrarNumero(int num){
  for(int i = 0; i < 8; i++){
    digitalWrite(pinos[i], numeros[num][i]);
  }
}
