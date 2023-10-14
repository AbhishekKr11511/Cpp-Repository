const prompt = require("prompt-sync")();


let str = prompt("Enter a palindrom number : ");
let strArray = str.split("");
    console.log(strArray);
    // console.log(strArray.reverse());
    var len = strArray.length;
    console.log(len);

    let array1 = [];
    let array2 = [];
    let remainder = len%2
    console.log(remainder);

    if(remainder == 0){
        for(let i = 0; i<len/2; i++){
            array1.push(strArray[i])
        }
        for(let i = len/2; i<len; i++){
            array2.push(strArray[i])
        }
        console.log(array1);
        console.log(array2.reverse());
        if(array1.toString() == array2.toString()){
            console.log("The string is Palindrom");
        }
        else{
            console.log("Not a Palindrom")
        }
    }
    else if (remainder == 1){
        for(let i = 0; i < len/2 - 1; i++){
            array1.push(strArray[i])
        }
        for(let i = (len+1)/2 ; i < len ; i++){
            array2.push(strArray[i])
        }
        console.log(array1);
        console.log(array2.reverse());
        if(array1.toString() == array2.toString()){
            console.log("The string is Palindrom");
        }
        else{
            console.log("Not a Palindrom")
        }
    }
    else{
        console.log("Not Valid")
    }