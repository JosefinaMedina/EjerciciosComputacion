int main(){int count = 10, *temp, sum = 0;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
printf("count=%d, *temp=%d, sum=%d\n",count,*temp,sum);
return 0;
    
}

/*El resultado es count=20 temp =20 sum=20*/