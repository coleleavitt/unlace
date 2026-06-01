__int64 __fastcall sub_138F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r15
  size_t v5; // r10
  size_t v6; // rdx
  _BYTE *v7; // rsi
  size_t v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  size_t v11; // r10
  size_t v12; // r9
  size_t v13; // r11
  _BYTE *v14; // rsi
  size_t v16; // rbx
  size_t v17; // r12
  size_t v18; // r13
  _BYTE *v19; // rsi
  size_t v20; // rbx
  _BYTE *v21; // rax
  void *v22; // rax
  void *v23; // rsi
  size_t v24; // [rsp+10h] [rbp-98h]
  size_t v25; // [rsp+10h] [rbp-98h]
  size_t v26; // [rsp+18h] [rbp-90h]
  size_t v27; // [rsp+18h] [rbp-90h]
  size_t v28; // [rsp+20h] [rbp-88h]
  size_t v29; // [rsp+20h] [rbp-88h]
  size_t v30; // [rsp+28h] [rbp-80h]
  void *v31; // [rsp+30h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t v34; // [rsp+58h] [rbp-50h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v35 = __readfsqword(0x28u);
  if ( !v2 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v21 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v21;
    *(_QWORD *)(a1 + 8) = 1;
    *v21 = 0;
    return a1;
  }
  if ( v2 == 1 )
  {
    sub_10B60(a1, *(int **)a2);
    return a1;
  }
  v31 = nullptr;
  *(_OWORD *)n = 0;
  v31 = (void *)qvector_reserve(&v31, 0, 2, 1);
  v4 = 0;
  n[0] = 2;
  *(_BYTE *)v31 = 91;
  *((_BYTE *)v31 + 1) = 0;
  do
  {
    sub_10B60((__int64)&src, (int *)(*(_QWORD *)a2 + 8 * v4));
    v6 = v34;
    if ( v34 )
    {
      v11 = v34 - 1;
      if ( v34 != 1 )
      {
        v12 = n[0];
        v13 = v34 - 1;
        if ( n[0] )
        {
          v12 = n[0] - 1;
          v13 = v11 + n[0] - 1;
          v6 = v34 + n[0] - 1;
        }
        v14 = v31;
        if ( n[1] < v6 )
        {
          v30 = v13;
          v29 = v12;
          v27 = v34 - 1;
          v25 = v6;
          v31 = (void *)qvector_reserve(&v31, v31, v6, 1);
          v13 = v30;
          v14 = v31;
          v12 = v29;
          v11 = v27;
          v6 = v25;
        }
        n[0] = v6;
        v14[v13] = 0;
        memcpy((char *)v31 + v12, src, v11);
      }
    }
    if ( src )
    {
      v34 = 0;
      qfree(src);
    }
    if ( v2 - 1 != v4 )
    {
      v8 = n[0];
      if ( n[0] )
      {
        v5 = n[0] + 1;
        v6 = n[0] + 2;
        v7 = v31;
        v8 = n[0] - 1;
        if ( n[1] < n[0] + 2 )
        {
LABEL_19:
          v28 = v8;
          v26 = v5;
          v24 = v6;
          v31 = (void *)qvector_reserve(&v31, v7, v6, 1);
          v8 = v28;
          v7 = v31;
          v5 = v26;
          v6 = v24;
        }
      }
      else
      {
        v7 = v31;
        v6 = 3;
        v5 = 2;
        if ( n[1] < 3 )
          goto LABEL_19;
      }
      n[0] = v6;
      v9 = 8236;
      v7[v5] = 0;
      *(_WORD *)((char *)v31 + v8) = 8236;
    }
    ++v4;
  }
  while ( v2 != v4 );
  v16 = n[0];
  if ( n[0] )
  {
    v17 = n[0] + 1;
    v18 = n[0];
    v19 = v31;
    v16 = n[0] - 1;
    if ( n[1] >= n[0] + 1 )
      goto LABEL_24;
LABEL_30:
    v31 = (void *)qvector_reserve(&v31, v19, v17, 1);
    v19 = v31;
  }
  else
  {
    v19 = v31;
    v17 = 2;
    v18 = 1;
    if ( n[1] < 2 )
      goto LABEL_30;
  }
LABEL_24:
  n[0] = v17;
  v19[v18] = 0;
  *((_BYTE *)v31 + v16) = 93;
  v20 = n[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v20 )
  {
    v22 = (void *)qalloc_or_throw(v20, v19, v6, v9, v10);
    *(_QWORD *)a1 = v22;
    v23 = v31;
    *(_QWORD *)(a1 + 16) = v20;
    memcpy(v22, v23, v20);
    *(_QWORD *)(a1 + 8) = v20;
  }
  if ( v31 )
  {
    n[0] = 0;
    qfree(v31);
  }
  return a1;
}
