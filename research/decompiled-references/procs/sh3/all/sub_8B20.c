unsigned __int64 __fastcall sub_8B20(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int64 result; // rax

  result = ~get_flags_ex(*a2, 4);
  if ( (result & 0x600) == 0 )
    return sub_8A00(a2, a3);
  return result;
}
