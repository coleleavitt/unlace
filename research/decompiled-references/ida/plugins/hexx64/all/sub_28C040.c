__int64 __fastcall sub_28C040(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // r12d
  _QWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // [rsp+8h] [rbp-60h]
  _QWORD *v45; // [rsp+10h] [rbp-58h] BYREF
  __int64 v46; // [rsp+18h] [rbp-50h]
  unsigned __int64 v47; // [rsp+28h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) != -4294967216LL )
    return 0;
  v4 = sub_254FC0(*(_QWORD *)(a2 + 24));
  if ( *(_DWORD *)(v4 + 8) != 61 )
    return 0;
  v5 = sub_255A30(*(__int64 **)(v4 + 24));
  v6 = v5;
  if ( v5 > 1 )
    return 0;
  sub_283C00(&v45, a1, a2, a3);
  v7 = v45;
  if ( v46 == *v45 )
    return 0;
  v8 = *(_QWORD *)(v46 + 8);
  if ( *(_DWORD *)(v8 + 24) != 73 )
    return 0;
  v10 = *(_QWORD *)(v8 + 40);
  if ( *(_QWORD *)(v10 + 72) )
    return 0;
  v44 = *(_QWORD *)(v8 + 40);
  v11 = *(__int64 **)(*(_QWORD *)(v10 + 64) + 24LL);
  if ( v11[2] != 1 )
    return 0;
  v12 = *v11;
  if ( *(_QWORD *)(v12 + 24) != -4294967216LL )
    return 0;
  v13 = sub_254FC0(*(_QWORD *)(v12 + 40));
  if ( *(_DWORD *)(v13 + 8) != 61 )
    return 0;
  v14 = v13 + 48;
  v15 = sub_255A30(*(__int64 **)(v13 + 24));
  if ( v15 > 1 || v6 == (_DWORD)v15 )
    return 0;
  v16 = *(_QWORD *)(a2 + 24);
  v17 = *(_QWORD *)v16;
  *(_QWORD *)v16 = *(_QWORD *)v44;
  v18 = *(_DWORD *)(v44 + 8);
  *(_QWORD *)v44 = v17;
  LODWORD(v17) = *(_DWORD *)(v16 + 8);
  *(_DWORD *)(v16 + 8) = v18;
  v19 = *(_DWORD *)(v44 + 12);
  *(_DWORD *)(v44 + 8) = v17;
  LODWORD(v17) = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 12) = v19;
  v20 = *(_QWORD *)(v44 + 24);
  *(_DWORD *)(v44 + 12) = v17;
  v21 = *(_QWORD *)(v16 + 24);
  *(_QWORD *)(v16 + 24) = v20;
  v22 = *(_QWORD *)(v44 + 32);
  *(_QWORD *)(v44 + 24) = v21;
  v23 = *(_QWORD *)(v16 + 32);
  *(_QWORD *)(v16 + 32) = v22;
  v24 = *(_QWORD *)(v44 + 40);
  *(_QWORD *)(v44 + 32) = v23;
  v25 = *(_QWORD *)(v16 + 40);
  *(_QWORD *)(v16 + 40) = v24;
  v26 = *(_QWORD *)(v44 + 48);
  *(_QWORD *)(v44 + 40) = v25;
  v27 = *(_QWORD *)(v16 + 48);
  *(_QWORD *)(v16 + 48) = v26;
  v28 = *(unsigned int *)(v44 + 56);
  *(_QWORD *)(v44 + 48) = v27;
  LODWORD(v27) = *(_DWORD *)(v16 + 56);
  *(_DWORD *)(v16 + 56) = v28;
  *(_DWORD *)(v44 + 56) = v27;
  if ( v6 )
  {
    v14 = a2;
    sub_2800E0(a1[9], (__int64 *)a2, v16, v28);
  }
  if ( !(unsigned __int8)sub_29D090(v16, v14) )
  {
    v32 = j__qalloc_or_throw(64, v14, v29, v30);
    a3 = 0.0;
    *(_OWORD *)(v32 + 24) = 0;
    *(_QWORD *)(v32 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v32 + 40) = 0;
    *(_QWORD *)v32 = -1;
    *(_QWORD *)(v32 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v32 + 48) = 0;
    *(_DWORD *)(v32 + 56) = 0;
    v33 = *(_QWORD *)v16;
    *(_QWORD *)v16 = -1;
    v34 = *(_DWORD *)(v32 + 8);
    *(_QWORD *)v32 = v33;
    LODWORD(v33) = *(_DWORD *)(v16 + 8);
    *(_DWORD *)(v16 + 8) = v34;
    v35 = *(_DWORD *)(v32 + 12);
    *(_DWORD *)(v32 + 8) = v33;
    LODWORD(v33) = *(_DWORD *)(v16 + 12);
    *(_DWORD *)(v16 + 12) = v35;
    v36 = *(_QWORD *)(v32 + 24);
    *(_DWORD *)(v32 + 12) = v33;
    v37 = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(v16 + 24) = v36;
    v38 = *(_QWORD *)(v32 + 32);
    *(_QWORD *)(v32 + 24) = v37;
    v39 = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v16 + 32) = v38;
    v40 = *(_QWORD *)(v32 + 40);
    *(_QWORD *)(v32 + 32) = v39;
    v41 = *(_QWORD *)(v16 + 40);
    *(_QWORD *)(v16 + 40) = v40;
    v42 = *(_QWORD *)(v32 + 48);
    *(_QWORD *)(v32 + 40) = v41;
    v43 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 48) = v42;
    LODWORD(v42) = *(_DWORD *)(v32 + 56);
    *(_QWORD *)(v32 + 48) = v43;
    LODWORD(v43) = *(_DWORD *)(v16 + 56);
    *(_DWORD *)(v16 + 56) = v42;
    *(_DWORD *)(v32 + 56) = v43;
    *(_DWORD *)(v16 + 8) = 23;
    *(_QWORD *)(v16 + 24) = v32;
    *(_QWORD *)(v16 + 32) = sub_240F50(a1[9], 0, 0, -1, 0, 0, 0);
    sub_2441C0(v16, *(_QWORD *)(a1[9] + 112LL), 0, 0.0);
  }
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v8 + 28);
  v31 = *(_QWORD *)v8;
  **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
  *(_QWORD *)(v31 + 8) = *(_QWORD *)(v8 + 8);
  sub_255050(v8 + 16, a3);
  qfree(v8);
  --v7[2];
  return 1;
}

