__int64 __fastcall sub_30D2C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rax

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
      if ( *(_QWORD *)(a1 + 8) )
      {
        *(_QWORD *)(a1 + 16) = 0;
        result = qfree();
      }
      goto LABEL_4;
    case 6:
    case 7:
      v3 = *(_QWORD *)(a1 + 8);
      if ( v3 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = i;
            sub_30D2C0(32 * v6 + v3);
            v3 = *(_QWORD *)(a1 + 8);
          }
        }
        *(_QWORD *)(a1 + 16) = 0;
        result = qfree();
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
        sub_37CFE0(51737);
      BUG();
  }
}

