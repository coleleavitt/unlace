unsigned __int64 __fastcall sub_118010(__int64 a1, __int64 *a2)
{
  int v3; // edx
  unsigned int fpvalue_kind; // eax
  bool v5; // cc
  char *v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rsi
  size_t v15; // rax
  __int64 v16; // r12
  size_t v17; // r13
  size_t v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rbp
  unsigned __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  get_ph();
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 <= 4 || v3 > 8 )
  {
    fpvalue_kind = get_fpvalue_kind();
    v5 = fpvalue_kind <= 3;
    if ( fpvalue_kind == 3 )
      goto LABEL_22;
LABEL_3:
    if ( v5 )
    {
      if ( fpvalue_kind != 1 )
      {
        if ( fpvalue_kind == 2 )
        {
          v6 = "NAN";
          goto LABEL_7;
        }
LABEL_37:
        if ( !under_debugger )
          sub_37E160(51107);
        BUG();
      }
      v6 = &v34;
      realtoasc();
      if ( v34 == 32 )
      {
        do
          ++v6;
        while ( *v6 == 32 );
      }
    }
    else
    {
      if ( fpvalue_kind != 4 )
        goto LABEL_37;
      v6 = "-INFINITY";
    }
LABEL_7:
    v7 = a2[1];
    if ( !v7 )
      goto LABEL_23;
    goto LABEL_8;
  }
  fpvalue_kind = get_fpvalue_kind();
  v5 = fpvalue_kind <= 3;
  if ( fpvalue_kind != 3 )
    goto LABEL_3;
LABEL_22:
  v7 = a2[1];
  v6 = "INFINITY";
  if ( !v7 )
  {
LABEL_23:
    v10 = *a2;
    v9 = 1;
    v8 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_9;
    goto LABEL_24;
  }
LABEL_8:
  v8 = v7 + 1;
  v9 = v7;
  v10 = *a2;
  --v7;
  if ( a2[2] >= v8 )
    goto LABEL_9;
LABEL_24:
  v29 = qvector_reserve();
  *a2 = v29;
  v10 = v29;
LABEL_9:
  a2[1] = v8;
  *(_BYTE *)(v10 + v7) = 1;
  *(_BYTE *)(*a2 + v9) = 0;
  v11 = a2[1];
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = a2[1];
    v14 = *a2;
    --v11;
    if ( a2[2] >= v12 )
      goto LABEL_11;
  }
  else
  {
    v14 = *a2;
    v13 = 1;
    v12 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_11;
  }
  v30 = qvector_reserve();
  *a2 = v30;
  v14 = v30;
LABEL_11:
  a2[1] = v12;
  *(_BYTE *)(v14 + v11) = 17;
  *(_BYTE *)(*a2 + v13) = 0;
  v15 = strlen(v6);
  v16 = a2[1];
  v17 = v15;
  v18 = v15;
  if ( v16 )
  {
    --v16;
    v18 = v15 + v16;
  }
  v19 = *a2;
  if ( a2[2] < v18 + 1 )
  {
    v33 = qvector_reserve();
    *a2 = v33;
    v19 = v33;
  }
  a2[1] = v18 + 1;
  *(_BYTE *)(v19 + v18) = 0;
  memmove((void *)(v16 + *a2), v6, v17);
  v20 = a2[1];
  if ( v20 )
  {
    v21 = v20 + 1;
    v22 = a2[1];
    v23 = *a2;
    --v20;
    if ( a2[2] >= v21 )
      goto LABEL_17;
  }
  else
  {
    v23 = *a2;
    v22 = 1;
    v21 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_17;
  }
  v32 = qvector_reserve();
  *a2 = v32;
  v23 = v32;
LABEL_17:
  a2[1] = v21;
  *(_BYTE *)(v23 + v20) = 2;
  *(_BYTE *)(*a2 + v22) = 0;
  v24 = a2[1];
  if ( !v24 )
  {
    v27 = *a2;
    v26 = 1;
    v25 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_19;
LABEL_32:
    v31 = qvector_reserve();
    *a2 = v31;
    v27 = v31;
    goto LABEL_19;
  }
  v25 = v24 + 1;
  v26 = a2[1];
  v27 = *a2;
  --v24;
  if ( a2[2] < v25 )
    goto LABEL_32;
LABEL_19:
  a2[1] = v25;
  *(_BYTE *)(v27 + v24) = 17;
  *(_BYTE *)(*a2 + v26) = 0;
  return v35 - __readfsqword(0x28u);
}

