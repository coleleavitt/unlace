_QWORD *__fastcall sub_1DF70(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  v2 = a1[67];
  while ( v2 )
  {
    sub_1D880(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  a1[67] = 0;
  a1[68] = a1 + 66;
  a1[69] = a1 + 66;
  a1[70] = 0;
  return a1 + 66;
}

