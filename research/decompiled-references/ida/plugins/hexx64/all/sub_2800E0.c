__int64 __fastcall sub_2800E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 result; // rax

  v6 = j__qalloc_or_throw(64, (__int64)a2, a3, a4);
  *(_QWORD *)v6 = -1;
  v7 = v6;
  *(_QWORD *)(v6 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 16) = 0xFFFFFFFFLL;
  *(_DWORD *)(v6 + 56) = 0;
  *(_QWORD *)v6 = *(_QWORD *)a3;
  v8 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a3 = -1;
  LODWORD(v6) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v7 + 8) = v8;
  v9 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 8) = v6;
  LODWORD(v6) = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 12) = v9;
  v10 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a3 + 12) = v6;
  v11 = *(_QWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v10;
  v12 = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(a3 + 24) = v11;
  v13 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 32) = v12;
  v14 = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a3 + 32) = v13;
  v15 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = v14;
  v16 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 40) = v15;
  v17 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v16;
  v18 = *(unsigned int *)(a3 + 56);
  *(_QWORD *)(a3 + 48) = v17;
  LODWORD(v17) = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(v7 + 56) = v18;
  *(_DWORD *)(a3 + 56) = v17;
  v21 = sub_244460(*(_QWORD *)(a1 + 112), v7, v18, v19, v20, 0.0);
  sub_255850((__int64 *)a3, (__int64)v21, 0.0);
  result = sub_2418B0(a2[3]);
  if ( result != -1 )
    *a2 = result;
  return result;
}

