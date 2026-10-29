__int64 __fastcall sub_6FFD0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax

  v1 = 0;
  if ( netnode_qgetblob() > 0 )
  {
    *(_DWORD *)(a1 + 64) = (unsigned __int16)unpack_dw();
    sub_6FC30((_QWORD *)a1);
    if ( (unsigned __int8)is_cvt64() )
    {
      v3 = (unsigned int)unpack_dd();
      if ( (unsigned int)v3 == 0xFFFFFFFFLL )
        v3 = -1;
    }
    else
    {
      v3 = unpack_dq();
    }
    *(_QWORD *)(a1 + 56) = v3;
    return 1;
  }
  return v1;
}
