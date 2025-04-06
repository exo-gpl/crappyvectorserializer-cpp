This is a crappy serializer to std::vector<std::byte> that I wrote, given that I cannot find any.
This code simply takes in uints and returns a struct that contains just a byte vector containing the bytes in big-endian order.

This should be independent of little or big endian architecture, though I have only tested on x86 with GCC. I use only C++ 23 standards in my work and compile at that level.
