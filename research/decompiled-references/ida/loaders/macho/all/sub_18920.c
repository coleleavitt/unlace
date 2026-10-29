__int64 *__fastcall sub_18920(__int64 *a1, const char *a2, __int64 a3)
{
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  void *v7; // rax
  __int64 v9; // rax
  _BYTE *v10; // rsi
  size_t v11; // r13
  __int64 v12; // rbp
  const char *v13; // rbp
  char *v14; // rax
  size_t v15; // rax
  size_t v16; // r14
  __int64 v17; // rsi
  size_t v18; // r12
  unsigned __int64 v19; // rax
  size_t v20; // r15
  unsigned __int64 v21; // r13
  _BYTE *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax

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
    if ( v9 )
    {
      v10 = (_BYTE *)*a1;
      v11 = v9 - 1;
      v12 = v9 + 1;
      if ( a1[2] >= (unsigned __int64)(v9 + 1) )
      {
        a1[1] = v12;
        v10[v9] = 0;
        if ( v9 == 1 )
        {
LABEL_8:
          *(_BYTE *)*a1 = 95;
          v13 = *(const char **)a3;
          if ( *(_QWORD *)(a3 + 8) )
          {
            v14 = strrchr(*(const char **)a3, 46);
            if ( v14 )
              v13 = v14 + 1;
          }
          if ( !v13 )
            return a1;
          v15 = strlen(v13);
          v16 = a1[1];
          v17 = *a1;
          v18 = v15;
          v19 = a1[2];
          if ( v16 )
          {
            --v16;
            v20 = v18 + v16;
            v21 = v18 + v16 + 1;
            if ( v19 >= v21 )
              goto LABEL_14;
          }
          else
          {
            v21 = v18 + 1;
            if ( v19 >= v18 + 1 )
            {
              a1[1] = v21;
              *(_BYTE *)(v17 + v18) = 0;
LABEL_16:
              memmove((void *)*a1, v13, v18);
              return a1;
            }
            v20 = v18;
          }
          v24 = qvector_reserve();
          *a1 = v24;
          v17 = v24;
LABEL_14:
          a1[1] = v21;
          *(_BYTE *)(v17 + v20) = 0;
          if ( v16 )
            memmove((void *)(*a1 + v18), (const void *)*a1, v16);
          goto LABEL_16;
        }
LABEL_19:
        memmove((void *)(*a1 + 1), (const void *)*a1, v11);
        goto LABEL_8;
      }
    }
    else
    {
      v22 = (_BYTE *)*a1;
      if ( (unsigned __int64)a1[2] > 1 )
      {
        a1[1] = 2;
        v22[1] = 0;
        goto LABEL_8;
      }
      v11 = 0;
      v12 = 2;
    }
    v23 = qvector_reserve();
    *a1 = v23;
    a1[1] = v12;
    *(_BYTE *)(v23 + v11 + 1) = 0;
    if ( !v11 )
      goto LABEL_8;
    goto LABEL_19;
  }
  return a1;
}

