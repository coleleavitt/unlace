__int64 __fastcall sub_45960(__int64 a1, _QWORD *a2, double a3, double a4)
{
  char v5; // dl
  __int64 result; // rax
  _DWORD *v7; // rbx
  _DWORD *v8; // r12
  int v9; // r15d
  _QWORD *v10; // rsi

  v5 = sub_45560((__int64)a2);
  result = -1;
  if ( v5 )
  {
    v7 = (_DWORD *)a2[4];
    v8 = &v7[14 * a2[5]];
    if ( v8 != v7 )
    {
      v9 = 0;
      do
      {
        while ( 1 )
        {
          netnode_supset(*(_QWORD *)(a1 + 304), v9, v7, 56, 112);
          if ( *v7 == 7 )
            break;
          v7 += 14;
          ++v9;
          if ( v7 == v8 )
            return a2[7];
        }
        v10 = v7;
        v7 += 14;
        ++v9;
        sub_2E230((__int64 *)(a1 + 232), v10, a3, a4);
      }
      while ( v7 != v8 );
    }
    return a2[7];
  }
  return result;
}
