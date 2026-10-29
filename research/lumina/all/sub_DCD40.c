_BYTE *__fastcall sub_DCD40(__int64 a1, unsigned __int8 *a2, int a3)
{
  _BYTE *result; // rax
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  int v6; // esi

  result = sub_DCCD0(a1, a2, a3);
  if ( result )
  {
    v4 = (unsigned __int8)*result;
    if ( (_BYTE)v4 )
    {
      v5 = result;
      v6 = 0;
      do
      {
        if ( (byte_1BEF00[v4] & 1) != 0 )
          *v5 = 32;
        v5 = &result[++v6];
        v4 = (unsigned __int8)*v5;
      }
      while ( (_BYTE)v4 );
    }
  }
  return result;
}
