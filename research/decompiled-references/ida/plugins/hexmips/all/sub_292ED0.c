__int64 __fastcall sub_292ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !*(_QWORD *)(v3 + 16) )
    return 0;
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)(v4 + 24) != 73 )
    return 0;
  v6 = *(_QWORD *)(v4 + 40);
  if ( *(_QWORD *)(v6 + 72) )
    return 0;
  if ( *(_DWORD *)(v6 + 8) != 17 )
    return 0;
  v7 = *(_QWORD *)(v6 + 32);
  if ( !(unsigned __int8)sub_2808E0(v7, 1, 1)
    && !(unsigned __int8)sub_2808E0(v7, 66, 1)
    && !(unsigned __int8)sub_2809B0(v7) )
  {
    return 0;
  }
  v8 = j__qalloc_or_throw();
  *(_QWORD *)v8 = -1;
  v9 = v8;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 12) = -1;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  sub_256770(v8, v6);
  v13 = sub_23FBE0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v9, v10, v11, v12);
  v14 = *v13;
  *v13 = *(_QWORD *)v6;
  v15 = *(_DWORD *)(v6 + 8);
  *(_QWORD *)v6 = v14;
  LODWORD(v14) = *((_DWORD *)v13 + 2);
  *((_DWORD *)v13 + 2) = v15;
  v16 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 8) = v14;
  LODWORD(v14) = *((_DWORD *)v13 + 3);
  *((_DWORD *)v13 + 3) = v16;
  v17 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)(v6 + 12) = v14;
  v18 = v13[3];
  v13[3] = v17;
  v19 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 24) = v18;
  v20 = v13[4];
  v13[4] = v19;
  v21 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 32) = v20;
  v22 = v13[5];
  v13[5] = v21;
  v23 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 40) = v22;
  v24 = v13[6];
  v13[6] = v23;
  LODWORD(v23) = *(_DWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 48) = v24;
  LODWORD(v24) = *((_DWORD *)v13 + 14);
  *((_DWORD *)v13 + 14) = v23;
  *(_DWORD *)(v6 + 56) = v24;
  if ( v13 )
  {
    sub_250DB0((__int64)v13);
    clear_tinfo_t();
    j__qfree();
  }
  v25 = sub_23CAB0();
  v26 = sub_23D030(v6);
  *((_DWORD *)sub_23CB40((__int64)v25, v26) + 2) = 79;
  v27 = *(_QWORD *)(v6 + 64);
  v28 = *v25;
  *v25 = *(_QWORD *)v27;
  v29 = *(_DWORD *)(v27 + 8);
  *(_QWORD *)v27 = v28;
  LODWORD(v28) = *((_DWORD *)v25 + 2);
  *((_DWORD *)v25 + 2) = v29;
  v30 = *(_DWORD *)(v27 + 12);
  *(_DWORD *)(v27 + 8) = v28;
  LODWORD(v28) = *((_DWORD *)v25 + 3);
  *((_DWORD *)v25 + 3) = v30;
  v31 = *(_QWORD *)(v27 + 24);
  *(_DWORD *)(v27 + 12) = v28;
  v32 = v25[3];
  v25[3] = v31;
  *(_QWORD *)(v27 + 24) = v32;
  v33 = sub_23CB40(*(_QWORD *)(v2 + 64), -1);
  v34 = *v25;
  *v25 = *v33;
  v35 = *((_DWORD *)v33 + 2);
  *v33 = v34;
  LODWORD(v34) = *((_DWORD *)v25 + 2);
  *((_DWORD *)v25 + 2) = v35;
  v36 = *((_DWORD *)v33 + 3);
  *((_DWORD *)v33 + 2) = v34;
  LODWORD(v34) = *((_DWORD *)v25 + 3);
  *((_DWORD *)v25 + 3) = v36;
  v37 = v33[3];
  *((_DWORD *)v33 + 3) = v34;
  v38 = v25[3];
  v25[3] = v37;
  v33[3] = v38;
  if ( v25 )
  {
    sub_2507D0((__int64)v25);
    j__qfree();
  }
  return 1;
}

