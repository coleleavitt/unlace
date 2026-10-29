__int64 __fastcall sub_2851E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // r13d
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-70h]
  _QWORD v23[13]; // [rsp+10h] [rbp-68h] BYREF

  v23[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 1 )
    return 0;
  v3 = a2[1];
  v4 = *(_DWORD *)(a3 + 12);
  v6 = *(_DWORD *)(v3 + 28);
  if ( v4 == -1 )
  {
    *(_DWORD *)(v3 + 28) = -1;
    v4 = v6;
  }
  else
  {
    if ( v6 != -1 )
      return 0;
    *(_DWORD *)(a3 + 12) = -1;
  }
  if ( v4 != -2 )
  {
    v7 = *a2;
    v23[0] = -1;
    v23[1] = -4294967226LL;
    v22 = v7;
    v8 = (__int64 *)a2[1];
    v23[2] = 0xFFFFFFFFLL;
    v23[3] = 0;
    v9 = *v8;
    a2[1] = *v8;
    v10 = qalloc_or_throw();
    *(_QWORD *)(v10 + 16) = -1;
    v11 = (_QWORD *)v10;
    *(_DWORD *)(v10 + 24) = 70;
    *(_QWORD *)(v10 + 28) = -1;
    sub_255E70(v10 + 16, (__int64)v23);
    *v11 = v9;
    v12 = *(_QWORD **)(v9 + 8);
    v11[1] = v12;
    *v12 = v11;
    *(_QWORD *)(v9 + 8) = v11;
    ++*(_QWORD *)(v22 + 16);
    a2[1] = (__int64)v11;
    sub_250450((__int64)v23);
    v13 = a2[1];
    *(_QWORD *)(v13 + 16) = *(_QWORD *)a3;
    v14 = *(_QWORD *)(v13 + 40);
    *(_DWORD *)(v13 + 24) = 72;
    *(_QWORD *)(v13 + 40) = *(_QWORD *)(a3 + 24);
    v15 = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(a3 + 24) = v14;
    sub_250C50((__int64 *)a3, v15);
    *(_DWORD *)(v13 + 28) = v4;
    v16 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(v13 + 16);
    v17 = *(_DWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 16) = v16;
    LODWORD(v16) = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 24) = v17;
    v18 = *(_DWORD *)(v13 + 28);
    *(_DWORD *)(v13 + 24) = v16;
    LODWORD(v16) = *(_DWORD *)(v3 + 28);
    *(_DWORD *)(v3 + 28) = v18;
    v19 = *(_QWORD *)(v13 + 40);
    *(_DWORD *)(v13 + 28) = v16;
    v20 = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(v3 + 40) = v19;
    *(_QWORD *)(v13 + 40) = v20;
    return 1;
  }
  return 0;
}

