// func1('rahul');

function func1(name){
    console.log('hi ' + name);
}

function CallTwice(func){
    func("rahul");
    func("rakul");
}

func2();

function func2(){

    let arr = [1,2,3,4,5];
    const el = 0;
    for (let i = 0; i < arr.length; i++) {
        console.log(arr[i]);
    }
    // console.log(i);    //! Error, diff between let and var.
    for (var j = 0; j < arr.length; j++) {
        console.log(arr[j]);
        console.log(el);
    }
    console.log("j = " +j);
}

CallTwice(func1);

const add = function(a, b){
    return a+b;
}

let sum = add(3,4);
console.log(sum);

function myfunc(){
    return function(str){
        console.log('This is inner function ' +str);
    }
}

const x = myfunc();
x('Arg');

function func3(){
    arr2 = [21,34,645,12];

    for(let el of arr2){
        process.stdout.write(`${el} `);
    }
    console.log();
}

func3();

const obj = {
    a: "ab",
    b: "bc",
    c: "ca"
}

for(let i in obj){
    console.log(`${i} : ${obj[i]}`);
}

const myMath = {
    square: function(x){
        return x**2;
    },
    cube: function(x){
        return x**3;
    }
}
console.log(myMath.cube(3));
console.log(myMath.square(3));

//! Shorter way:

const myMath2 = {
    sq(num){
        return num**2;
    },
    cube(num){
        return num**3;
    }
}

console.log(myMath2.sq(4));

const Man = {
    name: 'Raj',
    greet(greeting){
        console.log(`${this.name} says ${greeting}`)
    }
}
Man.greet('Hello');