__int64 __fastcall sub_DBED0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_D1E10(a2, a2);
  if ( !result && !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
  {
    sub_DBE60(a1);
    return 0;
  }
  return result;
}
