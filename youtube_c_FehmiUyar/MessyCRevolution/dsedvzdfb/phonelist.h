int phonesearch(char* ptsearch){
record currentrecord;
int i=0;
FILE* fptr;
fptr=fopen("C:\\Users\\pc11\\Desktop\\c dersleri\\dsedvzdfb\\data.txt","r");
if(fptr == NULL){
    return -1;
}
printf("\n\isim\t\t\tsoyisim\t\t\telefon\n");
printf("--------\t\t\t---------\t\t\t---------\n\n");
while(!feof(fptr)){
    fscanf(fptr,"%s%s%s",currentrecord.name,currentrecord.lastname,currentrecord.phone);
    if(!strcmp(ptsearch,currentrecord.name)){
        printf("%s\t\t\t",currentrecord.name);
            printf("%s\t\t\t",currentrecord.lastname);
        printf("%s\n",currentrecord.phone);
i++;


    }
}


fclose(fptr);
return i;
}
