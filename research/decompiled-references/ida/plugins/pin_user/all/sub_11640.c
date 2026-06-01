__int64 __fastcall sub_11640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // r15
  __int64 result; // rax

  v4 = 0;
  while ( 1 )
  {
    v7 = a4 - v4;
    if ( (unsigned __int64)(a4 - v4) > 0x400 )
      v7 = 1024;
    result = sub_195E0(a1 + 952, v4 + a2, a3 + v4, v7);
    if ( result < 0 )
      break;
    v4 += result;
    if ( result != v7 || a4 == v4 )
      return v4;
  }
  return result;
}

