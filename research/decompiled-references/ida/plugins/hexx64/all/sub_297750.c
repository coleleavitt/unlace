__int64 __fastcall sub_297750(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  int v21; // edx
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rdx

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 64) + 24LL);
  if ( !*(_QWORD *)(v4 + 16) )
    return 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v5 + 24) != 73 )
    return 0;
  v7 = *(_QWORD *)(v5 + 40);
  if ( *(_QWORD *)(v7 + 72) )
    return 0;
  if ( *(_DWORD *)(v7 + 8) != 17 )
    return 0;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = 1;
  if ( !(unsigned __int8)sub_285160(v8, 1, 1) )
  {
    v9 = 66;
    if ( !(unsigned __int8)sub_285160(v8, 66, 1) && !(unsigned __int8)sub_285230(v8) )
      return 0;
  }
  v12 = j__qalloc_or_throw(64, v9, v10, v11);
  *(_QWORD *)v12 = -1;
  v13 = v12;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  sub_25AFF0(v12, v7, a3);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
  v19 = sub_244460(v14, v13, v15, v16, v17, a3);
  v20 = *v19;
  *v19 = *(_QWORD *)v7;
  v21 = *(_DWORD *)(v7 + 8);
  *(_QWORD *)v7 = v20;
  LODWORD(v20) = *((_DWORD *)v19 + 2);
  *((_DWORD *)v19 + 2) = v21;
  v22 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 8) = v20;
  LODWORD(v20) = *((_DWORD *)v19 + 3);
  *((_DWORD *)v19 + 3) = v22;
  v23 = *(_QWORD *)(v7 + 24);
  *(_DWORD *)(v7 + 12) = v20;
  v24 = v19[3];
  v19[3] = v23;
  v25 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 24) = v24;
  v26 = v19[4];
  v19[4] = v25;
  v27 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 32) = v26;
  v28 = v19[5];
  v19[5] = v27;
  v29 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 40) = v28;
  v30 = v19[6];
  v19[6] = v29;
  v31 = *(unsigned int *)(v7 + 56);
  *(_QWORD *)(v7 + 48) = v30;
  LODWORD(v30) = *((_DWORD *)v19 + 14);
  *((_DWORD *)v19 + 14) = v31;
  *(_DWORD *)(v7 + 56) = v30;
  if ( v19 )
  {
    sub_255630((__int64)v19, a3);
    clear_tinfo_t();
    v14 = (__int64)v19;
    j__qfree((__int64)v19);
  }
  v32 = sub_241330(v14, v13, v31, v18);
  v33 = sub_2418B0(v7);
  *((_DWORD *)sub_2413C0((__int64)v32, v33, v34, v35, a3) + 2) = 79;
  v36 = *(_QWORD *)(v7 + 64);
  v37 = *v32;
  *v32 = *(_QWORD *)v36;
  v38 = *(_DWORD *)(v36 + 8);
  *(_QWORD *)v36 = v37;
  LODWORD(v37) = *((_DWORD *)v32 + 2);
  *((_DWORD *)v32 + 2) = v38;
  v39 = *(_DWORD *)(v36 + 12);
  *(_DWORD *)(v36 + 8) = v37;
  LODWORD(v37) = *((_DWORD *)v32 + 3);
  *((_DWORD *)v32 + 3) = v39;
  v40 = *(_QWORD *)(v36 + 24);
  *(_DWORD *)(v36 + 12) = v37;
  v41 = v32[3];
  v32[3] = v40;
  *(_QWORD *)(v36 + 24) = v41;
  v42 = sub_2413C0(*(_QWORD *)(v3 + 64), -1, v41, v40, a3);
  v43 = *v32;
  *v32 = *v42;
  v44 = *((_DWORD *)v42 + 2);
  *v42 = v43;
  LODWORD(v43) = *((_DWORD *)v32 + 2);
  *((_DWORD *)v32 + 2) = v44;
  v45 = *((_DWORD *)v42 + 3);
  *((_DWORD *)v42 + 2) = v43;
  LODWORD(v43) = *((_DWORD *)v32 + 3);
  *((_DWORD *)v32 + 3) = v45;
  v46 = v42[3];
  *((_DWORD *)v42 + 3) = v43;
  v47 = v32[3];
  v32[3] = v46;
  v42[3] = v47;
  if ( v32 )
  {
    sub_255050((__int64)v32, a3);
    j__qfree((__int64)v32);
  }
  return 1;
}

