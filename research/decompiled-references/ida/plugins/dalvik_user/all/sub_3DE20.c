__int64 __fastcall sub_3DE20(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rax
  const char *v12; // r12
  __int64 v13; // rcx
  int v14; // edi
  _WORD *v15; // rcx
  int i; // eax
  int v17; // ecx
  __int64 v18; // rsi
  size_t v19; // rax
  _BYTE *v20; // rsi
  size_t v21; // rbp
  size_t v22; // r13
  __int64 v23; // rax

  *(_QWORD *)(a2 + 8) = 0;
  if ( a3 < 0 || (unsigned __int64)a3 >= *(_QWORD *)(a1 + 32) )
    return 1;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * a3);
  v8 = v7 + 1;
  if ( *(_BYTE *)(a1 + 120) )
  {
    if ( v5 )
    {
      v17 = v7 + 2;
      v18 = v8;
      if ( *(char *)(v6 + v7) < 0 )
      {
        v18 = v17;
        v8 = v7 + 2;
        v17 = v7 + 3;
      }
      v11 = v17;
      if ( *(char *)(v6 + v18) >= 0 )
        goto LABEL_13;
    }
    else
    {
      if ( !v7 )
      {
        if ( byte_7FAF1 < 0 )
        {
          v12 = (const char *)(v6 + 3);
          if ( *(char *)(v6 + 2) < 0 )
            v12 = (const char *)(v6 + 4);
        }
        else
        {
          v12 = (const char *)(v6 + 3);
          if ( *(char *)(v6 + 1) >= 0 )
            v12 = (const char *)(v6 + 2);
        }
        goto LABEL_33;
      }
      v9 = v7 + 2;
      v10 = v8;
      if ( *(char *)(v6 + v7) < 0 )
      {
        v10 = v9;
        v8 = v7 + 2;
        v9 = v7 + 3;
      }
      if ( v10 )
      {
        if ( *(char *)(v6 + v10) < 0 )
        {
          v11 = v8 + 2;
LABEL_12:
          v12 = &byte_7FAF1;
          if ( !v11 )
            goto LABEL_14;
          goto LABEL_13;
        }
LABEL_11:
        v11 = v9;
        goto LABEL_12;
      }
      if ( byte_7FAF1 >= 0 )
        goto LABEL_11;
    }
    v11 = v8 + 2;
LABEL_13:
    v12 = (const char *)(v6 + v11);
LABEL_14:
    if ( !v12 )
      return 1;
LABEL_33:
    v19 = strlen(v12);
    v20 = *(_BYTE **)a2;
    v21 = v19;
    v22 = v19 + 1;
    if ( *(_QWORD *)(a2 + 16) < v19 + 1 )
    {
      v23 = qvector_reserve();
      *(_QWORD *)a2 = v23;
      v20 = (_BYTE *)v23;
    }
    *(_QWORD *)(a2 + 8) = v22;
    v20[v21] = 0;
    memmove(*(void **)a2, v12, v21);
    return 1;
  }
  if ( v5 )
  {
    v13 = v7 + 2;
    goto LABEL_21;
  }
  if ( v7 != -1 )
  {
    if ( v7 )
    {
      v13 = v7 + 2;
      if ( v7 != -2 )
      {
LABEL_21:
        v14 = (unsigned __int64)(v5 - v13) >> 1;
        if ( v14 > 0 )
        {
          v15 = (_WORD *)(v6 + v13);
          for ( i = 0; i != v14; ++i )
          {
            if ( !*v15 )
              break;
            ++v15;
          }
        }
      }
    }
  }
  return utf16_utf8();
}

