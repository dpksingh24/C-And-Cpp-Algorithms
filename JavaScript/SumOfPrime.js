function prime( num)
{
    var sum = 0;
    var j, i, flag;
    console.log("prime no are:");
    for (i = 2; i < num; ++i)
    {
        flag = 0;
        for (j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            console.log(i);
        if (flag == 0)
            sum = sum + i;
    }
    console.log("sum: "+ sum);
}
var num = 10;
prime(num);
