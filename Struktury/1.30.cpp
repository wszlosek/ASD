#include <iostream>
#include <vector>

class Struktura{

    int s;
    int minimum;
    std::vector<int> list;
    std::vector<int> min;

public:

    Struktura(){

        s = -1;
        minimum = -1;
    }

    void push(int v){ // O(1)

        if(list.size() == 0 || s+1 >= list.size()){
            list.push_back(v);
            s++;
        }

        else{
            s++;
            list[s] = v;
        }

        if(min.size() == 0){
            min.push_back(s);
            minimum++;
        }

        else {
            if(minimum < 0 || v < list[min[minimum]]){
                if(minimum + 1 < min.size()) {
                    minimum++;
                    min[minimum] = s;
                }

                else{
                    min.push_back(s);
                    minimum++;
                }
            }
        }
    }

    void pop(){ // O(1)

        if(s < 0)
            return;
        s -= 1;
    }

    void uptomin(){ // O(1)

        s = min[minimum];
        minimum--;
        s--;
    }

    void print(){

        for(int i = 0; i < s+1; i++){
            std::cout << list[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {

    Struktura q = Struktura();

    q.push(5);
    q.push(3);
    q.push(6);
    q.print();
    q.uptomin();
    q.print();
    q.push(10);
    q.print();
    q.pop();
    q.uptomin();
    q.push(0);
    q.print();

    return 0;
}
