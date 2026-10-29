_BYTE *__fastcall sub_DCCD0(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v3; // ecx
  size_t i; // rdx
  int v5; // ecx

  for ( ; (byte_1BEF00[*a2] & 1) != 0; ++a2 )
    ;
  v3 = a3 - (_DWORD)a2;
  i = a3 - (int)a2;
  if ( v3 > 0 && (byte_1BEF00[a2[i - 1]] & 1) != 0 )
  {
    v5 = v3 - 1;
    for ( i = v5; i != v5 - (unsigned __int64)(unsigned int)v5 && (byte_1BEF00[a2[i - 1]] & 1) != 0; --i )
      ;
  }
  return sub_DCB40(a1, a2, i);
}
