function ehFibonacci(numero) {
  let a = 0;
  let b = 1;

  if (numero === 0 || numero === 1) {
    return `${numero} pertence à sequência de Fibonacci.`;
  }

  while (b < numero) {
    let temp = b;
    b = a + b;
    a = temp;
  }

  if (b === numero) {
    return `${numero} pertence à sequência de Fibonacci.`;
  } else {
    return `${numero} não pertence à sequência de Fibonacci.`;
  }
}

console.log(ehFibonacci(6)); // exemplo de número que não está na sequência de fibonacci
console.log(ehFibonacci(8)); // exemplo de número que está na sequência de fibonacci
