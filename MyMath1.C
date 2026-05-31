void Menu() {
    
   printf("\n------------\n[Menu]\n------------\n1-Min value\n2-Max value\n3-Find square value\n4-Find cube value\n5-Absolute value\n");
    

}


int min(int x ,int y) {

    if (x<y) {
        
        return x;
        
    } else {

        return y;

    }

}



int max(int x,int y){ 

     if (x>y) {

        return x;

    } else {

        return y;

    }

}


int square(int x) {

    return (x*x);

}    


int cube(int x) { 

    return (x*x*x);

}


int absolute(int x) { 

    if (x<0) {

        return (x*-1);

    } else {

        return x;

    }
    
}
