__int64 __fastcall sub_E7020(__int64 a1, __int64 a2, char a3, double a4)
{
  bool v4; // zf
  __int64 scalar_bt; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8) == 0;
  v9 = __readfsqword(0x28u);
  if ( !v4 && (*(_BYTE *)(*(_QWORD *)a2 + 72LL) & 2) != 0 )
    return copy_tinfo_t();
  sub_E60E0(&v8, a1, a2, a3, a4);
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !*(_BYTE *)(a2 + 32) )
  {
    scalar_bt = 25;
    if ( !a3 )
      scalar_bt = (unsigned __int8)get_scalar_bt();
    v8 = scalar_bt;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  return v9 - __readfsqword(0x28u);
}

