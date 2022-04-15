// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private :
  T arr[5];
  int ls2;
  int f1;
 public :
  TPQueue() :f1(0), ls2(0) { }
  void push(T x) {
  T value = x;
  int temp = 0;
  for (int i = f1; i < size; i++) {
    temp = ls2++ - 1;
  while ((temp >= f1) && (arr[temp % size].prior < value.prior)) {
    if (arr[temp % size].prior == value.prior) {
      arr[(temp++) % size] = value;
      break;
    }
    arr[(temp + 1) % size] = arr[temp % size];
    temp--;
  }
  arr[(temp++ + 1) % size] = value;
  break;
  }
  }
  T pop() {
  return (arr[(f1++) % size]);
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
