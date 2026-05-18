__int64 __fastcall sub_A4630(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  char v4; // bp
  __int64 v5; // rsi
  __int64 v6; // rax

  result = a2[1];
  v4 = *(_BYTE *)(a1 + 9);
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(result + 1) )
  {
    v6 = sub_1987B0(a2, v5, result + 1, 1);
    *a2 = v6;
    v5 = v6;
    result = a2[1];
  }
  *(_BYTE *)(v5 + result) = v4;
  ++a2[1];
  return result;
}
