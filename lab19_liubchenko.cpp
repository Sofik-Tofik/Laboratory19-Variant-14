#include <iostream>
using namespace std;

template <typename T>
void addElementToEnd(int& count, T*& array, const T& newElement) {
    T* newArray = new T[count + 1];
    for (int i = 0; i < count; i++) {
        newArray[i] = array[i];
    }
    newArray[count] = newElement;
    delete[] array;
    array = newArray;
    count++;
}

int main() {
    setlocale(LC_CTYPE, "ukr"); 

    int countInt = 5; 
    int* ai = new int[countInt]; 
    for (int i = 0; i < countInt; i++) { 
        cout << "Enter " << i << " array element of integer type : ";
        cin >> ai[i]; 
    }

    int newIntElement;
    cout << "Enter a new integer array element: ";
    cin >> newIntElement;
    addElementToEnd(countInt, ai, newIntElement);

    cout << "Updated array of integer type: ";
    for (int i = 0; i < countInt; i++) {
        cout << ai[i] << " ";
    }
    cout << endl;

    int countFloat = 6; 
    float* af = new float[countFloat]; 
    for (int i = 0; i < countFloat; i++) { 
        cout << "Enter " << i << " array element of valid type : ";
        cin >> af[i]; 
    }

    float newFloatElement;
    cout << "Enter a new array element of valid type: ";
    cin >> newFloatElement;
    addElementToEnd(countFloat, af, newFloatElement);

    cout << "Updated valid type array: ";
    for (int i = 0; i < countFloat; i++) {
        cout << af[i] << " ";
    }
    cout << endl;

    delete[] ai;
    delete[] af;

    return 0;
}