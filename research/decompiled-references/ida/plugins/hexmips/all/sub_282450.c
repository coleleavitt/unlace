__int64 __fastcall sub_282450(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+14h] [rbp-84h]
  __int64 v22; // [rsp+18h] [rbp-80h]
  _QWORD v23[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v24[13]; // [rsp+30h] [rbp-68h] BYREF

  v24[5] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 18
    || !(unsigned __int8)sub_2808E0(*(_QWORD *)(a2 + 24), 1, *(_DWORD *)(a1[9] + 644LL))
    && !(unsigned __int8)sub_2808E0(v2, 66, 1)
    && !(unsigned __int8)sub_2809B0(v2) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(v2 + 72);
  if ( !v4 )
    return 0;
  v5 = **(_QWORD **)(v4 + 24);
  v21 = *(_DWORD *)(v5 + 28);
  if ( v21 == -1 )
  {
    v21 = sub_23B230(a1[8], *(_QWORD *)(v5 + 16), 1);
    *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 72) + 24LL) + 28LL) = v21;
  }
  v22 = *(_QWORD *)(v2 + 24);
  sub_250FD0((__int64 *)v2, *(_QWORD *)(v2 + 32));
  sub_27F380(v23, a1, a2);
  v24[1] = -4294967226LL;
  v6 = v23[0];
  v24[0] = -1;
  v24[2] = 0xFFFFFFFFLL;
  v24[3] = 0;
  v7 = *(_QWORD *)v23[1];
  v8 = qalloc_or_throw();
  *(_QWORD *)(v8 + 16) = -1;
  *(_DWORD *)(v8 + 24) = 70;
  *(_QWORD *)(v8 + 28) = -1;
  sub_2561F0(v8 + 16, (__int64)v24);
  *(_QWORD *)v8 = v7;
  v9 = *(__int64 **)(v7 + 8);
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  *(_QWORD *)(v7 + 8) = v8;
  ++*(_QWORD *)(v6 + 16);
  sub_2507D0((__int64)v24);
  v13 = sub_23FBE0(*(_QWORD *)(a1[9] + 112LL), v22, v10, v11, v12);
  sub_2820B0(v8 + 16, (__int64)v13);
  v14 = sub_23CB40(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 64LL), *(_QWORD *)(v8 + 16));
  sub_23CB10((__int64)v14, v21);
  *(_QWORD *)(v8 + 16) = *v14;
  v15 = *(_DWORD *)(v8 + 28);
  *(_DWORD *)(v8 + 28) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v15;
  v16 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)(v8 + 16);
  v17 = *(_DWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 16) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v17;
  v18 = *(_DWORD *)(v8 + 28);
  *(_DWORD *)(v8 + 24) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v18;
  v19 = *(_QWORD *)(v8 + 40);
  *(_DWORD *)(v8 + 28) = v16;
  v20 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v19;
  *(_QWORD *)(v8 + 40) = v20;
  return 1;
}

