__int64 __fastcall sub_16C40(__int64 *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  unsigned __int64 v10; // r14
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  __int128 v17; // kr00_16
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  size_t v22; // rbx
  __int64 v23; // r13
  void *v24; // rdi
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int128 v28; // [rsp+18h] [rbp-50h]

  v6 = 0;
  if ( a4 )
    v6 = *a4;
  v7 = a2[1];
  if ( !v7 )
    return 0;
  v8 = v7 - 1;
  if ( v6 >= v8 )
    return 0;
  if ( (*(_BYTE *)(a3 + 8) & 8) != 0 )
    goto LABEL_10;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64, _QWORD))a3)(a3, (unsigned int)*(char *)(*a2 + v6)) )
    return 0;
  v9 = **(__int64 (__fastcall ***)(__int64, __int64))a3;
  v10 = a2[1] | v6;
  if ( v10 )
    goto LABEL_11;
  v6 = 1;
  v11 = v9(a3, 0);
  if ( !(_BYTE)v11 )
  {
    while ( v8 != v6 )
    {
LABEL_10:
      v9 = **(__int64 (__fastcall ***)(__int64, __int64))a3;
LABEL_11:
      v10 = v6;
      v12 = (unsigned int)*(char *)(*a2 + v6++);
      v11 = v9(a3, v12);
      if ( (_BYTE)v11 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( v6 < v8 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 8LL))(
               a3,
               (unsigned int)*(char *)(*a2 + v6)) )
    {
      if ( v8 == ++v6 )
        goto LABEL_26;
    }
    v13 = *(_QWORD *)(a3 + 8);
    if ( !a4 )
      goto LABEL_20;
    v14 = v6 + 1;
    if ( (v13 & 2) == 0 )
      v14 = v6;
    goto LABEL_19;
  }
LABEL_26:
  v13 = *(_QWORD *)(a3 + 8);
  if ( (v13 & 4) != 0 )
    return 0;
  v6 = -1;
  v14 = -1;
  if ( a4 )
  {
LABEL_19:
    *a4 = v14;
    v13 = *(_QWORD *)(a3 + 8);
  }
LABEL_20:
  if ( a1 )
  {
    v15 = a2[1];
    if ( !v15 )
      goto LABEL_22;
    v19 = v15 - 1;
    v20 = v10 + (v13 & 1);
    if ( v19 < v6 )
    {
      if ( v20 > v19 )
        v20 = v19;
      v21 = v20;
      v22 = v19 - v20;
    }
    else
    {
      if ( v20 > v6 )
        v20 = v6;
      v21 = v20;
      v22 = v6 - v20;
    }
    v23 = *a2;
    v27 = 0;
    v28 = 0;
    if ( v22 )
    {
      v24 = 0;
      if ( v22 != -1 )
      {
        v27 = qvector_reserve();
        v24 = (void *)v27;
      }
      *(_QWORD *)&v28 = v22 + 1;
      memmove(v24, (const void *)(v23 + v21), v22);
      *(_BYTE *)(v27 + v22) = 0;
      v16 = v27;
      v17 = v28;
    }
    else
    {
LABEL_22:
      v16 = 0;
      v17 = 0u;
    }
    if ( *a1 )
    {
      a1[1] = 0;
      qfree();
    }
    *a1 = v16;
    *(_OWORD *)(a1 + 1) = v17;
  }
  return v11;
}
