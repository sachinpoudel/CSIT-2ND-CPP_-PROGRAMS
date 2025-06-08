#include <iostream>
#include <fstream>
#include <string>


int calcSum(int arr[],int size){
    int sum =0;
    for(int i =0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
double calcAvg(int sum , int size){
    return static_cast<double>(sum) / size;
}
using namespace std;
int main(){
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter" <<  SIZE << "integers" << endl;
    for(int i=0; i<SIZE; i++){
        cout << "Number" << i + 1 << ";";
        cin>> numbers[i];
    }
    int sum = calcSum(numbers, SIZE);
    double average = calcAvg(sum,SIZE);

    cout <<"sum:" << sum << endl;
    cout << "Average : " << average << endl;


    // opening the file and writing 
    ofstream outFile("2ndprog.txt");
    if(outFile.is_open()){
        outFile << "numbers entered:" << endl;

        for(int i =0; i<SIZE; i++){
            outFile << numbers[i] << " ";
        }
        outFile << "sum" << sum << endl;
        outFile << "Average:" << average << endl;
        outFile.close(); 
    }else{
        cout << "unable to open file" << endl;
    }
    return 0;
}