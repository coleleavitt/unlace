__int64 __fastcall sub_2981D0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp-8h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 17
    || !(unsigned __int8)sub_285160(v3, 1, 1)
    && !(unsigned __int8)sub_285160(v3, 66, 1)
    && !(unsigned __int8)sub_285230(v3) )
  {
    return 0;
  }
  v7 = sub_2418B0(v3);
  v8 = sub_240F50(*(_QWORD *)(a1 + 72), 1, 0, -1, 0, 0, 0);
  v9 = *(_QWORD *)v8;
  *(_QWORD *)v8 = *(_QWORD *)v3;
  v10 = *(_DWORD *)(v3 + 8);
  *(_QWORD *)v3 = v9;
  LODWORD(v9) = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = v10;
  v11 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 8) = v9;
  LODWORD(v9) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v8 + 12) = v11;
  v12 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 12) = v9;
  v13 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 24) = v12;
  v14 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 24) = v13;
  v15 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 32) = v14;
  v16 = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(v3 + 32) = v15;
  v17 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 40) = v16;
  v18 = *(_QWORD *)(v3 + 48);
  *(_QWORD *)(v3 + 40) = v17;
  v19 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = v18;
  LODWORD(v18) = *(_DWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 48) = v19;
  LODWORD(v19) = *(_DWORD *)(v8 + 56);
  *(_DWORD *)(v8 + 56) = v18;
  *(_DWORD *)(v3 + 56) = v19;
  v22 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
  v23 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v8, v32, v20, v21, a3);
  v26 = sub_241920(v22, (__int64)v23, v24, v25, a3);
  v29 = sub_241330(v22, (__int64)v23, v27, v28);
  *(_QWORD *)(v26 + 64) = v29;
  *((_DWORD *)sub_2413C0((__int64)v29, v7, v30, v31, a3) + 2) = 78;
  *(_DWORD *)(a2 + 8) = 75;
  return 1;
}

