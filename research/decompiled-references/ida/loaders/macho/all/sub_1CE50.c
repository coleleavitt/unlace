__int64 *__fastcall sub_1CE50(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  size_t v6; // r14
  __int64 v7; // rsi
  const void *v9; // r13
  void *v10; // rax
  size_t v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = *(_QWORD *)(a2 + 136);
  if ( v3 > 1 && a1 != (__int64 *)(a2 + 128) )
  {
    v9 = *(const void **)(a2 + 128);
    v10 = (void *)qvector_reserve();
    *a1 = (__int64)v10;
    a1[1] = v3;
    memmove(v10, v9, v3 - 1);
    *(_BYTE *)(*a1 + v3 - 1) = 0;
  }
  if ( (*(_BYTE *)(a2 + 364) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 160);
    if ( v4 > 1 )
    {
      v5 = a1[1];
      v6 = v4 - 1;
      if ( v5 <= 1 )
      {
LABEL_13:
        v11 = v6;
        if ( v5 )
        {
          --v5;
          v11 = v6 + v5;
          v4 = v6 + v5 + 1;
        }
        v12 = *a1;
        if ( a1[2] < v4 )
        {
          v14 = qvector_reserve();
          *a1 = v14;
          v12 = v14;
        }
        a1[1] = v4;
        *(_BYTE *)(v12 + v11) = 0;
        memcpy((void *)(v5 + *a1), *(const void **)(a2 + 152), v6);
        return a1;
      }
      v7 = *a1;
      if ( a1[2] < v5 + 1 )
      {
        v13 = qvector_reserve();
        *a1 = v13;
        v7 = v13;
      }
      a1[1] = v5 + 1;
      *(_BYTE *)(v7 + v5) = 0;
      *(_BYTE *)(*a1 + v5 - 1) = 58;
      v4 = *(_QWORD *)(a2 + 160);
      if ( v4 )
      {
        v6 = v4 - 1;
        if ( v4 != 1 )
        {
          v5 = a1[1];
          goto LABEL_13;
        }
      }
    }
  }
  return a1;
}

