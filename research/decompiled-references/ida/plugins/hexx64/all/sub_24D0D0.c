__int64 __fastcall sub_24D0D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  _DWORD *v7; // r15
  unsigned __int8 v8; // al
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // edx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // edx
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rbx
  int tinfo_size; // ebp
  __int64 (__fastcall *v41)(__int64, unsigned int); // rax
  char v42; // bl
  __int64 v43; // rax
  int v44; // ebx
  __int64 (__fastcall *v45)(__int64, unsigned int); // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v50; // [rsp+10h] [rbp-B8h]
  _QWORD v51[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v52; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v53[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v54; // [rsp+60h] [rbp-68h] BYREF
  __int64 v55; // [rsp+70h] [rbp-58h]
  int v56; // [rsp+78h] [rbp-50h]
  __int16 v57; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v58; // [rsp+88h] [rbp-40h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 328);
  v50 = (_QWORD *)a4;
  v7 = *(_DWORD **)(v6 + 112);
  v58 = __readfsqword(0x28u);
  v8 = *(_BYTE *)a2;
  v51[0] = 0;
  if ( v8 != 1 )
  {
LABEL_2:
    if ( v8 == 9
      && *(_BYTE *)a3 == 9
      && (v43 = *(_QWORD *)(a3 + 8),
          v6 = *(_QWORD *)(v5 + 8),
          a4 = *(unsigned int *)(v43 + 16),
          *(_DWORD *)(v6 + 16) == (_DWORD)a4)
      && (a4 = *(_QWORD *)(v6 + 8) + *(int *)(v5 + 4), a4 == *(_QWORD *)(v43 + 8)) )
    {
      sub_123A40((__int64)v53, (unsigned __int8 *)v5, v6, a4);
      HIDWORD(v53[0]) += *(_DWORD *)(a3 + 4);
      if ( *(_BYTE *)v50 )
      {
        a5 = 0.0;
        v51[1] = 0;
        v52 = 0;
        v54 = 0;
        copy_tinfo_t();
        v55 = 0;
        copy_tinfo_t();
        v56 = 0;
        v57 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      v38 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, (__int64)v53, v51, v51, 0, a5);
      sub_11CDA0((__int64)v53);
    }
    else
    {
      a5 = 0.0;
      v9 = qalloc_or_throw(40, a2, v6, a4);
      *(_QWORD *)v9 = 0;
      *(_QWORD *)(v9 + 24) = 0;
      *(_DWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 8) = 0;
      sub_246200((__int64 *)v9, 2u);
      sub_32C270(&v52, (__int64)v7, *(_DWORD *)(v5 + 4));
      sub_32C270(v53, (__int64)v7, *(_DWORD *)(a3 + 4));
      v10 = *(_QWORD *)v9;
      *(_QWORD *)&v54 = 0;
      v11 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v5, &v54, &v52, 0, 0.0);
      v12 = *(_QWORD *)v11;
      *(_QWORD *)v11 = *(_QWORD *)v10;
      v13 = *(_DWORD *)(v10 + 8);
      *(_QWORD *)v10 = v12;
      LODWORD(v12) = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 8) = v13;
      v14 = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(v10 + 8) = v12;
      LODWORD(v12) = *(_DWORD *)(v11 + 12);
      *(_DWORD *)(v11 + 12) = v14;
      v15 = *(_QWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 12) = v12;
      v16 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = v15;
      v17 = *(_QWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 24) = v16;
      v18 = *(_QWORD *)(v11 + 32);
      *(_QWORD *)(v11 + 32) = v17;
      v19 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 32) = v18;
      v20 = *(_QWORD *)(v11 + 40);
      *(_QWORD *)(v11 + 40) = v19;
      v21 = *(_QWORD *)(v10 + 48);
      *(_QWORD *)(v10 + 40) = v20;
      v22 = *(_QWORD *)(v11 + 48);
      *(_QWORD *)(v11 + 48) = v21;
      LODWORD(v21) = *(_DWORD *)(v10 + 56);
      *(_QWORD *)(v10 + 48) = v22;
      LODWORD(v22) = *(_DWORD *)(v11 + 56);
      *(_DWORD *)(v11 + 56) = v21;
      *(_DWORD *)(v10 + 56) = v22;
      if ( v11 )
      {
        sub_255630(v11);
        clear_tinfo_t();
        j__qfree(v11);
      }
      clear_tinfo_t();
      v23 = *(_QWORD *)v9;
      *(_QWORD *)&v54 = 0;
      v24 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, &v54, v53, 0, 0.0);
      v25 = *(_QWORD *)v24;
      *(_QWORD *)v24 = *(_QWORD *)(v23 + 72);
      v26 = *(_DWORD *)(v23 + 80);
      *(_QWORD *)(v23 + 72) = v25;
      LODWORD(v25) = *(_DWORD *)(v24 + 8);
      *(_DWORD *)(v24 + 8) = v26;
      v27 = *(_DWORD *)(v23 + 84);
      *(_DWORD *)(v23 + 80) = v25;
      LODWORD(v25) = *(_DWORD *)(v24 + 12);
      *(_DWORD *)(v24 + 12) = v27;
      v28 = *(_QWORD *)(v23 + 96);
      *(_DWORD *)(v23 + 84) = v25;
      v29 = *(_QWORD *)(v24 + 24);
      *(_QWORD *)(v24 + 24) = v28;
      v30 = *(_QWORD *)(v23 + 104);
      *(_QWORD *)(v23 + 96) = v29;
      v31 = *(_QWORD *)(v24 + 32);
      *(_QWORD *)(v24 + 32) = v30;
      v32 = *(_QWORD *)(v23 + 112);
      *(_QWORD *)(v23 + 104) = v31;
      v33 = *(_QWORD *)(v24 + 40);
      *(_QWORD *)(v24 + 40) = v32;
      v34 = *(_QWORD *)(v23 + 120);
      *(_QWORD *)(v23 + 112) = v33;
      v35 = *(_QWORD *)(v24 + 48);
      *(_QWORD *)(v24 + 48) = v34;
      LODWORD(v34) = *(_DWORD *)(v23 + 128);
      *(_QWORD *)(v23 + 120) = v35;
      LODWORD(v35) = *(_DWORD *)(v24 + 56);
      *(_DWORD *)(v24 + 56) = v34;
      *(_DWORD *)(v23 + 128) = v35;
      if ( v24 )
      {
        sub_255630(v24);
        clear_tinfo_t();
        j__qfree(v24);
      }
      clear_tinfo_t();
      v36 = *(_QWORD *)(*(_QWORD *)v9 + 64LL);
      *(_QWORD *)(*(_QWORD *)v9 + 64LL) = v52;
      v52 = v36;
      v37 = *(_QWORD *)(*(_QWORD *)v9 + 136LL);
      *(_QWORD *)(*(_QWORD *)v9 + 136LL) = v53[0];
      v53[0] = v37;
      if ( *(_BYTE *)v50 )
      {
        sub_32C540(&v54, (__int64)v7, v50);
      }
      else
      {
        *(_QWORD *)&v54 = 0;
        copy_tinfo_t();
      }
      v38 = sub_F1640((__int64)&v54, v9);
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    goto LABEL_11;
  }
  a2 = *(unsigned int *)(a2 + 8);
  v41 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v7 + 256LL);
  if ( v41 == sub_183350 )
  {
    v42 = *(_BYTE *)(v6 + 129);
    a4 = (unsigned int)v7[21];
    if ( *(_DWORD *)(a3 + 4) != (_DWORD)a4 )
      goto LABEL_18;
LABEL_35:
    if ( (_DWORD)a2 != v7[13] && (_DWORD)a2 != v7[14] && (_DWORD)a2 != v7[16] )
      goto LABEL_21;
    if ( (~v42 & 3) != 0 )
    {
      LOBYTE(v44) = 0;
      goto LABEL_29;
    }
    v44 = v42 & 8;
    if ( !v44 )
      goto LABEL_29;
    goto LABEL_28;
  }
  a2 = (unsigned int)v41((__int64)v7, a2);
  a4 = (unsigned int)v7[21];
  v42 = *(_BYTE *)(*(_QWORD *)(a1 + 328) + 129LL);
  if ( *(_DWORD *)(a3 + 4) == (_DWORD)a4 )
  {
    v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v7 + 256LL);
    if ( v45 != sub_183350 )
      a2 = (unsigned int)v45((__int64)v7, a2);
    goto LABEL_35;
  }
LABEL_18:
  if ( v7[13] == (_DWORD)a2 )
  {
    if ( (v42 & 3) != 2 )
    {
      v46 = sub_CFF70();
      LOBYTE(v44) = v46 + 4;
      if ( !v46 )
        LOBYTE(v44) = 8;
      goto LABEL_29;
    }
LABEL_28:
    LOBYTE(v44) = 0;
    goto LABEL_29;
  }
  if ( v7[16] == (_DWORD)a2 )
  {
    v48 = sub_CFF70();
    LOBYTE(v44) = v48 + 2;
    if ( !v48 )
      LOBYTE(v44) = 6;
  }
  else
  {
    if ( v7[14] != (_DWORD)a2 )
    {
LABEL_21:
      v8 = *(_BYTE *)v5;
      goto LABEL_2;
    }
    v47 = sub_CFF70();
    LOBYTE(v44) = v47 + 3;
    if ( !v47 )
      LOBYTE(v44) = 7;
  }
LABEL_29:
  if ( *(_BYTE *)v50 )
  {
    a5 = 0.0;
    v52 = 0;
    v53[0] = 0;
    v54 = 0;
    copy_tinfo_t();
    v55 = 0;
    copy_tinfo_t();
    v57 = (unsigned __int8)v44;
    v56 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v38 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, v51, v51, 0, a5);
LABEL_11:
  if ( (unsigned __int8)*v50 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size != (unsigned int)get_tinfo_property() )
      sub_246B40(v38, *(_QWORD *)(a1 + 328), v51, a5);
  }
  clear_tinfo_t();
  return v38;
}

