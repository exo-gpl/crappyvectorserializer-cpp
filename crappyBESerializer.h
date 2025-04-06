
#ifndef crappyBESerializer_h
#define crappyBESerializer_h

#include <cstdlib>
#include <cstdint>
#include <vector>
#include <bit>

    struct bytevector {
        std::vector<std::byte> chunklet;
    };

    bytevector serialize16b (uint16_t input) {
        bytevector output;
        output.chunklet.reserve(2);
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 8));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input));
        return output;
    }

    bytevector serialize32b (uint32_t input) {
        bytevector output;
        output.chunklet.reserve(4);
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 24));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 16));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 8));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input));
        return output;
    }
    
    bytevector serialize64b (uint64_t input) {
        bytevector output;
        output.chunklet.reserve(8);
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 56));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 48));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 40));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 32));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 24));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 16));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input >> 8));
        output.chunklet.insert(output.chunklet.end(),(std::byte)(input));
        return output;
    }

#endif
