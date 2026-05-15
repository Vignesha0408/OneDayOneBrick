//block scope let
let x=5
{
    let x=6
}
console.log(`${x}`)
// prints x= 5 

//function scope var
var y=5
{
    var y=6
}
console.log(`${y}`)
// prints x= 6

const z=5
{
        const z=50
        console.log(`${z}`)
}
console.log(`${z}`)