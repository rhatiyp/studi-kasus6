#include <iostream>
using namespace std;

class kuliah {
        public :
        void input();
        void proses();
        void output();
        private : 
        string nama, matkul;
        int nilai[10];//array 1 dimensi
        int n;
        int Nmin, Nmax;
        float rata;
};

void kuliah::input(){
  cout<<"====================================="<<endl;	
  cout << "Nama Dosen : ";cin>>nama;
  cout << "Mata Kuliah : ";cin>>matkul;
  cout << "Banyak Nilai : ";cin>>n;
  cout << "=================================="<<endl;
  cout<<endl;
  for(int i=0; i<n; i++){
          cout << "Masukan nilai siswa ke-"<<i+1<<" = ";cin>>nilai[i];
  }
  cout<<"====================================="<<endl;
}
void kuliah::proses(){
	//algoritma mencari nilai max dan min
	Nmin=nilai[0],   Nmax=nilai[0];
	for(int j=0; j<n; j++){
		if(nilai[j]<Nmin){
			Nmin = nilai[j]; }
		if(nilai[j]<Nmax){
			Nmax = nilai[j]; }}
	//algoritma mencari nilai rata-rata
	for(int i=0; i<n; i++){
		rata+=nilai[i];
	}	
	rata/=n;	
	
}

void kuliah::output(){
        cout<<"\n==========================="<<endl;
	    cout<<"Nama Dosen : "<<nama<<endl;
	    cout<<"Mata Kuliah : "<<matkul<<endl;
	    cout<<"Nilai  "<<endl;
	    cout<<"-----------------------------"<<endl;
	    for(int i=0; i<n; i++){
		        cout<<"  "<<nilai[i]<<endl;
	    }
        cout<<"\n==========================="<<endl;
	    cout<<"Nilai Min : "<<Nmin<<endl;
	    cout<<"Nilai Max : "<<Nmax<<endl;
	    cout<<"Nilai Rata-Rata :"<<rata<<endl;
	    cout<<"-----------------------------"<<endl;	
}

int main() {
	kuliah a;
	a.input();
	a.proses();
	a.output();
}
