__int64 __fastcall sub_28C040(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  bool v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 **v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // esi
  int v26; // esi
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // [rsp+0h] [rbp-68h]
  __int64 v41; // [rsp+0h] [rbp-68h]
  bool v42; // [rsp+0h] [rbp-68h]
  _QWORD *v43; // [rsp+0h] [rbp-68h]
  __int64 v44; // [rsp+0h] [rbp-68h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+10h] [rbp-58h] BYREF
  __int64 **v47; // [rsp+18h] [rbp-50h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1[8] + 8LL) + 480LL) == -1 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 2 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 != 65 )
  {
    if ( v5 != 51 )
      return 0;
    v6 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(v6 + 8) != 48 )
      return 0;
    v7 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v7 + 8) != 52 )
      return 0;
    v8 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v8 + 8) != 65 )
      return 0;
    v9 = *(_QWORD *)(v4 + 48);
    if ( (v9 & 0xE) != 0 )
      return 0;
    if ( (v9 & 0x30) == 0 )
      return 0;
    v45 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32);
    v40 = *(int *)(v45 + 88);
    if ( v40 != get_tinfo_size() )
      return 0;
    v41 = *(int *)(v45 + 88);
    if ( v41 != get_tinfo_size() )
      return 0;
    v42 = sub_27F420();
    if ( v42 != sub_27F420() )
      return 0;
    v10 = sub_27F420();
    if ( v10 != sub_27F420() )
      return 0;
    v4 = v8;
  }
  v11 = *(_QWORD *)(v2 + 32);
  if ( (unsigned __int8)sub_285520(v11, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285520(v11, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_2855F0(v11) )
    return 0;
  v46 = 0;
  v47 = nullptr;
  v12 = sub_28B980((__int64)a1, a2, 1, &v46);
  if ( !v12 || *(_DWORD *)(v12 + 8) != 80 || *(_DWORD *)(v12 + 12) != -1 )
    return 0;
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_DWORD *)(v13 + 8);
  if ( v14 == 65 )
  {
    v15 = *(_QWORD *)(v12 + 24);
  }
  else
  {
    if ( v14 != 48 )
      return 0;
    v15 = *(_QWORD *)(v13 + 24);
    if ( *(_DWORD *)(v15 + 8) != 65 )
      return 0;
  }
  if ( *(_DWORD *)(v15 + 32) != *(_DWORD *)(v4 + 32) )
    return 0;
  v43 = (_QWORD *)v12;
  v16 = v46;
  v17 = v47;
  sub_28BF20((__int64)a1, v2);
  v18 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( *(_DWORD *)(v18 + 8) == 71 && *(_QWORD *)(v18 + 24) == v16 )
    *(_QWORD *)a2 = *v43;
  *(_DWORD *)(a2 + 8) = 80;
  v19 = j__qalloc_or_throw();
  *(_QWORD *)v19 = -1;
  v20 = v19;
  *(_DWORD *)(v19 + 8) = 0;
  *(_QWORD *)(v19 + 12) = -1;
  *(_QWORD *)(v19 + 48) = 0;
  *(_DWORD *)(v19 + 56) = 0;
  v44 = v19;
  sub_25B3B0(v19, v13);
  *(_QWORD *)(a2 + 24) = v20;
  v22 = v44;
  if ( *(_DWORD *)(v20 + 8) == 48 )
    v22 = *(_QWORD *)(v20 + 24);
  v23 = *(_QWORD *)(v2 + 32);
  v24 = *(_QWORD *)v22;
  *(_QWORD *)v22 = *(_QWORD *)v23;
  v25 = *(_DWORD *)(v23 + 8);
  *(_QWORD *)v23 = v24;
  LODWORD(v24) = *(_DWORD *)(v22 + 8);
  *(_DWORD *)(v22 + 8) = v25;
  v26 = *(_DWORD *)(v23 + 12);
  *(_DWORD *)(v23 + 8) = v24;
  LODWORD(v24) = *(_DWORD *)(v22 + 12);
  *(_DWORD *)(v22 + 12) = v26;
  v27 = *(_QWORD *)(v23 + 24);
  *(_DWORD *)(v23 + 12) = v24;
  v28 = *(_QWORD *)(v22 + 24);
  *(_QWORD *)(v22 + 24) = v27;
  v29 = *(_QWORD *)(v23 + 32);
  *(_QWORD *)(v23 + 24) = v28;
  v30 = *(_QWORD *)(v22 + 32);
  *(_QWORD *)(v22 + 32) = v29;
  v31 = *(_QWORD *)(v23 + 40);
  *(_QWORD *)(v23 + 32) = v30;
  v32 = *(_QWORD *)(v22 + 40);
  *(_QWORD *)(v22 + 40) = v31;
  v33 = *(_QWORD *)(v23 + 48);
  *(_QWORD *)(v23 + 40) = v32;
  v34 = *(_QWORD *)(v22 + 48);
  *(_QWORD *)(v22 + 48) = v33;
  v35 = *(unsigned int *)(v23 + 56);
  *(_QWORD *)(v23 + 48) = v34;
  v36 = *(unsigned int *)(v22 + 56);
  *(_DWORD *)(v22 + 56) = v35;
  *(_DWORD *)(v23 + 56) = v36;
  if ( v2 )
  {
    sub_2559F0(v2);
    clear_tinfo_t();
    j__qfree();
  }
  if ( !(unsigned __int8)sub_241F00((__int64)(v17 + 2), v35, v22, v36, v21) )
  {
    v37 = *v17;
    v38 = **v17;
    v39 = (__int64)(*v17 + 2);
    *(_QWORD *)(*v17)[1] = v38;
    *(_QWORD *)(v38 + 8) = v37[1];
    sub_255410(v39);
    qfree();
    --*(_QWORD *)(v16 + 16);
  }
  return 1;
}

