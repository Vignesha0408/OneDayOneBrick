//Primitive datatypes
let 
n1,    //undefined
n2=8574589875485874n,  //bigint
n3="hello",   //string
n4='world',
n5=85,         //number
n6=Symbol("id"),       //symbol
n7=true,     //boolean
n8=false,
n9=null        //null

console.log(`Examples:undefined=${n1} bigint=${n2} string=${n3}  number=${n5}  symbol=${n6==n6} boolean=${n7} null=${n9} `)


//non premitives 
let dictionaries ={
    Afor : "apple",
    Bfor: "Ball",
    Cfor: "Cat"
}
console.log(dictionaries.Afor)

let arr=["cat","dog","ball",5]
console.log(arr[1])

function hello()
{
   console.log("hello world");
}
hello()