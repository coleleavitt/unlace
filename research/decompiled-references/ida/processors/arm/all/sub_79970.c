bool __fastcall sub_79970(__int64 a1, int a2, __int64 a3, char a4)
{
  int tinfo_size; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+0h] [rbp-28h]
  __int64 v17; // [rsp+0h] [rbp-28h]
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+10h] [rbp-18h]

  if ( (get_tinfo_property() & 0x2F) != 0xD )
    return 0;
  tinfo_size = get_tinfo_size();
  if ( (unsigned __int8)getinf_flag(3, 4, v7, v8, v9, v10, v16, v18, v20) || (getinf(3) & 0x1006) == 0x1002 )
    return (int)sub_77F00(a3, 0) <= 0 && tinfo_size > 16;
  return (a2 == 64
       || !(unsigned __int8)getinf_flag(67, 32, v12, v13, v14, v15, v17, v19, v21)
       || (unsigned int)sub_77F00(a3, 0) - 1 > 3)
      && tinfo_size > 4
      && a4
      && !get_tinfo_property()
      && (get_tinfo_property() & 0xF) != 9;
}
