class myclass{
    constructor(name,usn)
    {
        this.name=name;
        this.usn=usn;
    }
}

let ob1 = new myclass("Vignesh",19);
console.log(`Hello ${ob1.name},, you're ${ob1.usn}`);