char __fastcall sub_1FD90(unsigned __int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // eax
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  getinf_buf(26, &v5, 16);
  if ( (a1 < (unsigned __int64)v5 || a1 >= *((_QWORD *)&v5 + 1)) && (unsigned __int8)is_mapped(a1) )
  {
    v3 = sub_28810(a1);
    switch ( v3 )
    {
      case 0:
        return (a2 >> 6) & 1;
      case 1:
        LOBYTE(v2) = (unsigned __int8)a2 >> 7;
        return v2;
      case 2:
        return (a2 >> 8) & 1;
    }
  }
  LOBYTE(v2) = 0;
  return v2;
}
