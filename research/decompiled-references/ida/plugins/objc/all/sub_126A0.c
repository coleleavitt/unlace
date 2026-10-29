unsigned __int64 __fastcall sub_126A0(_QWORD *a1)
{
  _QWORD v2[3]; // [rsp+18h] [rbp-80h] BYREF
  __int128 v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+40h] [rbp-58h]
  int v5; // [rsp+48h] [rbp-50h]
  __int16 v6; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v7; // [rsp+58h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    v2[0] = 0;
    *(_QWORD *)&v3 = get_tinfo_property();
    sub_126A0(v2, &v3);
    clear_tinfo_t();
    v2[2] = 0;
    v2[1] = 0;
    v3 = 0;
    copy_tinfo_t();
    v4 = 0;
    copy_tinfo_t();
    v5 = 0;
    v6 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    copy_tinfo_t();
    if ( (unsigned __int8)*a1 )
      *a1 |= 0x40uLL;
  }
  return v7 - __readfsqword(0x28u);
}
