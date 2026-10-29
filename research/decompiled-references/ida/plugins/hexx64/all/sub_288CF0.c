__int64 __fastcall sub_288CF0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  int v16; // esi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v25; // [rsp+8h] [rbp-30h]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v3 + 72) )
    return 0;
  v5 = *(_QWORD **)(*(_QWORD *)(v3 + 64) + 24LL);
  if ( v5[2] != 1 )
    return 0;
  v6 = *v5;
  if ( *(_DWORD *)(*v5 + 28LL) == -1 )
    return 0;
  if ( *(_DWORD *)(v6 + 24) != 72 )
    return 0;
  v7 = *(_QWORD *)(v6 + 40);
  if ( *(_DWORD *)(v7 + 8) != 2 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v7 + 24) + 8LL) != 65 )
    return 0;
  sub_283C00(&v24, a1, a2, a3);
  v8 = *v25;
  if ( *v25 == v24 )
    return 0;
  if ( *(_DWORD *)(v8 + 24) != 80 )
    return 0;
  v9 = *(_QWORD *)(v7 + 24);
  if ( sub_259AA0(*(_QWORD *)(v8 + 40), v9, a3) )
    return 0;
  *(_DWORD *)(v6 + 24) = 80;
  v12 = j__qalloc_or_throw(64, v9, v10, v11);
  *(_QWORD *)(v12 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v12 + 24) = 0;
  *(_QWORD *)v12 = -1;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v6 + 40) = v12;
  v13 = *(_QWORD *)(v7 + 32);
  v14 = *(_QWORD *)v12;
  *(_QWORD *)v12 = *(_QWORD *)v13;
  v15 = *(_DWORD *)(v13 + 8);
  *(_QWORD *)v13 = v14;
  LODWORD(v14) = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 8) = v15;
  v16 = *(_DWORD *)(v13 + 12);
  *(_DWORD *)(v13 + 8) = v14;
  LODWORD(v14) = *(_DWORD *)(v12 + 12);
  *(_DWORD *)(v12 + 12) = v16;
  v17 = *(_QWORD *)(v13 + 24);
  *(_DWORD *)(v13 + 12) = v14;
  v18 = *(_QWORD *)(v12 + 24);
  *(_QWORD *)(v12 + 24) = v17;
  v19 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 24) = v18;
  v20 = *(_QWORD *)(v12 + 32);
  *(_QWORD *)(v12 + 32) = v19;
  v21 = *(_QWORD *)(v13 + 40);
  *(_QWORD *)(v13 + 32) = v20;
  v22 = *(_QWORD *)(v12 + 40);
  *(_QWORD *)(v12 + 40) = v21;
  *(_QWORD *)(v13 + 40) = v22;
  v23 = *(_QWORD *)(v12 + 48);
  *(_QWORD *)(v12 + 48) = *(_QWORD *)(v13 + 48);
  LODWORD(v21) = *(_DWORD *)(v13 + 56);
  *(_QWORD *)(v13 + 48) = v23;
  LODWORD(v23) = *(_DWORD *)(v12 + 56);
  *(_DWORD *)(v12 + 56) = v21;
  *(_DWORD *)(v13 + 56) = v23;
  if ( v7 )
  {
    sub_255630(v7, 0.0);
    clear_tinfo_t();
    j__qfree(v7);
  }
  return 1;
}

