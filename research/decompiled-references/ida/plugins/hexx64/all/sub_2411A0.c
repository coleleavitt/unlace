__int64 __fastcall sub_2411A0(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a3;
  v25[1] = __readfsqword(0x28u);
  v8 = (unsigned int)sub_241090((int)a1 + 48, a3, a4);
  result = 0;
  if ( !(_BYTE)v8 )
  {
    v11 = j__qalloc_or_throw(64, v6, v8, v9);
    *(_QWORD *)v11 = -1;
    v12 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 56) = 0;
    v13 = *a1;
    *a1 = -1;
    v14 = *(_DWORD *)(v11 + 8);
    *(_QWORD *)v11 = v13;
    LODWORD(v13) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v14;
    v15 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(v11 + 8) = v13;
    LODWORD(v13) = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = v15;
    v16 = *(_QWORD *)(v11 + 24);
    *(_DWORD *)(v11 + 12) = v13;
    v17 = a1[3];
    a1[3] = v16;
    v18 = *(_QWORD *)(v11 + 32);
    *(_QWORD *)(v11 + 24) = v17;
    v19 = a1[4];
    a1[4] = v18;
    v20 = *(_QWORD *)(v11 + 40);
    *(_QWORD *)(v11 + 32) = v19;
    v21 = a1[5];
    a1[5] = v20;
    v22 = *(_QWORD *)(v11 + 48);
    *(_QWORD *)(v11 + 40) = v21;
    v23 = a1[6];
    a1[6] = v22;
    LODWORD(v22) = *(_DWORD *)(v11 + 56);
    *(_QWORD *)(v11 + 48) = v23;
    LODWORD(v23) = *((_DWORD *)a1 + 14);
    *((_DWORD *)a1 + 14) = v22;
    *(_DWORD *)(v11 + 56) = v23;
    *((_DWORD *)a1 + 2) = 48;
    sub_32C2C0(v25, a2, a3, a4 & 1);
    copy_tinfo_t();
    clear_tinfo_t();
    v24 = *v12;
    a1[3] = (__int64)v12;
    *a1 = v24;
    return 1;
  }
  return result;
}

