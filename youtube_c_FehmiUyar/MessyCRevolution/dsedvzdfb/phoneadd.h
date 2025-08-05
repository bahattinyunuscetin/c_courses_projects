int phoneadd(){
record newrecord;
FILE* fptr;
fptr=fopen("C:\\Users\\pc11\\Desktop\\c dersleri\\dsedvzdfb\\data.txt","a");
if(fptr == NULL){
    return -1;
}
printf("\n\n");
printf("isim giriniz max 2o karakter");
scanf("%s",newrecord.name);
printf("soyisim giriniz");
scanf("%s",newrecord.lastname);
printf("tel giriniz max 2o karakter");
scanf("%s",newrecord.phone);
fprintf(fptr,"\n%s %s %s",newrecord.name,newrecord.lastname,newrecord.phone);
fclose(fptr);
return 0;
}
