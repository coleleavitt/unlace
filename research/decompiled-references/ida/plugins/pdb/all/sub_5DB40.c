__int64 __fastcall sub_5DB40(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 1;
  if ( (*(_BYTE *)(a1 + 92) & 0x10) != 0 )
  {
    *a2 = *(unsigned __int16 *)(a1 + 90);
    return 0;
  }
  return result;
}

