__int64 __fastcall sub_23F80(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 1784) )
  {
    if ( !(unsigned __int8)sub_36AC0(a1 + 1608) )
    {
      sub_11270((__int64)"IDB doesn't contain DEX information, it's impossible to debug it");
      return 1;
    }
    *(_BYTE *)(a1 + 1784) = 1;
  }
  result = 2;
  if ( a2 == 8 )
    return 4 * ((unsigned __int8)sub_23E50(a1 + 1040, nullptr, nullptr) ^ 1u);
  return result;
}

