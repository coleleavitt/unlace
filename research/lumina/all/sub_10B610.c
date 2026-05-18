__int64 __fastcall sub_10B610(__int64 a1, int a2, __int64 a3, const char **a4)
{
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v20; // r13
  void *v21; // rcx
  const char *v22; // rdi
  size_t v23; // r14
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rax

  v8 = *(_DWORD *)(a1 + 20);
  if ( a3 && !v8 )
  {
    v9 = 2 * a2;
    v10 = *(_DWORD *)(a1 + 16);
    v11 = (unsigned int)(2 * a2 + *(_DWORD *)(a1 + 28));
    if ( (unsigned int)v11 > v10 )
      goto LABEL_4;
LABEL_12:
    if ( !v8 )
      goto LABEL_6;
LABEL_13:
    if ( *(_DWORD *)(a1 + 24) != a2 )
    {
      sub_C91C0(*(_QWORD *)(a1 + 8), v11);
      v27 = sub_105970("sqlite3_get_table() called with two or more incompatible queries");
      *(_DWORD *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 8) = v27;
      return 1;
    }
    if ( !a3 )
      return 0;
    if ( a2 > 0 )
    {
LABEL_16:
      v20 = 0;
      do
      {
        v21 = *(void **)(a3 + 8 * v20);
        if ( v21 )
        {
          v22 = *(const char **)(a3 + 8 * v20);
          v23 = (strlen(v22) & 0x3FFFFFFF) + 1;
          if ( (unsigned int)sub_FEBD0((__int64)v22, v11) )
            goto LABEL_10;
          v24 = (void *)sub_D1E10(v23, v11);
          if ( !v24 )
            goto LABEL_10;
          v21 = memcpy(v24, *(const void **)(a3 + 8 * v20), v23);
        }
        v25 = *(unsigned int *)(a1 + 28);
        v26 = *(_QWORD *)a1;
        ++v20;
        v11 = (unsigned int)(v25 + 1);
        *(_DWORD *)(a1 + 28) = v11;
        *(_QWORD *)(v26 + 8 * v25) = v21;
      }
      while ( a2 > (int)v20 );
      v8 = *(_DWORD *)(a1 + 20);
    }
LABEL_23:
    *(_DWORD *)(a1 + 20) = v8 + 1;
    return 0;
  }
  v10 = *(_DWORD *)(a1 + 16);
  v9 = a2;
  v11 = (unsigned int)(a2 + *(_DWORD *)(a1 + 28));
  if ( (unsigned int)v11 <= v10 )
    goto LABEL_12;
LABEL_4:
  v12 = v9 + 2 * v10;
  v13 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 16) = v12;
  v11 = 8 * v12;
  v14 = sub_D2640(v13, v11);
  if ( !v14 )
  {
LABEL_10:
    *(_DWORD *)(a1 + 32) = 7;
    return 1;
  }
  *(_QWORD *)a1 = v14;
  v8 = *(_DWORD *)(a1 + 20);
  if ( v8 )
    goto LABEL_13;
LABEL_6:
  *(_DWORD *)(a1 + 24) = a2;
  if ( a2 > 0 )
  {
    v15 = (__int64)&a4[(unsigned int)(a2 - 1) + 1];
    while ( 1 )
    {
      v18 = sub_105970("%s", *a4);
      if ( !v18 )
        goto LABEL_10;
      v16 = *(unsigned int *)(a1 + 28);
      v17 = *(_QWORD *)a1;
      ++a4;
      v11 = (unsigned int)(v16 + 1);
      *(_DWORD *)(a1 + 28) = v11;
      *(_QWORD *)(v17 + 8 * v16) = v18;
      if ( (const char **)v15 == a4 )
      {
        if ( a3 )
          goto LABEL_16;
        return 0;
      }
    }
  }
  if ( a3 )
    goto LABEL_23;
  return 0;
}
