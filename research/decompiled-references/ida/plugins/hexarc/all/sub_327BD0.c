__int64 __fastcall sub_327BD0(char *a1, __int64 a2)
{
  char v2; // al
  char *v3; // rax
  __int64 v4; // rbx
  int utf8_char; // eax
  char v7; // [rsp+Fh] [rbp-39h] BYREF
  char *v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a1;
  v8[1] = (char *)__readfsqword(0x28u);
  if ( v2 == 10 )
  {
    if ( **((_BYTE **)a1 + 1) != 6 )
      return -1;
    if ( (unsigned __int8)is_loaded() )
      return get_max_strlit_length();
    v2 = *a1;
  }
  if ( v2 != 3 )
    return -1;
  v3 = *((char **)a1 + 1);
  v7 = 0;
  v4 = 0;
  v8[0] = v3;
  while ( 1 )
  {
    utf8_char = get_utf8_char();
    if ( (unsigned int)(utf8_char - 1) > 0xFFFFFFFD || utf8_char == 92 && !(unsigned __int8)sub_321630(v8, &v7) )
      break;
    ++v4;
  }
  return a2 * (v4 + 1);
}

