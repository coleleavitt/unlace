__int64 __fastcall sub_C4770(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdx

  if ( a1[3] )
    xmmword_241500();
  a1[62] = a2;
  a1[63] = a3;
  if ( a2 )
  {
    for ( i = a1[1]; i; i = *(_QWORD *)(i + 16) )
      *(_BYTE *)(i + 198) = *(_BYTE *)(i + 198) & 0xFC | 2;
  }
  if ( a1[3] )
    xmmword_241510();
  return 0;
}
