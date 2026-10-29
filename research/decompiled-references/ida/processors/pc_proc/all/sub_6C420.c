__int64 __fastcall sub_6C420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx

  if ( netnode_supval() <= 0 || (unsigned int)unpack_dd() != 1 )
    return 0;
  if ( (unsigned __int8)is_cvt64() )
  {
    v5 = (unsigned int)a3 + (unsigned int)unpack_dd();
    if ( v5 == 0xFFFFFFFFLL )
      v5 = -1;
  }
  else
  {
    v5 = a3 + unpack_dq();
  }
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v5;
  if ( (unsigned __int8)is_cvt64() )
  {
    v6 = (unsigned int)unpack_dd() + (unsigned int)a3;
    if ( (unsigned int)v6 == 0xFFFFFFFFLL )
      v6 = -1;
  }
  else
  {
    v6 = unpack_dq() + a3;
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v6;
  *(_WORD *)(a2 + 16) = unpack_dw();
  return 1;
}

