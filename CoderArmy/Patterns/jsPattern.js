// ************************************************************************
// const pattern =  () => {
//     let star = "";
//     for (let row = 1; row <= 5; row++) {
//         star += "* ";
//         console.log(star);
//     }
// };

const pattern = () => {
  let printPattern = "";
  for (let row = 1; row <= 5; row++) {
    printPattern += `${row} `;

    console.log(printPattern);
  }
};
pattern();
