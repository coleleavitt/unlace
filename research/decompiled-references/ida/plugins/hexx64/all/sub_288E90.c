__int64 __fastcall sub_288E90(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rax
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

  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  v5 = a2;
  if ( *(_DWORD *)(a2 + 8) == 49 )
    v5 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v5 + 8) != -4294967231LL )
    return 0;
  if ( *(_DWORD *)(a3 + 8) != 72 )
    return 0;
  v6 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(v6 + 8) != 2 )
    return 0;
  if ( sub_259AA0(*(_QWORD *)(v6 + 24), v5, a4) )
    return 0;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v7 = 8 * get_tinfo_size();
  if ( v7 < (__int16)sub_285970(*(_QWORD *)(v6 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL), a4)
    || (unsigned int)sub_256A60(a1 + 16, v5) != 2 )
  {
    return 0;
  }
  if ( *(_DWORD *)(a2 + 8) == 49 )
    *(_QWORD *)(v6 + 32) = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL), *(_QWORD *)(v6 + 32), v8, v9, v10, a4);
  v11 = *(__int64 **)(v6 + 32);
  v12 = *v11;
  *v11 = *(_QWORD *)a2;
  v13 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v12;
  LODWORD(v12) = *((_DWORD *)v11 + 2);
  *((_DWORD *)v11 + 2) = v13;
  v14 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v12;
  LODWORD(v12) = *((_DWORD *)v11 + 3);
  *((_DWORD *)v11 + 3) = v14;
  v15 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 12) = v12;
  v16 = v11[3];
  v11[3] = v15;
  v17 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v16;
  v18 = v11[4];
  v11[4] = v17;
  v19 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v18;
  v20 = v11[5];
  v11[5] = v19;
  v21 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v20;
  v22 = v11[6];
  v11[6] = v21;
  LODWORD(v21) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v22;
  LODWORD(v22) = *((_DWORD *)v11 + 14);
  *((_DWORD *)v11 + 14) = v21;
  *(_DWORD *)(a2 + 56) = v22;
  return 1;
}

