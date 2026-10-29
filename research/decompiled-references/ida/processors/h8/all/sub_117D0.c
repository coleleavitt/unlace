__int64 __fastcall sub_117D0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax

  v2 = is_stkvar();
  result = 196;
  if ( !v2 && (*(_BYTE *)(a2 + 33) & 0x40) == 0 && *(_WORD *)(a1 + 224) <= 0xFFFu )
    return 164;
  return result;
}

