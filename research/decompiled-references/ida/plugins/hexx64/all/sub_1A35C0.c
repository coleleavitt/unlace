__int64 __fastcall sub_1A35C0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 v9; // r15
  bool v10; // cc
  _DWORD *v11; // rsi
  char tinfo; // al
  __int64 v13; // rdi
  __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  int v31; // eax
  __int64 v32; // r14
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r14
  int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  char v43; // [rsp+Fh] [rbp-B1h]
  __int64 *i; // [rsp+10h] [rbp-B0h]
  __int64 v46; // [rsp+18h] [rbp-A8h]
  __int64 v47; // [rsp+18h] [rbp-A8h]
  unsigned int v48; // [rsp+18h] [rbp-A8h]
  __int64 *v50; // [rsp+20h] [rbp-A0h]
  __int64 *v51; // [rsp+20h] [rbp-A0h]
  unsigned int v52; // [rsp+28h] [rbp-98h]
  __int64 v53; // [rsp+28h] [rbp-98h]
  __int64 v54; // [rsp+38h] [rbp-88h] BYREF
  __int64 v55; // [rsp+40h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-78h]
  __int64 v57; // [rsp+50h] [rbp-70h] BYREF
  __int128 v58; // [rsp+58h] [rbp-68h]
  __int128 v59; // [rsp+68h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-48h]
  int v61; // [rsp+80h] [rbp-40h]
  unsigned __int64 v62; // [rsp+88h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  if ( !a1[7] )
    return 0;
  if ( !a1[5] )
  {
    if ( a1[11] )
    {
      v52 = *((_DWORD *)a1 + 60);
      if ( v52 )
        goto LABEL_5;
    }
    else
    {
      v6 = *((unsigned __int8 *)a1 + 244);
      if ( !(_BYTE)v6 )
      {
        v52 = *((_DWORD *)a1 + 60);
        if ( !v52 )
          return v6;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v52 = *((_DWORD *)a1 + 60);
  if ( !v52 )
    return 0;
  if ( !a1[11] )
  {
LABEL_14:
    v5 = *a1;
    goto LABEL_15;
  }
LABEL_5:
  v4 = *(_QWORD *)a1[10];
  v5 = *a1;
  v46 = *(_QWORD *)(*(_QWORD *)(*a1 + 480LL) + 112LL);
  if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 && *(_BYTE *)(v4 + 48) != 4 && *(_DWORD *)(v4 + 68) == v52 )
  {
    v54 = 0;
    v57 = 25;
    goto LABEL_16;
  }
LABEL_15:
  v8 = *(_QWORD *)(v5 + 480);
  v54 = 0;
  v46 = *(_QWORD *)(v8 + 112);
  sub_32C270(&v57, v46, v52);
LABEL_16:
  copy_tinfo_t();
  clear_tinfo_t();
  v57 = 0;
  v60 = 0;
  v61 = 1;
  v58 = 0;
  v59 = 0;
  v57 = qvector_reserve((__int64)&v57, 0, 1, 144);
  v9 = v57 + 144 * v58;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 112) = 1;
  *(_DWORD *)(v9 + 120) = -1;
  *(_QWORD *)(v9 + 128) = 0;
  *(_BYTE *)(v9 + 136) = 0;
  *(_OWORD *)v9 = 0;
  *(_OWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  *(_QWORD *)&v58 = v58 + 1;
  sub_32C430(&v55, v46, v52, 0);
  copy_tinfo_t();
  clear_tinfo_t();
  v10 = *(_QWORD *)(v9 + 32) <= 7u;
  *(_QWORD *)v9 = 0;
  v11 = *(_DWORD **)(v9 + 16);
  if ( v10 )
  {
    v35 = qvector_reserve(v9 + 16, (__int64)v11, 8, 1);
    *(_QWORD *)(v9 + 16) = v35;
    v11 = (_DWORD *)v35;
  }
  *(_QWORD *)(v9 + 24) = 8;
  *v11 = 1818585446;
  *(_DWORD *)((char *)v11 + 3) = 811557996;
  *(_BYTE *)(*(_QWORD *)(v9 + 16) + 7LL) = 0;
  tinfo = create_tinfo();
  v13 = v57;
  v43 = tinfo;
  if ( v57 )
  {
    v47 = v58;
    if ( (_QWORD)v58 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v13 + 144 * v14);
        clear_tinfo_t();
        v16 = v15[5];
        if ( v16 )
        {
          v15[6] = 0;
          qfree(v16);
        }
        v17 = v15[2];
        if ( v17 )
        {
          v15[3] = 0;
          qfree(v17);
        }
        v13 = v57;
        ++v14;
      }
      while ( v47 != v14 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v13);
  }
  if ( !v43 )
  {
    if ( !under_debugger )
      sub_383060(0xCD49u, 0.0);
    BUG();
  }
  v57 = 0;
  v58 = 0;
  print_tinfo();
  if ( !a1[7] || !a1[5] && !a1[11] )
  {
    v55 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v48 = -1;
    goto LABEL_31;
  }
  v48 = sub_138140(*(_QWORD **)(*a1 + 64LL), (int)v52, 0, 0.0);
  if ( v48 != -1 )
  {
LABEL_31:
    v18 = a1[8];
    v19 = *(_QWORD *)(a1[9] + 16LL);
    v20 = a1[5];
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 24);
      LOBYTE(v56) = 5;
      v55 = a2;
      v50 = sub_19AC70(v18, v19, &v55, -1, v21, v48, -1, (__int64)&v54, (__int64)&v57, a3);
      v24 = j__qalloc_or_throw(80, v19, v22, v23);
      v25 = v50[3];
      *(_QWORD *)(v24 + 40) = 0;
      *(_QWORD *)(v24 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v24 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v24 + 56) = 0;
      *(_QWORD *)(v24 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v24 + 72) = 0;
      sub_330970(v24, v25);
      *(_DWORD *)v24 = 4;
      *(_BYTE *)(v24 + 32) = 10;
      v28 = j__qalloc_or_throw(24, v25, v26, v27);
      v29 = v52;
      LODWORD(v55) = 1;
      v56 = v48;
      HIDWORD(v55) = v52;
      v53 = v28;
      sub_123A40(v28, (unsigned __int8 *)&v55, v29, v48);
      *(_QWORD *)(v53 + 16) = -1;
      *(_QWORD *)(v24 + 40) = v53;
      sub_11CDA0((__int64)&v55);
      *(_DWORD *)(v24 + 36) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 64LL) + 1504LL) + 84LL);
      sub_125180((unsigned __int8 *)(v24 + 64), (unsigned __int8 *)(a1[5] + 64LL));
      sub_A3160(v18, (_QWORD *)v24, (__int64)v50, 0.0);
      v30 = a1[4];
      sub_11D5A0(a1[5]);
      v31 = *(_DWORD *)(v30 + 24);
      BYTE1(v31) &= ~2u;
      LOBYTE(v31) = v31 | 0x80;
      *(_DWORD *)(v30 + 24) = v31;
    }
    else
    {
      v36 = a1[8];
      v37 = *(_QWORD *)(a1[7] + 24LL);
      LOBYTE(v56) = 5;
      v55 = a2;
      sub_19AC70(v36, v19, &v55, -1, v37, v48, -1, (__int64)&v54, (__int64)&v57, a3);
      v38 = a1[11];
      if ( v38 )
      {
        v51 = (__int64 *)a1[10];
        for ( i = &v51[v38]; i != v51; ++v51 )
        {
          v39 = *v51;
          v40 = 10;
          if ( *(_DWORD *)(*v51 + 68) == v52 )
            v40 = 4;
          *(_DWORD *)v39 = v40;
          LODWORD(v55) = 1;
          HIDWORD(v55) = v52;
          v56 = v48;
          sub_125180((unsigned __int8 *)(v39 + 32), (unsigned __int8 *)&v55);
          sub_11CDA0((__int64)&v55);
          sub_11CDA0(v39 + 48);
          if ( (get_tinfo_property() & 0x2F) == 0xD )
            *(_BYTE *)(v39 + 33) |= 2u;
        }
        v41 = a1[14];
        v42 = *(_DWORD *)(v41 + 24);
        BYTE1(v42) &= ~2u;
        LOBYTE(v42) = v42 | 0x80;
        *(_DWORD *)(v41 + 24) = v42;
      }
    }
    v32 = a1[6];
    sub_11D5A0(a1[7]);
    v33 = *(_DWORD *)(v32 + 24);
    v6 = 1;
    BYTE1(v33) &= ~2u;
    LOBYTE(v33) = v33 | 0x80;
    *(_DWORD *)(v32 + 24) = v33;
    v34 = *(_DWORD *)(v18 + 24);
    BYTE1(v34) &= ~2u;
    LOBYTE(v34) = v34 | 0x80;
    *(_DWORD *)(v18 + 24) = v34;
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  clear_tinfo_t();
  return v6;
}

