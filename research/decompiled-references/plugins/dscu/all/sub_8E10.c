__int64 __fastcall sub_8E10(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  if ( ((v2 - 2) & 0xFFFFFFFD) == 0 )
    return *(_QWORD *)(a2 + 160) + (a1 & ~*(_QWORD *)(a2 + 152));
  if ( v2 == 3 )
  {
    result = -1;
    if ( (a1 & 0x4000000000000000LL) == 0 )
    {
      if ( a1 >= 0 )
        return ((unsigned __int64)a1 >> 43 << 56) | ((a1 & 0x7FFFFFFFFFFLL ^ 0x40000000000LL) - 0x40000000000LL);
      else
        return *(_QWORD *)(a2 + 160) + (unsigned int)a1;
    }
  }
  else
  {
    result = a1;
    if ( v2 == 5 )
    {
      result = *(_QWORD *)(a2 + 160) + (a1 & 0x3FFFFFFFFLL);
      if ( a1 >= 0 )
        return (a1 << 22) & 0xFF00000000000000LL | result;
    }
  }
  return result;
}
