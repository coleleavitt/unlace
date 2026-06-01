__int64 __fastcall sub_1AD640(__int64 a1, double a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r12
  int v23; // eax
  __int64 *v24; // rsi
  _BOOL8 v25; // rdx
  _DWORD *v26; // rsi
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  bool (__fastcall *v29)(__int64); // rax
  int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // r13
  int v35; // eax
  __int64 v36; // rbp
  __int64 v37; // r12
  __int64 v38; // r13
  int v39; // eax
  __int64 v40; // rdi
  int v41; // eax
  _DWORD *v42; // rcx
  unsigned int v43; // edx
  char v44; // r8
  unsigned int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // edx
  int v49; // edx
  _DWORD *v50; // rcx
  int v51; // [rsp+4h] [rbp-134h]
  char v52; // [rsp+Fh] [rbp-129h]
  __int64 v53; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v54; // [rsp+88h] [rbp-B0h]
  __int64 v55; // [rsp+98h] [rbp-A0h]
  __int64 v56; // [rsp+A0h] [rbp-98h]
  int v57; // [rsp+A8h] [rbp-90h]
  __int64 v58; // [rsp+ACh] [rbp-8Ch]
  __int64 v59; // [rsp+B8h] [rbp-80h]
  __int128 v60; // [rsp+C0h] [rbp-78h]
  __int64 v61; // [rsp+D0h] [rbp-68h]
  __int64 v62; // [rsp+D8h] [rbp-60h]
  int v63; // [rsp+E0h] [rbp-58h]
  __int64 v64; // [rsp+E4h] [rbp-54h]
  unsigned __int64 v65; // [rsp+F8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 112) != -1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 280);
  if ( !*(_BYTE *)(v6 + 320) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 1496) + 148LL) )
      return 0;
  }
  if ( (unsigned __int8)sub_1A56C0(v5, 1, 0)
    && (*(_BYTE *)(*(_QWORD *)(v6 + 1496) + 606LL) & 0x10) != 0
    && !*(_BYTE *)(v6 + 320)
    || *(int *)(v6 + 68) > 0 )
  {
    return 0;
  }
  *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v9 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v9 + 288) & 2) != 0 )
  {
    v10 = v9 + 144;
    if ( !*(_QWORD *)(v9 + 264) )
    {
      v11 = 8;
LABEL_11:
      v12 = v9 + 144;
      goto LABEL_23;
    }
  }
  else
  {
    if ( !*(_QWORD *)(v9 + 128) )
    {
      v11 = 8;
      goto LABEL_22;
    }
    v10 = v9 + 8;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 80) + 112LL) + 200LL))(
          *(_QWORD *)(*(_QWORD *)(v10 + 80) + 112LL),
          **(unsigned int **)(v10 + 112));
  v11 = 8;
  if ( v13 )
    v11 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v10 + 80) + 112LL) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(v10 + 80) + 112LL),
            **(unsigned int **)(v10 + 112),
            8);
  if ( *(_QWORD *)(v10 + 120) > 1u
    && *(_DWORD *)(*(_QWORD *)(v10 + 112) + 4LL) - **(_DWORD **)(v10 + 112) < (unsigned int)v11 )
  {
    v11 = (unsigned int)round_down_power2();
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v9 + 288) & 2) != 0 )
    goto LABEL_11;
LABEL_22:
  v12 = v9 + 8;
LABEL_23:
  v14 = *(_QWORD *)(v12 + 80);
  v55 = v9 + 96;
  v15 = *(_QWORD *)(v14 + 112);
  v53 = 0;
  v56 = 0;
  LODWORD(v15) = *(_DWORD *)(v15 + 80);
  v61 = v9 + 120;
  v63 = v11;
  v57 = v15;
  v58 = 0xFFFFFFFFLL;
  v59 = 0;
  v62 = 0;
  v64 = 0xFFFFFFFFLL;
  v54 = 0;
  v60 = 0;
  v52 = sub_19D620(&v53, v6, v11, 0xFFFFFFFFLL, v7, v8, 0.0, a3);
  if ( v52 )
    v52 = *(_QWORD *)(a1 + 104) == (int)v58;
  v19 = *(_QWORD *)(a1 + 16);
  LODWORD(v20) = 0;
  v21 = *(_QWORD *)(v19 + 280);
  if ( (unsigned __int8)*(_QWORD *)(v21 + 328) )
  {
    if ( !(unsigned __int8)get_tinfo_details() )
    {
      if ( !under_debugger )
        sub_383060(0xC949u, 0.0);
      BUG();
    }
    v51 = *(_DWORD *)(*(_QWORD *)(v21 + 1504) + 80LL);
    if ( !*(_BYTE *)(v21 + 320) )
      goto LABEL_43;
    v22 = sub_194CC0(v21);
    if ( v22 > *(_QWORD *)(v21 + 144) )
    {
      v20 = (v22 + v51 - 1 - (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, 12)) / v51;
LABEL_30:
      cleanup_argloc();
      clear_tinfo_t();
      v19 = *(_QWORD *)(a1 + 16);
      goto LABEL_31;
    }
    v41 = sub_13D380((_QWORD *)v21, 0.0);
    if ( v41 == -1 )
      goto LABEL_43;
    v42 = (_DWORD *)(*(_QWORD *)(v21 + 432) + 104LL * v41);
    v43 = v42[2];
    v44 = *(_BYTE *)(*(_QWORD *)(v21 + 1496) + 145LL);
    v45 = v43;
    if ( *v42 == 3 )
    {
      v46 = 0;
      if ( v44 )
        goto LABEL_94;
    }
    else
    {
      v45 = HIWORD(v43);
      v46 = 0;
      if ( v44 )
        goto LABEL_94;
      if ( *v42 == 4 )
        v43 = (unsigned __int16)v43;
    }
    v47 = v42[22];
    if ( !v43 )
      v47 /= 2;
    v46 = v47 - 1;
LABEL_94:
    v48 = v46 + v45;
    v26 = *(_DWORD **)(v19 + 96);
    v49 = -v51 & v48;
    v50 = &v26[*(_QWORD *)(v19 + 104)];
    if ( v26 != v50 )
    {
      v28 = *(_DWORD **)(v19 + 96);
      while ( v49 != *v28 )
      {
        if ( v50 == ++v28 )
          goto LABEL_38;
      }
      if ( v50 != v28 )
        goto LABEL_99;
    }
LABEL_38:
    v26 = *(_DWORD **)(v19 + 120);
    v27 = &v26[*(_QWORD *)(v19 + 128)];
    if ( v26 != v27 )
    {
      v28 = *(_DWORD **)(v19 + 120);
      while ( v49 != *v28 )
      {
        if ( v27 == ++v28 )
          goto LABEL_43;
      }
      if ( v28 != v27 )
      {
LABEL_99:
        LODWORD(v20) = v28 - v26 + 1;
        goto LABEL_30;
      }
    }
LABEL_43:
    LODWORD(v20) = 0;
    goto LABEL_30;
  }
LABEL_31:
  if ( *(_DWORD *)(v19 + 8) != 3 )
    LODWORD(v20) = v20 - *(_DWORD *)(v19 + 48);
  if ( v52 )
  {
    if ( *(_BYTE *)(v6 + 320) )
    {
      if ( !*(_BYTE *)(v6 + 328) )
      {
        v23 = *(_QWORD *)(v19 + 24);
        if ( v23 >= (int)v20 )
          goto LABEL_36;
      }
    }
    else
    {
      v23 = *(_QWORD *)(v55 + 8) - v54;
      if ( v23 >= (int)v20 )
      {
LABEL_36:
        *(_DWORD *)(a1 + 112) = v23;
LABEL_37:
        v24 = &v53;
        v25 = 0;
        goto LABEL_46;
      }
    }
    *(_DWORD *)(a1 + 112) = v20;
    goto LABEL_37;
  }
  if ( !*(_BYTE *)(v6 + 328) && (int)v20 < *(_DWORD *)(v19 + 24) )
    LODWORD(v20) = *(_DWORD *)(v19 + 24);
  *(_DWORD *)(a1 + 112) = v20;
  v24 = nullptr;
  v25 = (*(_DWORD *)(v6 + 72) & 0xFFFFFFF0) != 208 && (*(_DWORD *)(v6 + 72) & 0xFFFFFFF0) != 64;
LABEL_46:
  if ( !(unsigned __int8)sub_1ACB10(a1, v24, v25, v16, v17, v18, 0.0, a3) )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v40 )
    {
      *(_QWORD *)(a1 + 72) = 0;
      qfree(v40);
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
  v29 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v29 != sub_194BA0 )
  {
    if ( v29(a1) )
    {
      if ( !v52 )
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
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    return 0;
  }
  if ( v52 )
  {
LABEL_64:
    if ( (int)v54 > 0 )
    {
      v32 = 0;
      v33 = 8LL * (unsigned int)(v54 - 1) + 8;
      do
      {
        v34 = v56;
        sub_11D5A0(*(_QWORD *)(v53 + v32));
        v35 = *(_DWORD *)(v34 + 24);
        v32 += 8;
        BYTE1(v35) &= ~2u;
        LOBYTE(v35) = v35 | 0x80;
        *(_DWORD *)(v34 + 24) = v35;
      }
      while ( v33 != v32 );
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
      v53 = 0;
      *((_QWORD *)&v54 + 1) = 0;
    }
    if ( (int)v60 > 0 )
    {
      v36 = 0;
      v37 = 8LL * (unsigned int)(v60 - 1) + 8;
      do
      {
        v38 = v62;
        sub_11D5A0(*(_QWORD *)(v59 + v36));
        v39 = *(_DWORD *)(v38 + 24);
        v36 += 8;
        BYTE1(v39) &= ~2u;
        LOBYTE(v39) = v39 | 0x80;
        *(_DWORD *)(v38 + 24) = v39;
      }
      while ( v36 != v37 );
    }
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree(v59);
      v59 = 0;
      *((_QWORD *)&v60 + 1) = 0;
    }
    if ( !*(_QWORD *)(a1 + 72) )
      goto LABEL_54;
  }
LABEL_50:
  v30 = 0;
  v31 = 0;
  do
  {
    sub_1A4EB0(a1, (__int64 *)(*(_QWORD *)(a1 + 64) + 40 * v31), 0.0, a3);
    v31 = ++v30;
  }
  while ( (unsigned __int64)v30 < *(_QWORD *)(a1 + 72) );
LABEL_52:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
LABEL_54:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  return 1;
}

