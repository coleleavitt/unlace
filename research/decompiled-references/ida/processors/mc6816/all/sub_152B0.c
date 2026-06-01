unsigned __int64 __fastcall sub_152B0(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 result; // rax

  result = get_sreg();
  if ( result != -1 )
    return a2 | (unsigned __int64)(((_DWORD)result << 16) & 0xF0000);
  return result;
}

