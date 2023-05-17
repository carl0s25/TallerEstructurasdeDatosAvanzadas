#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numLibros;
    
     while(scanf("%d",&numLibros)!=EOF){
    
      int a[numLibros];
      for (int i = 0; i < numLibros; i++)
          scanf("%d",&a[i]);
      int money;
      scanf("%d",&money);
      int diferencia = 2000002;
      int libroI, libroJ;
      for (int i = 0; i < numLibros; i++){
        for (int j = i+1; j < numLibros; j++){
          if(a[i]+a[j]==money){
            int dif = abs(a[i]-a[j]);
            if (dif<diferencia) {
              diferencia=dif;
              libroI =a[i];
              libroJ =a[j];
            }
          }
        }
      }
      if(libroI>libroJ) {
        int aux = libroI;
        libroI =libroJ;
        libroJ =aux;
        
      }
      printf("Peter should buy books whose prices are %d and %d.\n\n",libroI,libroJ);
      }
    return 0;
};