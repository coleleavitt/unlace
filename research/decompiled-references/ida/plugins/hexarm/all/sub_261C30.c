__int64 __fastcall sub_261C30(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int flags; // eax
  unsigned int tinfo; // r15d
  __int64 *v9; // rbp
  __int64 strid; // rax
  int v11; // eax
  char tinfo_property; // al
  __int64 v13; // [rsp+18h] [rbp-70h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v17; // [rsp+40h] [rbp-48h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
  {
    v9 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 816LL);
    if ( !*v9 )
      *v9 = get_named_type_tid();
    strid = get_strid();
    if ( strid != -1 && *v9 == strid )
    {
      v13 = 0;
      v17 = 256;
      v16[1] = "__CFString";
      v16[0] = get_idati();
      tinfo = create_tinfo();
      if ( !(_BYTE)tinfo )
      {
LABEL_15:
        clear_tinfo_t();
        return tinfo;
      }
      v14 = 0;
      tinfo = sub_260370((__int64)&v15, (__int64)&v13, "data", a2, (__int64)&v14);
      if ( !(_BYTE)tinfo )
        goto LABEL_13;
      if ( (get_tinfo_property() & 0xF) != 0xA )
        goto LABEL_13;
      v11 = get_flags_ex();
      if ( (v11 & 0x600) != 0x400 || (v11 & 0xF0000000) != 0x50000000 )
        goto LABEL_13;
      if ( a3 )
        *a3 = v15;
      if ( !a4 )
        goto LABEL_14;
      if ( (unsigned __int8)sub_260370((__int64)v16, (__int64)&v13, "length", a2, (__int64)&v14)
        && (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8 )
      {
        *a4 = v16[0];
      }
      else
      {
LABEL_13:
        tinfo = 0;
      }
LABEL_14:
      clear_tinfo_t();
      goto LABEL_15;
    }
  }
  return 0;
}

