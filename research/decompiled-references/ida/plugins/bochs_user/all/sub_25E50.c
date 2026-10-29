__int64 __fastcall sub_25E50(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = sub_28640(a1, a2, a3);
  if ( !(_DWORD)result )
    *(_DWORD *)(a1 + 1392) &= ~2u;
  return result;
}

