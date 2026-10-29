__int64 *__fastcall sub_13C80(__int64 *a1, __int64 a2, char a3, const char *a4, __int64 a5)
{
  void *v8; // rax
  size_t v9; // rax
  __int64 v10; // r14
  size_t v11; // r15
  size_t v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rbp
  const char *v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  unsigned __int64 v24; // rbx
  size_t v25; // r13
  __int64 v26; // rbp
  size_t v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-68h]
  size_t v33; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a3 )
  {
    v8 = (void *)qvector_reserve(a1, 0, 13, 1);
    *a1 = (__int64)v8;
    a1[1] = 13;
    qmemcpy(v8, "import func ", 12);
    *(_BYTE *)(*a1 + 12) = 0;
  }
  else
  {
    v19 = qvector_reserve(a1, 0, 6, 1);
    *a1 = v19;
    a1[1] = 6;
    *(_DWORD *)v19 = 1668183398;
    *(_BYTE *)(v19 + 4) = 32;
    *(_BYTE *)(*a1 + 5) = 0;
  }
  if ( a4 )
  {
    v9 = strlen(a4);
    v10 = a1[1];
    v11 = v9;
    v12 = v9;
    if ( v10 )
    {
      --v10;
      v12 = v9 + v10;
    }
    v13 = *a1;
    v14 = v12 + 1;
    if ( a1[2] < v12 + 1 )
    {
      v33 = v12;
      v32 = v12 + 1;
      v29 = qvector_reserve(a1, v13, v14, 1);
      v12 = v33;
      v14 = v32;
      *a1 = v29;
      v13 = v29;
    }
    a1[1] = v14;
    *(_BYTE *)(v13 + v12) = 0;
    memmove((void *)(v10 + *a1), a4, v11);
  }
  v15 = 0;
  v16 = (_QWORD *)(*(_QWORD *)(a2 + 48) + 48 * a5);
  if ( v16[1] )
  {
    do
    {
      sub_10B60((__int64)&src, (int *)(*v16 + 8 * v15));
      v17 = (const char *)&unk_1DA78;
      if ( v35 )
        v17 = (const char *)src;
      sub_CCA0(a1, (__int64)" (%s $param%zu)", v17, v15);
      if ( src )
      {
        v35 = 0;
        qfree(src);
      }
      ++v15;
    }
    while ( v15 < v16[1] );
  }
  if ( v16[4] )
  {
    v20 = a1[1];
    if ( v20 )
    {
      v23 = v20 + 3;
      v22 = v20 + 4;
      v21 = *a1;
      --v20;
      if ( a1[2] >= v22 )
        goto LABEL_20;
    }
    else
    {
      v21 = *a1;
      v22 = 5;
      v23 = 4;
      if ( (unsigned __int64)a1[2] >= 5 )
        goto LABEL_20;
    }
    v30 = qvector_reserve(a1, v21, v22, 1);
    *a1 = v30;
    v21 = v30;
LABEL_20:
    a1[1] = v22;
    *(_BYTE *)(v21 + v23) = 0;
    *(_DWORD *)(*a1 + v20) = 540945696;
    sub_138F0((__int64)&src, (__int64)(v16 + 3));
    v24 = v35;
    if ( v35 )
    {
      v25 = v35 - 1;
      if ( v35 != 1 )
      {
        v26 = a1[1];
        v27 = v35 - 1;
        if ( v26 )
        {
          --v26;
          v27 = v25 + v26;
          v24 = v35 + v26;
        }
        v28 = *a1;
        if ( a1[2] < v24 )
        {
          v31 = qvector_reserve(a1, v28, v24, 1);
          *a1 = v31;
          v28 = v31;
        }
        a1[1] = v24;
        *(_BYTE *)(v28 + v27) = 0;
        memcpy((void *)(v26 + *a1), src, v25);
      }
    }
    if ( src )
    {
      v35 = 0;
      qfree(src);
    }
  }
  return a1;
}

