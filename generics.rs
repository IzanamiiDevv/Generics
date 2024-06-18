fn largest<T: PartialOrd + Copy>(a: T, b: T) -> T {
    if a > b {
        return a;
    } else {
        return b;
    }
}

fn add<T: std::ops::Add<Output = T>>(a: T, b: T) -> T {
    return a + b;
}

fn main() {
    let number1 = 10;
    let number2 = 20;
    let result = largest(number1, number2);
    println!("The largest number is {}", result);

    let result = add(number1, number2);
    println!("The sum of the numbers is {}", result);

    let char1 = 'a';
    let char2 = 'b';
    let result = largest(char1, char2);
    println!("The largest character is {}", result);

    let float1 = 1.1;
    let float2 = 2.2;
    let result = add(float1, float2);
    println!("The sum of the floats is {}", result);
}