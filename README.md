# std::vector<bool> Specialization: A Source of Subtle Bugs in C++

This repository demonstrates a common, yet often overlooked, source of bugs in C++: the specialization of `std::vector<bool>`.  Unlike other `std::vector` instances, `std::vector<bool>` is specialized for memory efficiency.  However, this specialization deviates from the standard `std::vector` interface in ways that can lead to unexpected behavior and subtle errors.

The core issue is that `std::vector<bool>` doesn't store individual `bool` values directly; instead, it uses bit manipulation for compact storage.  This optimization impacts how elements are accessed and manipulated, potentially leading to unexpected results and compilation issues.

**Example Bug:**
The provided `bug.cpp` demonstrates a scenario where accessing elements of `std::vector<bool>` directly using the `[]` operator may lead to problems. It shows how simple indexing might not work as expected because of the underlying bit manipulation used for storage.

**Solution:**
The `bugSolution.cpp` provides a solution using `std::vector<bool>::operator[]` which, although still subject to the bit manipulation in the underlying implementation, makes it clearer that you are using a specialized implementation.   A better approach is to avoid `std::vector<bool>` altogether, and to use `std::vector<char>` or `std::vector<int>` instead, as discussed further in the detailed documentation.