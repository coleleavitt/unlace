__int64 __fastcall sub_2F860(__int64 a1, __int64 a2, __int64 a3)
{
  if ( netnode_supval() <= 0 || (unsigned int)unpack_dd() != 1 )
    return 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 8) = unpack_dw();
    *(_QWORD *)a2 = unpack_dq() + a3;
  }
  return 1;
}
