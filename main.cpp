#include <iostream>

// length array
#define len 15

int main() {
    float array[len];

    // data input
    std::cout << "Enter element:" << std::endl;
    for(int i=0; i<len; i++) {
        std::cin >> array[i];
    }

    // sorting
    for(int i=0; i<(len-1); i++)
        for(int j=(i+1); j<len; j++)
            if( array[i] < array[j] ) {
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

    // data output
    std::cout << std::endl << "Sorting result:" << std::endl;
    for(int i=0; i<len; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    return 0;
}
