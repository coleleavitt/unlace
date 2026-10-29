__int64 __fastcall sub_6ED80(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v6; // r13
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64 *); // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  unsigned __int64 i; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  __int128 v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  size_t v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  const void *v25; // r9
  void *v26; // rax
  const void *v27; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v6 = a1[40];
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)(a1[39] + (v3 << 6));
      if ( v7[5] )
      {
        v7[6] = 0;
        qfree();
      }
      if ( v7[1] )
      {
        v7[2] = 0;
        qfree();
      }
      ++v3;
    }
    while ( v6 != v3 );
  }
  v8 = *a1;
  a1[40] = 0;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(v8 + 24);
  if ( v9 != sub_6E900 )
  {
    ((void (__fastcall *)(__int64 *, __int64 *, __int64))v9)(a1, a1 + 39, a3);
LABEL_10:
    v10 = a2[1];
    v11 = a1[40];
    if ( !v10 )
      goto LABEL_15;
    goto LABEL_11;
  }
  if ( a1[39] )
  {
    qfree();
    a1[39] = 0;
    a1[41] = 0;
    goto LABEL_10;
  }
  v10 = a2[1];
  v11 = 0;
  if ( !v10 )
    return 1;
LABEL_11:
  for ( i = 0; i < v10; ++i )
  {
    v13 = *a2 + 32 * i;
    if ( *(_QWORD *)(v13 + 8) )
    {
      *(_QWORD *)(v13 + 16) = 0;
      qfree();
    }
  }
LABEL_15:
  a2[1] = 0;
  if ( a2[2] < v11 )
  {
    *a2 = qvector_reserve();
  }
  else if ( !v11 )
  {
    return 1;
  }
  v14 = 0;
  v15 = 0;
  do
  {
    v21 = a2[1];
    v22 = *a2;
    if ( a2[2] < (unsigned __int64)(v21 + 1) )
    {
      v23 = qvector_reserve();
      v21 = a2[1];
      v15 = 0;
      *a2 = v23;
      v22 = v23;
    }
    v16 = v22 + 32 * v21;
    *(_QWORD *)(v16 + 8) = 0;
    *(_OWORD *)(v16 + 16) = v15;
    ++a2[1];
    v17 = a1[39] + (v14 << 6);
    *(_DWORD *)v16 = *(_DWORD *)v17;
    v18 = v17 + 40;
    if ( *(_QWORD *)(v17 + 48) <= 1u )
      v18 = v17 + 8;
    if ( v16 + 8 != v18 )
    {
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 && (v20 = v19 - 1, v19 != 1) )
      {
        v25 = *(const void **)v18;
        v26 = *(void **)(v16 + 8);
        if ( *(_QWORD *)(v16 + 24) < v19 )
        {
          v27 = *(const void **)v18;
          v26 = (void *)qvector_reserve();
          v25 = v27;
          v20 = v19 - 1;
          *(_QWORD *)(v16 + 8) = v26;
        }
        *(_QWORD *)(v16 + 16) = v19;
        memmove(v26, v25, v20);
        v15 = 0;
        *(_BYTE *)(*(_QWORD *)(v16 + 8) + v19 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v16 + 16) = 0;
      }
    }
    ++v14;
  }
  while ( v14 != v11 );
  return 1;
}

