__int64 __fastcall sub_286F30(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned int v48; // [rsp+0h] [rbp-80h]
  __int64 v49; // [rsp+0h] [rbp-80h]
  char v50; // [rsp+Fh] [rbp-71h]
  __int64 v51; // [rsp+10h] [rbp-70h]
  _QWORD *v52; // [rsp+18h] [rbp-68h]
  __int64 v53; // [rsp+18h] [rbp-68h]
  __int64 v54; // [rsp+20h] [rbp-60h] BYREF
  __int64 v55; // [rsp+28h] [rbp-58h]
  __int64 v56; // [rsp+30h] [rbp-50h]
  __int64 v57; // [rsp+38h] [rbp-48h]
  unsigned __int64 v58; // [rsp+48h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  v52 = *(_QWORD **)(a2 + 24);
  v3 = v52[9];
  if ( !v3 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v52[8] + 24LL) + 16LL) != 1 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL) != 1 )
    return 0;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v7 = 2;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  v8 = **(_QWORD **)(v52[8] + 24LL);
  v9 = **(_QWORD **)(v52[9] + 24LL);
  if ( *(_DWORD *)(v8 + 24) == 80 && *(_DWORD *)(v9 + 24) == 80 )
  {
    v50 = sub_285300((__int64)v52);
    if ( !v50 )
      return 0;
    v12 = *(_QWORD *)(v8 + 40);
    v51 = *(_QWORD *)(v9 + 40);
  }
  else
  {
    if ( !(unsigned __int8)sub_29CC80(v52 + 6) )
      return 0;
    if ( *(_DWORD *)(v8 + 24) != 72 )
      return 0;
    if ( *(_DWORD *)(v9 + 24) != 72 )
      return 0;
    v10 = *(_QWORD *)(v8 + 40);
    if ( *(_DWORD *)(v10 + 8) != 2 )
      return 0;
    v11 = *(_QWORD *)(v9 + 40);
    if ( *(_DWORD *)(v11 + 8) != 2 )
      return 0;
    v7 = *(_QWORD *)(v11 + 24);
    if ( sub_259AA0(*(_QWORD *)(v10 + 24), v7, a3) )
      return 0;
    v50 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 32LL);
    v51 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 32LL);
  }
  if ( (unsigned __int8)sub_285230(v8 + 16) )
    return 0;
  if ( (unsigned __int8)sub_285230(v9 + 16) )
    return 0;
  v48 = sub_27F570(v12);
  v13 = sub_27F570(v51);
  v14 = (v13 & v48) + 1;
  if ( (v13 & v48) == 0xFFFFFFFF )
    return 0;
  LOBYTE(v7) = v48 != -1;
  LOBYTE(v14) = v13 != -1;
  if ( ((unsigned __int8)v14 & (unsigned __int8)v7) != 0 && v48 != v13 )
  {
    v15 = j__qalloc_or_throw(64, v7, v48, v14);
    sub_25B480(v15, (__int64)v52, a3);
    if ( !v48 )
      v15 = (__int64)sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v15, 0, v16, v17, a3);
    v18 = *(unsigned int *)(v15 + 8);
    if ( (unsigned int)v18 > 0x31 || (v19 = 0x20000FFC60000LL, !_bittest64(&v19, v18)) )
    {
      v43 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
      sub_2441C0(v15, v43, 0, a3);
      v46 = j__qalloc_or_throw(64, v43, v44, v45);
      v47 = sub_240F50(*(_QWORD *)(a1 + 72), 0, 0, -1, 0, 0, 0);
      *(_QWORD *)(v46 + 24) = v15;
      v15 = v46;
      *(_QWORD *)v46 = -1;
      *(_DWORD *)(v46 + 8) = 23;
      *(_QWORD *)(v46 + 12) = -1;
      *(_QWORD *)(v46 + 32) = v47;
      *(_QWORD *)(v46 + 40) = 0;
      *(_QWORD *)(v46 + 48) = 0;
      *(_DWORD *)(v46 + 56) = 0;
    }
    goto LABEL_25;
  }
  if ( !(unsigned __int8)sub_29CC80((_QWORD *)(v12 + 48)) && !(unsigned __int8)sub_29CC80((_QWORD *)(v51 + 48))
    || !(unsigned __int8)sub_285300(v12)
    || !(unsigned __int8)sub_285300(v51) )
  {
    return 0;
  }
  v15 = j__qalloc_or_throw(64, v7, v27, v28);
  v49 = j__qalloc_or_throw(64, v7, v29, v30);
  sub_25B480(v49, (__int64)v52, a3);
  *(_QWORD *)v15 = -1;
  *(_DWORD *)(v15 + 8) = 16;
  *(_QWORD *)(v15 + 24) = v49;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  v33 = v12;
  v34 = j__qalloc_or_throw(64, (__int64)v52, v31, v32);
  sub_25B480(v34, v33, a3);
  *(_QWORD *)(v15 + 32) = v34;
  v37 = j__qalloc_or_throw(64, v33, v35, v36);
  sub_25B480(v37, v51, a3);
  *(_QWORD *)(v15 + 40) = v37;
LABEL_25:
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
  sub_2441C0(v15, v20, 0, a3);
  v56 = 0xFFFFFFFFLL;
  v55 = -4294967226LL;
  v54 = -1;
  v23 = (__int64 *)v52[8];
  v57 = 0;
  v54 = *v23;
  if ( v50 )
  {
    LODWORD(v55) = 80;
    v24 = j__qalloc_or_throw(64, v20, v21, v22);
    *(_QWORD *)v24 = -1;
    *(_QWORD *)(v24 + 16) = 0xFFFFFFFFLL;
    a3 = 0.0;
    *(_QWORD *)(v24 + 40) = 0;
    *(_QWORD *)(v24 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v24 + 48) = 0;
    *(_DWORD *)(v24 + 56) = 0;
    *(_OWORD *)(v24 + 24) = 0;
    v57 = v24;
    sub_2819E0((__int64 *)v24, (__int64 *)v15);
    if ( v15 )
    {
      sub_255630(v15, 0.0);
      clear_tinfo_t();
      j__qfree(v15);
    }
  }
  else
  {
    LODWORD(v55) = 72;
    v53 = j__qalloc_or_throw(64, v20, v21, v22);
    v40 = j__qalloc_or_throw(64, v20, v38, v39);
    sub_25B480(v40, *(_QWORD *)(*(_QWORD *)(v8 + 40) + 24LL), a3);
    *(_QWORD *)v53 = -1;
    v41 = v54;
    *(_DWORD *)(v53 + 8) = 2;
    *(_QWORD *)(v53 + 12) = -1;
    *(_QWORD *)(v53 + 24) = v40;
    v57 = v53;
    *(_QWORD *)v53 = v41;
    v42 = v57;
    *(_QWORD *)(v53 + 32) = 0;
    *(_QWORD *)(v53 + 40) = 0;
    *(_QWORD *)(v53 + 48) = 0;
    *(_DWORD *)(v53 + 56) = 0;
    *(_QWORD *)(v42 + 32) = v15;
    sub_2441C0(v42, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, a3);
  }
  HIDWORD(v55) = *(_DWORD *)(a2 + 12);
  v25 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v54;
  v54 = v25;
  LODWORD(v25) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v55;
  LODWORD(v55) = v25;
  v26 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v57;
  v57 = v26;
  sub_255050((__int64)&v54, a3);
  return 1;
}

