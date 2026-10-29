const char *__fastcall sub_5B30(__int64 a1)
{
  int v1; // edx
  const char *result; // rax
  unsigned int v3; // [rsp+0h] [rbp-38h] BYREF
  char s1[4]; // [rsp+4h] [rbp-34h] BYREF
  char v5[4]; // [rsp+8h] [rbp-30h] BYREF
  int v6; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( qlread(a1, &v3, 40) != 40 )
    return nullptr;
  sub_2520(&v3);
  if ( strncmp((const char *)&v3, "Joy!", 4u) || strncmp(s1, "peff", 4u) || v6 != 1 )
    return nullptr;
  v1 = strncmp(v5, "pwpc", 4u);
  result = "ppc";
  if ( !v1 )
    return result;
  if ( !strncmp(v5, "m68k", 4u) )
    return "68000";
  else
    return nullptr;
}

