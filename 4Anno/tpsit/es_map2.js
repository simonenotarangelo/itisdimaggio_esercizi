const prompt=require ('prompt-sync')();

//esercizi map
//2

let m=new Map([["Martella",10],["Cisternino",2]]);
console.log(m);

prompt("Premi invio per delete")

m.delete("Martella");
console.log(m);