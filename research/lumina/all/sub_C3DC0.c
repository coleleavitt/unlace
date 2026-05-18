_BOOL8 __fastcall sub_C3DC0(__int64 a1)
{
  _BOOL8 result; // rax

  result = 1;
  if ( a1 )
    return (*(_BYTE *)(a1 + 198) & 3) != 0;
  return result;
}
