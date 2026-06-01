__int64 __fastcall sub_1C3110(__int64 a1, __int64 a2, int a3, double a4)
{
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  while ( 1 )
  {
    v4 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 3 )
      break;
    if ( v4 > 3 )
    {
      if ( (unsigned int)(v4 - 4) > 2 )
      {
LABEL_11:
        if ( !under_debugger )
          sub_383060(0xC960u, a4);
        BUG();
      }
      return 0;
    }
    if ( v4 == 1 )
    {
      if ( a2 )
      {
        v7 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(a2 + 8) = 5;
        *(_DWORD *)(a2 + 12) = a3;
        *(_QWORD *)a2 = v7;
      }
      return 1;
    }
    if ( v4 != 2 )
      goto LABEL_11;
    v5 = *(_QWORD **)(a1 + 8);
    if ( v5[1] == 1 )
    {
      a1 = *v5;
      if ( !*(_WORD *)(*v5 + 16LL) )
        continue;
    }
    return 0;
  }
  if ( !a2 )
    return 1;
  v8 = *(int *)(a1 + 8);
  *(_BYTE *)(a2 + 8) = 1;
  *(_DWORD *)(a2 + 12) = a3;
  *(_QWORD *)a2 = v8;
  return 1;
}

