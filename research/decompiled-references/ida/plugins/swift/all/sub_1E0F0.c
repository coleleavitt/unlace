__int64 __fastcall sub_1E0F0(unsigned __int64 a1, __int64 a2)
{
  if ( ((a2 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    return 0xFFFFFFFFLL;
  if ( a1 > 3 )
    return 4294967294LL;
  return dword_21A10[a1];
}

