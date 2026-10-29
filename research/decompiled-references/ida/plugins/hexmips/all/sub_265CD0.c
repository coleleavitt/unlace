__int64 __fastcall sub_265CD0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int tinfo_size; // eax
  unsigned int tinfo_details; // r14d
  int v9; // eax
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF

  v10[3] = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  if ( tinfo_size <= 0 )
    return 1;
  tinfo_details = 0;
  if ( tinfo_size < a4 )
    return tinfo_details;
  tinfo_details = 1;
  if ( (get_tinfo_property() & 0xF) != 0xB )
    return tinfo_details;
  v10[0] = 0;
  v10[1] = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details )
  {
    clear_tinfo_t();
    return 1;
  }
  v9 = get_tinfo_size();
  if ( a4 >= v9 )
  {
    if ( a4 > v9 )
    {
      tinfo_details = 0;
    }
    else if ( !(unsigned __int8)sub_325700(a1, v10, a3) )
    {
      tinfo_details = sub_265CD0(a1, v10, a3, (unsigned int)a4);
    }
  }
  clear_tinfo_t();
  return tinfo_details;
}

