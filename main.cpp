#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
#include<map>

using namespace std;

void pintar(vector<int> arr){
  cout<<"[";
  for(int a=0;a<arr.size();a++){
    cout<<arr[a]<<",";
  }
  cout<<"]";
}

int main(){
  vector<int> v;
  int aux,num,l,r,d,rep;
  string b="p";

  srand(time(NULL));

  for(int i=0;i<=100;i++){
    v.push_back(1+rand()%(1000-1));
  }

  for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size()-1;j++){
      if(v[j]>v[j+1]){
        aux=v[j+1];
        v[j+1]=v[j];
        v[j]=aux;
      }
    }
  }

  cout<<"                       NUMEROS GENERADOS ALEATORIAMENTE              \n"<<endl;
  pintar(v);

  cout<<"\n \nindixe de numero a buscar: ";cin>>num;

  l=0;
  r=v.size()-1;

  while(l<=r){
    rep=d;
    d=(l+r)/2;
    if(v[d]==num){
      b="v";
      break;
    }
    if(v[d]>num){
      r=d;
    }

    if(v[d]<num){
      l=d;
    }

    if(rep==d){
      cout<<"el numero no existe";
      break;
    }
  }

  if(b=="v"){
    cout<<"numero encontrado en el indice "<<d<<endl;
    cout<<v[d];
  }

  return 0;
}