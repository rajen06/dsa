// ************************************************************************

// const pattern = () : any => {
//   let star: string = "";
//   for (let row: number = 1; row <= 5; row++) {
//     star += "* ";
//     console.log(star);
//   }
// };

const pattern = () => {
  let printPattern : string = "";
  for (let row : number = 1; row <= 5; row++) {
    printPattern += `${row} `;

    console.log(printPattern);
  }
};

pattern();