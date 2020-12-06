#include "stdio.h"
#include "stdlib.h"
#include "io.h"
#include "math.h"
#include "time.h"

#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct {
  ElemType data[MAXSIZE];
  int length;
}SequenceList;

// 创建
Status InitList(SequenceList *L) {
  L->length = 0;
  return OK;
}

// 线性表是否为空
Status ListEmpty(SequenceList L) {
  if (L.length == 0) {
    return TRUE;
  }else {
    return FALSE;
  }
}

// 清空线性表
Status ClearList(SequenceList *L) {
  L->length = 0;
  return OK;
}

// 线性表长度
int ListLength(SequenceList L) {
  return L.length;
}

// 获取指定位置元素
Status GetElem(SequenceList *L, int i, ElemType *e) {
  if (L->length == 0 || i < 1 || i > L->length) {
    return ERROR;
  }
  *e = L.data[i-1];
  return OK;
}

// 获取指定元素位置
int LocateElem(SequenceList L, ElemType e) {
  if (L.length == 0) {
    return 0;
  }
  int i;
  for (i = 0; i < L.length; i++) {
    if (L.data[i] == e) {
      break;
    }
  }
  if (i >= L.length) {
    return 0;
  }
  return i+1;
}

// 指定位置插入元素
Status InsertList(SequenceList *L, int i, ElemType e) {
  
}