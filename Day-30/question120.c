#include<stdio.h>
#include<string.h>

void addStudent(char name[][50], int roll[], float marks[][3], int *n);
void displayStudents(char name[][50], int roll[], float marks[][3], int n);
void searchStudent(char name[][50], int roll[], float marks[][3], int n);
float calculateTotal(float marks[3]);
float calculatePercentage(float total);
char* getGrade(float percentage);

int main(){
    char name[100][50];
    int roll[100];
    float marks[100][3];
    int n=0,choice;

    while(1){
        printf("\n--- STUDENT MANAGEMENT MINI PROJECT ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            addStudent(name,roll,marks,&n);
        }
        else if(choice==2){
            displayStudents(name,roll,marks,n);
        }
        else if(choice==3){
            searchStudent(name,roll,marks,n);
        }
        else if(choice==4){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

void addStudent(char name[][50], int roll[], float marks[][3], int *n){
    int i=*n;
    printf("Enter roll number: ");
    scanf("%d",&roll[i]);
    printf("Enter name: ");
    scanf("%s",name[i]);
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f",&marks[i][0],&marks[i][1],&marks[i][2]);
    (*n)++;
    printf("Student added successfully!\n");
}

void displayStudents(char name[][50], int roll[], float marks[][3], int n){
    int i;
    for(i=0;i<n;i++){
        float total=calculateTotal(marks[i]);
        float percentage=calculatePercentage(total);
        char *grade=getGrade(percentage);

        printf("\nRoll=%d, Name=%s\n",roll[i],name[i]);
        printf("Marks: %.1f %.1f %.1f\n",marks[i][0],marks[i][1],marks[i][2]);
        printf("Total=%.1f, Percentage=%.2f%%, Grade=%s\n",total,percentage,grade);
    }
}

void searchStudent(char name[][50], int roll[], float marks[][3], int n){
    int searchRoll,i,found=0;
    printf("Enter roll number to search: ");
    scanf("%d",&searchRoll);

    for(i=0;i<n;i++){
        if(roll[i]==searchRoll){
            float total=calculateTotal(marks[i]);
            float percentage=calculatePercentage(total);
            char *grade=getGrade(percentage);

            printf("Found! Name=%s\n",name[i]);
            printf("Marks: %.1f %.1f %.1f\n",marks[i][0],marks[i][1],marks[i][2]);
            printf("Total=%.1f, Percentage=%.2f%%, Grade=%s\n",total,percentage,grade);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Student not found!\n");
    }
}

float calculateTotal(float marks[3]){
    return marks[0]+marks[1]+marks[2];
}

float calculatePercentage(float total){
    return total/3;
}

char* getGrade(float percentage){
    if(percentage>=90){
        return "A+";
    }else if(percentage>=75){
        return "A";
    }else if(percentage>=60){
        return "B";
    }else if(percentage>=40){
        return "C";
    }else{
        return "Fail";
    }
}