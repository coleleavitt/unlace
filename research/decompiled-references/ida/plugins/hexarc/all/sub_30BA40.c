__int64 __fastcall sub_30BA40(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx
  __int64 result; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx

  v2 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 4) < v2 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 4) > v2 )
    return 1;
  v3 = *(_DWORD *)a1 & 0xF;
  v4 = *(_DWORD *)a2 & 0xF;
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  if ( v3 > v4 )
    return 1;
  switch ( *(_DWORD *)a1 & 0xF )
  {
    case 0:
    case 1:
    case 8:
      return 0;
    case 2:
      return sub_30FC00(a1 + 8, a2 + 8);
    case 3:
    case 4:
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)(a2 + 8);
      if ( v10 < v11 )
        return 0xFFFFFFFFLL;
      result = 1;
      if ( v11 < v10 )
        return result;
      v12 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 24) < v12 )
        return 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 24) > v12 )
        return result;
LABEL_26:
      v15 = *(_QWORD *)(a1 + 16);
      v16 = *(_QWORD *)(a2 + 16);
      if ( v15 < v16 )
        return 0xFFFFFFFFLL;
      return v16 < v15;
    case 5:
      v13 = *(_QWORD *)(a1 + 8);
      v14 = *(_QWORD *)(a2 + 8);
      if ( v13 < v14 )
        return 0xFFFFFFFFLL;
      result = 1;
      if ( v14 >= v13 )
        goto LABEL_26;
      return result;
    case 6:
    case 7:
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a2 + 16);
      v8 = v7;
      if ( v6 <= v7 )
        v8 = *(_QWORD *)(a1 + 16);
      if ( !v8 )
        goto LABEL_16;
      v9 = 0;
      break;
    default:
      if ( !under_debugger )
        sub_37B760(51739);
      BUG();
  }
  while ( 1 )
  {
    result = sub_30BA40(*(_QWORD *)(a1 + 8) + 32 * v9, 32 * v9 + *(_QWORD *)(a2 + 8));
    if ( (_DWORD)result )
      break;
    if ( v8 == ++v9 )
    {
LABEL_16:
      if ( v6 < v7 )
        return 0xFFFFFFFFLL;
      return v7 < v6;
    }
  }
  return result;
}

