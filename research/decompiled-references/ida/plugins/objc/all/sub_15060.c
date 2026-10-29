__int64 __fastcall sub_15060(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int _32bit; // eax
  unsigned int v9; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = 0;
  v10[0] = -1;
  if ( a2 != 5 )
  {
    if ( (unsigned __int8)sub_14FD0(a1, v10, &v9) )
    {
      v2 = v10[0];
      switch ( a2 )
      {
        case 0:
          v6 = v9;
          if ( v9 <= 9 )
            return -1;
          goto LABEL_19;
        case 1:
          v6 = v9;
          if ( v9 <= 0xA )
            return -1;
          goto LABEL_19;
        case 2:
          v6 = v9;
          if ( v9 <= 0xB )
            return -1;
          goto LABEL_19;
        case 3:
          v6 = v9;
          if ( v9 <= 0xC )
            return -1;
LABEL_19:
          if ( v6 > 0xE )
          {
            v4 = 0;
            goto LABEL_7;
          }
          _32bit = get_32bit();
          v3 = _32bit + v2;
          if ( _32bit - 1 <= 0xFFFFFFFD )
            return v3;
          break;
        case 4:
          if ( v9 <= 0xE )
            return -1;
          v4 = 0;
          goto LABEL_7;
        default:
          return -1;
      }
    }
    return -1;
  }
  v3 = netnode_altval();
  if ( !(unsigned __int8)sub_14FD0(a1, v10, &v9) )
  {
    if ( v3 )
      return v3;
    return -1;
  }
  if ( v9 <= 0xF )
    return -1;
  v2 = v10[0];
  v4 = v3;
LABEL_7:
  v5 = get_32bit();
  if ( v5 - 1 > 0xFFFFFFFD )
    return -1;
  v3 = v5 + v2;
  if ( v4 )
  {
    if ( v3 != v4 )
      sub_E8C0();
    netnode_supdel();
  }
  return v3;
}
