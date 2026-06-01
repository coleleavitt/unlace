__int64 __fastcall sub_E3990(const char **a1)
{
  const char *v2; // rdi
  int v4; // eax
  char *v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  v2 = *a1;
  if ( (unsigned __int8)(*v2 - 48) > 9u )
    return 0xFFFFFFFFLL;
  v4 = strtoul(v2, v5, 10);
  if ( v4 <= 0 || *v5[0] != 36 )
    return 0xFFFFFFFFLL;
  *a1 = v5[0] + 1;
  return (unsigned int)(v4 - 1);
}

