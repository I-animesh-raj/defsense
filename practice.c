#include <stdio.h>
//  make a cinema hall ticket booking console app .
/* 1.select movie from 5 movies
2.select movie time
3. select seat no.
4. book seat and make payment(take card details and otp)
5. generate ticket with (movie name,movie time, seat no ,total amount paid)*/
int main()
{

    int movieName, movieTime, NO_OF_SEAT, card_no;
    char s1[9] = "1.A5";
    char s2[9] = "2.A6";
    char s3[9] = "3.A12";
    char s4[9] = "4.A10";
    char s5[9] = "5.B12";

    int seatNO[10];

    printf("\n \nSELECT MOVIE NUMBER FROM THE FOLLOWING:\n 1.BATMAN{$5}  2.KASHMIR FILES{$2}   3.SUPERMAN{$4}   4. AVENGERS{$6}\n\n");
    scanf("%d", &movieName);

    switch (movieName)
    { // case_1
    case 1:
        printf("BATMAN TIMING  \n  1. 10:00AM    2.  12:00PM   3. 8:00PM\n");
        scanf("%d", &movieTime);

        switch (movieTime)
        {
        case 1:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  %s  %s  %s  %s  %s\n", s1, s2, s3, s4, s5);

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }
                       

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           BATMAN\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s  ", s1);
                else if (seatNO[i] == 2)
                    printf("%s  ", s2);
                else if (seatNO[i] == 3)
                    printf("%s  ", s3);
                else if (seatNO[i] == 4)
                    printf("%s  ", s4);
                else
                    printf("%s  ", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 5));
            break;
        case 2:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           BATMAN\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 5));
            break;
        case 3:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           BATMAN\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 5));
            break;

        default:
            printf("SOMETHING WENT WRONG..");
            break;
        }
        break;
    // case_2
    case 2:
        printf("KASHMIR FILES TIMING  \n  1. 10:00AM    2.  12:00PM   3. 8:00PM\n");
        scanf("%d", &movieTime);

        switch (movieTime)
        {
        case 1:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  %s  %s  %s  %s  %s\n", s1, s2, s3, s4, s5);

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           KASHMIR FILES\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s  ", s1);
                else if (seatNO[i] == 2)
                    printf("%s  ", s2);
                else if (seatNO[i] == 3)
                    printf("%s  ", s3);
                else if (seatNO[i] == 4)
                    printf("%s  ", s4);
                else
                    printf("%s  ", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 2));
            break;
        case 2:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           KASHMIR FILES\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 2));
            break;
        case 3:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           KASHMIR FILES\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 2));
            break;

        default:
            printf("SOMETHING WENT WRONG..");
            break;
        }
        break;
        //case-3
        case 3:
        printf("SUPERMAN TIMING  \n  1. 10:00AM    2.  12:00PM   3. 8:00PM\n");
        scanf("%d", &movieTime);

        switch (movieTime)
        {
        case 1:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  %s  %s  %s  %s  %s\n", s1, s2, s3, s4, s5);

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }
            

            printf("PAYMENT SUCCESSFUL...\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           SUPERMAN\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s  ", s1);
                else if (seatNO[i] == 2)
                    printf("%s  ", s2);
                else if (seatNO[i] == 3)
                    printf("%s  ", s3);
                else if (seatNO[i] == 4)
                    printf("%s  ", s4);
                else
                    printf("%s  ", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 4));
            break;
        case 2:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           SUPERMAN\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 4));
            break;
        case 3:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           SUPERMAN\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 4));
            break;

        default:
            printf("SOMETHING WENT WRONG..");
            break;
        }
        break;
        //case-4
        case 4:
        printf("AVENGERS TIMING  \n  1. 10:00AM    2.  12:00PM   3. 8:00PM\n");
        scanf("%d", &movieTime);

        switch (movieTime)
        {
        case 1:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  %s  %s  %s  %s  %s\n", s1, s2, s3, s4, s5);

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           AVENGERS\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s  ", s1);
                else if (seatNO[i] == 2)
                    printf("%s  ", s2);
                else if (seatNO[i] == 3)
                    printf("%s  ", s3);
                else if (seatNO[i] == 4)
                    printf("%s  ", s4);
                else
                    printf("%s  ", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 6));
            break;
        case 2:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           AVENGERS\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 6));
            break;
        case 3:

            printf("TOTAL 5 SEATS ARE AVAILABLE\n ");
            printf("SELECT TOTAL NUMBER OF SEATS ");
            scanf("%d", &NO_OF_SEAT);

            printf("  1.A5  2.A6  3.A12  4.A10  5. B12\n");

            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                printf("Enter %d seat NO: ", i + 1);
                scanf("%d", &seatNO[i]);
            }
            printf("ENTER CARD NO. :");
            scanf("%d", &card_no);
            for(int i=0;i<5;i++){
                printf(".");
                sleep(1);
            }

            printf("PAYMENT SUCCESSFUL.....\n\nGenerating BILL\n\n");
            printf("___________________________\n \n \n");

            printf("MOVIE :           AVENGERS\nMOVIE TIME :     12:00PM\n SEAT_NO:         ");
            for (int i = 0; i < NO_OF_SEAT; i++)
            {
                if (seatNO[i] == 1)
                    printf("%s ", s1);
                else if (seatNO[i] == 2)
                    printf("%s ", s2);
                else if (seatNO[i] == 3)
                    printf("%s ", s3);
                else if (seatNO[i] == 4)
                    printf("%s ", s4);
                else
                    printf("%s", s5);
            }
            printf("\nTOTAL AMOUNT :    $ %d.00", (NO_OF_SEAT * 6));
            break;

        default:
            printf("SOMETHING WENT WRONG..");
            break;
        }
        break;

    default:
    
        break;
    }
    printf("\nTHANK YOU\n");
    return 0;
}