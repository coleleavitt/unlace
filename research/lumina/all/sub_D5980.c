__int64 __fastcall sub_D5980(__int64 a1)
{
  __int64 result; // rax

  result = byte_1BAD40[*(_WORD *)(a1 + 20) & 0x3F];
  if ( (_DWORD)result == 3 )
    return sub_D5960(a1);
  return result;
}
