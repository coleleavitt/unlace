__int64 __fastcall sub_312B80(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rax

  result = *(_DWORD *)a1 & 0xF;
  switch ( *(_DWORD *)a1 & 0xF )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
      goto LABEL_4;
    case 2:
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        result = qfree(v4);
      }
      goto LABEL_4;
    case 6:
    case 7:
      v5 = *(_QWORD *)(a1 + 8);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        if ( v6 )
        {
          for ( i = 0; i != v6; ++i )
          {
            v8 = i;
            sub_312B80(32 * v8 + v5);
            v5 = *(_QWORD *)(a1 + 8);
          }
        }
        *(_QWORD *)(a1 + 16) = 0;
        result = qfree(v5);
        *(_DWORD *)a1 = 0;
      }
      else
      {
LABEL_4:
        *(_DWORD *)a1 = 0;
      }
      return result;
    default:
      if ( !under_debugger )
        sub_383060(0xCA19u, a2);
      BUG();
  }
}

