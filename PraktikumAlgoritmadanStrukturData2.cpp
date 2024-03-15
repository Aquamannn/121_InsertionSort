#include <iostream>
using namespace std;
int arr[11];
int n;

void input() {
    while (true) { // Looping
        cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
        cin >> n;  // input dari paengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar  

        }
    }
    cout << endl; //Output baris kosog
    cout << "=====================" << endl; // Output ke layar 
    cout << "Masukan elemen Array" << endl; // Output ke layar
    cout << "=====================" << endl; // Output ke layar 

    for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + 1) << ": "; // Output ke layar
        cin >> arr[i]; // Input dari pengguna 
    }
}

void insertionSort() {
    int i, temp, j;
   

    for (i = 1; i <= n - 1; i++) // step 1
    {
        temp = arr[i]; // step 2
        j = i - 1; // step 3
        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j]; // step 4a
            j = j - 1; // step 4b
        }
        arr[j + 1] = temp; // step 5
     
    }


}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; // Output each array element on a new  line
    }
    cout << "Jumlah pass =" << n - 1 << endl; // corectly shows the total number of elements
    cout << endl;
}

int main() {

    input(); 
    insertionSort();
    display();

    
}


