_BOOL8 __fastcall sub_278410(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v5; // r13d
  int v6; // r12d
  bool v7; // [rsp+Fh] [rbp-49h]
  __int64 tinfo_property; // [rsp+18h] [rbp-40h] BYREF
  __int64 v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)compare_tinfo()
    || (get_tinfo_property() & 0xF) == 0xB && (unsigned __int8)sub_2785C0((_DWORD)a1, a2, a3) )
  {
    return 0;
  }
  if ( (get_tinfo_property() & 0xF) == 0xB && (unsigned __int8)sub_2785C0((_DWORD)a2, a1, a3) )
    return 1;
  v5 = sub_32E340(a2);
  v6 = sub_32E340(a1);
  if ( v5 < v6 || sub_2780A0(a1, a2) )
    return 1;
  if ( v5 > v6 || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u || (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v9[0] = get_tinfo_property();
  tinfo_property = get_tinfo_property();
  v7 = sub_2780A0(&tinfo_property, v9);
  clear_tinfo_t();
  clear_tinfo_t();
  return v7;
}

