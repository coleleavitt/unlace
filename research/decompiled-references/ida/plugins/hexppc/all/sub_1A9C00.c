__int64 __fastcall sub_1A9C00(__int64 a1)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r12
  int v19; // eax
  __int64 *v20; // rsi
  _BOOL8 v21; // rdx
  _DWORD *v22; // rsi
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  bool (__fastcall *v25)(__int64); // rax
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // r13
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rcx
  unsigned int v38; // edx
  char v39; // r8
  unsigned int v40; // esi
  int v41; // eax
  int v42; // eax
  int v43; // edx
  int v44; // edx
  _DWORD *v45; // rcx
  int v46; // [rsp+4h] [rbp-134h]
  char v47; // [rsp+Fh] [rbp-129h]
  __int64 v48; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+88h] [rbp-B0h]
  __int64 v50; // [rsp+98h] [rbp-A0h]
  __int64 v51; // [rsp+A0h] [rbp-98h]
  int v52; // [rsp+A8h] [rbp-90h]
  __int64 v53; // [rsp+ACh] [rbp-8Ch]
  __int64 v54; // [rsp+B8h] [rbp-80h]
  __int128 v55; // [rsp+C0h] [rbp-78h]
  __int64 v56; // [rsp+D0h] [rbp-68h]
  __int64 v57; // [rsp+D8h] [rbp-60h]
  unsigned int v58; // [rsp+E0h] [rbp-58h]
  __int64 v59; // [rsp+E4h] [rbp-54h]
  unsigned __int64 v60; // [rsp+F8h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 112) != -1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 280);
  if ( !*(_BYTE *)(v4 + 320) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 1496) + 148LL) )
      return 0;
  }
  if ( (unsigned __int8)sub_1A1C80(v3, 1, 0)
    && (*(_BYTE *)(*(_QWORD *)(v4 + 1496) + 606LL) & 0x10) != 0
    && !*(_BYTE *)(v4 + 320)
    || *(int *)(v4 + 68) > 0 )
  {
    return 0;
  }
  *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v5 + 288) & 2) != 0 )
  {
    v6 = v5 + 144;
    if ( !*(_QWORD *)(v5 + 264) )
    {
      v7 = 8;
LABEL_11:
      v8 = v5 + 144;
      goto LABEL_23;
    }
  }
  else
  {
    if ( !*(_QWORD *)(v5 + 128) )
    {
      v7 = 8;
      goto LABEL_22;
    }
    v6 = v5 + 8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 80) + 112LL) + 200LL))(
         *(_QWORD *)(*(_QWORD *)(v6 + 80) + 112LL),
         **(unsigned int **)(v6 + 112));
  v7 = 8;
  if ( v9 )
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v6 + 80) + 112LL) + 32LL))(
           *(_QWORD *)(*(_QWORD *)(v6 + 80) + 112LL),
           **(unsigned int **)(v6 + 112),
           8);
  if ( *(_QWORD *)(v6 + 120) > 1u && *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) - **(_DWORD **)(v6 + 112) < v7 )
    v7 = round_down_power2();
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v5 + 288) & 2) != 0 )
    goto LABEL_11;
LABEL_22:
  v8 = v5 + 8;
LABEL_23:
  v10 = *(_QWORD *)(v8 + 80);
  v50 = v5 + 96;
  v11 = *(_QWORD *)(v10 + 112);
  v48 = 0;
  v51 = 0;
  LODWORD(v11) = *(_DWORD *)(v11 + 80);
  v56 = v5 + 120;
  v58 = v7;
  v52 = v11;
  v53 = 0xFFFFFFFFLL;
  v54 = 0;
  v57 = 0;
  v59 = 0xFFFFFFFFLL;
  v49 = 0;
  v55 = 0;
  v47 = sub_199BE0(&v48, v4);
  if ( v47 )
    v47 = *(_QWORD *)(a1 + 104) == (int)v53;
  v15 = *(_QWORD *)(a1 + 16);
  LODWORD(v16) = 0;
  v17 = *(_QWORD *)(v15 + 280);
  if ( (unsigned __int8)*(_QWORD *)(v17 + 328) )
  {
    if ( !(unsigned __int8)get_tinfo_details() )
    {
      if ( !under_debugger )
        sub_37EEE0(51529);
      BUG();
    }
    v46 = *(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL);
    if ( !*(_BYTE *)(v17 + 320) )
      goto LABEL_43;
    v18 = sub_191280(v17);
    if ( v18 > *(_QWORD *)(v17 + 144) )
    {
      v16 = (v18 + v46 - 1 - (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, 12)) / v46;
LABEL_30:
      cleanup_argloc();
      clear_tinfo_t();
      v15 = *(_QWORD *)(a1 + 16);
      goto LABEL_31;
    }
    v36 = sub_139940((_QWORD *)v17);
    if ( v36 == -1 )
      goto LABEL_43;
    v37 = (_DWORD *)(*(_QWORD *)(v17 + 432) + 104LL * v36);
    v38 = v37[2];
    v39 = *(_BYTE *)(*(_QWORD *)(v17 + 1496) + 145LL);
    v40 = v38;
    if ( *v37 == 3 )
    {
      v41 = 0;
      if ( v39 )
        goto LABEL_94;
    }
    else
    {
      v40 = HIWORD(v38);
      v41 = 0;
      if ( v39 )
        goto LABEL_94;
      if ( *v37 == 4 )
        v38 = (unsigned __int16)v38;
    }
    v42 = v37[22];
    if ( !v38 )
      v42 /= 2;
    v41 = v42 - 1;
LABEL_94:
    v43 = v41 + v40;
    v22 = *(_DWORD **)(v15 + 96);
    v44 = -v46 & v43;
    v45 = &v22[*(_QWORD *)(v15 + 104)];
    if ( v22 != v45 )
    {
      v24 = *(_DWORD **)(v15 + 96);
      while ( v44 != *v24 )
      {
        if ( v45 == ++v24 )
          goto LABEL_38;
      }
      if ( v45 != v24 )
        goto LABEL_99;
    }
LABEL_38:
    v22 = *(_DWORD **)(v15 + 120);
    v23 = &v22[*(_QWORD *)(v15 + 128)];
    if ( v22 != v23 )
    {
      v24 = *(_DWORD **)(v15 + 120);
      while ( v44 != *v24 )
      {
        if ( v23 == ++v24 )
          goto LABEL_43;
      }
      if ( v24 != v23 )
      {
LABEL_99:
        LODWORD(v16) = v24 - v22 + 1;
        goto LABEL_30;
      }
    }
LABEL_43:
    LODWORD(v16) = 0;
    goto LABEL_30;
  }
LABEL_31:
  if ( *(_DWORD *)(v15 + 8) != 3 )
    LODWORD(v16) = v16 - *(_DWORD *)(v15 + 48);
  if ( v47 )
  {
    if ( *(_BYTE *)(v4 + 320) )
    {
      if ( !*(_BYTE *)(v4 + 328) )
      {
        v19 = *(_QWORD *)(v15 + 24);
        if ( v19 >= (int)v16 )
          goto LABEL_36;
      }
    }
    else
    {
      v19 = *(_QWORD *)(v50 + 8) - v49;
      if ( v19 >= (int)v16 )
      {
LABEL_36:
        *(_DWORD *)(a1 + 112) = v19;
LABEL_37:
        v20 = &v48;
        v21 = 0;
        goto LABEL_46;
      }
    }
    *(_DWORD *)(a1 + 112) = v16;
    goto LABEL_37;
  }
  if ( !*(_BYTE *)(v4 + 328) && (int)v16 < *(_DWORD *)(v15 + 24) )
    LODWORD(v16) = *(_DWORD *)(v15 + 24);
  *(_DWORD *)(a1 + 112) = v16;
  v20 = nullptr;
  v21 = (*(_DWORD *)(v4 + 72) & 0xFFFFFFF0) != 208 && (*(_DWORD *)(v4 + 72) & 0xFFFFFFF0) != 64;
LABEL_46:
  if ( !(unsigned __int8)sub_1A90D0(a1, v20, v21, v12, v13, v14) && *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree();
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v25 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v25 != sub_191160 )
  {
    if ( v25(a1) )
    {
      if ( !v47 )
      {
        if ( !*(_QWORD *)(a1 + 72) )
          goto LABEL_52;
        goto LABEL_50;
      }
      goto LABEL_64;
    }
    goto LABEL_76;
  }
  if ( !*(_QWORD *)(a1 + 72) )
  {
LABEL_76:
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
    return 0;
  }
  if ( v47 )
  {
LABEL_64:
    if ( (int)v49 > 0 )
    {
      v28 = 0;
      v29 = 8LL * (unsigned int)(v49 - 1) + 8;
      do
      {
        v30 = v51;
        sub_119B60(*(_QWORD *)(v48 + v28));
        v31 = *(_DWORD *)(v30 + 24);
        v28 += 8;
        BYTE1(v31) &= ~2u;
        LOBYTE(v31) = v31 | 0x80;
        *(_DWORD *)(v30 + 24) = v31;
      }
      while ( v29 != v28 );
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
      v48 = 0;
      *((_QWORD *)&v49 + 1) = 0;
    }
    if ( (int)v55 > 0 )
    {
      v32 = 0;
      v33 = 8LL * (unsigned int)(v55 - 1) + 8;
      do
      {
        v34 = v57;
        sub_119B60(*(_QWORD *)(v54 + v32));
        v35 = *(_DWORD *)(v34 + 24);
        v32 += 8;
        BYTE1(v35) &= ~2u;
        LOBYTE(v35) = v35 | 0x80;
        *(_DWORD *)(v34 + 24) = v35;
      }
      while ( v32 != v33 );
    }
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
      v54 = 0;
      *((_QWORD *)&v55 + 1) = 0;
    }
    if ( !*(_QWORD *)(a1 + 72) )
      goto LABEL_54;
  }
LABEL_50:
  v26 = 0;
  v27 = 0;
  do
  {
    sub_1A1470(a1, (__int64 *)(*(_QWORD *)(a1 + 64) + 40 * v27));
    v27 = ++v26;
  }
  while ( (unsigned __int64)v26 < *(_QWORD *)(a1 + 72) );
LABEL_52:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
LABEL_54:
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  return 1;
}

