__int64 __fastcall sub_249450(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rdx
  _DWORD *v6; // r15
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // edx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rax
  int v25; // edx
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rbx
  int tinfo_size; // ebp
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(__int64, unsigned int); // rax
  char v42; // bl
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ebx
  __int64 (__fastcall *v46)(__int64, unsigned int); // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD v52[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v53; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v55; // [rsp+60h] [rbp-68h] BYREF
  __int64 v56; // [rsp+70h] [rbp-58h]
  int v57; // [rsp+78h] [rbp-50h]
  __int16 v58; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v59; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 328);
  v6 = *(_DWORD **)(v5 + 112);
  v59 = __readfsqword(0x28u);
  v7 = *(_BYTE *)a2;
  v52[0] = 0;
  if ( v7 != 1 )
  {
LABEL_2:
    if ( v7 == 9
      && *(_BYTE *)a3 == 9
      && (v43 = *(_QWORD *)(a3 + 8), v44 = *(_QWORD *)(a2 + 8), *(_DWORD *)(v44 + 16) == *(_DWORD *)(v43 + 16))
      && *(_QWORD *)(v44 + 8) + *(int *)(a2 + 4) == *(_QWORD *)(v43 + 8) )
    {
      sub_120000((__int64)v54, (unsigned __int8 *)a2);
      HIDWORD(v54[0]) += *(_DWORD *)(a3 + 4);
      if ( *a4 )
      {
        v52[1] = 0;
        v53 = 0;
        v55 = 0;
        copy_tinfo_t();
        v56 = 0;
        copy_tinfo_t();
        v57 = 0;
        v58 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      v37 = sub_245E70(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, (__int64)v54, v52, v52, 0);
      sub_119360((__int64)v54);
    }
    else
    {
      v8 = qalloc_or_throw();
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_DWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      sub_242580((__int64 *)v8, 2u);
      sub_327F40(&v53, v6, *(unsigned int *)(a2 + 4));
      sub_327F40(v54, v6, *(unsigned int *)(a3 + 4));
      v9 = *(_QWORD *)v8;
      *(_QWORD *)&v55 = 0;
      v10 = sub_245E70(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a2, &v55, &v53, 0);
      v11 = *(_QWORD *)v10;
      *(_QWORD *)v10 = *(_QWORD *)v9;
      v12 = *(_DWORD *)(v9 + 8);
      *(_QWORD *)v9 = v11;
      LODWORD(v11) = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v10 + 8) = v12;
      v13 = *(_DWORD *)(v9 + 12);
      *(_DWORD *)(v9 + 8) = v11;
      LODWORD(v11) = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(v10 + 12) = v13;
      v14 = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 12) = v11;
      v15 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 24) = v14;
      v16 = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 24) = v15;
      v17 = *(_QWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 32) = v16;
      v18 = *(_QWORD *)(v9 + 40);
      *(_QWORD *)(v9 + 32) = v17;
      v19 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 40) = v18;
      v20 = *(_QWORD *)(v9 + 48);
      *(_QWORD *)(v9 + 40) = v19;
      v21 = *(_QWORD *)(v10 + 48);
      *(_QWORD *)(v10 + 48) = v20;
      LODWORD(v20) = *(_DWORD *)(v9 + 56);
      *(_QWORD *)(v9 + 48) = v21;
      LODWORD(v21) = *(_DWORD *)(v10 + 56);
      *(_DWORD *)(v10 + 56) = v20;
      *(_DWORD *)(v9 + 56) = v21;
      if ( v10 )
      {
        sub_2519B0(v10);
        clear_tinfo_t();
        j__qfree();
      }
      clear_tinfo_t();
      v22 = *(_QWORD *)v8;
      *(_QWORD *)&v55 = 0;
      v23 = sub_245E70(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, &v55, v54, 0);
      v24 = *(_QWORD *)v23;
      *(_QWORD *)v23 = *(_QWORD *)(v22 + 72);
      v25 = *(_DWORD *)(v22 + 80);
      *(_QWORD *)(v22 + 72) = v24;
      LODWORD(v24) = *(_DWORD *)(v23 + 8);
      *(_DWORD *)(v23 + 8) = v25;
      v26 = *(_DWORD *)(v22 + 84);
      *(_DWORD *)(v22 + 80) = v24;
      LODWORD(v24) = *(_DWORD *)(v23 + 12);
      *(_DWORD *)(v23 + 12) = v26;
      v27 = *(_QWORD *)(v22 + 96);
      *(_DWORD *)(v22 + 84) = v24;
      v28 = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v23 + 24) = v27;
      v29 = *(_QWORD *)(v22 + 104);
      *(_QWORD *)(v22 + 96) = v28;
      v30 = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v23 + 32) = v29;
      v31 = *(_QWORD *)(v22 + 112);
      *(_QWORD *)(v22 + 104) = v30;
      v32 = *(_QWORD *)(v23 + 40);
      *(_QWORD *)(v23 + 40) = v31;
      v33 = *(_QWORD *)(v22 + 120);
      *(_QWORD *)(v22 + 112) = v32;
      v34 = *(_QWORD *)(v23 + 48);
      *(_QWORD *)(v23 + 48) = v33;
      LODWORD(v33) = *(_DWORD *)(v22 + 128);
      *(_QWORD *)(v22 + 120) = v34;
      LODWORD(v34) = *(_DWORD *)(v23 + 56);
      *(_DWORD *)(v23 + 56) = v33;
      *(_DWORD *)(v22 + 128) = v34;
      if ( v23 )
      {
        sub_2519B0(v23);
        clear_tinfo_t();
        j__qfree();
      }
      clear_tinfo_t();
      v35 = *(_QWORD *)(*(_QWORD *)v8 + 64LL);
      *(_QWORD *)(*(_QWORD *)v8 + 64LL) = v53;
      v53 = v35;
      v36 = *(_QWORD *)(*(_QWORD *)v8 + 136LL);
      *(_QWORD *)(*(_QWORD *)v8 + 136LL) = v54[0];
      v54[0] = v36;
      if ( *a4 )
      {
        sub_328210(&v55, v6, a4);
      }
      else
      {
        *(_QWORD *)&v55 = 0;
        copy_tinfo_t();
      }
      v37 = sub_EDC00((__int64)&v55, v8, (__int64)"MK_FP");
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    goto LABEL_11;
  }
  v40 = *(unsigned int *)(a2 + 8);
  v41 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 256LL);
  if ( v41 == sub_17F910 )
  {
    v42 = *(_BYTE *)(v5 + 129);
    if ( *(_DWORD *)(a3 + 4) != v6[21] )
      goto LABEL_18;
LABEL_35:
    if ( (_DWORD)v40 != v6[13] && (_DWORD)v40 != v6[14] && (_DWORD)v40 != v6[16] )
      goto LABEL_21;
    if ( (~v42 & 3) != 0 )
    {
      LOBYTE(v45) = 0;
      goto LABEL_29;
    }
    v45 = v42 & 8;
    if ( !v45 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v40 = (unsigned int)v41((__int64)v6, v40);
  v42 = *(_BYTE *)(*(_QWORD *)(a1 + 328) + 129LL);
  if ( *(_DWORD *)(a3 + 4) == v6[21] )
  {
    v46 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 256LL);
    if ( v46 != sub_17F910 )
      LODWORD(v40) = v46((__int64)v6, v40);
    goto LABEL_35;
  }
LABEL_18:
  if ( v6[13] == (_DWORD)v40 )
  {
    if ( (v42 & 3) != 2 )
    {
      v47 = sub_CC530();
      LOBYTE(v45) = v47 + 4;
      if ( !v47 )
        LOBYTE(v45) = 8;
      goto LABEL_29;
    }
LABEL_28:
    LOBYTE(v45) = 0;
    goto LABEL_29;
  }
  if ( v6[16] == (_DWORD)v40 )
  {
    v49 = sub_CC530();
    LOBYTE(v45) = v49 + 2;
    if ( !v49 )
      LOBYTE(v45) = 6;
  }
  else
  {
    if ( v6[14] != (_DWORD)v40 )
    {
LABEL_21:
      v7 = *(_BYTE *)a2;
      goto LABEL_2;
    }
    v48 = sub_CC530();
    LOBYTE(v45) = v48 + 3;
    if ( !v48 )
      LOBYTE(v45) = 7;
  }
LABEL_29:
  if ( *a4 )
  {
    v53 = 0;
    v54[0] = 0;
    v55 = 0;
    copy_tinfo_t();
    v56 = 0;
    copy_tinfo_t();
    v58 = (unsigned __int8)v45;
    v57 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v37 = sub_245E70(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, v52, v52, 0);
LABEL_11:
  if ( (unsigned __int8)*(_QWORD *)a4 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size != (unsigned int)get_tinfo_property() )
      sub_242EC0(v37, *(_QWORD *)(a1 + 328), v52);
  }
  clear_tinfo_t();
  return v37;
}

