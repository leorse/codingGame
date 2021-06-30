use std::io;

macro_rules! parse_input {
    ($x:expr, $t:ident) => ($x.trim().parse::<$t>().unwrap())
}

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
fn main() {
    let mut input_line = String::new();
    io::stdin().read_line(&mut input_line).unwrap();
    let n = parse_input!(input_line, i32); // the number of temperatures to analyse
    let mut inputs = String::new();
    io::stdin().read_line(&mut inputs).unwrap();
    let mut valNeg:i32 = -6000;
    let mut valPos:i32 = 6000;
    let mut valFinal:i32 = 0;
    for i in inputs.split_whitespace() {
        let t = parse_input!(i, i32);
        eprintln!("Debug message...{}", t);
        

        if t < 0 && t > valNeg 
        {
            valNeg = t;
        }
        if t > 0 && t < valPos 
        {
            valPos = t;
        }
        if(valPos == -valNeg || valPos < -valNeg)
        {
            valFinal = valPos;
        }
        else
        {
            valFinal = valNeg;
        }
        eprintln!("Debug message...{} {} {}", valNeg, valPos, valFinal);
    }

    // Write an answer using println!("message...");
    // To debug: eprintln!("Debug message...");
println!("{}", valFinal);
}
