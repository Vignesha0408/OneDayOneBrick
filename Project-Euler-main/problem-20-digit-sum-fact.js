
function factorial(x)
{
  let ans=1n
  for(let i=1n;i<=BigInt(x);i++)
    ans=ans*i
  return ans;
}
function digitsum(y)
{
  let ans=0n
  while(y>0n)
  {
    ans=ans+y%10n
    y=y/10n
  }
  return ans
}


function sumFactorialDigits(z) {
  return Number(digitsum(factorial(z)));
}

console.log(sumFactorialDigits(100))