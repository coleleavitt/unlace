__int64 __fastcall sub_19FB80(_QWORD *a1, __int64 a2, char a3)
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
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r14
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  char v36; // [rsp+Fh] [rbp-B1h]
  __int64 *i; // [rsp+10h] [rbp-B0h]
  __int64 v39; // [rsp+18h] [rbp-A8h]
  __int64 v40; // [rsp+18h] [rbp-A8h]
  unsigned int v41; // [rsp+18h] [rbp-A8h]
  __int64 *v43; // [rsp+20h] [rbp-A0h]
  __int64 *v44; // [rsp+20h] [rbp-A0h]
  unsigned int v45; // [rsp+28h] [rbp-98h]
  __int64 v46; // [rsp+28h] [rbp-98h]
  __int64 v47; // [rsp+38h] [rbp-88h] BYREF
  __int64 v48; // [rsp+40h] [rbp-80h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-78h]
  __int64 v50; // [rsp+50h] [rbp-70h] BYREF
  __int128 v51; // [rsp+58h] [rbp-68h]
  __int128 v52; // [rsp+68h] [rbp-58h]
  __int64 v53; // [rsp+78h] [rbp-48h]
  int v54; // [rsp+80h] [rbp-40h]
  unsigned __int64 v55; // [rsp+88h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  if ( !a1[7] )
    return 0;
  if ( !a1[5] )
  {
    if ( a1[11] )
    {
      v45 = *((_DWORD *)a1 + 60);
      if ( v45 )
        goto LABEL_5;
    }
    else
    {
      v6 = *((unsigned __int8 *)a1 + 244);
      if ( !(_BYTE)v6 )
      {
        v45 = *((_DWORD *)a1 + 60);
        if ( !v45 )
          return v6;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v45 = *((_DWORD *)a1 + 60);
  if ( !v45 )
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
  v39 = *(_QWORD *)(*(_QWORD *)(*a1 + 480LL) + 112LL);
  if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 && *(_BYTE *)(v4 + 48) != 4 && *(_DWORD *)(v4 + 68) == v45 )
  {
    v47 = 0;
    v50 = 25;
    goto LABEL_16;
  }
LABEL_15:
  v8 = *(_QWORD *)(v5 + 480);
  v47 = 0;
  v39 = *(_QWORD *)(v8 + 112);
  sub_327F40(&v50, v39, v45);
LABEL_16:
  copy_tinfo_t();
  clear_tinfo_t();
  v50 = 0;
  v53 = 0;
  v54 = 1;
  v51 = 0;
  v52 = 0;
  v50 = qvector_reserve();
  v9 = v50 + 144 * v51;
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
  *(_QWORD *)&v51 = v51 + 1;
  sub_328100(&v48, v39, v45, 0);
  copy_tinfo_t();
  clear_tinfo_t();
  v10 = *(_QWORD *)(v9 + 32) <= 7u;
  *(_QWORD *)v9 = 0;
  v11 = *(_DWORD **)(v9 + 16);
  if ( v10 )
  {
    v28 = qvector_reserve();
    *(_QWORD *)(v9 + 16) = v28;
    v11 = (_DWORD *)v28;
  }
  *(_QWORD *)(v9 + 24) = 8;
  *v11 = 1818585446;
  *(_DWORD *)((char *)v11 + 3) = 811557996;
  *(_BYTE *)(*(_QWORD *)(v9 + 16) + 7LL) = 0;
  tinfo = create_tinfo();
  v13 = v50;
  v36 = tinfo;
  if ( v50 )
  {
    v40 = v51;
    if ( (_QWORD)v51 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v13 + 144 * v14);
        clear_tinfo_t();
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        v13 = v50;
        ++v14;
      }
      while ( v40 != v14 );
    }
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  if ( !v36 )
  {
    if ( !under_debugger )
      sub_37EEE0(52553);
    BUG();
  }
  v50 = 0;
  v51 = 0;
  print_tinfo();
  if ( !a1[7] || !a1[5] && !a1[11] )
  {
    v48 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v41 = -1;
    goto LABEL_31;
  }
  v41 = sub_134700(*(_QWORD **)(*a1 + 64LL), (int)v45, 0);
  if ( v41 != -1 )
  {
LABEL_31:
    v16 = a1[8];
    v17 = *(_QWORD *)(a1[9] + 16LL);
    v18 = a1[5];
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 24);
      LOBYTE(v49) = 5;
      v48 = a2;
      v43 = sub_197230(v16, v17, &v48, -1, v19, v41, -1, (__int64)&v47, (__int64)&v50, a3);
      v20 = j__qalloc_or_throw();
      v21 = v43[3];
      *(_QWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v20 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v20 + 56) = 0;
      *(_QWORD *)(v20 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v20 + 72) = 0;
      sub_32C520(v20, v21);
      *(_DWORD *)v20 = 4;
      *(_BYTE *)(v20 + 32) = 10;
      v22 = j__qalloc_or_throw();
      LODWORD(v48) = 1;
      v49 = v41;
      HIDWORD(v48) = v45;
      v46 = v22;
      sub_120000(v22, (unsigned __int8 *)&v48);
      *(_QWORD *)(v46 + 16) = -1;
      *(_QWORD *)(v20 + 40) = v46;
      sub_119360((__int64)&v48);
      *(_DWORD *)(v20 + 36) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 64LL) + 1504LL) + 84LL);
      sub_121740(v20 + 64, (unsigned __int8 *)(a1[5] + 64LL));
      sub_9F720(v16, (_QWORD *)v20, (__int64)v43);
      v23 = a1[4];
      sub_119B60(a1[5]);
      v24 = *(_DWORD *)(v23 + 24);
      BYTE1(v24) &= ~2u;
      LOBYTE(v24) = v24 | 0x80;
      *(_DWORD *)(v23 + 24) = v24;
    }
    else
    {
      v29 = a1[8];
      v30 = *(_QWORD *)(a1[7] + 24LL);
      LOBYTE(v49) = 5;
      v48 = a2;
      sub_197230(v29, v17, &v48, -1, v30, v41, -1, (__int64)&v47, (__int64)&v50, a3);
      v31 = a1[11];
      if ( v31 )
      {
        v44 = (__int64 *)a1[10];
        for ( i = &v44[v31]; i != v44; ++v44 )
        {
          v32 = *v44;
          v33 = 10;
          if ( *(_DWORD *)(*v44 + 68) == v45 )
            v33 = 4;
          *(_DWORD *)v32 = v33;
          LODWORD(v48) = 1;
          HIDWORD(v48) = v45;
          v49 = v41;
          sub_121740(v32 + 32, (unsigned __int8 *)&v48);
          sub_119360((__int64)&v48);
          sub_119360(v32 + 48);
          if ( (get_tinfo_property() & 0x2F) == 0xD )
            *(_BYTE *)(v32 + 33) |= 2u;
        }
        v34 = a1[14];
        v35 = *(_DWORD *)(v34 + 24);
        BYTE1(v35) &= ~2u;
        LOBYTE(v35) = v35 | 0x80;
        *(_DWORD *)(v34 + 24) = v35;
      }
    }
    v25 = a1[6];
    sub_119B60(a1[7]);
    v26 = *(_DWORD *)(v25 + 24);
    v6 = 1;
    BYTE1(v26) &= ~2u;
    LOBYTE(v26) = v26 | 0x80;
    *(_DWORD *)(v25 + 24) = v26;
    v27 = *(_DWORD *)(v16 + 24);
    BYTE1(v27) &= ~2u;
    LOBYTE(v27) = v27 | 0x80;
    *(_DWORD *)(v16 + 24) = v27;
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v6;
}

