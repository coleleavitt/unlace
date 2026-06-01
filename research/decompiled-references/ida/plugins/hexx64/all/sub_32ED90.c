__int64 __fastcall sub_32ED90(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  bool v4; // cf
  unsigned int v5; // r12d
  unsigned __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r13d
  __int64 v14; // rdi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  int v28; // r8d
  __int64 v29; // rsi
  unsigned __int8 v30; // di
  unsigned __int8 v31; // si
  __int64 v32; // [rsp+8h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 20);
  v4 = *(_DWORD *)(a1 + 20) < v3;
  if ( *(_DWORD *)(a1 + 20) != v3 )
    goto LABEL_2;
  if ( *(_QWORD *)a1 < *(_QWORD *)a2 )
    return (unsigned int)-1;
  if ( *(_QWORD *)a2 < *(_QWORD *)a1 )
    return 1;
  v8 = *(_QWORD *)(a1 + 32);
  v4 = v8 < *(_QWORD *)(a2 + 32);
  if ( v8 != *(_QWORD *)(a2 + 32) )
  {
LABEL_2:
    if ( v4 )
      return (unsigned int)-1;
    return 1;
  }
  v9 = 0;
  v10 = 0;
  if ( v8 )
  {
    do
    {
      v5 = sub_11DA40(
             (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 80 * v10),
             (unsigned __int8 *)(80 * v10 + *(_QWORD *)(a2 + 24)),
             a3);
      if ( v5 )
        return v5;
      v10 = ++v9;
    }
    while ( (unsigned __int64)v9 < *(_QWORD *)(a1 + 32) );
  }
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a2 + 56);
  if ( v11 != v12 )
  {
    if ( v12 >= v11 )
      return (unsigned int)-1;
    return 1;
  }
  v13 = 0;
  v14 = 0;
  if ( v11 )
  {
    do
    {
      v5 = sub_11DA40(
             (unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 16 * v14),
             (unsigned __int8 *)(16 * v14 + *(_QWORD *)(a2 + 48)),
             a3);
      if ( v5 )
        return v5;
      v14 = ++v13;
    }
    while ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 56) );
  }
  v5 = lexcompare_tinfo();
  if ( !v5 )
  {
    v5 = sub_122C30(a1 + 96, a2 + 96);
    if ( !v5 )
    {
      v5 = sub_122C30(a1 + 136, a2 + 136);
      if ( !v5 )
      {
        v15 = *(_QWORD *)(a1 + 296);
        v16 = *(_QWORD *)(a2 + 296);
        if ( v15 != v16 )
        {
          if ( v16 >= v15 )
            return (unsigned int)-1;
          return 1;
        }
        if ( !v15 )
          return v5;
        v17 = *(_QWORD *)(a2 + 288);
        v18 = 0;
        v32 = *(_QWORD *)(a1 + 288);
        v19 = 0;
        do
        {
          v20 = v17 + 48 * v19;
          v21 = v32 + 48 * v19;
          v22 = *(_QWORD *)(v21 + 8);
          if ( *(_QWORD *)(v20 + 8) )
          {
            v23 = *(const char **)v20;
            v24 = s1;
            if ( !v22 )
              goto LABEL_31;
          }
          else
          {
            v23 = s1;
            if ( !v22 )
              goto LABEL_33;
          }
          v24 = *(const char **)v21;
LABEL_31:
          v25 = strcmp(v24, v23);
          if ( v25 < 0 )
            return (unsigned int)-1;
          if ( v25 )
            return 1;
LABEL_33:
          v26 = *(_QWORD *)(v21 + 32);
          v27 = *(_QWORD *)(v20 + 32);
          if ( v26 != v27 )
          {
            if ( v27 < v26 )
              return 1;
            return (unsigned int)-1;
          }
          if ( v26 )
          {
            v28 = 0;
            v29 = 0;
            do
            {
              v30 = *(_BYTE *)(*(_QWORD *)(v21 + 24) + v29);
              v31 = *(_BYTE *)(*(_QWORD *)(v20 + 24) + v29);
              if ( v30 < v31 )
                return (unsigned int)-1;
              if ( v31 < v30 )
                return 1;
              v29 = ++v28;
            }
            while ( v28 < v26 );
          }
          v19 = ++v18;
        }
        while ( v18 < v15 );
      }
    }
  }
  return v5;
}

