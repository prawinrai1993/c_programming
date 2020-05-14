/*DEBUG: x=4
DEBUG:y=3.140000
DEBUG:ch=A*/
#define DEBUG(a,fmt) printf("DEBUG: "#a" ="#fmt"\n",a)
main()
{
int x=4;
float a=3.14;
char ch='A';

DEBUG(x,%d);
DEBUG(a,%f);
DEBUG(ch,%c);


}
