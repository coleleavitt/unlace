__int64 *__fastcall sub_18750(__int64 *a1, const char *a2, __int64 a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  void *v7; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  size_t v13; // r13
  size_t v14; // r13
  size_t v15; // rbp
  size_t v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)qvector_reserve();
    *a1 = (__int64)v7;
    a1[1] = v5;
    memmove(v7, a2, v6);
    *(_BYTE *)(*a1 + v6) = 0;
  }
  if ( *(_QWORD *)(a3 + 8) > 1u )
  {
    v9 = a1[1];
    v10 = (_BYTE *)*a1;
    v11 = a1[2];
    if ( v9 )
    {
      v12 = v9 + 1;
      v13 = v9 - 1;
      if ( v11 >= v9 + 1 )
      {
        a1[1] = v12;
        v10[v9] = 0;
        if ( v9 == 1 )
        {
LABEL_8:
          *(_BYTE *)*a1 = 58;
          v14 = *(_QWORD *)(a3 + 8);
          v15 = (a1[1] == 0) + a1[1] - 1;
          v16 = v15;
          if ( v14 )
            v16 = --v14 + v15;
          v17 = *a1;
          if ( a1[2] < v16 + 1 )
          {
            v19 = qvector_reserve();
            *a1 = v19;
            v17 = v19;
          }
          a1[1] = v16 + 1;
          *(_BYTE *)(v17 + v16) = 0;
          if ( v15 )
            memmove((void *)(*a1 + v14), (const void *)*a1, v15);
          memcpy((void *)*a1, *(const void **)a3, v14);
          return a1;
        }
LABEL_17:
        memmove((void *)(*a1 + 1), (const void *)*a1, v13);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v11 > 1 )
      {
        a1[1] = 2;
        v10[1] = 0;
        goto LABEL_8;
      }
      v13 = 0;
      v12 = 2;
    }
    v18 = qvector_reserve();
    *a1 = v18;
    a1[1] = v12;
    *(_BYTE *)(v18 + v13 + 1) = 0;
    if ( !v13 )
      goto LABEL_8;
    goto LABEL_17;
  }
  return a1;
}

