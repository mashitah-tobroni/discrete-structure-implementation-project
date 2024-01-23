/* This Program Will find the Shortest Distance/Minimum Path
* Date Draft Last : 12:46pm / December 13th, 2021
* Auth : Luq토자키, Mashitah
* Compiler : Microsoft Visual Code
* Desc : User Need To Enter the quantity of Path
* User Need to Enter Number of City crossed in each Path
* User Need to enter Name of City
* User Need to enter distance between city1 to city2
*/
#include<stdio.h>
#define WORD 200
int main(void) {
int path, point = 1, a = 0;
int ncity[WORD];
char cityname[5][50][WORD];
float distance[WORD][WORD];
float total[WORD];
printf("This program will input 5 path and calculates the minimum between KL Sentral, KL & Jurong East, Singapore");
printf("\n\t\t-------------------------------------------------------------");
printf("\n\t\tMinimum Path between KL Sentral, KL & Jurong East, Singapore");
printf("\n\t\t-------------------------------------------------------------");
printf("\nPlease enter the total path that you want to calculate: ");
scanf("%d", &path);
for (int i = 0; i < path; i++) {
printf("\n\n\t\t----Path %d----", i + 1);
printf("\nState the number of city that the path cross: ");
scanf("%d", &ncity[i]);
total[i] = 0;
//for (int x = 0; x < path; x++) {
for (int y = 0; y < ncity[i]; y++) {
printf("\nCity %d named : ", y + 1);
scanf(" %[^\n]s", &cityname[i][y]);
printf("Enter the distance to the city %d: ", y + 1);
scanf("%f", &distance[i][y]);
total[i] = total[i] + distance[i][y];
}
printf("\nTotal Distance: %.2f km", total[i]);
}
//}
//Find the minimum path
for (int x = 0; x < path; x++) {
if (total[x] < total[point]) {
point = x;
}
}
//ncity[point] = a;
printf("\n\t------------------------------------------------------------------------------");
printf("\n\tThe minimum path between [KL Sentral, Kuala Lumpur] & [Jurong East, Singapore]");
printf("\n\t------------------------------------------------------------------------------");
printf("\n\tPath\t\t: %d", point + 1);
18
printf("\n\tTotal Distance\t: %.2f", total[point]);
printf("\n\n\t\t-------------------------");
printf("\n\t\t\tCity List");
printf("\n\t\t-------------------------");
printf("\n\t\t KL Sentral, KL to\n");
printf("\n\t\tCity Name\t\t\t\t\t\t");
printf("Distance(km)");
for (int y = 0; y < ncity[point]; y++) {
printf("\n\t%s", cityname[point][y]);
printf("\t\t\t\t\t\t");
printf("%7.2lf", distance[point][y]);
}
printf("\n\n");
}
