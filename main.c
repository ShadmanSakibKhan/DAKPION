#include <stdio.h>
#include <string.h>
#include <conio.h>

struct send
{
    char name[100];
    int percel_number;
    int number_of_percel;
    int cost;
}
p[10000];
int main ()
{
    printf ("\n-------------------------------------------------------------\n");
    printf ("---------------------------DAKPION---------------------------\n");
    printf ("-------------------------------------------------------------\n");
    printf ("-----------------------COURIER SERVICE-----------------------\n");
    printf ("-------------------------------------------------------------\n");
    printf ("----------Welcome To Courier Service Billing System----------\n");
    printf ("-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
    while (1)
    {
        printf ("\n-------------------------------------------------------------\n");
        printf ("-------------------------------------------------------------\n");
        printf ("---------------CHOOSE ANY CODE FROM THIS MENU:---------------\n");
        printf ("-------------------------------------------------------------\n");
        printf ("-------------------------------------------------------------\n");
        printf ("\n 1. Dispatch Item\n\n 2. Display Existing Information\n\n 3. About The Developers \n\n 4. Exit\n\n");
        printf ("-------------------------------------------------------------\n");
        printf ("-------------------------------------------------------------\n");
        int in;
        printf ("\n-------------------------------------------------------------\n");
        printf ("--------------------------RECEIPT----------------------------\n");
        printf ("-------------------------------------------------------------\n");
        printf("\n CHOOSEN CODE: ");
        scanf ("%d", &in);
        printf ("\n-------------------------------------------------------------\n");
        printf ("-------------------------------------------------------------\n");
        getchar ();
        switch (in)
        {
        case 1 :
        {
            send ();
            break;
        }
        case 2 :
        {
            display();
            break;
        }
        case 3 :
        {
            about ();
            break;
        }
        case 4 :
        {
            printf ("\n-------------------------------------------------------------\n");
            printf ("-------------------------------------------------------------\n");
            printf("\n End of the program....\n");
            printf ("\n-------------------------------------------------------------\n");
            printf("\n BEST OF LUCK \n\n STAY SAFE, STAY HAPPY \n\n - Authority of DAKPION. \n");
            printf ("\n-------------------------------------------------------------\n");
            printf ("-------------------------------------------------------------\n");
            return;
        }
        }
    }
}
int parcel_count = 0;
int send()
{
    FILE *q;
    int n, in, m;
    q = fopen("project.txt","a");
    if(q == NULL)
    {
        printf ("\n-------------------------------------------------------------\n");
        printf("\n File Doesn't Exist\n");
        printf ("\n-------------------------------------------------------------\n");
        return;
    }
    printf ("\n-------------------------------------------------------------\n");
    printf ("\n Please Enter Your Name: ");
    gets (p[parcel_count].name);
    printf ("\n-------------------------------------------------------------\n");
    fprintf(q,"\n Name: %s\n", p[parcel_count].name);
    items();
    p[parcel_count].cost = 0;
level:
    printf ("\n-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
    printf ("\n How Many Items You Want to Parcel? ");
    printf("\n Your Answer: ");
    scanf ("%d", &n);
    printf ("\n-------------------------------------------------------------\n");
    getchar ();
    while (n--)
    {
        printf ("\n Enter Chosen Destination Code: ");
        scanf ("%d", &in);
        getchar();
        switch(in)
        {
        case 11 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Chittagong or vice versa :: 211 km \n");
            fprintf (q, "\n Destination: Dhaka to Chittagong or vice versa :: 211 km");
            p[parcel_count].cost += (211 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 12 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Syhlet or vice versa :: 199 km \n");
            fprintf (q, "\n Destination: Dhaka to Syhlet or vice versa :: 199 km");
            p[parcel_count].cost += (199 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 13 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Rajshahi or vice versa :: 198 km \n");
            fprintf (q, "\n Destination: Dhaka to Rajshahi or vice versa :: 198 km");
            p[parcel_count].cost += (198 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 14 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Khyulna or vice versa :: 132 km \n");
            fprintf (q, "\n Destination: Dhaka to Khyulna or vice versa :: 132 km");
            p[parcel_count].cost += (132 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 15 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Rangpur or vice versa :: 255 km \n");
            fprintf (q,"\n Destination: Dhaka to Rangpur or vice versa :: 255 km");
            p[parcel_count].cost += (255 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 16 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Barishal or vice versa :: 112 km \n");
            fprintf (q, "\n Destination: Dhaka to Barishal or vice versa :: 112 km");
            p[parcel_count].cost += (112 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 17 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Dhaka to Mymensingh or vice versa :: 112 km \n");
            fprintf (q, "\n Destination: Dhaka to Mymensingh or vice versa :: 112 km");
            p[parcel_count].cost += (112 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 18 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Chittagong to Sylhet or vice versa :: 370 km \n");
            fprintf (q, "\n Destination: Chittagong to Sylhet or vice versa :: 370 km");
            p[parcel_count].cost += (370 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 19 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Chittagong to Rajshahi or vice versa :: 490 km \n");
            fprintf (q, "\n Destination: Chittagong to Rajshahi or vice versa :: 490 km");
            p[parcel_count].cost += (490 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 20 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Chittagong to Khulna or vice versa :: 386 km \n");
            fprintf (q, "\n Destination: Chittagong to Khulna or vice versa :: 386 km");
            p[parcel_count].cost += (386 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 21 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Chittagong to Rangpur or vice versa :: 550 km \n");
            fprintf (q,"\n Destination: Chittagong to Rangpur or vice versa :: 550 km");
            p[parcel_count].cost += (400 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 22 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Chittagong to Barishal or vice versa :: 240 km \n");
            fprintf (q,"\n Destination: Chittagong to Barishal or vice versa :: 240 km");
            p[parcel_count].cost += (200 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 23 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Chittagong to Mymensingh or vice versa :: 360 km \n");
            fprintf (q,"\n Destination: Chittagong to Mymensingh or vice versa :: 360 km");
            p[parcel_count].cost += (300 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 24 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Syhlet to Rajshahi or vice versa :: 454 km \n");
            fprintf (q,"\n Destination: Syhlet to Rajshahi or vice versa :: 454 km");
            p[parcel_count].cost += (375 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 25 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Syhlet to Khulna or vice versa :: 490 km \n");
            fprintf (q,"\n Destination: Syhlet to Khulna or vice versa :: 490 km");
            p[parcel_count].cost += (375 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 26 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Syhlet to Rangpur or vice versa :: 509 km \n");
            fprintf (q,"\n Destination: Syhlet to Rangpur or vice versa :: 509 km");
            p[parcel_count].cost += (400 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 27 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Syhlet to Barishal or vice versa :: 462 km \n");
            fprintf (q,"\n Destination: Syhlet to Barishal or vice versa :: 462 km");
            p[parcel_count].cost += (375 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 28 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Syhlet to Mymensingh or vice versa :: 277 km \n");
            fprintf (q,"\n Destination: Syhlet to Mymensingh or vice versa :: 277 km");
            p[parcel_count].cost += (250 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 29 :
        {
            printf (" Enter Weight (kg): \n");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Rajshahi to Khulna or vice versa :: 264 km \n");
            fprintf (q,"\n Destination: Rajshahi to Khulna or vice versa :: 264 km");
            p[parcel_count].cost += (250 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 30 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination:  Rajshahi to Rangpur or vice versa :: 216 km \n");
            fprintf (q,"\n Destination:  Rajshahi to Rangpur or vice versa :: 216 km");
            p[parcel_count].cost += (200 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 31 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Rajshahi to Barishal or vice versa :: 360 km \n");
            fprintf (q,"\n Destination: Rajshahi to Barishal or vice versa :: 360 km");
            p[parcel_count].cost += (350 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 32 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Rajshahi to Mymensingh or vice versa :: 240 km \n");
            fprintf (q,"\n Destination: Rajshahi to Mymensingh or vice versa :: 240 km");
            p[parcel_count].cost += (200 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 33 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Khulna to Rangpur or vice versa :: 400 km \n");
            fprintf (q,"\n Destination: Khulna to Rangpur or vice versa :: 400 km");
            p[parcel_count].cost += (375 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 34 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Khulna to Barishal or vice versa :: 147 km \n");
            fprintf (q,"\n Destination: Khulna to Barishal or vice versa :: 147 km");
            p[parcel_count].cost += (110 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 35 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Khulna to Mymensingh  or vice versa :: 370 km \n");
            fprintf (q,"\n Destination: Khulna to Mymensingh  or vice versa :: 370 km");
            p[parcel_count].cost += (350 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 36 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Rangpur to Barishal or vice versa :: 523 km \n");
            fprintf (q,"\n Destination: Rangpur to Barishal or vice versa :: 523 km ");
            p[parcel_count].cost += (400 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 37 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Rangpur to Mymensingh or vice versa :: 333 km \n");
            fprintf (q,"\n Destination: Rangpur to Mymensingh or vice versa :: 333 km");
            p[parcel_count].cost += (300 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        case 38 :
        {
            printf (" Enter Weight (kg): ");
            scanf ("%d", &m);
            getchar();
            printf (" Destination: Barishal to Mymensingh or vice versa :: 335 km \n");
            fprintf (q,"\n Destination: Barishal to Mymensingh or vice versa :: 335 km");
            p[parcel_count].cost += (300 + 10 * m);
            printf ("\n-------------------------------------------------------------\n");
            break;
        }
        default :
        {
            printf ("\n-------------------------------------------------------------\n");
            printf ("\n Invalid selection try again \n");
            printf ("\n-------------------------------------------------------------\n");
            n++;
        }
        }
    }
    char temp;
    printf ("\n-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
    printf ("\n Do You Want to Parcel anything else? (y/Y = Yes || n/N = No) \n (y/n || Y/N) : ");
    scanf("%c", &temp);
    printf ("\n-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
    if (temp == 'y' || temp == 'Y')
    {
        goto level;
    }
    printf ("\n-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
    printf ("\n Thank You!! - %s - for Using Our Courier Service!!\n", p[parcel_count].name);
    printf ("\n-------------------------------------------------------------\n");
    printf("\n Your Total Bill is : %d Taka.\n", p[parcel_count].cost);
    printf ("\n-------------------------------------------------------------\n");
    printf("\n Please Wait for some days, We Will Send Your Parcel As Soon As Possible.\n");
    printf ("\n-------------------------------------------------------------\n");
    printf("\n BEST OF LUCK \n\n STAY SAFE, STAY HAPPY \n\n - Authority of DAKPION.\n\n");
    fprintf (q,"\n\n Your Total Bill is : %d tk.\n", p[parcel_count].cost);
    fclose(q);
    printf ("-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
}
int display ()
{
    FILE *q;
    q = fopen("project.txt", "r");
    if(q == NULL)
    {
        printf ("\n-------------------------------------------------------------\n");
        printf("\n File Doesn't Exist!!\n");
        printf ("\n-------------------------------------------------------------\n");
        return;
    }
    char c;
    do
    {
        c = fgetc(q);
        printf("%c",c);
    }
    while(c != EOF);
    fclose(q);
}
int about ()
{
    printf ("\n-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
    printf("\n The creators of this program: \n");
    printf("\n SHADMAN SAKIB KHAN \n\n");
    printf ("-------------------------------------------------------------\n");
    printf ("-------------------------------------------------------------\n");
}
void items ()
{
    printf("\n.....................................................................\n");
    printf("..............................Chart..................................\n");
    printf(".....................................................................\n");
    printf("\n #Item: \n #Code_Description:\n");
    printf("\n.....................................................................\n");
    printf(".....................................................................\n");
    printf("\n[11]---------Dhaka        to   Chittagong   or   vice versa----------\n");
    printf("[12]---------Dhaka        to   Sylhet       or   vice versa----------\n");
    printf("[13]---------Dhaka        to   Rajshahi     or   vice versa----------\n");
    printf("[14]---------Dhaka        to   Khulna       or   vice versa----------\n");
    printf("[15]---------Dhaka        to   Rangpur      or   vice versa----------\n");
    printf("[16]---------Dhaka        to   Barishal     or   vice versa----------\n");
    printf("[17]---------Dhaka        to   Mymensing    or   vice versa----------\n");
    printf("\n[18]---------Chittagong   to   Syhlet       or   vice versa----------\n");
    printf("[19]---------Chittagong   to   Rajshahi     or   vice versa----------\n");
    printf("[20]---------Chittagong   to   Khulna       or   vice versa----------\n");
    printf("[21]---------Chittagong   to   Rangpur      or   vice versa----------\n");
    printf("[22]---------Chittagong   to   Barishal     or   vice versa----------\n");
    printf("[23]---------Chittagong   to   Mymensingh   or   vice versa----------\n");
    printf("\n[24]---------Syhlet       to   Rajshahi     or   vice versa----------\n");
    printf("[25]---------Syhlet       to   Khulna       or   vice versa----------\n");
    printf("[26]---------Syhlet       to   Rangpur      or   vice versa----------\n");
    printf("[27]---------Syhlet       to   Barishal     or   vice versa----------\n");
    printf("[28]---------Syhlet       to   Mymensingh   or   vice versa----------\n");
    printf("\n[29]---------Rajshahi     to   Khulna       or   vice versa----------\n");
    printf("[30]---------Rajshahi     to   Rangpur      or   vice versa----------\n");
    printf("[31]---------Rajshahi     to   Barishal     or   vice versa----------\n");
    printf("[32]---------Rajshahi     to   Mymensingh   or   vice versa----------\n");
    printf("\n[33]---------Khulna       to   Rangpur      or   vice versa----------\n");
    printf("[34]---------Khulna       to   Barishal     or   vice versa----------\n");
    printf("[35]---------Khulna       to   Mymensingh   or   vice versa----------\n");
    printf("\n[36]---------Rangpur      to   Barishal     or   vice versa----------\n");
    printf("[37]---------Rangpur      to   Mymensingh   or   vice versa----------\n");
    printf("[38]---------Barishal     to   Mymensingh   or   vice versa----------\n");
    printf(".....................................................................\n");
    printf(".....................................................................\n");
}
