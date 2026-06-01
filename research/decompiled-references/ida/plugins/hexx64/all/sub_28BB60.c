unsigned __int64 __fastcall sub_28BB60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int tinfo_size; // r12d
  int tinfo_property; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v8; // r12
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 24);
  v10 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  if ( tinfo_size < (int)get_tinfo_size()
    || (tinfo_property = get_tinfo_property(), (unsigned int)get_tinfo_property() != tinfo_property) )
  {
    sub_36D720(&v9, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
    if ( tinfo_size < (int)get_tinfo_size()
      || (v8 = (get_tinfo_property() & 0xF) == 9, v8 != ((get_tinfo_property() & 0xF) == 9)) )
    {
      sub_244D80(*(__int64 **)(a2 + 32), v2 + 48, v5, v6);
    }
    clear_tinfo_t();
  }
  return v10 - __readfsqword(0x28u);
}

