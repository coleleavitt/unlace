void __fastcall sub_7EF0(__int64 a1, __int64 a2, unsigned int a3, char a4, double a5)
{
  unsigned int v5; // edx
  char v6; // bl
  __int64 v7; // rax
  const char *v8; // rdx

  v5 = a3 >> 25;
  v6 = v5 & 0x1F;
  *(_BYTE *)(a2 + 1) = 1;
  *(_BYTE *)(a2 + 5) = 2;
  if ( a4 == 7 )
  {
    if ( (v5 & 1) != 0 )
      v6 = v5 & 0x1E | 0x20;
  }
  else if ( a4 == 8 )
  {
    if ( (v5 & 1) != 0 )
      v6 = v5 & 0x1E | 0x20;
    if ( (v6 & 2) != 0 )
      *(_WORD *)(a1 + 24) = 0;
  }
  else if ( a4 != 2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 24);
    v8 = nullptr;
    if ( (unsigned __int16)v7 <= 0xE8u )
      v8 = (const char *)*(&off_16BA0 + 2 * v7);
    sub_7D90((__int64)"%a(%s): internal error in %s", a5, *(const char **)(a1 + 16), v8);
  }
  *(_WORD *)(a2 + 6) = (char)(v6 + 64);
}
