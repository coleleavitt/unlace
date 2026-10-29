_BOOL8 __fastcall sub_CEA0(__int64 a1, __int64 a2)
{
  int dword; // edx
  _BOOL8 result; // rax

  dword = get_dword(*(_QWORD *)(a2 + 16));
  result = 1;
  if ( !dword )
    return (unsigned __int16)get_word(*(_QWORD *)(a2 + 16) + 4LL) != 0;
  return result;
}
