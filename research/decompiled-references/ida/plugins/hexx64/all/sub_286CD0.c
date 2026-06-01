__int64 __fastcall sub_286CD0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // [rsp+14h] [rbp-84h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  _QWORD v31[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v32[13]; // [rsp+30h] [rbp-68h] BYREF

  v32[5] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 18
    || !(unsigned __int8)sub_285160(*(_QWORD *)(a2 + 24), 1, *(_DWORD *)(a1[9] + 644LL))
    && !(unsigned __int8)sub_285160(v3, 66, 1)
    && !(unsigned __int8)sub_285230(v3) )
  {
    return 0;
  }
  v5 = *(_QWORD *)(v3 + 72);
  if ( !v5 )
    return 0;
  v6 = **(_QWORD **)(v5 + 24);
  v29 = *(_DWORD *)(v6 + 28);
  if ( v29 == -1 )
  {
    v29 = sub_23FAB0(a1[8], *(_QWORD *)(v6 + 16), 1);
    *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v3 + 72) + 24LL) + 28LL) = v29;
  }
  v30 = *(_QWORD *)(v3 + 24);
  sub_255850((__int64 *)v3, *(_QWORD *)(v3 + 32), a3);
  sub_283C00(v31, a1, a2, a3);
  v32[1] = -4294967226LL;
  v7 = v31[0];
  v32[0] = -1;
  v32[2] = 0xFFFFFFFFLL;
  v32[3] = 0;
  v8 = *(_QWORD *)v31[1];
  v10 = qalloc_or_throw(48, (__int64)a1, v9, 0xFFFFFFFFLL);
  *(_QWORD *)(v10 + 16) = -1;
  *(_DWORD *)(v10 + 24) = 70;
  *(_QWORD *)(v10 + 28) = -1;
  sub_25AA70(v10 + 16, (__int64)v32, a3);
  *(_QWORD *)v10 = v8;
  v11 = *(__int64 **)(v8 + 8);
  *(_QWORD *)(v10 + 8) = v11;
  *v11 = v10;
  *(_QWORD *)(v8 + 8) = v10;
  ++*(_QWORD *)(v7 + 16);
  sub_255050((__int64)v32, a3);
  v15 = sub_244460(*(_QWORD *)(a1[9] + 112LL), v30, v12, v13, v14, a3);
  sub_286930(v10 + 16, (__int64)v15, v16, v17);
  v20 = sub_2413C0(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 64LL), *(_QWORD *)(v10 + 16), v18, v19, a3);
  sub_241390((__int64)v20, v29, v21, v22);
  *(_QWORD *)(v10 + 16) = *v20;
  v23 = *(_DWORD *)(v10 + 28);
  *(_DWORD *)(v10 + 28) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v23;
  v24 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)(v10 + 16);
  v25 = *(_DWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 16) = v24;
  LODWORD(v24) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v25;
  v26 = *(_DWORD *)(v10 + 28);
  *(_DWORD *)(v10 + 24) = v24;
  LODWORD(v24) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v26;
  v27 = *(_QWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 28) = v24;
  v28 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v27;
  *(_QWORD *)(v10 + 40) = v28;
  return 1;
}

