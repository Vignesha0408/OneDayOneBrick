//postfix and prefix
let result=0,op,a,b;
let stack=[]
function postfix_evaluate(arr)
{
    for(let i=0;i<arr.length;i++)
        if(arr[i]>= 0 && arr[i] <= 9)
            stack.push(arr[i])
        else
            {
            op=arr[i]
            switch(op)
            {
                case '+':result = stack.pop() + stack.pop()
                         stack.push(result)
                         break;
                case '-':a=stack.pop();b=stack.pop()
                        result =  b-a;
                         stack.push(result)
                         break;
                case '*':result = stack.pop() * stack.pop()
                         stack.push(result)
                         break;             
            }
        }
}
postfix_evaluate([5,4,'+',3,'-',1,'*'])
console.log(stack.pop())