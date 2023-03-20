const exemplo2 = array =>{
let size = array.length()
for(let i = 0; i < size; i++){
  for(let j = 0; j < size; j++){
    if( i != j && array[i]==array[j]){
      return true
    }
  }
}
return false
}

