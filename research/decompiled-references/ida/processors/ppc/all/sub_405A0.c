__int64 __fastcall sub_405A0(__int64 a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  bool v4; // zf
  __int64 v5; // rax
  __int64 result; // rax

  if ( a2 == 176 || a2 == 256 )
    return 32;
  v2 = sub_4E2D0(a1);
  v3 = v2;
  if ( v2 > 9 )
  {
LABEL_8:
    if ( under_debugger )
      BUG();
    interr(10221);
    return 32;
  }
  v4 = v2 == 3;
  if ( v2 <= 3 )
  {
    result = 8;
    if ( v4 )
      return result;
    result = 24;
    if ( v3 == 1 )
      return result;
    if ( v3 != 2 )
      goto LABEL_8;
    return 48;
  }
  v5 = 1LL << v2;
  if ( ((1LL << v3) & 0x150) != 0 )
    return 48;
  if ( (v5 & 0xA0) != 0 )
    return 24;
  if ( v3 != 9 )
    goto LABEL_8;
  return 32;
}

