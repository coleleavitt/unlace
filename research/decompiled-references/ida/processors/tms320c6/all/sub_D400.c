__int64 __fastcall sub_D400(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // al
  unsigned __int8 v4; // [rsp+1Dh] [rbp-2Bh] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = netnode_supval();
  if ( v1 > 0 )
  {
    if ( &v4 >= &v4 + v1 )
    {
      *(_DWORD *)a1 = 0;
      goto LABEL_7;
    }
    v2 = v4;
    if ( v4 <= 3u )
    {
      *(_DWORD *)a1 = v4;
      if ( v2 > 1u )
        return 1;
LABEL_7:
      if ( (unsigned __int8)is_cvt64() )
        unpack_dd();
      else
        unpack_dq();
      *(_QWORD *)(a1 + 8) = node2ea();
      return 1;
    }
  }
  return 0;
}

