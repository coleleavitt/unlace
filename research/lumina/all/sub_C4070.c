__int64 __fastcall sub_C4070(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
    return (*(_BYTE *)(a1 + 198) >> 2) & 3;
  return result;
}
