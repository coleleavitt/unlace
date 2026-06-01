unsigned __int64 __fastcall sub_3E7FD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v10; // [rsp+50h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v7 = *(_QWORD *)(a2 + 24);
  if ( (_BYTE)v7 )
  {
    LOBYTE(v7) = v7 & 0x3F;
    *(_QWORD *)(a2 + 24) = a4 & 0xC0 | v7;
  }
  *(_BYTE *)a2 = 1;
  *(_DWORD *)(a2 + 8) = a5;
  *(_DWORD *)(a2 + 4) = get_tinfo_size();
  return v10 - __readfsqword(0x28u);
}

