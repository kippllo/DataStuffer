#include <stdio.h>

FILE * File; //makes a file pointer Object. //NEEDS to be "FILE" or will have an error
int Mb;

void Stuff(int Mby){ //you'll get an return type error if you don't declare functions before they are called. Error: "conflicting types for function"

    int dataCount = 0;
    int Kb = Mby * 1024 * 1024;

    char baseData[Kb];


    for(dataCount = 0; dataCount <= Kb; dataCount++){

        baseData[dataCount] = ';';

    }

    File = fopen("./data.stuff", "a");
    fprintf(File, baseData);
    fclose(File);

    return;

}

void TwoMb(Mby){

    int i;
    for (i=1; i <= Mby; i++){

        Stuff(1);
        printf("%dMb out of %dMb\n", i, Mby);//add loading bar.
    }

}

main(){


    printf("Welcome to Data Stuffer!!!");

    printf("How many Mb?: ");
    scanf(" %d", &Mb);// was " %i" //the '&' before the Gb var tells the scanf function that it is not an array. the " $%f" means it is look for a float input. (not sure what the '$' part means)

    TwoMb(Mb);

    printf("Data Stuffed!");
    return 0;

}
