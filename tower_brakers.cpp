int towerBreakers(int n, int m) {
if (n == 1){
    return 1;
}
if (m == 1){
    return 2;  
}

if (n%2 == 0){
    return 2;
}
else{
    return 1;
}
}
