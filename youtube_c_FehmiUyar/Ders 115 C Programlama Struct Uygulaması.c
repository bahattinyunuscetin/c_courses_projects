#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct candidateinfo{
char* name;
char* lastname;
int age;
int note;
float average;
};
struct interview{
char* interviewer;
char* interviewdate;
struct candidateinfo candidate;
int interviewnote;

};
int main()
{
    struct interview y;
    y.interviewer="muslum gun";
    y.interviewdate="16.84.2222";
    y.interviewnote=89;

    y.candidate.name="ceren";
    y.candidate.lastname="vbsdgt";
     y.candidate.age=25;
      y.candidate.note=86;
       y.candidate.average=2.65;

       printf("mulakat� yapan:%s\n",y.interviewer);
       printf("mulakat� tarihi:%s\n",y.interviewdate);
       printf("mulakat notu:%d\n\n",y.interviewnote);

       printf("aday�n adi:%s\n",y.candidate.name);
       printf("aday�n adi:%s\n",y.candidate.lastname);
       printf("aday�n adi:%d\n",y.candidate.age);
       printf("aday�n adi:%d\n",y.candidate.note);
       printf("aday�n adi:%2f\n",y.candidate.average);
        return 0;
}
