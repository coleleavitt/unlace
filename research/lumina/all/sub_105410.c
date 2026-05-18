__int64 __fastcall sub_105410(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v8; // rax
  const void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  int v20; // r10d
  int v21; // ebp
  __int64 v22; // r14
  size_t v23; // r11
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // r12d
  int v29; // eax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _OWORD *v36; // rax
  __int64 v37; // rbx
  void *v38; // rax
  int v39; // ebp
  __int64 v40; // rax
  void *s2; // [rsp+8h] [rbp-60h]
  size_t v43; // [rsp+18h] [rbp-50h]
  unsigned int v44; // [rsp+18h] [rbp-50h]
  int v45; // [rsp+24h] [rbp-44h]
  unsigned int v46; // [rsp+28h] [rbp-40h]
  unsigned int v47; // [rsp+2Ch] [rbp-3Ch]

  v8 = sub_D9DB0(*a2, 1u, a7, a3, a4, a5, a6);
  v9 = (const void *)*a2;
  v10 = v8;
  v11 = 1;
  s2 = (void *)v8;
  v16 = sub_D9CE0((__int64)v9, 1u, a7, v12, v13, v14, v15);
  if ( !v10 )
    return 0;
  v17 = v16;
  v18 = 0;
  v19 = -1;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = (int)v16;
  while ( 1 )
  {
    v24 = v21 - 429938;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL);
    if ( !v25 )
      break;
    while ( *(_DWORD *)(v25 + 4) != v24 )
    {
      v25 = *(_QWORD *)(v25 + 24);
      if ( !v25 )
        goto LABEL_15;
    }
    v26 = *(_QWORD *)(v25 + 8);
    if ( !v26 )
      break;
    v27 = *(_DWORD *)(v26 + 40);
    if ( v22
      || *(_DWORD *)(v26 + 36) != v17
      || (v9 = *(const void **)(v26 + 16),
          v11 = (__int64)s2,
          v47 = v17,
          v46 = v19,
          v45 = v20,
          v43 = v23,
          v29 = memcmp(v9, s2, v23),
          v23 = v43,
          v20 = v45,
          v19 = v46,
          v17 = v47,
          v29) )
    {
      if ( v27 < v19 )
      {
        v19 = v27;
        v20 = v21;
      }
    }
    else
    {
      *(_BYTE *)(v26 + 33) = 0;
      v22 = v26;
    }
    if ( v18 < v27 )
      v18 = v27;
    if ( ++v21 == 4 )
    {
      v21 = v20;
      break;
    }
  }
LABEL_15:
  if ( v22 )
  {
    *(_BYTE *)(v22 + 33) = 0;
    *(_DWORD *)(v22 + 40) = v18 + 1;
    return v22;
  }
  v44 = v17;
  v30 = (int)v17 + 49LL;
  v31 = sub_FEBD0((__int64)v9, v11);
  v35 = v44;
  if ( v31 || (v36 = (_OWORD *)sub_D1E10(v30, v11), (v37 = (__int64)v36) == 0) )
  {
    sub_E1560(a1, v11, v32, v33, v34, v35);
    return v22;
  }
  v36[1] = 0;
  *((_QWORD *)v36 + 2) = v36 + 3;
  *v36 = 0;
  v36[2] = 0;
  v38 = memcpy(v36 + 3, s2, (int)(v44 + 1));
  if ( (unsigned int)sub_104900(v37, a3, (__int64)v38) )
  {
    sub_C91C0(v37, a3);
    return v22;
  }
  v39 = v21 - 429938;
  *(_DWORD *)(v37 + 36) = v44;
  *(_DWORD *)(v37 + 40) = v18 + 1;
  sub_DC640(a1, v39, v37, (__int64 (__fastcall *)(__int64))sub_CA140);
  v40 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL);
  if ( !v40 )
    return 0;
  while ( v39 != *(_DWORD *)(v40 + 4) )
  {
    v40 = *(_QWORD *)(v40 + 24);
    if ( !v40 )
      return 0;
  }
  return *(_QWORD *)(v40 + 8);
}
