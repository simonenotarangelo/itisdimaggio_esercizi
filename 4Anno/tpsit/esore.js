var secondi = 12560;
console.log("In "+ secondi);

var ore = Math.floor(secondi / 3600);

var secondirimanenti = secondi % 3600;
var minuti = Math.floor(secondirimanenti / 60);

var secondi = secondirimanenti % 60;

console.log(" ci sono " +  ore + " ore, " + minuti + " minuti e " + secondi + " secondi.");
