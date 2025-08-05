

record currentrecord;
FILE* fptr;
fptr=fopen("C:\\Users\\pc11\\Desktop\\c dersleri\\dsedvzdfb\\data.txt","r");
if(fptr == NULL){
    return -1;
}
printf("\n\nýsým\t\t\tsoyýsým\t\t\ttelefon\n");
printf("--------\t\t\t---------\t\t\t---------\n\n");
while(!feof(fptr)){
    fscanf(fptr,"%s%s%s",currentrecord.name,currentrecord.lastname,currentrecord.phone);
    printf("%s\t\t\t",currentrecord.name);
    printf("%s\t\t\t",currentrecord.lastname);
    printf("%s\n",currentrecord.phone);
}


fclose(fptr);
return 0;
}
