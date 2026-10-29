__int64 __fastcall sub_CFB50(__int64 a1, __int16 a2, unsigned __int8 *a3)
{
  char v3; // bl
  __int64 v4; // r11
  __int64 result; // rax
  _BYTE *v7; // r9
  unsigned __int8 *i; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi

  v3 = 0;
  v4 = a1;
  if ( a3 )
    v3 = sub_CAF70(a3);
  result = 0xFFFFFFFFLL;
  if ( a2 > 0 )
  {
    result = 0;
    do
    {
      if ( *(_BYTE *)(v4 + 11) == v3 )
      {
        v7 = *(_BYTE **)v4;
        for ( i = a3; ; ++i )
        {
          v9 = (unsigned __int8)*v7;
          v10 = *i;
          if ( (_DWORD)v9 == (_DWORD)v10 )
          {
            if ( !*v7 )
              return result;
          }
          else if ( byte_1BF000[v9] != byte_1BF000[v10] )
          {
            break;
          }
          ++v7;
        }
      }
      result = (unsigned int)(result + 1);
      v4 += 16;
    }
    while ( a2 != (_DWORD)result );
    return 0xFFFFFFFFLL;
  }
  return result;
}
