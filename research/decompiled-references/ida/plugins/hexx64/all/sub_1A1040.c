void *__fastcall sub_1A1040(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  signed int v7; // r12d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  void *v14; // [rsp+8h] [rbp-38h]

  if ( a4 == -1 )
    return nullptr;
  v7 = a4;
  v14 = (void *)operator new(0x40u);
  sub_1A0ED0((__int64)v14, *a1, a2, a3, v7, a5, a6);
  v9 = a1[3];
  v10 = a1[2];
  if ( a1[4] < (unsigned __int64)(v9 + 1) )
  {
    v12 = qvector_reserve((__int64)(a1 + 2), v10, v9 + 1, 8);
    a1[2] = v12;
    v10 = v12;
    v9 = a1[3];
  }
  *(_QWORD *)(v10 + 8 * v9) = v14;
  ++a1[3];
  return v14;
}

