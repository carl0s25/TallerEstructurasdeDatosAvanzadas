#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <unordered_map>
#include <algorithm>
#include <ctime>
using namespace std;

// Función que genera un vector aleatorio de tamaño n
vector<int> randomArray(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }
    return arr;
}


// Función que alterna entre 3 métodos para devolver un array en cada caso de prueba
vector<int> generateTestCase(int n) {
    int choice = rand() % 2;
    if (choice == 0) {
        // Generar un array aleatorio
        return randomArray(n);
    } else {
        // Generar un array ordenado
        vector<int> arr(n);
        
        for (int i = 0 ; i < n; i++) {
            int j= n-i;
            arr[i] = j;
        }
        return arr;
    }
}

//leetcode solution 7
vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> map;
        int n=score.size();
        vector<string> respuesta(score.size());
        for(int i=0;i<score.size();i++){
            map[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(i==0){
                respuesta[map[score[i]]]="Gold Medal";
            }else if(i==1){
                respuesta[map[score[i]]]="Silver Medal";
            }else if(i==2){
                respuesta[map[score[i]]]="Bronze Medal";
            }else{
                respuesta[map[score[i]]]=to_string(i+1);
            }
        }
        return respuesta;
    }

int main() {
    srand(time(NULL));
    int n = 0;
    // Abrir el archivo de texto para escribir
    ofstream output("out.txt");
    ofstream input("in.txt");
    input << 100 << endl;
    for (int i = 0; i < 100; i++) {
        n = rand() % 200 + 1;
        vector<int> arr = generateTestCase(n);
        //cout << "Caso " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {   
            input << arr[j] << " ";
        }
        cout << endl;
        input << endl;
        output << findRelativeRanks(arr);
        output << endl;
    }
    output.close();
    return 0;
}
