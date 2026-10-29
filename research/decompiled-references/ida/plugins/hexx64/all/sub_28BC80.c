__int64 __fastcall sub_28BC80(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  bool v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 **v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // esi
  int v28; // esi
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-68h]
  __int64 v43; // [rsp+0h] [rbp-68h]
  bool v44; // [rsp+0h] [rbp-68h]
  _QWORD *v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+10h] [rbp-58h] BYREF
  __int64 **v49; // [rsp+18h] [rbp-50h]
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1[8] + 8LL) + 480LL) == -1 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 2 )
    return 0;
  v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v5 + 8);
  if ( v6 != 65 )
  {
    if ( v6 != 51 )
      return 0;
    v7 = *(_QWORD *)(v5 + 24);
    if ( *(_DWORD *)(v7 + 8) != 48 )
      return 0;
    v8 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v8 + 8) != 52 )
      return 0;
    v9 = *(_QWORD *)(v8 + 24);
    if ( *(_DWORD *)(v9 + 8) != 65 )
      return 0;
    v10 = *(_QWORD *)(v5 + 48);
    if ( (v10 & 0xE) != 0 )
      return 0;
    if ( (v10 & 0x30) == 0 )
      return 0;
    v47 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 432LL) + 104LL * *(int *)(v9 + 32);
    v42 = *(int *)(v47 + 88);
    if ( v42 != get_tinfo_size() )
      return 0;
    v43 = *(int *)(v47 + 88);
    if ( v43 != get_tinfo_size() )
      return 0;
    v44 = sub_27F060();
    if ( v44 != sub_27F060() )
      return 0;
    v11 = sub_27F060();
    if ( v11 != sub_27F060() )
      return 0;
    v5 = v9;
  }
  v12 = *(_QWORD *)(v3 + 32);
  if ( (unsigned __int8)sub_285160(v12, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285160(v12, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v12) )
    return 0;
  v48 = 0;
  v49 = nullptr;
  v13 = sub_28B5C0((__int64)a1, a2, 1, &v48, a3);
  if ( !v13 || *(_DWORD *)(v13 + 8) != 80 || *(_DWORD *)(v13 + 12) != -1 )
    return 0;
  v14 = *(_QWORD *)(v13 + 24);
  v15 = *(_DWORD *)(v14 + 8);
  if ( v15 == 65 )
  {
    v16 = *(_QWORD *)(v13 + 24);
  }
  else
  {
    if ( v15 != 48 )
      return 0;
    v16 = *(_QWORD *)(v14 + 24);
    if ( *(_DWORD *)(v16 + 8) != 65 )
      return 0;
  }
  if ( *(_DWORD *)(v16 + 32) != *(_DWORD *)(v5 + 32) )
    return 0;
  v45 = (_QWORD *)v13;
  v17 = v48;
  v18 = v49;
  sub_28BB60((__int64)a1, v3);
  v19 = a1[3];
  v20 = *(_QWORD *)(a1[2] + 8 * v19 - 8);
  if ( *(_DWORD *)(v20 + 8) == 71 && *(_QWORD *)(v20 + 24) == v17 )
    *(_QWORD *)a2 = *v45;
  *(_DWORD *)(a2 + 8) = 80;
  v21 = j__qalloc_or_throw(64, v3, v20, v19);
  *(_QWORD *)v21 = -1;
  v22 = v21;
  *(_DWORD *)(v21 + 8) = 0;
  *(_QWORD *)(v21 + 12) = -1;
  *(_QWORD *)(v21 + 48) = 0;
  *(_DWORD *)(v21 + 56) = 0;
  v46 = v21;
  sub_25AFF0(v21, v14, a3);
  *(_QWORD *)(a2 + 24) = v22;
  v24 = v46;
  if ( *(_DWORD *)(v22 + 8) == 48 )
    v24 = *(_QWORD *)(v22 + 24);
  v25 = *(_QWORD *)(v3 + 32);
  v26 = *(_QWORD *)v24;
  *(_QWORD *)v24 = *(_QWORD *)v25;
  v27 = *(_DWORD *)(v25 + 8);
  *(_QWORD *)v25 = v26;
  LODWORD(v26) = *(_DWORD *)(v24 + 8);
  *(_DWORD *)(v24 + 8) = v27;
  v28 = *(_DWORD *)(v25 + 12);
  *(_DWORD *)(v25 + 8) = v26;
  LODWORD(v26) = *(_DWORD *)(v24 + 12);
  *(_DWORD *)(v24 + 12) = v28;
  v29 = *(_QWORD *)(v25 + 24);
  *(_DWORD *)(v25 + 12) = v26;
  v30 = *(_QWORD *)(v24 + 24);
  *(_QWORD *)(v24 + 24) = v29;
  v31 = *(_QWORD *)(v25 + 32);
  *(_QWORD *)(v25 + 24) = v30;
  v32 = *(_QWORD *)(v24 + 32);
  *(_QWORD *)(v24 + 32) = v31;
  v33 = *(_QWORD *)(v25 + 40);
  *(_QWORD *)(v25 + 32) = v32;
  v34 = *(_QWORD *)(v24 + 40);
  *(_QWORD *)(v24 + 40) = v33;
  v35 = *(_QWORD *)(v25 + 48);
  *(_QWORD *)(v25 + 40) = v34;
  v36 = *(_QWORD *)(v24 + 48);
  *(_QWORD *)(v24 + 48) = v35;
  v37 = *(unsigned int *)(v25 + 56);
  *(_QWORD *)(v25 + 48) = v36;
  v38 = *(unsigned int *)(v24 + 56);
  *(_DWORD *)(v24 + 56) = v37;
  *(_DWORD *)(v25 + 56) = v38;
  if ( v3 )
  {
    sub_255630(v3, a3);
    clear_tinfo_t();
    j__qfree(v3);
  }
  if ( !(unsigned __int8)sub_241B40((__int64)(v18 + 2), v37, v24, v38, v23) )
  {
    v39 = *v18;
    v40 = **v18;
    v41 = (__int64)(*v18 + 2);
    *(_QWORD *)(*v18)[1] = v40;
    *(_QWORD *)(v40 + 8) = v39[1];
    sub_255050(v41, a3);
    qfree((__int64)v39);
    --*(_QWORD *)(v17 + 16);
  }
  return 1;
}

