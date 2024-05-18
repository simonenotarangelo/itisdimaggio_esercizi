let eurolira = 1936.27;

let eurodollari = 1.18;

let soldieuro = 1000; 

let soldilire = soldieuro * eurolira;
let soldidollari = soldieuro * eurodollari;

console.log("Saldo in euro: ",soldieuro," EUR");
console.log("Saldo in lire: " + soldilire + " ITL");
console.log("Saldo in dollari: $" + soldidollari);