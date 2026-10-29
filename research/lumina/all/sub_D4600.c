__int64 __fastcall sub_D4600(__int64 a1, __int64 *a2)
{
  int v2; // edx
  int v4; // r8d
  char *v5; // rdx
  char v6; // al
  int v7; // r9d
  __int64 v8; // rcx
  char *v9; // rdx

  if ( *(_BYTE *)a1 == 48 && (*(_BYTE *)(a1 + 1) & 0xDF) == 0x58 )
  {
    if ( *(_BYTE *)(a1 + 2) == 48 )
    {
      v4 = 2;
      do
      {
        v5 = (char *)(a1 + ++v4);
        v6 = *v5;
      }
      while ( *v5 == 48 );
    }
    else
    {
      v5 = (char *)(a1 + 2);
      v6 = *(_BYTE *)(a1 + 2);
      v4 = 2;
    }
    if ( (byte_1BEF00[(unsigned __int8)v6] & 8) != 0 )
    {
      v7 = v4;
      v8 = 0;
      do
      {
        v9 = (char *)(a1 + ++v7);
        v8 = ((((v6 >> 6) & 1) + v6 + 8 * ((v6 >> 6) & 1)) & 0xF) + 16 * v8;
        v6 = *v9;
      }
      while ( (byte_1BEF00[(unsigned __int8)*v9] & 8) != 0 );
      *a2 = v8;
      if ( *v9 || v7 - v4 > 16 )
        return 2;
    }
    else
    {
      *a2 = 0;
      if ( *v5 )
        return 2;
    }
    return 0;
  }
  else
  {
    v2 = 0;
    if ( a1 )
      v2 = strlen((const char *)a1) & 0x3FFFFFFF;
    return sub_C2450((char *)a1, a2, v2, 1u);
  }
}
