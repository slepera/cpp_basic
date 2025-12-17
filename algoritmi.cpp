#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>
 
using namespace std;
 
const long L = 100000   ;
int arr[L];
 
void fill_array(){
	for(long i = 0; i < L; i++){
		arr[i] = rand() % 10 + 1;
	}
}
 
void print_array(){
	for(long i = 0; i < L; i++){
		cout << arr[i] << endl;
	}
}
 
int linear_search(int n){
	for(long i = 0; i < L; i++){
		if(arr[i] == n) return i;
        //cout<<i<<endl;
	}
	return -1;
}
 
void bubble_sort(){
	long last = L - 1;
	bool swap;
	int s;
	do{
		swap = false;
		for(long i = 0; i < last; i++){
			if(arr[i] > arr[i + 1]){
				swap = true;
				s = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = s;
			}
		}
		last--;
	}while(last != 0 && swap);
}



long binary_search(int n){
	long low = 0;
	long high = L - 1;
	while(low <= high){
		long mid = low + (high - low) / 2;
		if(arr[mid] == n)return mid;
		if(arr[mid] > n){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return -1;
}

long millis()
{
    auto now = std::chrono::system_clock::now();

    // Convert to milliseconds since epoch
    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(
        now.time_since_epoch()
    ).count();
     //std::cout << "Milliseconds since epoch: " << milliseconds << std::endl;
     return milliseconds;
}
 
int main(int argc, char** argv) {
	srand(time(NULL));
	fill_array();
	long start = millis();
	//bubble_sort();
	long end = millis();
	cout << "millisecondi LIN = " << end-start << endl;
	
    //fill_array();
	start = millis();
    sort(arr, arr+L);
    end = millis();
    print_array();
	cout << "millisecondi BIN = " << end-start;
	return 0;
}