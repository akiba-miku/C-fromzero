#include <iostream>
#include <fstream>
#include <bitset>

int main() {
    // 1. 写入二进制文件
    std::ofstream outfile("data.bin", std::ios::binary);
    unsigned char data = 0b10110010; // 一个字节
    outfile.write(reinterpret_cast<char*>(&data), sizeof(data));
    outfile.close();

    // 2. 读取并用 bitset 解析
    std::ifstream infile("data.bin", std::ios::binary);
    unsigned char buffer;
    if (infile.read(reinterpret_cast<char*>(&buffer), sizeof(buffer))) {
        std::bitset<8> myBits(buffer);
        std::cout << "读取到的二进制位: " << myBits << std::endl;
        
        if (myBits.test(7)) {
            std::cout << "最高位是 1" << std::endl;
        }
    }
    return 0;
}