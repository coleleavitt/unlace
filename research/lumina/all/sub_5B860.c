__int64 __fastcall sub_5B860(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax
  __int16 v3; // cx
  __int64 result; // rax
  unsigned __int16 v5; // dx

  v1 = word_241DA2;
  v2 = a1 + 2LL * word_241DA2 - 2;
  while ( 1 )
  {
    v2 -= 2;
    if ( *(_WORD *)(v2 + 2) )
      break;
    if ( !--v1 )
      return 0;
  }
  if ( !v1 )
    return 0;
  v3 = *(_WORD *)(a1 + 2LL * v1 - 2);
  result = (unsigned int)(16 * v1);
  if ( v3 >= 0 )
  {
    v5 = 0x8000;
    do
    {
      v5 >>= 1;
      result = (unsigned int)(result - 1);
    }
    while ( ((unsigned __int16)v3 & v5) == 0 );
  }
  return result;
}
