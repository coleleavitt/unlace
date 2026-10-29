__int64 __fastcall sub_280D40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 80) - 53) <= 1
    && *(_DWORD *)(a2 + 8) == 57
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 68
    && (unsigned __int8)sub_255EA0(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 64)) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( sub_259AA0(a2, *(_QWORD *)(a1 + 72), a3) )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 == 58 )
  {
    if ( *(_QWORD *)(v3 + 24) == a2 )
      return 0xFFFFFFFFLL;
    goto LABEL_10;
  }
  if ( v4 > 0x3A )
  {
    if ( v4 == 60 )
      return 0xFFFFFFFFLL;
    goto LABEL_10;
  }
  if ( v4 <= 0x24 )
  {
    if ( v4 > 0x22 )
    {
      v8 = *(_QWORD *)(v3 + 32);
      if ( *(_DWORD *)(v8 + 8) != 61 || sub_255A30(*(__int64 **)(v8 + 24)) != 1 )
        goto LABEL_8;
    }
  }
  else if ( v4 - 37 <= 4 )
  {
LABEL_8:
    if ( *(_QWORD *)(v3 + 24) == a2 && (unsigned int)(*(_DWORD *)(a1 + 80) - 53) <= 1
      || *(_QWORD *)(v3 + 32) == a2 && (unsigned int)(*(_DWORD *)(a1 + 80) - 55) <= 1 )
    {
      return 0xFFFFFFFFLL;
    }
  }
LABEL_10:
  if ( (unsigned __int8)sub_245010(v3, a2) )
    return 0xFFFFFFFFLL;
  v9 = j__qalloc_or_throw(64, a2, v5, v6);
  *(_QWORD *)v9 = -1;
  *(_QWORD *)(v9 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_QWORD *)v9 = *(_QWORD *)a2;
  v10 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(v9 + 24) = v9;
  *(_DWORD *)(v9 + 8) = v10;
  copy_tinfo_t();
  v11 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)v9;
  v12 = *(_DWORD *)(v9 + 8);
  *(_QWORD *)v9 = v11;
  LODWORD(v11) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v12;
  v13 = *(_DWORD *)(v9 + 12);
  *(_DWORD *)(v9 + 8) = v11;
  LODWORD(v11) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v13;
  v14 = *(_QWORD *)(v9 + 24);
  *(_DWORD *)(v9 + 12) = v11;
  v15 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v14;
  v16 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 24) = v15;
  v17 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v16;
  v18 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 32) = v17;
  v19 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v18;
  v20 = *(_QWORD *)(v9 + 48);
  *(_QWORD *)(v9 + 40) = v19;
  v21 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v20;
  LODWORD(v20) = *(_DWORD *)(v9 + 56);
  *(_QWORD *)(v9 + 48) = v21;
  LODWORD(v21) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v20;
  *(_DWORD *)(v9 + 56) = v21;
  return 1;
}

