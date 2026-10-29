__int64 __fastcall sub_32DBA0(char *a1, _BYTE *a2)
{
  __int64 v2; // rbx
  int utf8_char; // eax
  char *v5; // [rsp+8h] [rbp-40h] BYREF
  char v6; // [rsp+17h] [rbp-31h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v5 = a1;
  v7 = __readfsqword(0x28u);
  v6 = 0;
  while ( 1 )
  {
    utf8_char = get_utf8_char();
    if ( (unsigned int)(utf8_char - 1) > 0xFFFFFFFD || utf8_char == 92 && !(unsigned __int8)sub_324830(&v5, &v6) )
      break;
    ++v2;
  }
  if ( a2 )
    *a2 = v6;
  return v2;
}

