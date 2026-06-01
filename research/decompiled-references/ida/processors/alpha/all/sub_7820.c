unsigned __int64 __fastcall sub_7820(_DWORD *a1, _QWORD *a2)
{
  int func_bounds; // eax
  unsigned __int64 v4; // [rsp+4B8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( *a1 == 1 && sub_6600(*a2) != -1 )
  {
    func_bounds = find_func_bounds();
    *a1 = func_bounds;
    if ( func_bounds != 1 )
    {
      if ( func_bounds != 2 )
        return v4 - __readfsqword(0x28u);
      del_func();
    }
    a2[1] = 0;
    if ( (get_flags_ex() & 0xC000) != 0x4000 && get_ea_name() > 0 )
    {
      qsnprintf();
      set_name();
    }
  }
  return v4 - __readfsqword(0x28u);
}

