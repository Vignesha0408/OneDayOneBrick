class student{
    constructor(name,marks,title){
        this.name=name
        this.marks=marks
        this.title=title
    }
    display()
    {
        console.log(`name: ${this.name} marks: ${this.marks} title:${this.title}`)
    }
}

var s1=new student("Vignesh",100,"Mathematics")
s1.display()
console.log(s1.name)