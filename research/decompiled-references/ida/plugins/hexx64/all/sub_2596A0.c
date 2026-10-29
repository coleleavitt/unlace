int __fastcall sub_2596A0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rdx
  int result; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // ecx
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbp

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 <= v3 )
  {
    v5 = a1;
    if ( v4 < v3 )
      return 1;
    while ( 1 )
    {
      switch ( v3 )
      {
        case 'F':
        case 'N':
        case 'O':
          return 0;
        case 'G':
          return sub_25A440(*(_QWORD ***)(v5 + 24), *(_QWORD ***)(a2 + 24));
        case 'H':
        case 'P':
        case 'T':
          return sub_259850(*(_QWORD *)(v5 + 24), *(_QWORD *)(a2 + 24), 0);
        case 'I':
          return sub_25A770(*(_QWORD *)(v5 + 24), *(_QWORD *)(a2 + 24));
        case 'J':
          return sub_25A320(*(_QWORD *)(v5 + 24), *(_QWORD *)(a2 + 24));
        case 'K':
        case 'L':
          v7 = *(_QWORD *)(v5 + 24);
          v8 = *(_QWORD *)(a2 + 24);
          result = sub_259850(v7, v8, 0);
          if ( result )
            return result;
          v5 = *(_QWORD *)(v7 + 64);
          a2 = *(_QWORD *)(v8 + 64);
          v3 = *(_DWORD *)(v5 + 8);
          v9 = *(_DWORD *)(a2 + 8);
          if ( v3 < v9 )
            return -1;
          if ( v9 < v3 )
            return 1;
          break;
        case 'M':
          v12 = *(_QWORD *)(v5 + 24);
          v13 = *(_QWORD *)(a2 + 24);
          result = sub_259850(v12, v13, 0);
          if ( !result )
            return sub_2595E0((__int64 *)(v12 + 112), (__int64 *)(v13 + 112));
          return result;
        case 'Q':
          v10 = *(_DWORD **)(a2 + 24);
          v11 = **(_DWORD **)(v5 + 24);
          if ( *v10 < v11 )
            return -1;
          return *v10 > v11;
        case 'R':
          return sub_2569F0(*(unsigned __int64 ***)(v5 + 24), *(unsigned __int64 ***)(a2 + 24), a3);
        case 'S':
          return sub_25A5D0(*(_QWORD *)(v5 + 24), *(_QWORD *)(a2 + 24));
        default:
          if ( !under_debugger )
            sub_383060(0xC393u, a3);
          BUG();
      }
    }
  }
  return -1;
}

