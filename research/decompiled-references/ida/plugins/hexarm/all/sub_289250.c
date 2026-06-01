__int64 __fastcall sub_289250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx

  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  v4 = a2;
  if ( *(_DWORD *)(a2 + 8) == 49 )
    v4 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v4 + 8) != -4294967231LL )
    return 0;
  if ( *(_DWORD *)(a3 + 8) != 72 )
    return 0;
  v5 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(v5 + 8) != 2 )
    return 0;
  if ( sub_259E60(*(_QWORD *)(v5 + 24), v4) )
    return 0;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v6 = 8 * get_tinfo_size();
  if ( v6 < (__int16)sub_285D30(*(_QWORD *)(v5 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL))
    || (unsigned int)sub_256E20(a1 + 16, v4) != 2 )
  {
    return 0;
  }
  if ( *(_DWORD *)(a2 + 8) == 49 )
    *(_QWORD *)(v5 + 32) = sub_244820(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL), *(_QWORD *)(v5 + 32), v7, v8, v9);
  v10 = *(__int64 **)(v5 + 32);
  v11 = *v10;
  *v10 = *(_QWORD *)a2;
  v12 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a2 = v11;
  LODWORD(v11) = *((_DWORD *)v10 + 2);
  *((_DWORD *)v10 + 2) = v12;
  v13 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v11;
  LODWORD(v11) = *((_DWORD *)v10 + 3);
  *((_DWORD *)v10 + 3) = v13;
  v14 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 12) = v11;
  v15 = v10[3];
  v10[3] = v14;
  v16 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v15;
  v17 = v10[4];
  v10[4] = v16;
  v18 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v17;
  v19 = v10[5];
  v10[5] = v18;
  v20 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v19;
  v21 = v10[6];
  v10[6] = v20;
  LODWORD(v20) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v21;
  LODWORD(v21) = *((_DWORD *)v10 + 14);
  *((_DWORD *)v10 + 14) = v20;
  *(_DWORD *)(a2 + 56) = v21;
  return 1;
}

