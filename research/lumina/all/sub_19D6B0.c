size_t __fastcall sub_19D6B0(char *s, __int64 a2, const char *a3, __int64 a4)
{
  size_t v6; // rax
  void *v7; // rsp
  const char *v8; // rax
  size_t result; // rax
  size_t v10; // rax
  void *v11; // rsp
  const char *v12; // rax
  _BYTE v13[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(539);
LABEL_20:
    BUG();
  }
  if ( !s )
  {
    if ( !a2 )
    {
      v10 = strlen(a3);
      v11 = alloca(v10 + 108);
      v12 = sub_19D280(a3, v13, v10 + 100);
      result = __vsnprintf_chk(0, 0, 1, -1, v12, a4);
      if ( (result & 0x80000000) == 0LL )
        return result;
    }
    return 0;
  }
  if ( a2 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1225);
    goto LABEL_20;
  }
  if ( a2 <= 1 )
  {
    if ( a2 )
    {
      *s = 0;
      return 0;
    }
    return 0;
  }
  *s = 0;
  v6 = strlen(a3);
  v7 = alloca(v6 + 108);
  v8 = sub_19D280(a3, v13, v6 + 100);
  result = __vsnprintf_chk(s, a2, 1, -1, v8, a4);
  if ( (result & 0x80000000) != 0LL )
  {
    result = (unsigned int)(a2 - 1);
    s[(int)result] = 0;
    if ( (result & 0x80000000) != 0LL )
      return strlen(s);
  }
  else if ( a2 - 1 < (unsigned __int64)(int)result )
  {
    s[(unsigned int)(a2 - 1)] = 0;
    return (unsigned int)(a2 - 1);
  }
  return result;
}
