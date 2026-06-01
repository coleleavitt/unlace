__int64 __fastcall sub_2776A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v7; // ebx
  int v9; // ebp
  __int64 tinfo_size; // rbp
  int tinfo_property; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  __int64 v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  sub_23B5A0(&v13, a1, a2, a3, 1);
  sub_23B5A0(&v14, a1, a2, a4, 1);
  tinfo_property = get_tinfo_property();
  if ( tinfo_property == (unsigned int)get_tinfo_property()
    && (sub_23B5A0(v15, a1, a2, a3, 0),
        copy_tinfo_t(),
        clear_tinfo_t(),
        sub_23B5A0(v15, a1, a2, a4, 0),
        copy_tinfo_t(),
        clear_tinfo_t(),
        v9 = get_tinfo_property(),
        v9 == (unsigned int)get_tinfo_property())
    && (!a5 || (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size())) )
  {
    v7 = sub_295900(a2);
    if ( (_BYTE)v7 )
      v7 = sub_295900(a3);
  }
  else
  {
    v7 = 1;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  return v7;
}

