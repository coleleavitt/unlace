__int64 __fastcall sub_195E0(int a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = a1 & a2;
  v2 >>= 1;
  v4 = v2 + 1;
  result = (a1 & v2) - v4;
  if ( (a1 & (unsigned int)v4) == 0 )
    return v3;
  return result;
}

