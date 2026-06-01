__int64 __fastcall sub_18E90(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 9) != 27 || netnode_supval() <= 0 || (unsigned int)unpack_dd() != 1 )
    return 0;
  *(_QWORD *)(a1 + 1880) = unpack_dq();
  *(_QWORD *)(a1 + 1888) = unpack_dq();
  return 1;
}

