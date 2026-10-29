__int64 __fastcall sub_C6480(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned __int8 v2; // dl
  __int64 result; // rax
  int v4; // r9d
  unsigned __int8 *v5; // rax
  __int64 v6; // rcx
  unsigned __int8 *v7; // rdi
  int v8; // edx
  __int64 v9; // rdx
  char v10; // al
  _BYTE *v11; // rdi
  char *v12; // r8
  unsigned __int8 *v13; // rdi

  v2 = *a1;
  if ( *a1 == 45 )
  {
    ++a1;
    v4 = 1;
LABEL_7:
    result = 0;
    v2 = *a1;
    if ( (byte_1BEF00[*a1] & 4) != 0 )
      goto LABEL_10;
    return result;
  }
  if ( v2 == 43 )
  {
    ++a1;
    v4 = 0;
    goto LABEL_7;
  }
  if ( v2 != 48 )
  {
    result = 0;
    v4 = 0;
    if ( (byte_1BEF00[v2] & 4) == 0 )
      return result;
LABEL_11:
    v5 = a1 + 1;
    v6 = 0;
    v7 = a1 + 11;
    while ( 1 )
    {
      v8 = (char)v2 - 48;
      if ( (unsigned int)v8 > 9 )
        break;
      v6 = v8 + 10 * v6;
      if ( v7 == v5 )
        return 0;
      v2 = *v5++;
    }
    result = 0;
    if ( v6 - v4 <= 0x7FFFFFFF )
    {
      if ( v4 )
        v6 = -v6;
      goto LABEL_18;
    }
    return result;
  }
  if ( (a1[1] & 0xDF) != 0x58 || (v9 = a1[2], v10 = a1[2], (byte_1BEF00[v9] & 8) == 0) )
  {
    v4 = 0;
    do
    {
      v2 = *++a1;
LABEL_10:
      ;
    }
    while ( v2 == 48 );
    goto LABEL_11;
  }
  v11 = a1 + 2;
  if ( (_BYTE)v9 == 48 )
  {
    do
      v10 = *++v11;
    while ( *v11 == 48 );
    if ( (byte_1BEF00[(unsigned __int8)v10] & 8) == 0 )
    {
      LODWORD(v6) = 0;
LABEL_18:
      *a2 = v6;
      return 1;
    }
  }
  v12 = v11 + 1;
  LODWORD(v6) = 0;
  v13 = v11 + 9;
  while ( 1 )
  {
    LODWORD(v6) = ((((v10 >> 6) & 1) + v10 + 8 * ((v10 >> 6) & 1)) & 0xF) + 16 * v6;
    v10 = *v12;
    if ( (byte_1BEF00[(unsigned __int8)*v12] & 8) == 0 )
      break;
    if ( v13 == (unsigned __int8 *)++v12 )
      return 0;
  }
  if ( (int)v6 >= 0 )
    goto LABEL_18;
  return 0;
}
