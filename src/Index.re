module Formatter = {
  let spacer = text => {j| $text |j};
  let primary = text =>
    text->String.uppercase->spacer->Chalk.red->Chalk.bold->Chalk.italic;
  let secondary = text => text->spacer->Chalk.italic;
};

let name = Formatter.primary("Juliette Pretot");
let profession = Formatter.secondary("Software Engineer");
let email = Formatter.secondary("hi@juliette.sh");

Js.log({j|
$name
$profession
$email
|j});
