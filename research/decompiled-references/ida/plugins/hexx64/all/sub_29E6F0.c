__int64 __fastcall sub_29E6F0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  unsigned int v4; // ebp
  __int64 result; // rax
  int v6; // eax
  char tinfo_property; // al
  char v8; // al
  _DWORD *v9; // r13
  _DWORD *v10; // r14
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx

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
        v4 = lexcompare_tinfo();
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0x3E) != 0 && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D) )
        {
          v8 = get_tinfo_property();
          if ( (v8 & 0x3E) != 0 && ((v8 & 0xFu) <= 8 || (v8 & 0x3F) == 0x2D) )
            return -v4;
        }
        return v4;
      case 2:
      case 4:
        v4 = sub_29E6F0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
        goto LABEL_9;
      case 3:
        v4 = sub_29E4E0(*(_QWORD **)(a1 + 8), *(_QWORD **)(a2 + 8));
        goto LABEL_9;
      case 5:
        v3 = *(_DWORD *)(a2 + 8);
        if ( *(_DWORD *)(a1 + 8) < v3 )
          return 0xFFFFFFFFLL;
        if ( *(_DWORD *)(a1 + 8) > v3 )
          return 1;
        goto LABEL_10;
      case 6:
        v4 = sub_259AA0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8), a3);
LABEL_9:
        if ( !v4 )
          goto LABEL_10;
        return v4;
      case 8:
        v9 = *(_DWORD **)(a2 + 8);
        v10 = *(_DWORD **)(a1 + 8);
        v4 = sub_259AA0(*(_QWORD *)(*(_QWORD *)v10 + 24LL), *(_QWORD *)(*(_QWORD *)v9 + 24LL), a3);
        if ( v4 )
          return v4;
        v11 = v9[2];
        if ( v10[2] < v11 )
          return 0xFFFFFFFFLL;
        if ( v10[2] > v11 )
          return 1;
        v12 = **(_QWORD **)v10;
        v13 = **(_QWORD **)v9;
        if ( v12 < v13 )
          return 0xFFFFFFFFLL;
        if ( v13 < v12 )
          return 1;
LABEL_10:
        v6 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)(a1 + 4) < v6 )
          return 0xFFFFFFFFLL;
        result = *(_DWORD *)(a1 + 4) > v6;
        break;
      default:
        if ( !under_debugger )
          sub_383060(0xC524u, a3);
        BUG();
    }
  }
  return result;
}

