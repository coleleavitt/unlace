__int64 __fastcall sub_14910(__int64 a1, char a2)
{
  unsigned __int8 v3; // al
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64); // rcx

  if ( a2 < 0 )
  {
    v3 = a2 & 0x7F;
    if ( (a2 & 0x70) == 0 )
    {
      v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL);
      if ( v3 > 9u )
        return v4(a1, *(&off_29260 + v3 - 10), 32);
      else
        return v4(a1, *(&off_292A0 + v3), (unsigned __int8)(v3 - 6) < 4u ? 18 : 32);
    }
  }
  else if ( (unsigned __int8)a2 <= 0xFu )
  {
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
             a1,
             *(&off_292A0 + (unsigned __int8)a2),
             32);
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_149B0(10157);
}

