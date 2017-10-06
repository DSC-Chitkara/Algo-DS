public class BinarySum {

    public static void main(String[] args) {
        // The two input Strings, containing the binary representation of the two values:
        String input1 = "1010";
        String input2 = "10";

        // Convert the binary representation to int values
        int intValueOfInput1 = Integer.parseInt(input1, 2);
        int intValueOfInput2 = Integer.parseInt(input2, 2);
        int sum = intValueOfInput1 + intValueOfInput2;

        // Convert back to binary string
        String output = Integer.toBinaryString(sum);
        System.out.println(output);
    }
}
