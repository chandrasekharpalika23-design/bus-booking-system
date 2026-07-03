#include <stdio.h>
int main() {
    int array[10][5] = {0},day,month,year,si,i,j,k,n,m,l,row,col,seat[30];
    char source[15],dest[15],name[15],m1[15],passname[100][15],passmob[100][15];

   printf("\t\t\t WELCOME TO THE TOURS AND TRAVELLS ");
    printf("\nEnter the Sorce code : ");
    fgets(source,sizeof(source),stdin);
    printf("\nEnter the Destination : ");
    fgets(dest,sizeof(dest),stdin);
    printf("\nEnter the date format in DD/MM/YY : ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("S.NO\tSERVICE NUMBER\t SOURCE\t\t  DESTINATION");
    printf("\n 1\t\t   1234\t\t\t KAKINADA\t\tTIRUPATI");
  printf("\n 2\t\t   4321\t\t\t KAKINADA\t\tVIJAYWADA");
  printf("\n 3\t\t   3550\t\t\t KAKINADA\t\tSHIRIDI");
  printf("\n 4\t\t   5001\t\t\t KAKINADA\t\tVISHKAHAPATNAM");
  printf("\n 5\t\t   3489\t\t\t KAKINADA\t\tSECUNDRABAD");
  printf("\n\nselect the Bus Service Number you want to Travell : ");
  scanf("%d",&si);
  
         printf("\nS.NO\tSERVICE NUMBER\t SOURCE\t\t  DESTINATION");
  if(si==1234)

        printf("\n\n 1\t\t   1234\t\t\t KAKINADA\t\tTIRUPATI");
  
   else if (si==4321)
       
        printf("\n\n 2\t\t   4321\t\t\t KAKINADA\t\tVIJAYWADA");
 
  else if(si==3550)
     
        printf("\n\n 3\t\t   35501\t\t\t KAKINADA\t\tSHIRDI");
  
  else if(si==5001)
       
        printf("\n\n 4\t\t   5001\t\t\t KAKINADA\t\tVISHAKAHPATNAM");
  
   else if (si==3489)
       
        printf("\n\n 5\t\t   3489\t\t\t KAKINADA\t\tSECUNDRABAD");
  
  else 
      printf("\n\ninvalid service number");
      printf("\n\t\tBUS LAYOUT\n");
      for(i=0;i<10;i++){
          for(j=0;j<2;j++){
              printf("\u2B1C");
          }
          
          printf("  ");
          for(j=0;j<3;j++){
              printf("\u2B1C");
          }
          printf("\n");
      }
     while(1){
      printf("\nNumber of seats want to Book : ");
      scanf("%d",&m);
      
      if(m<0||m>50){
          printf("\nInvalid number is entered. please enter between 1 and 50 only");
      }
      else{
          break;
      }
     }
    
      
     for(i=0;i<m;i++){
         while (1) {
             printf("\nEnter Seat Number %d (1 - 50) : ",i+1);
             scanf("%d",&n);
             if(n<1||n>50){
                 printf("\nInvalid seat Number. please Enter seat Number between 1 and 25 only. ");
             }
              
             else if(array[(n-1)/5][(n-1)]%5==1){
                 printf("\nThe seat is already selected.please select another seat");
             }
             else {
                 array[(n-1)/5][(n-1)%5]=1;
                 seat[i]=n;
                 break;
             }
         }
     }
     printf("\nEnter Passenger Details");
     for(i=0;i<m;i++){
              printf("Enter passenger %d Name : ",i+1);
              scanf("%s",passname[i]);
              printf("Enter Mobile Number :  ",i+1);
              scanf("%s",passmob[i]);
         }
             for(i=0;i<10;i++){
             for(j=0;j<2;j++){
                 if(array[i][j]==0)
                 {
                     printf("\u2B1C");
                 }
                 else{
                     printf("\u2B1B");
                 }
             }
             printf("  ");
             for(j=2;j<5;j++){
                 if(array[i][j]==0){
                 printf("\u2B1C");
                 }
                 else
                 {
                     printf("\u2B1B");
                 }
             }
                 printf("\n");
             }
            printf("\n\tBooking Deatils ");
             printf("\ns.no\t NAME\t\t\tMOBILE NO\t\t\tSEAT NO");
             for(i=0;i<m;i++){
                 printf("\n %d\t\t%s\t\t\t%s\t\t      %d",i+1,passname[i],passmob[i],seat[i]);
             }
    return 0;
}