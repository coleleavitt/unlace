__int64 __fastcall sub_332700(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( !(unsigned __int8)is_cvt64() )
    return a2 + unpack_dq() - 1;
  v3 = (unsigned int)unpack_dd() + (unsigned int)a2;
  result = v3 - 1;
  if ( v3 == 0xFFFFFFFFLL )
    return -2;
  return result;
}

