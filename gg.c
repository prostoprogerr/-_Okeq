long zeros(long n) {
  
    int f = 1, u = 0;
    for(int i = 2; i <= n; i++)
         f *= i;
    while(f % 10 == 0)
      {
      u++;
      f = f % 10;
    }
  return u;
}
