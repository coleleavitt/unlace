__int64 __fastcall sub_FE00(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int16 v3; // si
  __int64 result; // rax
  int v6; // edi
  char v7; // si

  v2 = *(unsigned __int16 *)(a2 + 8);
  v3 = *(_WORD *)(a1 + 322);
  LODWORD(result) = 14;
  v6 = 0;
  v7 = ~(v3 >> 11) & 7;
  do
  {
    if ( (~(unsigned __int8)(v2 >> result) & 3) != 0 )
      v6 |= 1 << (v7 & 7);
    result = (unsigned int)(result - 2);
    --v7;
  }
  while ( (_DWORD)result != -2 );
  *(_WORD *)(a1 + 324) = (unsigned __int8)v6;
  return result;
}

