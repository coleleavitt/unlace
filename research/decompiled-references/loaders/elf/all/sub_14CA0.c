__int64 __fastcall sub_14CA0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 350);
  if ( (_WORD)result == 0x8000 )
  {
    result = find_custom_fixup("MIPS_LO16");
    *(_WORD *)(a1 + 350) = result;
  }
  return result;
}
