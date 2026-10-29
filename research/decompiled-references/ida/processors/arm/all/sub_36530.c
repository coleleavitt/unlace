__int64 __fastcall sub_36530(__int64 a1, __int64 a2)
{
  __int64 qword; // rax
  unsigned __int8 v3; // bp
  unsigned int dword; // eax
  __int64 segm_base; // rax

  if ( (unsigned __int8)sub_55C30(a2) )
  {
    if ( (a2 & 7) != 0 )
      return 0;
    qword = get_qword();
    if ( !(unsigned __int8)sub_341F0(a1, a2, qword, 1) )
      return 0;
    v3 = 9;
    if ( !(unsigned __int8)create_data(a2, 805306368, 8, -1) )
      return 0;
  }
  else
  {
    if ( (a2 & 3) != 0 )
      return 0;
    dword = get_dword(a2);
    if ( !(unsigned __int8)sub_341F0(a1, a2, dword, 1) )
      return 0;
    v3 = 2;
    if ( !(unsigned __int8)create_data(a2, 0x20000000, 4, -1) )
      return 0;
  }
  getseg();
  segm_base = get_segm_base();
  return sub_22510(a2, v3, segm_base);
}
