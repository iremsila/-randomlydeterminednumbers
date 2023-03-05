int main()
{
    char n[] = "----"; //it is for compare the char numbers and it is sembolyized the beginning
    char answer[] = "++++"; //it is for compare the char numbers
    srand(time(NULL)); //when we start our code this gives a new number for every start
    int computersNum; //this number is giving to us from computer
    computersNum = 1000 + rand() % 9999; //computer give a number and it has a 4 digit
    int sacrifice= strcmp(n, answer); // this number for compare 
    int attemptNum; //this number is giving from user
    for (sacrifice;sacrifice != 0;) // it will be contuine when  sacrifice equal to 0
   

    {scanf("%d", &attemptNum);

     int newNum = computersNum;

     for (int i = 3; i >= 0; i--) // for compare the each digit
    {if (newNum % 10 == attemptNum % 10) // compares are equal result will be sign +, if it is not result will be sign -
           {n[i] = '+';}
           else{n[i] = '-';}
           newNum /= 10;
           attemptNum /= 10;        }
        printf("%s", n);
        sacrifice = strcmp(n, answer);
    }
    printf("%d", computersNum);
    return 0; }
