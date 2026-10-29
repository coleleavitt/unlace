__int64 __fastcall sub_255850(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // r13
  int v5; // r12d
  __int64 *v6; // rdi
  __int64 v7; // rax
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
  __int64 result; // rax

  if ( a1 == (__int64 *)a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC38Cu, a3);
    BUG();
  }
  *((_DWORD *)a1 + 14) = 0;
  v4 = *a1;
  a1[5] = 0;
  v5 = *((_DWORD *)a1 + 3);
  v6 = a1 + 6;
  *((_DWORD *)v6 - 10) = 0;
  *(_OWORD *)(v6 - 3) = 0;
  clear_tinfo_t();
  v7 = *a1;
  *a1 = *(_QWORD *)a2;
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v7;
  LODWORD(v7) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v8;
  v9 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v7;
  LODWORD(v7) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v9;
  v10 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 12) = v7;
  v11 = a1[3];
  a1[3] = v10;
  v12 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v11;
  v13 = a1[4];
  a1[4] = v12;
  v14 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v13;
  v15 = a1[5];
  a1[5] = v14;
  v16 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v15;
  v17 = a1[6];
  a1[6] = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v17;
  result = *((unsigned int *)a1 + 14);
  *((_DWORD *)a1 + 14) = v16;
  *(_DWORD *)(a2 + 56) = result;
  if ( a2 )
  {
    sub_255630(a2, 0.0);
    clear_tinfo_t();
    result = j__qfree(a2);
  }
  if ( *a1 == -1 )
    *a1 = v4;
  if ( *((_DWORD *)a1 + 3) == -1 )
    *((_DWORD *)a1 + 3) = v5;
  return result;
}

