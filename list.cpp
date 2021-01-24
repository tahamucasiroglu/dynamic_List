#include <iostream>
using namespace std;

template <class T>
class List{
	private:
		T *index;
		int size;
	public:
		List();//ba�lang�� 0 boyutlu a�ma
		List(int x);//�nceden yer ayarlama
		List(int x,T y);// �nceden yer ayarlama ve i�inde de�er doldurma
		void Clear();//i�ini temizler ve 0 yapar
		void Reset();//listeyi siler ve list() olarak geri a�ar
		T Get(int x);//istenilen yeri d�nd�r�r
		void Set(int x,T y);//istenilen yere de�er koyar
		void Print();//t�m listeyi konsola basar
		void Print(int x);//belli yerden itibaren basar
		void Print(int x,int y);//istenilen aral��� basar
		int Size();//boyut alma 
		List operator+(List<T> x);//toplama i�lemi 
		void Add(T x);// listeye eleman ekleme	
		bool CheckItem(T x);// listede istenilen eleman varsa true yoksa false d�ner
		int Find(T x);// aranan de�erin yerini verir yoksa -1 verir
		void AddIn(int x, T y);// araya de�er ekleme
		// [] == < > >= <= operat�rleri overload edilecek
		// - * / % karak�k kare gibi matematik i�lemleri e fonksiyonlar� eklenecek
		//hatal� durumlarda d�n�lmesi i�in hata mesajlar� ve try fonksiyonu konulacak
		
		
		
};

template <class T>
inline
List<T>::List(){
	List::index=new T[1];
	List::size=0;
}

template <class T>
inline
List<T>::List(int x){
	List::index=new T[x];
	List::size=x;
}

template <class T>
inline
List<T>::List(int x,T y){
	List::index=new T[x];
	List::size=x;
	for(int i=0;i<x;i++){List::index[i]=y;	}
}

template <class T>
inline
void List<T>::Clear(){
	for(int i=0;i<List::size;i++){
		List::index[i]=0;
	}
}

template <class T>
inline
void List<T>::Reset(){
	delete List::index;
	index=new T[1];
	List::size=1;
}

template <class T>
inline
T List<T>::Get(int x){
	if(x<List::size){
		return List::index[x];
	}else{
		return (T)0;
	}
}

template <class T>
inline
void List<T>::Set(int x,T y){
	List::index[x]=y;
}

template <class T>
inline
void List<T>::Print(){
	for(int i=0;i<List::size;i++){
		cout<<i<<"-)"<<List::index[i]<<endl;
	}
}

template <class T>
inline
void List<T>::Print(int x){
	for(int i=x;i<List::size;i++){
		cout<<i<<"-)"<<List::index[i]<<endl;
	}
}

template <class T>
inline
void List<T>::Print(int x, int y){
	for(int i=x;i<y;i++){
		cout<<i<<"-)"<<List::index[i]<<endl;
	}
}

template <class T>
inline
int List<T>::Size(){
	return List::size;
}

template <class T>
inline
	List<T> List<T>::operator+( List<T> x) {
	int thisSize=this->Size();
	int xSize=x.Size();
	int TotalSize=xSize+thisSize;
	List<T> newList; 
	if(thisSize<=xSize){
		for(int i=0;i<xSize;i++){
			newList.Add(x.Get(i));
		}
		for(int i=0;i<thisSize;i++){
			newList.Add(List::Get(i));
		}
	}else{
		for(int i=0;i<thisSize;i++){
			newList.Add(List::Get(i));
		}
		for(int i=0;i<xSize;i++){
			newList.Add(x.Get(i));
		}	
	}
	return newList;
}

template <class T>
inline
void List<T>::Add(T x){
	T *temp=List::index;
	List::size++;
	List::index=new T[List::size];
	for(int i=0;i<List::size-1;i++){
		List::index[i]=temp[i];
	}
	List::index[List::size-1]=x;
	delete temp;
}

template <class T>
inline
bool List<T>::CheckItem(T x){
	for(int i=0;i<List::size;i++){
		if(x==List::index[i]){
			return true;
		}
	}
	return false;
}

template <class T>
inline
int List<T>::Find(T x){
	for(int i=0;i<List::size;i++){
		if(x==List::index[i]){
			return i;
		}
	}
	return -1;
}

template <class T>
inline
void List<T>::AddIn(int x,T y){
	T *temp = List::index;
	List::size++;
	List::index=new T[List::size];
	for(int i = 0; i<x;i++){
		List::index[i]=temp[i];
	}
	List::index[x]=y;
	for(int i=x+1;i<List::size;i++){
		List::index[i]=temp[i-1];
	}
	delete temp;
}


int main(){
	
	return 0;
}
