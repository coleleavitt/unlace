__int64 __fastcall sub_12A50(int *a1)
{
  int v2; // r12d
  int v3; // eax
  int v4; // r14d
  unsigned __int8 v5; // [rsp+Fh] [rbp-49h]
  _BYTE v6[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( !sub_12920((__int64)v6) || v6[2] || v6[1] || v6[0] != 2 )
    return -1;
  v2 = v6[4];
  v3 = 0;
  v4 = 0;
  *a1 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      *a1 = v3 << 8;
      if ( qlread() != 1 )
        break;
      ++v4;
      v3 = *a1 | v5;
      *a1 = v3;
      if ( v2 == v4 )
        return v7;
    }
    return -1;
  }
  return v7;
}

