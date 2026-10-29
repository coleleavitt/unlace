__int64 __fastcall sub_2B1A90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_2B18B0(a2);
  if ( (_BYTE)result )
    *(_OWORD *)(a1 + 1112) = -1;
  return result;
}

