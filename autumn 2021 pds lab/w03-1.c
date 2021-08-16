#include <stdio.h>

int main(){
    char type;
    float weight, bprice, gst;
    
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c", &type);

    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%f", &weight);

    if(type=='n'){
      bprice = weight*1100;
      gst = 0.20*bprice;
    }
    else{
      bprice = weight*780;
      gst = 0.15*bprice;
    }

    printf("------------------------\n");
    printf("Base price =  %10.2f\n", bprice);
    printf("GST =         %10.2f\n", gst);
    printf("Total price = %10.2f\n", bprice+gst);
    printf("------------------------\n");

    return 0;
}


