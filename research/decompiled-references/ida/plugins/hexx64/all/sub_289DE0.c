__int64 __fastcall sub_289DE0(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // r12
  int v5; // r13d
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v23; // [rsp+8h] [rbp-70h]
  _QWORD v24[13]; // [rsp+10h] [rbp-68h] BYREF

  v24[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 1 )
    return 0;
  v4 = a2[1];
  v5 = *(_DWORD *)(a3 + 12);
  v7 = *(_DWORD *)(v4 + 28);
  if ( v5 == -1 )
  {
    *(_DWORD *)(v4 + 28) = -1;
    v5 = v7;
  }
  else
  {
    if ( v7 != -1 )
      return 0;
    *(_DWORD *)(a3 + 12) = -1;
  }
  if ( v5 != -2 )
  {
    v8 = *a2;
    v24[0] = -1;
    v24[1] = -4294967226LL;
    v23 = v8;
    v9 = (__int64 *)a2[1];
    v24[2] = 0xFFFFFFFFLL;
    v24[3] = 0;
    v10 = *v9;
    a2[1] = *v9;
    v11 = qalloc_or_throw(48, (__int64)a2, a3, 0xFFFFFFFFLL);
    *(_QWORD *)(v11 + 16) = -1;
    v12 = (_QWORD *)v11;
    *(_DWORD *)(v11 + 24) = 70;
    *(_QWORD *)(v11 + 28) = -1;
    sub_25AA70(v11 + 16, (__int64)v24, a4);
    *v12 = v10;
    v13 = *(_QWORD **)(v10 + 8);
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(v10 + 8) = v12;
    ++*(_QWORD *)(v23 + 16);
    a2[1] = (__int64)v12;
    sub_255050((__int64)v24, a4);
    v14 = a2[1];
    *(_QWORD *)(v14 + 16) = *(_QWORD *)a3;
    v15 = *(_QWORD *)(v14 + 40);
    *(_DWORD *)(v14 + 24) = 72;
    *(_QWORD *)(v14 + 40) = *(_QWORD *)(a3 + 24);
    v16 = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(a3 + 24) = v15;
    sub_255850((__int64 *)a3, v16, a4);
    *(_DWORD *)(v14 + 28) = v5;
    v17 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v14 + 16);
    v18 = *(_DWORD *)(v14 + 24);
    *(_QWORD *)(v14 + 16) = v17;
    LODWORD(v17) = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 24) = v18;
    v19 = *(_DWORD *)(v14 + 28);
    *(_DWORD *)(v14 + 24) = v17;
    LODWORD(v17) = *(_DWORD *)(v4 + 28);
    *(_DWORD *)(v4 + 28) = v19;
    v20 = *(_QWORD *)(v14 + 40);
    *(_DWORD *)(v14 + 28) = v17;
    v21 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = v20;
    *(_QWORD *)(v14 + 40) = v21;
    return 1;
  }
  return 0;
}

