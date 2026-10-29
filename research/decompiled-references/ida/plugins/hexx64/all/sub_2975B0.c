__int64 __fastcall sub_2975B0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r12

  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  if ( !sub_255A30(*(__int64 **)(v3 + 24)) )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 64) + 24LL);
  if ( !*(_QWORD *)(v5 + 16) )
    return 0;
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_DWORD *)(v6 + 24) != 73 )
    return 0;
  v7 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int8)sub_285160(v7, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285160(v7, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v7) )
    return 0;
  if ( *(_QWORD *)(v7 + 72) )
    return 0;
  v8 = *(_QWORD **)(*(_QWORD *)(v7 + 64) + 24LL);
  if ( v8[2] != 1 )
    return 0;
  v9 = *v8;
  v10 = *(_DWORD *)(*v8 + 24LL);
  if ( v10 != 78 && (v10 != 81 || !(unsigned __int8)sub_283EA0(a1, a2, **(_DWORD **)(v9 + 40), a3)) )
    return 0;
  if ( *(_DWORD *)(v9 + 28) != -1 || (unsigned __int8)sub_2853C0(a2, 79, 1) )
    return 0;
  v13 = j__qalloc_or_throw(64, 79, v11, v12);
  *(_QWORD *)v13 = -1;
  v14 = v13;
  *(_DWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 12) = -1;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  sub_25AFF0(v13, v7, a3);
  v18 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v14, v15, v16, v17, a3);
  sub_255630(v3, a3);
  sub_255850((__int64 *)v3, (__int64)v18, a3);
  sub_255050(v6 + 16, a3);
  *(_DWORD *)(a2 + 8) = 76;
  return 1;
}

