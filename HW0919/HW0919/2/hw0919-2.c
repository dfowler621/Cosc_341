/*   Devin Fowler
   * E01151306
   * 09/19/2017
   * http://people.emich.edu/dfowle13/courses/Cosc341/HW0919.rar
*/
#include <stdio.h>


int main() {

    int array[100] = {19, 17, 13, 11, 7, 5, 3, 2, 1, 31, 29, 23}, x, d, size, pos, swap;
    size = 10;
	
    printf("Unsorted list: ");
    for (int i = 0; i < size; i++)
        printf("%d\n", array[i]);
    

    for (x = 0; x < (size - 1); x++) {
        pos = x;

        for (d = x + 1; d < size; d++) {
            if (array[pos] > array[d])
                pos = d;
        }
        if (pos != x) {
            swap = array[x];
            array[x] = array[pos];
            array[pos] = swap;
        }
    }

    printf("Sorted list:\n");

    for (x = 0; x < size; x++)
        printf("%d\n", array[x]);

    return 0;

}