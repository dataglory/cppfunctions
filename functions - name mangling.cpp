//name mangling to enable type-safe linkage

//function square for int values
int square(int x) {
    return x * x;
}//end func sq

//function square for double values
double square(double y) {
    return y * y;
}//end func sq

//function that receives arguments of types
//int, float, char and int &
void nothing1(char a, int b, float &c, double &d) {
    //empty function body
}//end func nothing1

//function that receives arguments of types
//int, float, char and int &
int nothing2(char a, int b, float &c, double &d) {
    return 0;
}//end func nothing2

int main() {
}//end main
// Created by Talal on 16-Jul-25.