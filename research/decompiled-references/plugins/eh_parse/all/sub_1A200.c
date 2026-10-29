__int64 __fastcall sub_1A200(__int64 a1, int a2, char a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v3 = a1;
  v5 = getseg(a1);
  if ( !v5 )
    return -1;
  v6 = *(_QWORD *)(v5 + 8) - a1;
  if ( a3 )
  {
    result = -1;
    if ( v6 <= 0x10 )
      return result;
    v6 -= 16LL;
    v3 = a1 + 16;
  }
  result = -1;
  if ( a2 < (int)(v6 / 0xC) )
    return v3 + 12LL * a2;
  return result;
}
