__int64 __fastcall sub_23C5A0(__int64 *a1, int a2, int a3, int a4, int a5, int a6)
{
  char v7; // bp
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  char v26; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v7 = a4;
  v8 = sub_23C490((int)a1 + 48, a3, a4, a4, a5, a6);
  result = 0;
  if ( !v8 )
  {
    v10 = j__qalloc_or_throw();
    *(_QWORD *)v10 = -1;
    v11 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 56) = 0;
    v12 = *a1;
    *a1 = -1;
    v13 = *(_DWORD *)(v10 + 8);
    *(_QWORD *)v10 = v12;
    LODWORD(v12) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v13;
    v14 = *(_DWORD *)(v10 + 12);
    *(_DWORD *)(v10 + 8) = v12;
    LODWORD(v12) = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = v14;
    v15 = *(_QWORD *)(v10 + 24);
    *(_DWORD *)(v10 + 12) = v12;
    v16 = a1[3];
    a1[3] = v15;
    v17 = *(_QWORD *)(v10 + 32);
    *(_QWORD *)(v10 + 24) = v16;
    v18 = a1[4];
    a1[4] = v17;
    v19 = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 32) = v18;
    v20 = a1[5];
    a1[5] = v19;
    v21 = *(_QWORD *)(v10 + 48);
    *(_QWORD *)(v10 + 40) = v20;
    v22 = a1[6];
    a1[6] = v21;
    LODWORD(v21) = *(_DWORD *)(v10 + 56);
    *(_QWORD *)(v10 + 48) = v22;
    LODWORD(v22) = *((_DWORD *)a1 + 14);
    *((_DWORD *)a1 + 14) = v21;
    *(_DWORD *)(v10 + 56) = v22;
    *((_DWORD *)a1 + 2) = 48;
    sub_327010((unsigned int)&v26, a2, a3, v7 & 1, v23, v24);
    copy_tinfo_t();
    clear_tinfo_t();
    v25 = *v11;
    a1[3] = (__int64)v11;
    *a1 = v25;
    return 1;
  }
  return result;
}

