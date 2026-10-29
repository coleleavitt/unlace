__int64 __fastcall sub_297BD0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 != 61 && v4 )
    return 0;
  v6 = *(__int64 **)(*(_QWORD *)(v3 + 64) + 24LL);
  if ( !v6[2] )
    return 0;
  if ( *(_QWORD *)(*v6 + 24) != -4294967223LL )
    return 0;
  v7 = *(_QWORD *)(*v6 + 40);
  if ( (unsigned __int8)sub_285160(v7, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285160(v7, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v7) )
    return 0;
  if ( *(_QWORD *)(v7 + 72) )
    return 0;
  v8 = *(_QWORD *)(v7 + 64);
  if ( *(_QWORD *)(v8 + 8) != -4294967225LL )
    return 0;
  v9 = *(_QWORD **)(v8 + 24);
  if ( v9[2] != 1 || *(_QWORD *)(*v9 + 24LL) != -4294967218LL || (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v12 = j__qalloc_or_throw(64, 2, v10, v11);
  *(_QWORD *)v12 = -1;
  v13 = v12;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 12) = -1;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  sub_25AFF0(v12, v7, a3);
  v17 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v13, v14, v15, v16, a3);
  sub_255630(v3, a3);
  sub_255850((__int64 *)v3, (__int64)v17, a3);
  v18 = *v6;
  v19 = *(_QWORD *)*v6;
  v20 = *v6 + 16;
  **(_QWORD **)(*v6 + 8) = v19;
  *(_QWORD *)(v19 + 8) = *(_QWORD *)(v18 + 8);
  sub_255050(v20, a3);
  qfree(v18);
  --v6[2];
  return 1;
}

