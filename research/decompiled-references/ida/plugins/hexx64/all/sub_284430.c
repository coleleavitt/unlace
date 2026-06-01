__int64 __fastcall sub_284430(__int64 a1, __int64 a2, unsigned int a3, int a4, double a5)
{
  int v6; // ecx
  __int64 *v8; // r8
  __int64 v9; // rdi
  unsigned int tinfo_size; // eax
  __int64 v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a1 + 24) + ~a4;
  if ( v6 >= 0 )
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v6);
    while ( 1 )
    {
      v9 = *v8;
      if ( !*v8 )
        break;
      switch ( *(_DWORD *)(v9 + 8) )
      {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          return (unsigned int)get_tinfo_size();
        case 9:
        case 0xA:
        case 0xB:
        case 0x20:
        case 0x21:
        case 0x22:
          if ( *(_QWORD *)(v9 + 24) != a2 )
            return 1;
          return a3;
        case 0x10:
          if ( *(_QWORD *)(v9 + 24) != a2 )
            goto LABEL_8;
          return a3;
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x2F:
        case 0x32:
LABEL_8:
          --v6;
          --v8;
          if ( v6 == -1 )
            return a3;
          a2 = v9;
          break;
        case 0x30:
          tinfo_size = get_tinfo_size();
          if ( (int)a3 > (int)tinfo_size )
            return tinfo_size;
          return a3;
        case 0x39:
          if ( *(_QWORD *)(v9 + 24) != a2 )
          {
            sub_284360(v9, a2, nullptr, a5);
            return (unsigned int)get_tinfo_size();
          }
          return a3;
        case 0x50:
          sub_36D720(v12, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
          a3 = get_tinfo_size();
          clear_tinfo_t();
          return a3;
        default:
          return a3;
      }
    }
    if ( !under_debugger )
      sub_383060(0xC5ABu, a5);
    BUG();
  }
  return a3;
}

