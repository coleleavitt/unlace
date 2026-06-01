__int64 __fastcall sub_241B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi

  while ( 2 )
  {
    switch ( *(_DWORD *)(a1 + 8) )
    {
      case 'G':
        v18 = *(_QWORD *)(a1 + 24);
        if ( !*(_QWORD *)(v18 + 16) )
          return 1;
        a1 = *(_QWORD *)(v18 + 8) + 16LL;
        continue;
      case 'H':
        v19 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v19 + 8) != 57 )
          return 1;
        if ( *(char *)(*(_QWORD *)(v19 + 24) + 56LL) < 0 )
          return 0;
        return (*(_BYTE *)(*(_QWORD *)(v19 + 32) + 32LL) & 4) == 0;
      case 'I':
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
        if ( !v20 || (unsigned __int8)sub_241B40(v20, a2, a3, a4, a5) )
          return 1;
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
        continue;
      case 'J':
      case 'K':
      case 'L':
        v14 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v14 + 8) != 61 || !sub_255A30(*(__int64 **)(v14 + 24)) )
          return 1;
        return sub_285490(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL), 0);
      case 'M':
        v15 = *(_QWORD *)(a1 + 24);
        v16 = *(_QWORD *)(v15 + 112);
        v17 = v16 + 56LL * *(_QWORD *)(v15 + 120);
        if ( v17 == v16 )
          return 0;
        while ( !(unsigned __int8)sub_285490(v16, 0) )
        {
          v16 += 56;
          if ( v17 == v16 )
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
        if ( !*(_QWORD *)(v6 + 16) || (unsigned __int8)sub_241B40(*(_QWORD *)(v6 + 8) + 16LL, a2, a3, a4, a5) )
          return 1;
        v10 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v10 + 64) )
          return 0;
        v11 = *(_QWORD *)(v10 + 24);
        v12 = v11 + 48LL * *(_QWORD *)(v10 + 32);
        if ( v12 == v11 )
          return 0;
        break;
      default:
        return 1;
    }
    break;
  }
  do
  {
    if ( !*(_QWORD *)(v11 + 16) || (unsigned __int8)sub_241B40(*(_QWORD *)(v11 + 8) + 16LL, a2, v7, v8, v9) )
      return 1;
    v11 += 48;
  }
  while ( v11 != v12 );
  return 0;
}

