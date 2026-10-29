__int64 __fastcall sub_16D910(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    if ( *(_QWORD *)(result + 160) )
    {
      sub_1980A0();
      result = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(result + 160) = 0;
    }
  }
  return result;
}
