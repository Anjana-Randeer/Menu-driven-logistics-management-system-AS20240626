#include <stdio.h>
#include <stdlib.h>

int cityManagement(char *cityNames,int x);

int cityManagement(char *cityNames,int x)
{
    printf("Type \"Done\" when complete entering the data");

}

int main()
{
    int choice;
    char *cityNames[30][50];
    int x=30;

    printf("---Logistics Management System---\n");
    printf("\n---------------------------------\n");
    printf("\n01. Manage Cities\n");
    printf("02. Manage Distances\n");
    printf("03. New delivery request\n");
    printf("04. Cost, Time, and Fuel Calculations\n");
    printf("05. Find Least-Cost Route for a Delivery\n");
    printf("06. View Performance Reports\n");
    printf("07. Exit\n");

    printf("\nEnter your choice:");
    scanf("%d",&choice);

    return 0;

}
