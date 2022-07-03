let arr = ['blue', 'red', 1, 2, 3, true]
arr.reverse()
console.log(arr)

str1 = 'lol'
str2 = str1.repeat(2)
console.log(str2)

console.log(`This is a trial ${str1} ans ${str2}`)

console.log(7 === '7')
console.log(null == NaN)
console.log(null == undefined)

console.log(parseInt('123lol678'))
console.log(parseInt('dsd123lol678jad43'))
console.log(parseInt('123678'))

console.log("  jrkk  ".trim())

console.log(str1.indexOf('l'))
console.log(str1.replace('l', 'h'))
console.log("cdsbajknjsdvkasd".slice(2,5))
console.log("dsbcj".length)

str3 = "helloworld"
str4 = str3.slice(2,4)
console.log(str4)

console.log(arr)
arr.shift()
console.log(arr)
arr.unshift("4")
console.log(arr)

arr.pop()
console.log(arr)
arr.push('green', 'black')
console.log(arr)

arr2 = [1,4,9,45,12, 112]
arr2.sort()
console.log("*************")
console.log(arr2)
console.log("*************")

if(arr.includes(2))
    console.log("2 is present")
else
    console.log("2 is absent")

arr = arr.concat(arr2)
console.log(arr)

arr3 = [1,2,3,4]
arr3.splice(1,3,23,43)
console.log(arr3)

const arr4 = [23,56,89,67]
arr4.push(12,34)
arr4.unshift(13)
console.log(arr4)

// arr4 = [1,2,3]      //! Error
// console.log(arr4)

arr5 = ['red', 'blue']
arr6 = ['red', 'blue']
console.log(arr5 === arr6)
console.log(arr5 == arr6)

let nums = [1,6,2]
let numsCopy = nums
console.log(nums === numsCopy)
console.log(nums == numsCopy)

const nums2 = [7,5,88]
const nums2Copy = nums2
console.log(nums2 === nums2Copy)
console.log(nums2 == nums2Copy)