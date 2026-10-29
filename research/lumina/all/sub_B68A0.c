__int64 __fastcall sub_B68A0(char *haystack)
{
  const char *v1; // rax
  int v2; // edx
  __int64 result; // rax
  const char *v4; // rsi
  char *v5; // rdx
  int v6; // ecx
  char v7; // dl

  v1 = (const char *)sub_1976D0(haystack);
  v2 = strcmp(v1, ".vault_cache");
  result = 1;
  if ( v2 )
  {
    v4 = ".vault";
    v5 = strstr(haystack, ".vault");
    result = 0;
    if ( v5 )
    {
      v6 = (unsigned __int8)v5[6];
      LOBYTE(result) = (_BYTE)v6 == 47;
      LOBYTE(v4) = (_BYTE)v6 == 92;
      result = (unsigned int)v4 | (unsigned int)result;
      LOBYTE(result) = ((_BYTE)v6 == 0) | result;
      if ( (_BYTE)result )
      {
        if ( haystack != v5 )
        {
          v7 = *(v5 - 1);
          LOBYTE(result) = v7 == 47;
          LOBYTE(v6) = v7 == 92;
          return (v7 == 0) | v6 | (unsigned int)result;
        }
      }
    }
  }
  return result;
}
