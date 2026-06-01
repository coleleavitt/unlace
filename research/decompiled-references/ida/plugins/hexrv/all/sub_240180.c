__int64 __fastcall sub_240180(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx

  v1 = j__qalloc_or_throw();
  *(_QWORD *)(v1 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)v1 = -1;
  *(_QWORD *)(v1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  v2 = *a1;
  *a1 = -1;
  v3 = *(_DWORD *)(v1 + 8);
  *(_QWORD *)v1 = v2;
  LODWORD(v2) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v3;
  v4 = *(_DWORD *)(v1 + 12);
  *(_DWORD *)(v1 + 8) = v2;
  LODWORD(v2) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v4;
  v5 = *(_QWORD *)(v1 + 24);
  *(_DWORD *)(v1 + 12) = v2;
  v6 = a1[3];
  a1[3] = v5;
  v7 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 24) = v6;
  v8 = a1[4];
  a1[4] = v7;
  v9 = *(_QWORD *)(v1 + 40);
  *(_QWORD *)(v1 + 32) = v8;
  v10 = a1[5];
  a1[5] = v9;
  v11 = *(_QWORD *)(v1 + 48);
  *(_QWORD *)(v1 + 40) = v10;
  v12 = a1[6];
  a1[6] = v11;
  LODWORD(v11) = *(_DWORD *)(v1 + 56);
  *(_QWORD *)(v1 + 48) = v12;
  LODWORD(v12) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a1 + 14) = v11;
  *(_DWORD *)(v1 + 56) = v12;
  *((_DWORD *)a1 + 2) = 48;
  v13 = *(_QWORD *)v1;
  a1[3] = v1;
  *a1 = v13;
  return copy_tinfo_t();
}

