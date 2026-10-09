class BitManipulation {
    getBit(n, k) {
        return (n >> k) & 1;
    }

    setBit(n, k) {
        return (1 << k) | n;
    }

    clearBit(n, k) {
        return n & ~(1 << k);
    }

    toggleBit(n, k) {
        return n ^ (1 << k);
    }

    isPowerOfTwo(n) {
        return n > 0 && (n & (n - 1)) === 0;
    }

    countSetBits(n) {
        let count = 0;

        while (n > 0) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
}

const b = new BitManipulation();

let n = 10;
let k = 1;

console.log("Get Bit:", b.getBit(n, k));
console.log("Set Bit:", b.setBit(n, k));
console.log("Clear Bit:", b.clearBit(n, k));
console.log("Toggle Bit:", b.toggleBit(n, k));
console.log("Is Power of Two:", b.isPowerOfTwo(n));
console.log("Count Set Bits:", b.countSetBits(n));