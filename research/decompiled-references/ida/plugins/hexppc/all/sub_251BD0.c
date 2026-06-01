__int64 __fastcall sub_251BD0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // r12d
  __int64 *v5; // rdi
  __int64 v6; // rax
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
  __int64 result; // rax

  if ( a1 == (__int64 *)a2 )
  {
    if ( !under_debugger )
      sub_37EEE0(50060);
    BUG();
  }
  *((_DWORD *)a1 + 14) = 0;
  v3 = *a1;
  a1[5] = 0;
  v4 = *((_DWORD *)a1 + 3);
  v5 = a1 + 6;
  *((_DWORD *)v5 - 10) = 0;
  *(_OWORD *)(v5 - 3) = 0;
  clear_tinfo_t();
  v6 = *a1;
  *a1 = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v7;
  v8 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v8;
  v9 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 12) = v6;
  v10 = a1[3];
  a1[3] = v9;
  v11 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v10;
  v12 = a1[4];
  a1[4] = v11;
  v13 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v12;
  v14 = a1[5];
  a1[5] = v13;
  v15 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v14;
  v16 = a1[6];
  a1[6] = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v16;
  result = *((unsigned int *)a1 + 14);
  *((_DWORD *)a1 + 14) = v15;
  *(_DWORD *)(a2 + 56) = result;
  if ( a2 )
  {
    sub_2519B0(a2);
    clear_tinfo_t();
    result = j__qfree();
  }
  if ( *a1 == -1 )
    *a1 = v3;
  if ( *((_DWORD *)a1 + 3) == -1 )
    *((_DWORD *)a1 + 3) = v4;
  return result;
}

