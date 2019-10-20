/*
Check if the given string is a correct time representation of the 24-hour clock.

Example

For time = "13:58", the output should be
validTime(time) = true;
For time = "25:51", the output should be
validTime(time) = false;
For time = "02:76", the output should be
validTime(time) = false.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string time

A string representing time in HH:MM format. It is guaranteed that the first two characters, as well as the last two characters, are digits.

[output] boolean

true if the given representation is correct, false otherwise.
*/
bool validTime(std::string time) {
    cout<<(time[0] <= '2' && time[1] <= '4' )<<" "<< (time[3] <= '5' && time[4] <= '9' );

    return ( ( ( time[0] <= '1' ) ? time[1] <= '9' :
               ( time[0] == '2' )?  time[1] <= '3' : false  )

            && (time[3] <= '5' && time[4] <= '9' ));
}
