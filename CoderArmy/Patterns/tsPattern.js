// ************************************************************************
// const pattern = () : any => {
//   let star: string = "";
//   for (let row: number = 1; row <= 5; row++) {
//     star += "* ";
//     console.log(star);
//   }
// };
var pattern = function () {
    var printPattern = "";
    for (var row = 1; row <= 5; row++) {
        printPattern += "".concat(row, " ");
        console.log(printPattern);
    }
};
pattern();
