module Formatter = {
  let spacer = text => {j| $text |j};
  let primary = text =>
    Chalk.italic(Chalk.bold(Chalk.red(spacer(String.uppercase(text)))));
  let secondary = text => Chalk.italic(spacer(text));
};

let name = Formatter.primary("Juliette Pretot")
let profession = Formatter.secondary("Software Engineer")
let email = Formatter.secondary("hi@juliette.sh")

Js.log({j|
$name
$profession
$email
|j})
