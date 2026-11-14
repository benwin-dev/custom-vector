class MyVector {
    public:
        int counter;
        MyVector (/*element type, list of elements*/) {
            int* startPtr = new int();
        }
        int find(int i) {
            int* newPtr = startPtr + i;
            return &newPtr;
        }

        int size () {
            return counter;
        }

        void append(int ele) {
            // startPtr + counter = ele
        }

        void deleteLast() {
            // startPtr + counter - this val should be deleted
        }

        void destroy() {
            // clear everything
        }
}