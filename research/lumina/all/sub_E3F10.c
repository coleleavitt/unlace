unsigned __int64 __fastcall sub_E3F10(__int64 a1, __int16 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  if ( (a2 & 0x800) == 0 )
    return sub_DBD10(a1, "row value misused");
  result = *(unsigned int *)(a1 + 48);
  if ( !(_DWORD)result )
    return sub_DBD10(a1, "sub-select returns %d columns - expected %d", **(_DWORD **)(*(_QWORD *)a3 + 32LL), 1);
  return result;
}
