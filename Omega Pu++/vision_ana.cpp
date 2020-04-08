#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  int tp = t;
  //AQUI METE EL NUMERO DE ENTRADAS QUE RECIBIRÁ
  while (t--) {
    //RECIBE 15 5
    int s, n;
    cin >> s >> n;
    double precios [n];
    int i = 0;
    while (i < n) {
      cin >> precios[i];
      i++;
    }
    i = 0;
    int m = 0;
    i = 0;
    while (i < n) {
      if (precios[i] < precios[m])
        m = i;
      i++;
    }
    cout << "Case " << tp-t << ": comprar en dia " << m+1 << endl;
  }



  

}
