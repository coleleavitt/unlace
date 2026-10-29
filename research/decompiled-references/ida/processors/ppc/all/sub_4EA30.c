__int64 __fastcall sub_4EA30(__int64 a1)
{
  __int64 result; // rax

  result = getinf_flag(67, 64);
  if ( !(_BYTE)result && *(_DWORD *)(a1 + 288) == 3 )
  {
    result = getinf_flag(67, 32);
    if ( !(_BYTE)result )
      return append_abi_opts("hard_float", 0);
  }
  return result;
}

