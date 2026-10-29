unsigned __int64 __fastcall sub_11C210(__int64 a1, __int64 *a2, double a3)
{
  int v4; // edx
  unsigned int fpvalue_kind; // eax
  bool v6; // cc
  char *v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  size_t v16; // rax
  __int64 v17; // r12
  size_t v18; // r13
  size_t v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rbp
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  get_ph();
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 <= 4 || v4 > 8 )
  {
    fpvalue_kind = get_fpvalue_kind();
    v6 = fpvalue_kind <= 3;
    if ( fpvalue_kind == 3 )
      goto LABEL_22;
LABEL_3:
    if ( v6 )
    {
      if ( fpvalue_kind != 1 )
      {
        if ( fpvalue_kind == 2 )
        {
          v7 = "NAN";
          goto LABEL_7;
        }
LABEL_37:
        if ( !under_debugger )
          sub_383060(0xC7A3u, a3);
        BUG();
      }
      v7 = &v35;
      realtoasc();
      if ( v35 == 32 )
      {
        do
          ++v7;
        while ( *v7 == 32 );
      }
    }
    else
    {
      if ( fpvalue_kind != 4 )
        goto LABEL_37;
      v7 = "-INFINITY";
    }
LABEL_7:
    v8 = a2[1];
    if ( !v8 )
      goto LABEL_23;
    goto LABEL_8;
  }
  fpvalue_kind = get_fpvalue_kind();
  v6 = fpvalue_kind <= 3;
  if ( fpvalue_kind != 3 )
    goto LABEL_3;
LABEL_22:
  v8 = a2[1];
  v7 = "INFINITY";
  if ( !v8 )
  {
LABEL_23:
    v11 = *a2;
    v10 = 1;
    v9 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_9;
    goto LABEL_24;
  }
LABEL_8:
  v9 = v8 + 1;
  v10 = v8;
  v11 = *a2;
  --v8;
  if ( a2[2] >= v9 )
    goto LABEL_9;
LABEL_24:
  v30 = qvector_reserve((__int64)a2, v11, v9, 1);
  *a2 = v30;
  v11 = v30;
LABEL_9:
  a2[1] = v9;
  *(_BYTE *)(v11 + v8) = 1;
  *(_BYTE *)(*a2 + v10) = 0;
  v12 = a2[1];
  if ( v12 )
  {
    v13 = v12 + 1;
    v14 = a2[1];
    v15 = *a2;
    --v12;
    if ( a2[2] >= v13 )
      goto LABEL_11;
  }
  else
  {
    v15 = *a2;
    v14 = 1;
    v13 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_11;
  }
  v31 = qvector_reserve((__int64)a2, v15, v13, 1);
  *a2 = v31;
  v15 = v31;
LABEL_11:
  a2[1] = v13;
  *(_BYTE *)(v15 + v12) = 17;
  *(_BYTE *)(*a2 + v14) = 0;
  v16 = strlen(v7);
  v17 = a2[1];
  v18 = v16;
  v19 = v16;
  if ( v17 )
  {
    --v17;
    v19 = v16 + v17;
  }
  v20 = *a2;
  if ( a2[2] < v19 + 1 )
  {
    v34 = qvector_reserve((__int64)a2, v20, v19 + 1, 1);
    *a2 = v34;
    v20 = v34;
  }
  a2[1] = v19 + 1;
  *(_BYTE *)(v20 + v19) = 0;
  memmove((void *)(v17 + *a2), v7, v18);
  v21 = a2[1];
  if ( v21 )
  {
    v22 = v21 + 1;
    v23 = a2[1];
    v24 = *a2;
    --v21;
    if ( a2[2] >= v22 )
      goto LABEL_17;
  }
  else
  {
    v24 = *a2;
    v23 = 1;
    v22 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_17;
  }
  v33 = qvector_reserve((__int64)a2, v24, v22, 1);
  *a2 = v33;
  v24 = v33;
LABEL_17:
  a2[1] = v22;
  *(_BYTE *)(v24 + v21) = 2;
  *(_BYTE *)(*a2 + v23) = 0;
  v25 = a2[1];
  if ( !v25 )
  {
    v28 = *a2;
    v27 = 1;
    v26 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_19;
LABEL_32:
    v32 = qvector_reserve((__int64)a2, v28, v26, 1);
    *a2 = v32;
    v28 = v32;
    goto LABEL_19;
  }
  v26 = v25 + 1;
  v27 = a2[1];
  v28 = *a2;
  --v25;
  if ( a2[2] < v26 )
    goto LABEL_32;
LABEL_19:
  a2[1] = v26;
  *(_BYTE *)(v28 + v25) = 17;
  *(_BYTE *)(*a2 + v27) = 0;
  return v36 - __readfsqword(0x28u);
}

