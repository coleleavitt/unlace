unsigned __int64 __fastcall sub_1B8E50(int *src, char *a2, __int64 a3)
{
  __int64 v4; // r12
  void *v6; // r13
  __int64 v7; // rax
  char *v8; // r15
  __int64 v9; // rbp
  __int64 *v10; // r14
  size_t v11; // r12
  void *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r11d
  __int64 v16; // r10
  __int64 v17; // rdi
  void *v18; // r8
  int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // r13
  __int64 v29; // rax
  void *v30; // rax
  const void *v31; // rsi
  void *v32; // [rsp+0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v35 = __readfsqword(0x28u);
  v33 = 0;
  if ( a2 - (char *)src <= 64 )
  {
    if ( !v4 )
    {
      v22 = *(_QWORD *)(a3 + 24);
      v32 = nullptr;
      v34 = v22;
      sub_1B8C80(src, a2, (__int64)&v32);
      return v35 - __readfsqword(0x28u);
    }
    v26 = (void *)qalloc_or_throw();
    v27 = *(const void **)a3;
    *((_QWORD *)&v33 + 1) = v4;
    v28 = v26;
    memcpy(v26, v27, 4 * v4);
    v29 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)&v33 = v4;
    v34 = v29;
    v32 = v28;
    sub_1B8C80(src, a2, (__int64)&v32);
    if ( !v28 )
      return v35 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  v6 = nullptr;
  if ( v4 )
  {
    v30 = (void *)qalloc_or_throw();
    v31 = *(const void **)a3;
    *((_QWORD *)&v33 + 1) = v4;
    v6 = v30;
    memcpy(v30, v31, 4 * v4);
    *(_QWORD *)&v33 = v4;
  }
  v7 = *(_QWORD *)(a3 + 24);
  v8 = (char *)(src + 16);
  v32 = v6;
  v34 = v7;
  sub_1B8C80(src, (char *)src + 64, (__int64)&v32);
  if ( v6 )
    qfree();
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 )
  {
    v11 = 4 * v9;
    v12 = (void *)qalloc_or_throw();
    memcpy(v12, *(const void **)a3, 4 * v9);
    v10 = *(__int64 **)(a3 + 24);
    if ( v8 == a2 )
      goto LABEL_20;
  }
  else
  {
    v10 = *(__int64 **)(a3 + 24);
    v11 = 0;
    v12 = nullptr;
    if ( v8 == a2 )
      return v35 - __readfsqword(0x28u);
  }
  do
  {
    if ( v9 )
    {
      while ( 1 )
      {
        v24 = (void *)qalloc_or_throw();
        v25 = memcpy(v24, v12, v11);
        v14 = *v10;
        v18 = v25;
        v15 = *(_DWORD *)v8;
        v16 = 24LL * *(int *)v8;
        v17 = *v10 + v16;
        if ( *(_QWORD *)(v17 + 8) )
          break;
        if ( v25 )
          goto LABEL_18;
        v8 += 4;
        if ( a2 == v8 )
          goto LABEL_20;
      }
    }
    else
    {
      v13 = *v10;
      while ( 1 )
      {
        v14 = *v10;
        v15 = *(_DWORD *)v8;
        v16 = 24LL * *(int *)v8;
        v17 = v13 + v16;
        if ( *(_QWORD *)(v13 + v16 + 8) )
          break;
        v8 += 4;
        if ( a2 == v8 )
          goto LABEL_20;
      }
      v18 = nullptr;
    }
    v19 = (int *)(v8 - 4);
    v20 = *((int *)v8 - 1);
    v21 = v14 + 24 * v20;
    while ( !*(_QWORD *)(v21 + 8) || **(_QWORD **)v17 < **(_QWORD **)v21 )
    {
      v19[1] = v20;
      v17 = *v10 + v16;
      v20 = *(v19 - 1);
      v21 = *v10 + 24 * v20;
      if ( !*(_QWORD *)(v17 + 8) )
        goto LABEL_17;
      --v19;
    }
    ++v19;
LABEL_17:
    *v19 = v15;
    if ( v18 )
LABEL_18:
      qfree();
    v8 += 4;
  }
  while ( a2 != v8 );
LABEL_20:
  if ( v12 )
LABEL_21:
    qfree();
  return v35 - __readfsqword(0x28u);
}

