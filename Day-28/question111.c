#include<stdio.h>
#include<string.h>
int main(){
    char passengerName[100][50];
    int seatNo[100];
    int totalSeats=10;
    int booked[10]={0};
    int n=0,choice,i;

    while(1){
        printf("\n--- TICKET BOOKING SYSTEM ---\n");
        printf("1. Display available seats\n");
        printf("2. Book a ticket\n");
        printf("3. Cancel a ticket\n");
        printf("4. Display all bookings\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Available seats: ");
            for(i=0;i<totalSeats;i++){
                if(booked[i]==0){
                    printf("%d ",i+1);
                }
            }
            printf("\n");
        }
        else if(choice==2){
            int seat;
            printf("Enter seat number to book (1-%d): ",totalSeats);
            scanf("%d",&seat);
            if(seat<1 || seat>totalSeats){
                printf("Invalid seat number!\n");
            }
            else if(booked[seat-1]==1){
                printf("Seat already booked!\n");
            }
            else{
                printf("Enter passenger name: ");
                scanf("%s",passengerName[n]);
                seatNo[n]=seat;
                booked[seat-1]=1;
                n++;
                printf("Ticket booked successfully!\n");
            }
        }
        else if(choice==3){
            int seat,found=0;
            printf("Enter seat number to cancel: ");
            scanf("%d",&seat);
            for(i=0;i<n;i++){
                if(seatNo[i]==seat){
                    booked[seat-1]=0;
                    printf("Ticket for seat %d cancelled successfully!\n",seat);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("No booking found for this seat!\n");
            }
        }
        else if(choice==4){
            printf("\nSeat No\tPassenger Name\n");
            for(i=0;i<n;i++){
                if(booked[seatNo[i]-1]==1){
                    printf("%d\t%s\n",seatNo[i],passengerName[i]);
                }
            }
        }
        else if(choice==5){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}