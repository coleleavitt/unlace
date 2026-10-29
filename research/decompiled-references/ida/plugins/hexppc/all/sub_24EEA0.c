__int64 __fastcall sub_24EEA0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdx

  result = 0;
  if ( a1[8] == a2 )
  {
    v3 = a1[3] - 1LL;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD **)(a1[2] + 8 * v3);
        if ( *v4 != -1 )
          break;
        if ( !--v3 )
          return 1;
      }
      a1[8] = v4;
    }
    return 1;
  }
  return result;
}

