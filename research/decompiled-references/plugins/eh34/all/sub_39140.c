__int64 __fastcall sub_39140(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 1985);
  if ( (_BYTE)result == 3 )
    return sub_61FD0(a1 + 48);
  if ( (_BYTE)result == 4 )
    return sub_61FD0(a1 + 1360);
  return result;
}
