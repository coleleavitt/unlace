__int64 __fastcall sub_2173E(_QWORD *a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 )
  {
    sub_E2460(*a1, v4, a2);
    result = sub_E18F0(a1[2], a2, 0, a3);
    if ( a2 != 1 )
      return sub_E18F0(a1[2], 1, 0, a3);
  }
  return result;
}
