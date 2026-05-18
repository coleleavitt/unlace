unsigned __int64 __fastcall sub_CD1F0(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 20);
  if ( (result & 8) == 0 && (result & 0x24) == 0 && (result & 0x12) != 0 )
    return sub_CD190(*(unsigned __int8 **)(a1 + 8), *(_DWORD *)(a1 + 16), *(_BYTE *)(a1 + 22));
  return result;
}
