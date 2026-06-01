__int64 __fastcall sub_46AF0(_BYTE *a1, __int64 a2)
{
  int v2; // ebx
  int word; // eax
  unsigned __int8 v4; // cl
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int8 v7; // cl
  int v8; // ecx
  __int64 result; // rax

  if ( a1[20] == 2 )
  {
    word = (unsigned __int16)get_word(a2);
  }
  else
  {
    v2 = get_word(a2);
    word = (unsigned __int16)get_word(a2 + 2) | (v2 << 16);
  }
  v4 = a1[22];
  v5 = (unsigned int)(word << v4);
  v6 = v4 < 0x20u;
  v7 = a1[21];
  if ( !v6 )
    v5 = 0;
  if ( v7 <= 0x3Fu )
    v5 &= ~(-1LL << v7);
  v8 = 64 - v7;
  result = v5 << v8 >> v8;
  if ( (unsigned __int64)v8 >= 0x40 )
    return 0;
  return result;
}
