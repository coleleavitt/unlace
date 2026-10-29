void *__fastcall sub_5230(_QWORD *a1)
{
  void *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  void *result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp

  v2 = (void *)a1[536];
  *a1 = off_1BA08;
  if ( v2 )
  {
    delete_dirtree();
    operator delete(v2, 8u);
  }
  v3 = a1[544];
  a1[543] = off_1B960;
  if ( v3 )
    qfclose();
  v4 = a1[539];
  while ( v4 )
  {
    sub_5060(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  result = &unk_1BC90;
  v7 = a1 + 19;
  v8 = a1 + 7;
  *(v8 - 7) = &unk_1BC90;
  do
  {
    if ( *v7 )
    {
      v7[1] = 0;
      result = (void *)qfree();
    }
    v7 -= 3;
  }
  while ( v8 != v7 );
  return result;
}

