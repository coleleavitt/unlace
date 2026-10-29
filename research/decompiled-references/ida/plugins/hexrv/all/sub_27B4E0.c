__int64 __fastcall sub_27B4E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 result; // rax

  v5 = j__qalloc_or_throw();
  *(_QWORD *)v5 = -1;
  v6 = v5;
  *(_QWORD *)(v5 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 16) = 0xFFFFFFFFLL;
  *(_DWORD *)(v5 + 56) = 0;
  *(_QWORD *)v5 = *(_QWORD *)a3;
  v7 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a3 = -1;
  LODWORD(v5) = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v6 + 8) = v7;
  v8 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 8) = v5;
  LODWORD(v5) = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v8;
  v9 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a3 + 12) = v5;
  v10 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = v9;
  v11 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 24) = v10;
  v12 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 32) = v11;
  v13 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 32) = v12;
  v14 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v13;
  v15 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 40) = v14;
  v16 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v15;
  v17 = *(unsigned int *)(a3 + 56);
  *(_QWORD *)(a3 + 48) = v16;
  LODWORD(v16) = *(_DWORD *)(v6 + 56);
  *(_DWORD *)(v6 + 56) = v17;
  *(_DWORD *)(a3 + 56) = v16;
  v20 = sub_23F860(*(_QWORD *)(a1 + 112), v6, v17, v18, v19);
  sub_250C50((__int64 *)a3, (__int64)v20);
  result = sub_23CCB0(a2[3]);
  if ( result != -1 )
    *a2 = result;
  return result;
}

