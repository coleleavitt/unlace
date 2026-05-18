__int64 __fastcall sub_CF2D0(__int64 a1, int a2, unsigned __int8 *a3)
{
  _BYTE **v3; // rax
  unsigned __int8 *v4; // rdi
  _BYTE *i; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi

  v3 = (_BYTE **)(*(_QWORD *)(a1 + 32) + 32LL * a2);
  v4 = a3;
  for ( i = *v3; ; ++i )
  {
    v6 = (unsigned __int8)*i;
    v7 = *v4;
    if ( (_DWORD)v6 != (_DWORD)v7 )
      break;
    if ( !*i )
      return 1;
LABEL_3:
    ++v4;
  }
  if ( byte_1BF000[v6] == byte_1BF000[v7] )
    goto LABEL_3;
  v9 = 0;
  if ( !a2 )
  {
    while ( 1 )
    {
      v10 = (unsigned __int8)aMain[v9];
      v11 = a3[v9];
      if ( (_DWORD)v10 == (_DWORD)v11 )
      {
        if ( !aMain[v9] )
          return 1;
      }
      else if ( byte_1BF000[v10] != byte_1BF000[v11] )
      {
        return 0;
      }
      ++v9;
    }
  }
  return 0;
}
