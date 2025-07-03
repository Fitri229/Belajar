#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	bool ketemu, nolsemua;
	int matrix[10][10];
	int i, j, jumlah_simpul, jumlah_sisi, asal, tujuan;
	
	//insialisasi matriks
	cout << "Jumlah simpul :";
	cin >> jumlah_simpul;
	cout << "Jumlah sisi : ";
	cin >> jumlah_sisi;
	
	for(i = 1; i <= jumlah_simpul; i++){
		for(j = 1; j <= jumlah_simpul; j++){
			matrix[i][j] = 0;
		}
	}
	for(i = 1; i <= jumlah_simpul; i++){
		cout << "Simpul asal : ";
		cin >> asal;
		cout << "Simpul tujuan : ";
		cin >> tujuan;
		matrix[asal][tujuan] = 1;
		matrix[tujuan][asal] = 1;
	}
	
	//telusuri graf
	i = 1;
	nolsemua=false;
	
	while (i <= jumlah_simpul && !nolsemua){
		j =1;
		ketemu = false;
		
		while(j <= jumlah_simpul && !ketemu){
			if(matrix[i][j]==1)
				ketemu = true;
			else
			j++;
		}
		if (!ketemu)
			nolsemua = true;
		else
		i++;
	}
	
	if(nolsemua)
		cout << "Graf tidak terhubung";
	else
		cout << "Graf  terhubung";
	
	getch();
	return 0;
}


