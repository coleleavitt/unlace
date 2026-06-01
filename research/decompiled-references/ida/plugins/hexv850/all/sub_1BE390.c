__int64 __fastcall sub_1BE390(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _QWORD *v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  while ( 1 )
  {
    v3 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 3 )
      break;
    if ( v3 > 3 )
    {
      if ( (unsigned int)(v3 - 4) > 2 )
      {
LABEL_11:
        if ( !under_debugger )
          sub_37CFE0(51552);
        BUG();
      }
      return 0;
    }
    if ( v3 == 1 )
    {
      if ( a2 )
      {
        v6 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(a2 + 8) = 5;
        *(_DWORD *)(a2 + 12) = a3;
        *(_QWORD *)a2 = v6;
      }
      return 1;
    }
    if ( v3 != 2 )
      goto LABEL_11;
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4[1] == 1 )
    {
      a1 = *v4;
      if ( !*(_WORD *)(*v4 + 16LL) )
        continue;
    }
    return 0;
  }
  if ( !a2 )
    return 1;
  v7 = *(int *)(a1 + 8);
  *(_BYTE *)(a2 + 8) = 1;
  *(_DWORD *)(a2 + 12) = a3;
  *(_QWORD *)a2 = v7;
  return 1;
}

