#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
float A, B, C, MEDIA;

cin>> A;
cin>> B;
cin>> C;

MEDIA = (((A*2) + (B*3) + (C*5))/(2 + 3 + 5));
cout<<"MEDIA = "<< fixed <<setprecision(1)<<MEDIA <<endl;

return 0;
}

//Dando erro no Judge Online. Mas os resultados estão dando correto.
