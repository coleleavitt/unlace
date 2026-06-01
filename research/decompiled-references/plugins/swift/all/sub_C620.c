__int64 *__fastcall sub_C620(__int64 *a1, int *a2, const char *a3)
{
  _WORD *v4; // rax
  unsigned __int64 v5; // r12
  size_t v6; // r14
  size_t v7; // rax
  __int64 v8; // r12
  size_t v9; // r13
  size_t v10; // r14
  __int64 v11; // rsi
  __int64 v13; // r13
  size_t v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = (_WORD *)qvector_reserve(a1, 0, 3, 1);
  *a1 = (__int64)v4;
  a1[1] = 3;
  *v4 = 29476;
  *(_BYTE *)(*a1 + 2) = 0;
  sub_C3D0((__int64)&src, a2);
  v5 = v19;
  if ( v19 )
  {
    v6 = v19 - 1;
    if ( v19 != 1 )
    {
      v13 = a1[1];
      v14 = v19 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v6 + v13;
        v5 = v19 + v13;
      }
      v15 = *a1;
      if ( a1[2] < v5 )
      {
        v17 = qvector_reserve(a1, v15, v5, 1);
        *a1 = v17;
        v15 = v17;
      }
      a1[1] = v5;
      *(_BYTE *)(v15 + v14) = 0;
      memcpy((void *)(v13 + *a1), src, v6);
    }
  }
  if ( src )
  {
    v19 = 0;
    qfree(src);
  }
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = a1[1];
    v9 = v7;
    v10 = v7;
    if ( v8 )
    {
      --v8;
      v10 = v7 + v8;
    }
    v11 = *a1;
    if ( a1[2] < v10 + 1 )
    {
      v16 = qvector_reserve(a1, v11, v10 + 1, 1);
      *a1 = v16;
      v11 = v16;
    }
    a1[1] = v10 + 1;
    *(_BYTE *)(v11 + v10) = 0;
    memmove((void *)(v8 + *a1), a3, v9);
  }
  return a1;
}
