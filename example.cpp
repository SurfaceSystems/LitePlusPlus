#include "lib/outstream.cpp"
#include "lib/instream.cpp"
#include "lib/arrays.cpp"
#include "lib/string.cpp"
#include "lib/math.cpp"
#include "lib/file.cpp"
#include "lib/logical.cpp"
#include "lib/initializable.cpp"
#include "lib/chars.cpp"
#include "lib/unicode.cpp"
#include "lib/folders.cpp"

int main() {
    initialize("example_file", "mkdir holaMundo", true);
    printStr("Hello World!", true);
    pause();
    clear();
    printStr("Whats your name?: ", false);
    String name = inputStr();
    printStr("\nHello, " + name, true);
    String myArr[4] = {"Tomate", "Queso", "Leche", "Naranja"};    
    printBoo(findStr(myArr, "Holaa"), true);
    printStr(scanStr(myArr, ','), true);
    // string != String != std::string != string[] != String[] != std::string[]
    name = add("lite.atencionalcliente", "@gmail.com");
    printStr(quitEnd("lite.atencionalcliente", name.length()), true);
    printBoo(contains("Hola Mundo", "Hola"), true);
    printStr(readFile("myText.txt"), true);
    writeFile("myText.txt", "Holjdiushuydfv");
    appendFile("myText.txt", "HolaMundo");
    printInt(AND(0.1,5),true);
    printInt(NOT(1),true);
    printInt(calc(rep(dou(2), 4) + mul(sum(1,32), sub(78,87))), true);
    createFile("kdlkf.txt");
    deleteFile("kdlkf.txt");
    printCha(int__char(100), true);
    initUnicode();
    printCha(__unicode[234], true);
    createFolder("MyFolder");
    getDirectory();
    deleteFolder("MyFolder");
    return 0;
}