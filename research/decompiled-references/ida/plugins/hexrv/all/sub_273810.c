__int64 __fastcall sub_273810(__int64 *a1, __int64 *a2, int a3)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // r13d
  int v14; // r12d
  bool v15; // [rsp+Fh] [rbp-49h]
  __int64 tinfo_property; // [rsp+18h] [rbp-40h] BYREF
  __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)compare_tinfo()
    || (get_tinfo_property() & 0xF) == 0xB && (unsigned __int8)sub_2739C0((_DWORD)a1, (_DWORD)a2, a3, v6, v7, v8) )
  {
    return 0;
  }
  v9 = 2;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v9 = (__int64)a1;
    if ( (unsigned __int8)sub_2739C0((_DWORD)a2, (_DWORD)a1, a3, v10, v11, v12) )
      return 1;
  }
  v13 = sub_329080(a2, v9);
  v14 = sub_329080(a1, v9);
  if ( v13 < v14 || sub_2734A0(a1, a2) )
    return 1;
  if ( v13 > v14 || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u || (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  v17[0] = get_tinfo_property();
  tinfo_property = get_tinfo_property();
  v15 = sub_2734A0(&tinfo_property, v17);
  clear_tinfo_t();
  clear_tinfo_t();
  return v15;
}

