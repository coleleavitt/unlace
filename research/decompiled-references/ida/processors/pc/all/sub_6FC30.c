unsigned __int64 __fastcall sub_6FC30(_QWORD *a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  unsigned int v3; // eax
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // [rsp+28h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
    a1[1] = 0;
    a1[3] = 0;
  }
  v1 = a1[6];
  v2 = 0;
  a1[4] = 0;
  v3 = unpack_dd();
  v4 = v3;
  if ( v3 )
  {
    do
    {
      if ( (unsigned __int8)is_cvt64() )
        unpack_dd();
      else
        unpack_dq();
      if ( (unsigned __int8)is_cvt64() )
      {
        v1 = (unsigned int)unpack_dd() + (unsigned int)v1;
        if ( (unsigned int)v1 == 0xFFFFFFFFLL )
          v1 = -1;
      }
      else
      {
        v1 += unpack_dq();
      }
      ++v2;
      rangeset_t_add();
    }
    while ( v2 < v4 );
  }
  return v6 - __readfsqword(0x28u);
}
