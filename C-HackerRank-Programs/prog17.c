// sum of students marks based on gender


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {

  if(gender=='b')
  {
      int i;
      int sum=0;
      for(i=0;i<number_of_students;i=i+2)
      {
          sum += marks[i];
      }
      return sum;
  } else {
      int i;
      int sum=0;
      for(i=1;i<number_of_students;i=i+2)
      {
          sum += marks[i];
      }
      return sum;
  }

  //Write your code here.
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}


/*
ALTERNATIVELY
int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2)
        sum += *(marks + i);

    return sum;
}
*/

// OR

/*
int i = !(gender == 'b');
*/
