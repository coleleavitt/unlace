__int64 __fastcall sub_3970(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  char v4; // cl
  __int64 v5; // rax

  while ( 1 )
  {
    v2 = qlgetc(a1);
    v4 = v2;
    if ( (unsigned __int8)v2 <= 0x18u )
      break;
    if ( !(unsigned __int8)sub_3970(a1, a2, v3, v2) )
      return 0;
  }
  v5 = 1LL << v2;
  if ( ((1LL << v4) & 0x1555554) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      qlseek(a1, 4, 1);
      return 1;
    }
    return 0;
  }
  qlseek(a1, 2, 1);
  return 1;
}
