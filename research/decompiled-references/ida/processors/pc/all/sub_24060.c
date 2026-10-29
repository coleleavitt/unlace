unsigned __int64 __fastcall sub_24060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v8; // [rsp+48h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  pack_dq();
  pack_dq();
  pack_dq();
  pack_dq();
  if ( a6 && *a6 && a6[1] )
  {
    pack_dq();
    pack_dq();
  }
  netnode_supset();
  return v8 - __readfsqword(0x28u);
}
