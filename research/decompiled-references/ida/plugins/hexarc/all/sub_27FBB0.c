__int64 __fastcall sub_27FBB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // r15
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-80h]
  __int64 v30; // [rsp+0h] [rbp-80h]
  char v31; // [rsp+Fh] [rbp-71h]
  __int64 v32; // [rsp+10h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-68h]
  __int64 v34; // [rsp+18h] [rbp-68h]
  __int64 v35; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+28h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-50h]
  __int64 v38; // [rsp+38h] [rbp-48h]
  unsigned __int64 v39; // [rsp+48h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  v33 = *(_QWORD *)(a2 + 24);
  v2 = *(_QWORD *)(v33 + 72);
  if ( !v2
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 64) + 24LL) + 16LL) != 1
    || *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16LL) != 1
    || (get_tinfo_property() & 0x2F) == 0xD
    || (get_tinfo_property() & 0xF) == 0xB )
  {
    return 0;
  }
  v6 = **(_QWORD **)(*(_QWORD *)(v33 + 64) + 24LL);
  v7 = **(_QWORD **)(*(_QWORD *)(v33 + 72) + 24LL);
  if ( *(_DWORD *)(v6 + 24) == 80 && *(_DWORD *)(v7 + 24) == 80 )
  {
    v31 = sub_27DF80(v33);
    if ( !v31 )
      return 0;
    v10 = *(_QWORD *)(v6 + 40);
    v32 = *(_QWORD *)(v7 + 40);
  }
  else
  {
    if ( !(unsigned __int8)sub_295900(v33 + 48) )
      return 0;
    if ( *(_DWORD *)(v6 + 24) != 72 )
      return 0;
    if ( *(_DWORD *)(v7 + 24) != 72 )
      return 0;
    v8 = *(_QWORD *)(v6 + 40);
    if ( *(_DWORD *)(v8 + 8) != 2 )
      return 0;
    v9 = *(_QWORD *)(v7 + 40);
    if ( *(_DWORD *)(v9 + 8) != 2 || sub_252720(*(_QWORD *)(v8 + 24), *(_QWORD *)(v9 + 24)) )
      return 0;
    v31 = 0;
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 32LL);
    v32 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 32LL);
  }
  if ( (unsigned __int8)sub_27DEB0(v6 + 16) )
    return 0;
  if ( (unsigned __int8)sub_27DEB0(v7 + 16) )
    return 0;
  v29 = sub_2781F0(v10);
  v11 = sub_2781F0(v32);
  if ( (v11 & v29) == 0xFFFFFFFF )
    return 0;
  if ( v11 != -1 && v29 != -1 && v29 != v11 )
  {
    v12 = j__qalloc_or_throw();
    sub_254100(v12, v33);
    if ( !v29 )
      v12 = (__int64)sub_23D0E0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v12, 0, v13, v14);
    v15 = *(unsigned int *)(v12 + 8);
    if ( (unsigned int)v15 > 0x31 || (v16 = 0x20000FFC60000LL, !_bittest64(&v16, v15)) )
    {
      sub_23CE40(v12, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      v27 = j__qalloc_or_throw();
      v28 = sub_239BD0(*(_QWORD *)(a1 + 72), 0, 0, -1, 0, 0, 0);
      *(_QWORD *)(v27 + 24) = v12;
      v12 = v27;
      *(_QWORD *)v27 = -1;
      *(_DWORD *)(v27 + 8) = 23;
      *(_QWORD *)(v27 + 12) = -1;
      *(_QWORD *)(v27 + 32) = v28;
      *(_QWORD *)(v27 + 40) = 0;
      *(_QWORD *)(v27 + 48) = 0;
      *(_DWORD *)(v27 + 56) = 0;
    }
    goto LABEL_25;
  }
  if ( !(unsigned __int8)sub_295900(v10 + 48) && !(unsigned __int8)sub_295900(v32 + 48)
    || !(unsigned __int8)sub_27DF80(v10)
    || !(unsigned __int8)sub_27DF80(v32) )
  {
    return 0;
  }
  v12 = j__qalloc_or_throw();
  v30 = j__qalloc_or_throw();
  sub_254100(v30, v33);
  *(_QWORD *)v12 = -1;
  *(_DWORD *)(v12 + 8) = 16;
  *(_QWORD *)(v12 + 24) = v30;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  v21 = v10;
  v22 = j__qalloc_or_throw();
  sub_254100(v22, v21);
  *(_QWORD *)(v12 + 32) = v22;
  v23 = j__qalloc_or_throw();
  sub_254100(v23, v32);
  *(_QWORD *)(v12 + 40) = v23;
LABEL_25:
  sub_23CE40(v12, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  v37 = 0xFFFFFFFFLL;
  v36 = -4294967226LL;
  v35 = -1;
  v17 = *(__int64 **)(v33 + 64);
  v38 = 0;
  v35 = *v17;
  if ( v31 )
  {
    LODWORD(v36) = 80;
    v18 = j__qalloc_or_throw();
    *(_QWORD *)v18 = -1;
    *(_QWORD *)(v18 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 48) = 0;
    *(_DWORD *)(v18 + 56) = 0;
    *(_OWORD *)(v18 + 24) = 0;
    v38 = v18;
    sub_27A660((__int64 *)v18, (__int64 *)v12);
    if ( v12 )
    {
      sub_24E2B0(v12);
      clear_tinfo_t();
      j__qfree();
    }
  }
  else
  {
    LODWORD(v36) = 72;
    v34 = j__qalloc_or_throw();
    v24 = j__qalloc_or_throw();
    sub_254100(v24, *(_QWORD *)(*(_QWORD *)(v6 + 40) + 24LL));
    *(_QWORD *)v34 = -1;
    v25 = v35;
    *(_DWORD *)(v34 + 8) = 2;
    *(_QWORD *)(v34 + 12) = -1;
    *(_QWORD *)(v34 + 24) = v24;
    v38 = v34;
    *(_QWORD *)v34 = v25;
    v26 = v38;
    *(_QWORD *)(v34 + 32) = 0;
    *(_QWORD *)(v34 + 40) = 0;
    *(_QWORD *)(v34 + 48) = 0;
    *(_DWORD *)(v34 + 56) = 0;
    *(_QWORD *)(v26 + 32) = v12;
    sub_23CE40(v26, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  }
  HIDWORD(v36) = *(_DWORD *)(a2 + 12);
  v19 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v35;
  v35 = v19;
  LODWORD(v19) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v36;
  LODWORD(v36) = v19;
  v20 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v38;
  v38 = v20;
  sub_24DCD0((__int64)&v35);
  return 1;
}

