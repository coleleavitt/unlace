__int64 __fastcall sub_312DC0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  __int64 result; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx

  v3 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 4) < v3 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 4) > v3 )
    return 1;
  v4 = *(_DWORD *)a1 & 0xF;
  v5 = *(_DWORD *)a2 & 0xF;
  if ( v4 < v5 )
    return 0xFFFFFFFFLL;
  if ( v4 > v5 )
    return 1;
  switch ( *(_DWORD *)a1 & 0xF )
  {
    case 0:
    case 1:
    case 8:
      return 0;
    case 2:
      return sub_316F80((__int64 *)(a1 + 8), (_QWORD *)(a2 + 8));
    case 3:
    case 4:
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)(a2 + 8);
      if ( v11 < v12 )
        return 0xFFFFFFFFLL;
      result = 1;
      if ( v12 < v11 )
        return result;
      v13 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 24) < v13 )
        return 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 24) > v13 )
        return result;
LABEL_26:
      v16 = *(_QWORD *)(a1 + 16);
      v17 = *(_QWORD *)(a2 + 16);
      if ( v16 < v17 )
        return 0xFFFFFFFFLL;
      return v17 < v16;
    case 5:
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_QWORD *)(a2 + 8);
      if ( v14 < v15 )
        return 0xFFFFFFFFLL;
      result = 1;
      if ( v15 >= v14 )
        goto LABEL_26;
      return result;
    case 6:
    case 7:
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a2 + 16);
      v9 = v8;
      if ( v7 <= v8 )
        v9 = *(_QWORD *)(a1 + 16);
      if ( !v9 )
        goto LABEL_16;
      v10 = 0;
      break;
    default:
      if ( !under_debugger )
        sub_383060(0xCA1Bu, a3);
      BUG();
  }
  while ( 1 )
  {
    result = sub_312DC0(*(_QWORD *)(a1 + 8) + 32 * v10, 32 * v10 + *(_QWORD *)(a2 + 8));
    if ( (_DWORD)result )
      break;
    if ( v9 == ++v10 )
    {
LABEL_16:
      if ( v7 < v8 )
        return 0xFFFFFFFFLL;
      return v8 < v7;
    }
  }
  return result;
}

