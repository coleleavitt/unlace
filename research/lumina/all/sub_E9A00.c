__int64 __fastcall sub_E9A00(__int64 a1, int a2)
{
  int v2; // r9d
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // ebp
  int v8; // edx
  int v9; // ecx
  int v10; // ebp
  int v11; // r14d
  int v12; // r8d
  __int16 *v13; // r14
  int v14; // ebp
  __int16 *v15; // r15
  void *v16; // rax
  int v17; // r12d
  __int16 v18; // r8
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // r10
  const void *v21; // r11
  __int64 v22; // r15
  int v24; // r15d
  int v25; // eax
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  __int16 v29; // r9
  unsigned __int64 v30; // r10
  unsigned __int64 i; // rdx
  unsigned __int16 v32; // ax
  int v33; // r9d
  unsigned __int16 src; // [rsp+0h] [rbp-98h]
  int srca; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+8h] [rbp-90h]
  __int16 v37; // [rsp+8h] [rbp-90h]
  int v38; // [rsp+8h] [rbp-90h]
  __int64 v39; // [rsp+10h] [rbp-88h]
  int v40; // [rsp+18h] [rbp-80h]
  __int16 v41; // [rsp+18h] [rbp-80h]
  int v42; // [rsp+18h] [rbp-80h]
  int v43; // [rsp+1Ch] [rbp-7Ch]
  __int16 *v44; // [rsp+20h] [rbp-78h]
  __int64 v45; // [rsp+28h] [rbp-70h]
  void *v46; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+48h] [rbp-50h]
  int v48; // [rsp+50h] [rbp-48h]
  int v49; // [rsp+54h] [rbp-44h]
  _BYTE *v50; // [rsp+58h] [rbp-40h]

  v2 = *(unsigned __int16 *)(a1 + 18);
  v3 = *(unsigned __int16 *)(a1 + 24);
  v4 = *(unsigned __int8 *)(a1 + 9);
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(unsigned __int16 *)(a1 + 18);
  v47 = v4;
  v49 = v2 + 2 * v3;
  v50 = (_BYTE *)(v5 + v4 + 7);
  v43 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
  v48 = v43 - 4;
  if ( (unsigned __int8)*v50 > a2 )
    goto LABEL_7;
  v7 = *(unsigned __int8 *)(v5 + v4 + 1);
  v8 = *(unsigned __int8 *)(v5 + v4 + 2);
  v9 = 68230;
  v10 = v8 | (v7 << 8);
  if ( v10 > *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) - 4 )
    goto LABEL_21;
  if ( !v10 )
  {
LABEL_7:
    v40 = *(unsigned __int8 *)(v5 + v47 + 6) | (*(unsigned __int8 *)(v5 + v47 + 5) << 8);
    if ( !*(_WORD *)(a1 + 24) )
    {
      v24 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
LABEL_25:
      *v50 = 0;
      v25 = 0;
      goto LABEL_26;
    }
    v12 = (unsigned __int16)__ROL2__(*(_WORD *)(v5 + v6), 8);
    if ( (unsigned __int16)v12 > v48
      || (*(unsigned __int8 *)(v5 + v47 + 6) | (*(unsigned __int8 *)(v5 + v47 + 5) << 8)) > v12 )
    {
LABEL_23:
      v9 = 68279;
      goto LABEL_21;
    }
    v36 = *(_QWORD *)(a1 + 80);
    v39 = 0;
    v45 = v36;
    v13 = (__int16 *)(v5 + v2 + 2);
    v44 = &v13[v3 - 1];
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
    v15 = (__int16 *)(v5 + v6);
    v16 = (void *)(v5 + v40);
    v17 = v12;
    v46 = v16;
    while ( 1 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 120))(a1, v36 + v17);
      v14 -= v19;
      v20 = v19;
      if ( v40 > v14 || (v21 = (const void *)(v36 + v17), v17 + v19 > v43) )
      {
        v9 = 68285;
        goto LABEL_21;
      }
      *((_BYTE *)v15 + 1) = v14;
      *(_BYTE *)v15 = BYTE1(v14);
      if ( v39 )
        goto LABEL_11;
      src = v19;
      if ( v14 != v17 )
        break;
LABEL_12:
      if ( v13 == v44 )
      {
        v5 = v45;
        v24 = v14;
        goto LABEL_25;
      }
      v18 = *v13;
      v15 = v13++;
      v17 = (unsigned __int16)__ROL2__(v18, 8);
      if ( v40 > v17 || v17 > v48 )
        goto LABEL_23;
    }
    v22 = *(_QWORD *)(**(_QWORD **)(a1 + 72) + 280LL);
    v39 = v22;
    memcpy((void *)(v22 + v40), v46, v43 - v40);
    v21 = (const void *)(v22 + v17);
    v36 = v22;
    v20 = src;
LABEL_11:
    memcpy((void *)(v45 + v14), v21, v20);
    goto LABEL_12;
  }
  v11 = *(unsigned __int8 *)(v5 + v10 + 1) | (*(unsigned __int8 *)(v5 + v10) << 8);
  v9 = 68233;
  if ( v11 > v48 )
  {
LABEL_21:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v9,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  if ( v11 && (*(_BYTE *)(v5 + v11) || *(_BYTE *)(v5 + v11 + 1)) )
    goto LABEL_7;
  v26 = *(unsigned __int8 *)(v5 + v10 + 3) | (*(unsigned __int8 *)(v5 + v10 + 2) << 8);
  v27 = *(unsigned __int8 *)(v5 + v47 + 6) | (*(unsigned __int8 *)(v5 + v47 + 5) << 8);
  if ( v10 <= v27 )
  {
    v9 = 68241;
    goto LABEL_21;
  }
  v28 = v10 + v26;
  if ( v11 )
  {
    if ( v11 < v28 )
    {
      v9 = 68244;
      goto LABEL_21;
    }
    v33 = *(unsigned __int8 *)(v5 + v11 + 3) | (*(unsigned __int8 *)(v5 + v11 + 2) << 8);
    if ( v11 + v33 > v43 )
    {
      v9 = 68246;
      goto LABEL_21;
    }
    v38 = *(unsigned __int8 *)(v5 + v47 + 6) | (*(unsigned __int8 *)(v5 + v47 + 5) << 8);
    srca = *(unsigned __int8 *)(v5 + v10 + 3) | (*(unsigned __int8 *)(v5 + v10 + 2) << 8);
    v42 = *(unsigned __int8 *)(v5 + v11 + 3) | (*(unsigned __int8 *)(v5 + v11 + 2) << 8);
    memmove((void *)(v5 + v33 + v28), (const void *)(v5 + v28), v11 - v28);
    v29 = v42;
    v27 = v38;
    v26 = v42 + srca;
  }
  else
  {
    v29 = 0;
    if ( v43 < v28 )
    {
      v9 = 68250;
      goto LABEL_21;
    }
  }
  v24 = v26 + v27;
  v37 = v29;
  v41 = v26;
  memmove((void *)(v5 + v26 + v27), (const void *)(v5 + v27), v10 - v27);
  v30 = v5 + v49;
  for ( i = v5 + (unsigned __int16)v6; v30 > i; i += 2LL )
  {
    v32 = __ROL2__(*(_WORD *)i, 8);
    if ( v10 > v32 )
    {
      *(_BYTE *)i = (unsigned __int16)(v41 + v32) >> 8;
      *(_BYTE *)(i + 1) = v41 + v32;
    }
    else if ( v11 > v32 )
    {
      *(_BYTE *)i = (unsigned __int16)(v37 + v32) >> 8;
      *(_BYTE *)(i + 1) = v37 + v32;
    }
  }
  v25 = (unsigned __int8)*v50;
LABEL_26:
  if ( v24 + v25 - v49 != *(_DWORD *)(a1 + 20) )
  {
    v9 = 68304;
    goto LABEL_21;
  }
  *(_BYTE *)(v5 + v47 + 6) = v24;
  *(_BYTE *)(v5 + v47 + 5) = BYTE1(v24);
  *(_BYTE *)(v5 + v47 + 1) = 0;
  *(_BYTE *)(v5 + v47 + 2) = 0;
  memset((void *)(v5 + v49), 0, v24 - v49);
  return 0;
}
