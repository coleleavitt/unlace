bool __fastcall sub_315890(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // ecx
  _QWORD v16[11]; // [rsp+0h] [rbp-58h] BYREF

  v16[5] = __readfsqword(0x28u);
  v3 = *(_DWORD *)a1 & 0xF;
  v5 = a1;
  switch ( (int)v3 )
  {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return sub_317040((unsigned __int64 **)(a1 + 8), a2);
    case 3:
    case 4:
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(v5 + 16);
      v11 = *(_QWORD *)(v5 + 8);
      if ( v9 < 0 )
      {
        v9 = -v9;
        v11 = *(_QWORD *)(v5 + 16);
        v12 = *(_QWORD *)(v5 + 8) - a2;
        v10 = *(_QWORD *)(v5 + 8);
      }
      else
      {
        v12 = a2 - v11;
      }
      if ( (_DWORD)v3 == 4 && v10 < v11 )
      {
        if ( a2 >= v11 || v10 >= a2 )
        {
          v15 = *(_DWORD *)(v5 + 4);
          if ( v15 == 8 || (1LL << (8 * (unsigned __int8)v15)) - 1 >= a2 )
            return v12 % v9 == 0;
        }
      }
      else if ( a2 >= v11 && v10 >= a2 )
      {
        return v12 % v9 == 0;
      }
      return 0;
    case 5:
      if ( (*(_QWORD *)(a1 + 8) & a2) != 0 )
        return 0;
      return (*(_QWORD *)(a1 + 16) & ~a2) == 0;
    case 6:
      v6 = *(_QWORD *)(a1 + 8);
      v7 = v6 + 32LL * *(_QWORD *)(a1 + 16);
      if ( v6 == v7 )
        return 1;
      while ( 1 )
      {
        sub_312C40((__int64)v16, v6, v5, v3, a3);
        if ( !sub_315890((__int64)v16, a2) )
          break;
        sub_312B80((__int64)v16, a3);
        v6 += 32;
        if ( v7 == v6 )
          return 1;
      }
      sub_312B80((__int64)v16, a3);
      return 0;
    case 7:
      v13 = *(_QWORD *)(a1 + 8);
      v14 = v13 + 32LL * *(_QWORD *)(a1 + 16);
      if ( v13 == v14 )
        return 0;
      while ( 1 )
      {
        sub_312C40((__int64)v16, v13, v5, v3, a3);
        if ( sub_315890((__int64)v16, a2) )
          break;
        sub_312B80((__int64)v16, a3);
        v13 += 32;
        if ( v14 == v13 )
          return 0;
      }
      sub_312B80((__int64)v16, a3);
      return 1;
    default:
      if ( !under_debugger )
        sub_383060(0xCA21u, a3);
      BUG();
  }
}

