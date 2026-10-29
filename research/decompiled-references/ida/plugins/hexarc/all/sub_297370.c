__int64 __fastcall sub_297370(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebp
  __int64 result; // rax
  int v5; // eax
  char tinfo_property; // al
  char v7; // al
  _DWORD *v8; // r13
  _DWORD *v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx

  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
  {
    return 1;
  }
  else
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
      case 7:
        goto LABEL_10;
      case 1:
        v3 = lexcompare_tinfo();
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D) )
        {
          v7 = get_tinfo_property();
          if ( (v7 & 0x3E) != 0 && ((v7 & 0xFu) <= 8 || (v7 & 0x3F) == 0x2D) )
            return -v3;
        }
        return v3;
      case 2:
      case 4:
        v3 = sub_297370(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
        goto LABEL_9;
      case 3:
        v3 = sub_297160(*(_QWORD **)(a1 + 8), *(_QWORD **)(a2 + 8));
        goto LABEL_9;
      case 5:
        v2 = *(_DWORD *)(a2 + 8);
        if ( *(_DWORD *)(a1 + 8) < v2 )
          return 0xFFFFFFFFLL;
        if ( *(_DWORD *)(a1 + 8) > v2 )
          return 1;
        goto LABEL_10;
      case 6:
        v3 = sub_252720(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
LABEL_9:
        if ( !v3 )
          goto LABEL_10;
        return v3;
      case 8:
        v8 = *(_DWORD **)(a2 + 8);
        v9 = *(_DWORD **)(a1 + 8);
        v3 = sub_252720(*(_QWORD *)(*(_QWORD *)v9 + 24LL), *(_QWORD *)(*(_QWORD *)v8 + 24LL));
        if ( v3 )
          return v3;
        v10 = v8[2];
        if ( v9[2] < v10 )
          return 0xFFFFFFFFLL;
        if ( v9[2] > v10 )
          return 1;
        v11 = **(_QWORD **)v9;
        v12 = **(_QWORD **)v8;
        if ( v11 < v12 )
          return 0xFFFFFFFFLL;
        if ( v12 < v11 )
          return 1;
LABEL_10:
        v5 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)(a1 + 4) < v5 )
          return 0xFFFFFFFFLL;
        result = *(_DWORD *)(a1 + 4) > v5;
        break;
      default:
        if ( !under_debugger )
          sub_37B760(50468);
        BUG();
    }
  }
  return result;
}

