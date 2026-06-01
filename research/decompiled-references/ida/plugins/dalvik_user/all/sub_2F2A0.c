__int64 __fastcall sub_2F2A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  __int64 v7; // r12
  const char *v8; // rsi
  const char *v9; // rsi
  const char *v10; // rdx
  unsigned int v11; // ebx
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  const char *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  bool v24; // [rsp+1h] [rbp-75h] BYREF
  int v25; // [rsp+2h] [rbp-74h] BYREF
  int *v26; // [rsp+6h] [rbp-70h] BYREF
  const char *v27; // [rsp+Eh] [rbp-68h] BYREF
  __int128 v28; // [rsp+16h] [rbp-60h]
  const char *v29; // [rsp+2Eh] [rbp-48h] BYREF
  __int128 v30; // [rsp+36h] [rbp-40h]
  unsigned __int64 v31; // [rsp+46h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v27 = nullptr;
  v28 = 0;
  v6 = sub_23E50((__int64)(a1 + 130), (__int64 *)&v27, &v24);
  v7 = (__int64)v27;
  if ( !v6 )
    goto LABEL_13;
  if ( !v24 )
  {
    v8 = nptr;
    v29 = nullptr;
    if ( (_QWORD)v28 )
      v8 = v27;
    v30 = 0;
    if ( !(unsigned __int8)sub_33AF0(&v29, v8) )
      goto LABEL_11;
    v9 = nptr;
    if ( (_QWORD)v30 )
      v9 = v29;
    sub_11340((__int64)"Deferring breakpoint. It will be set after the class '%s' is loaded.\n", v9);
    v10 = nptr;
    if ( (_QWORD)v30 )
      v10 = v29;
    if ( !(unsigned __int8)sub_1AC90((__int64)a1, (__int64)&v25, (__int64)v10) )
    {
LABEL_11:
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
      goto LABEL_13;
    }
    v17 = operator new(0x20u);
    v18 = a1[213];
    *(_BYTE *)(v17 + 8) = 1;
    v19 = v17;
    *(_QWORD *)v17 = off_7D468;
    *(_QWORD *)(v17 + 16) = a1;
    *(_QWORD *)(v17 + 24) = a4;
    if ( v18 )
    {
      v20 = (__int64)(a1 + 212);
      do
      {
        if ( *(_DWORD *)(v18 + 32) >= v25 )
        {
          v20 = v18;
          v18 = *(_QWORD *)(v18 + 16);
        }
        else
        {
          v18 = *(_QWORD *)(v18 + 24);
        }
      }
      while ( v18 );
      if ( a1 + 212 != (_QWORD *)v20 && v25 >= *(_DWORD *)(v20 + 32) )
      {
LABEL_36:
        v21 = v29;
        *(_QWORD *)(v20 + 40) = v19;
        if ( v21 )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
        goto LABEL_18;
      }
    }
    else
    {
      v20 = (__int64)(a1 + 212);
    }
    v26 = &v25;
    v20 = sub_16FF0(a1 + 211, v20, &v26);
    goto LABEL_36;
  }
  if ( !(unsigned __int8)sub_2F090((__int64)a1, (__int64)&v25, a4) )
  {
LABEL_13:
    v11 = 0;
    goto LABEL_14;
  }
LABEL_18:
  v13 = v25;
  v14 = 16LL * a1[221];
  v15 = a1[220] + v14;
  if ( v14 )
  {
    v16 = a1[220];
    while ( a4 != *(_QWORD *)v16 )
    {
      v16 += 16;
      if ( v15 == v16 )
        goto LABEL_30;
    }
    *(_DWORD *)(v16 + 8) = v25;
  }
  else
  {
LABEL_30:
    if ( a1[222] < (unsigned __int64)(a1[221] + 1LL) )
    {
      v22 = qvector_reserve();
      v23 = a1[221];
      a1[220] = v22;
      v15 = v22 + 16 * v23;
    }
    *(_QWORD *)v15 = a4;
    *(_DWORD *)(v15 + 8) = v13;
    ++a1[221];
  }
  v11 = 1;
LABEL_14:
  if ( v7 )
    qfree();
  return v11;
}

