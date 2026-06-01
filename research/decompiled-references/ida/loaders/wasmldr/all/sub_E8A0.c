__int64 __fastcall sub_E8A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r15
  size_t v5; // r10
  size_t v6; // rdx
  _BYTE *v7; // rsi
  size_t v8; // r9
  size_t v9; // rdx
  size_t v10; // r10
  size_t v11; // r9
  size_t v12; // r11
  _BYTE *v13; // rsi
  size_t v15; // rbx
  size_t v16; // r12
  size_t v17; // r13
  _BYTE *v18; // rsi
  size_t v19; // rbx
  _BYTE *v20; // rax
  void *v21; // rax
  void *v22; // rsi
  size_t v23; // [rsp+10h] [rbp-98h]
  size_t v24; // [rsp+10h] [rbp-98h]
  size_t v25; // [rsp+18h] [rbp-90h]
  size_t v26; // [rsp+18h] [rbp-90h]
  size_t v27; // [rsp+20h] [rbp-88h]
  size_t v28; // [rsp+20h] [rbp-88h]
  size_t v29; // [rsp+28h] [rbp-80h]
  void *v30; // [rsp+30h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v34 = __readfsqword(0x28u);
  if ( !v2 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v20 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v20;
    *(_QWORD *)(a1 + 8) = 1;
    *v20 = 0;
    return a1;
  }
  if ( v2 == 1 )
  {
    sub_4FA0(a1, *(int **)a2);
    return a1;
  }
  v30 = nullptr;
  *(_OWORD *)n = 0;
  v30 = (void *)qvector_reserve(&v30, 0, 2, 1);
  v4 = 0;
  n[0] = 2;
  *(_BYTE *)v30 = 91;
  *((_BYTE *)v30 + 1) = 0;
  do
  {
    sub_4FA0((__int64)&src, (int *)(*(_QWORD *)a2 + 8 * v4));
    v9 = v33;
    if ( v33 )
    {
      v10 = v33 - 1;
      if ( v33 != 1 )
      {
        v11 = n[0];
        v12 = v33 - 1;
        if ( n[0] )
        {
          v11 = n[0] - 1;
          v12 = v10 + n[0] - 1;
          v9 = v33 + n[0] - 1;
        }
        v13 = v30;
        if ( n[1] < v9 )
        {
          v29 = v12;
          v28 = v11;
          v26 = v33 - 1;
          v24 = v9;
          v30 = (void *)qvector_reserve(&v30, v30, v9, 1);
          v12 = v29;
          v13 = v30;
          v11 = v28;
          v10 = v26;
          v9 = v24;
        }
        n[0] = v9;
        v13[v12] = 0;
        memcpy((char *)v30 + v11, src, v10);
      }
    }
    if ( src )
    {
      v33 = 0;
      qfree(src);
    }
    if ( v2 - 1 != v4 )
    {
      v8 = n[0];
      if ( n[0] )
      {
        v5 = n[0] + 1;
        v6 = n[0] + 2;
        v7 = v30;
        v8 = n[0] - 1;
        if ( n[1] < n[0] + 2 )
        {
LABEL_19:
          v27 = v8;
          v25 = v5;
          v23 = v6;
          v30 = (void *)qvector_reserve(&v30, v7, v6, 1);
          v8 = v27;
          v7 = v30;
          v5 = v25;
          v6 = v23;
        }
      }
      else
      {
        v7 = v30;
        v6 = 3;
        v5 = 2;
        if ( n[1] < 3 )
          goto LABEL_19;
      }
      n[0] = v6;
      v7[v5] = 0;
      *(_WORD *)((char *)v30 + v8) = 8236;
    }
    ++v4;
  }
  while ( v2 != v4 );
  v15 = n[0];
  if ( n[0] )
  {
    v16 = n[0] + 1;
    v17 = n[0];
    v18 = v30;
    v15 = n[0] - 1;
    if ( n[1] >= n[0] + 1 )
      goto LABEL_24;
LABEL_30:
    v30 = (void *)qvector_reserve(&v30, v18, v16, 1);
    v18 = v30;
  }
  else
  {
    v18 = v30;
    v16 = 2;
    v17 = 1;
    if ( n[1] < 2 )
      goto LABEL_30;
  }
LABEL_24:
  n[0] = v16;
  v18[v17] = 0;
  *((_BYTE *)v30 + v15) = 93;
  v19 = n[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v19 )
  {
    v21 = (void *)qalloc_or_throw(v19);
    *(_QWORD *)a1 = v21;
    v22 = v30;
    *(_QWORD *)(a1 + 16) = v19;
    memcpy(v21, v22, v19);
    *(_QWORD *)(a1 + 8) = v19;
  }
  if ( v30 )
  {
    n[0] = 0;
    qfree(v30);
  }
  return a1;
}

