__int64 __fastcall sub_23CF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax

  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 8) )
    {
      case 'G':
        v15 = *(_QWORD *)(a1 + 24);
        if ( !*(_QWORD *)(v15 + 16) )
          return 1;
        a1 = *(_QWORD *)(v15 + 8) + 16LL;
        continue;
      case 'H':
        v16 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v16 + 8) != 57 )
          return 1;
        if ( *(char *)(*(_QWORD *)(v16 + 24) + 56LL) < 0 )
          return 0;
        return (*(_BYTE *)(*(_QWORD *)(v16 + 32) + 32LL) & 4) == 0;
      case 'I':
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) || (unsigned __int8)((__int64 (*)(void))sub_23CF40)() )
          return 1;
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
        continue;
      case 'J':
      case 'K':
      case 'L':
        v11 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v11 + 8) != 61 || !sub_250E30(*(_QWORD *)(v11 + 24), v11 + 48, a3, a4, a5) )
          return 1;
        return sub_280890(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), 0);
      case 'M':
        v12 = *(_QWORD *)(a1 + 24);
        v13 = *(_QWORD *)(v12 + 112);
        v14 = v13 + 56LL * *(_QWORD *)(v12 + 120);
        if ( v14 == v13 )
          return 0;
        while ( !(unsigned __int8)sub_280890(v13, 0) )
        {
          v13 += 56;
          if ( v14 == v13 )
            return 0;
        }
        return 1;
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'T':
        return 0;
      case 'S':
        v6 = *(_QWORD *)(a1 + 24);
        if ( !*(_QWORD *)(v6 + 16) || (unsigned __int8)sub_23CF40(*(_QWORD *)(v6 + 8) + 16LL) )
          return 1;
        v7 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v7 + 64) )
          return 0;
        v8 = *(_QWORD *)(v7 + 24);
        v9 = v8 + 48LL * *(_QWORD *)(v7 + 32);
        if ( v9 == v8 )
          return 0;
        break;
      default:
        return 1;
    }
    break;
  }
  do
  {
    if ( !*(_QWORD *)(v8 + 16) || (unsigned __int8)sub_23CF40(*(_QWORD *)(v8 + 8) + 16LL) )
      return 1;
    v8 += 48;
  }
  while ( v8 != v9 );
  return 0;
}

