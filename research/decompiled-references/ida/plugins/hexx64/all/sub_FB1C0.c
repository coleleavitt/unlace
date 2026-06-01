__int64 __fastcall sub_FB1C0(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, double a6)
{
  unsigned int tinfo; // ebx
  __int64 v9; // rdx
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  v11[0] = 0;
  tinfo = create_tinfo();
  if ( !(_BYTE)tinfo )
  {
    if ( !under_debugger )
      sub_383060(0xCDB0u, a6);
    BUG();
  }
  if ( a4 == -1 || (unsigned __int8)sub_FA010(a1, (__int64)v11, a4) )
  {
    v9 = v11[0];
    v11[0] = *a2;
    *a2 = v9;
    if ( a5 != -1 )
      sub_FAB90(a1, a2, a4, a5, 1);
  }
  else
  {
    tinfo = 0;
  }
  clear_tinfo_t();
  return tinfo;
}

