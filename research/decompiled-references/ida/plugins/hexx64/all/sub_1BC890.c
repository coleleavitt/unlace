unsigned __int64 __fastcall sub_1BC890(char *src, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  _QWORD **v14; // r14
  __int64 v15; // r12
  const void *v16; // r13
  _QWORD *v17; // rdx
  int v18; // r11d
  __int64 v19; // r10
  __int64 *v20; // rdi
  __int64 v21; // r8
  char *v22; // rax
  __int64 v23; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  const void *v29; // rsi
  __int64 v30; // rax
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // [rsp+0h] [rbp-68h] BYREF
  __int128 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 8);
  v36 = __readfsqword(0x28u);
  v34 = 0;
  if ( a2 - src <= 64 )
  {
    if ( !v5 )
    {
      v23 = *(_QWORD *)(a3 + 24);
      v33 = 0;
      v35 = v23;
      sub_1BC6C0(src, a2, (__int64)&v33);
      return v36 - __readfsqword(0x28u);
    }
    v28 = (void *)qalloc_or_throw(4 * v5, (__int64)a2, a3, a4);
    v29 = *(const void **)a3;
    *((_QWORD *)&v34 + 1) = v5;
    v16 = v28;
    memcpy(v28, v29, 4 * v5);
    v30 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)&v34 = v5;
    v35 = v30;
    v33 = (__int64)v16;
    sub_1BC6C0(src, a2, (__int64)&v33);
    if ( !v16 )
      return v36 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  v7 = 0;
  if ( v5 )
  {
    v31 = (void *)qalloc_or_throw(4 * v5, (__int64)a2, a3, a4);
    v32 = *(const void **)a3;
    *((_QWORD *)&v34 + 1) = v5;
    v7 = (__int64)v31;
    memcpy(v31, v32, 4 * v5);
    *(_QWORD *)&v34 = v5;
  }
  v8 = *(_QWORD *)(a3 + 24);
  v9 = src + 64;
  v10 = (__int64)(src + 64);
  v33 = v7;
  v35 = v8;
  sub_1BC6C0(src, src + 64, (__int64)&v33);
  if ( v7 )
    qfree(v7);
  v13 = *(_QWORD *)(a3 + 8);
  if ( v13 )
  {
    v15 = 4 * v13;
    v27 = (void *)qalloc_or_throw(4 * v13, v10, v11, (__int64)v12);
    v10 = *(_QWORD *)a3;
    v16 = v27;
    memcpy(v27, *(const void **)a3, 4 * v13);
    v14 = *(_QWORD ***)(a3 + 24);
    if ( v9 == a2 )
      goto LABEL_20;
  }
  else
  {
    v14 = *(_QWORD ***)(a3 + 24);
    v15 = 0;
    v16 = nullptr;
    if ( v9 == a2 )
      return v36 - __readfsqword(0x28u);
  }
  do
  {
    if ( v13 )
    {
      while ( 1 )
      {
        v25 = (void *)qalloc_or_throw(v15, v10, v11, (__int64)v12);
        v10 = (__int64)v16;
        v26 = memcpy(v25, v16, v15);
        v12 = *v14;
        v21 = (__int64)v26;
        v18 = *(_DWORD *)v9;
        v19 = 3LL * *(int *)v9;
        v20 = &(*v14)[v19];
        if ( v20[1] )
          break;
        if ( v26 )
          goto LABEL_18;
        v9 += 4;
        if ( a2 == v9 )
          goto LABEL_20;
      }
    }
    else
    {
      v17 = *v14;
      while ( 1 )
      {
        v12 = *v14;
        v18 = *(_DWORD *)v9;
        v19 = 3LL * *(int *)v9;
        v20 = &v17[v19];
        if ( v17[v19 + 1] )
          break;
        v9 += 4;
        if ( a2 == v9 )
          goto LABEL_20;
      }
      v21 = 0;
    }
    v22 = v9 - 4;
    v11 = *((int *)v9 - 1);
    v12 += 3 * v11;
    while ( 1 )
    {
      if ( v12[1] )
      {
        v10 = *v20;
        v12 = (_QWORD *)*v12;
        if ( *(_QWORD *)*v20 >= *v12 )
          break;
      }
      *((_DWORD *)v22 + 1) = v11;
      v20 = &(*v14)[v19];
      v11 = *((int *)v22 - 1);
      v10 = 3 * v11;
      v12 = &(*v14)[3 * v11];
      if ( !v20[1] )
        goto LABEL_17;
      v22 -= 4;
    }
    v22 += 4;
LABEL_17:
    *(_DWORD *)v22 = v18;
    if ( v21 )
LABEL_18:
      qfree(v21);
    v9 += 4;
  }
  while ( a2 != v9 );
LABEL_20:
  if ( v16 )
LABEL_21:
    qfree((__int64)v16);
  return v36 - __readfsqword(0x28u);
}

