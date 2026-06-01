__int64 __fastcall sub_7B10(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax

  result = remember_problem(12, a2, 0);
  if ( *a3 )
  {
    result = get_flags_ex(a2, 4);
    if ( (result & 0x800) == 0 || *(_QWORD *)(a1 + 33053) == a2 )
      return append_cmt(a2, a3, 0);
  }
  return result;
}

