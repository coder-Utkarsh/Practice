const midterms = {
    john : 'A+',
    smith : 'B+',
    kevin : 'B-',
    amy : 'A',
    amy : 'A+'
};

console.log(midterms["amy"])
console.log(midterms.amy)

midterms.aman = 'B'
console.log(midterms)

midterms["sahil"] = 'C'
console.log(midterms)

let str = 'aman'
console.log(midterms[str])
// console.log(midterm.str)   //! Error

console.log(Object.keys(midterms))
console.log(Object.values(midterms))
console.log(Object.entries(midterms))