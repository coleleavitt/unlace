__int64 __fastcall sub_13410(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 122);
  if ( !(_BYTE)result )
  {
    result = sub_141C0(a1 + 136, a1 + 128);
    *(_BYTE *)(a1 + 122) = result;
    if ( (_BYTE)result )
    {
      sub_9C70((__int64)"OK\n");
      return *(unsigned __int8 *)(a1 + 122);
    }
  }
  return result;
}

