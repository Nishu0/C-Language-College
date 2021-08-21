/* 
Problem Statement::In a town, the percentage of men is 52. The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population, write a
program to find the total number of illiterate men and women if the
population of the town is 80,000. Write Algorithms and Flowchart of this
program.
*/

#include<stdio.h>

int main() {
        int i;
        long int pop = 80000, m, w, imen, lmen, iwmen, lwmen;
        printf("\n Total Population of the town = 80000");
        m = 52 * pop / 100;
        printf("\n Total Number of men = %ld", m);
        w = 48 * pop / 100;
        printf("\n Total Number of women = %ld", w);
        lmen = 35 * pop / 100;
        printf("\n Number of literate men = %ld", lmen);
        lwmen = 13 * pop / 100;
        printf("\n Number of literate women = %ld\n\n", lwmen);

        imen = m - lmen;
        printf("\n Number of illiterate men = %ld", imen);
        iwmen = w - lwmen;
        printf("\n Number of illiterate women = %ld", iwmen);
        return 0;
}
