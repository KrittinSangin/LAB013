#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;

    showImage(image);
    return 0;
}

void updateImage(bool image[][M],int s,int x , int y){

for(int i = 0; i<70;i++){
    for(int j = 0; j < 30;j++){
        double num = sqrt(pow((j-x),2)+(pow((i-y),2)));
if(num <= (s-1)){
    image[j][i] = 1;
}
}
}
}

void showImage(const bool image[][M]){
cout << "------------------------------------------------------------------------"<<endl;
for(int i = 0; i < N; i++){
    
		for(int j = 0; j < M; j++){
            if(j%70 == 0)cout <<"|";

            if(image[i][j]==1){
                cout << "*";
            }else{
			cout << " ";
            }
		}
        
		cout <<"|"<<"\n";
	}


cout << "------------------------------------------------------------------------"<<endl;
}
