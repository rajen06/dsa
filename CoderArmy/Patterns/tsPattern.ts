// ************************************************************************

const pattern = () : any => {
  let star: string = "";
  for (let row: number = 1; row <= 5; row++) {
    star += "* ";
    console.log(star);
  }
};

pattern();