
function genericFunction(number){
  var count
  for(let i = number/2; i <= number; i++){
    for(let j = 1; j + number/2 <= number; j++){
      for(let k = 1; k <= number; k = k*2){
        count++
      }
    }
  }
  return 1
}

