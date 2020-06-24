 #include<stdio.h>
 void a(void)
 {
     printf("a\n");
 }
 void e(void)
 {
     printf("e\n");
 }
 void i(void)
 {
     printf("i\n");
 }
 void o(void)
 {
     printf("o\n");
 }
 void u(void)
 {
     printf("u\n");
 }
 int main()
 {
     void (*ffp[5])(void)={a,e,i,o,u};
     char ch;
     //void (*fp)(void);
     printf("Enter your choice(n to quie).\n");
     while((ch=getchar())!='n')
     {
         switch(ch)
         {
         case 'a':
            (*ffp[0])();
            //fp=a;
            //(*fp)();
            break;
         case 'e':
            (*ffp[1])();
            break;
         case 'i':
            (*ffp[2])();
            break;
         case 'o':
            (*ffp[3])();
            break;
         case 'u':
            (*ffp[4])();
            break;
         }
     }
     return 0;
 }
