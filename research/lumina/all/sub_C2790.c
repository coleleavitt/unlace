__int64 __fastcall sub_C2790(_BYTE *a1, unsigned __int64 a2)
{
  _BYTE *v2; // rax
  unsigned __int64 v3; // rsi
  _BYTE *v4; // rdi
  char v5; // dl
  __int64 result; // rax
  _BYTE *v7; // rcx
  int i; // edx
  char v9; // r8
  __int64 v10; // rcx
  _BYTE v11[10]; // [rsp+Eh] [rbp-1Ah] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  if ( (a2 & 0xFF00000000000000LL) != 0 )
  {
    a1[8] = a2;
    v2 = a1 + 7;
    v3 = a2 >> 8;
    v4 = a1 - 1;
    do
    {
      v5 = v3;
      --v2;
      v3 >>= 7;
      v2[1] = v5 | 0x80;
    }
    while ( v4 != v2 );
    return 9;
  }
  else
  {
    v7 = v11;
    for ( i = 0; ; ++i )
    {
      v9 = a2;
      a2 >>= 7;
      ++v7;
      result = (unsigned int)(i + 1);
      *(v7 - 1) = v9 | 0x80;
      if ( !a2 )
        break;
    }
    v11[0] &= ~0x80u;
    do
    {
      v10 = i--;
      *a1++ = v11[v10];
    }
    while ( i != -1 );
  }
  return result;
}
