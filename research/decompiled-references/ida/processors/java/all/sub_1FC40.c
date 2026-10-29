__int64 __fastcall sub_1FC40(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r12
  int v3; // esi
  unsigned int v4; // ebp
  unsigned __int16 *v5; // rax
  unsigned int v6; // ebp

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = 0x200000002003LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(unsigned __int16 **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v5 + 1;
        v6 = *v5;
        *(_DWORD *)(a1 + 16) = v1 - 1;
        if ( v6 - 56320 <= 0x3FF )
          goto LABEL_10;
        if ( v6 - 55296 <= 0x3FF )
          break;
        if ( (unsigned __int8)is_cp_graphical(v6) )
        {
          if ( (unsigned __int16)(v6 - 46) <= 0x2Du && _bittest64(&v2, v6 - 46) )
            return 0;
LABEL_7:
          if ( !(unsigned __int8)sub_1F840(a1) )
            return 0;
          goto LABEL_8;
        }
LABEL_10:
        if ( !(unsigned __int8)sub_1FBA0(a1, v6) )
          return 0;
LABEL_8:
        v1 = *(_DWORD *)(a1 + 16);
        if ( !v1 )
          return 1;
      }
      if ( v1 == 1 )
        goto LABEL_10;
      v3 = v5[1];
      if ( (unsigned int)(v3 - 56320) > 0x3FF )
        goto LABEL_10;
      *(_QWORD *)(a1 + 8) = v5 + 2;
      *(_DWORD *)(a1 + 16) = v1 - 2;
      v4 = v3 & 0x3FF | (((v6 << 10) & 0xFFC00) + 0x10000);
      if ( (unsigned __int8)is_cp_graphical(v4) )
        goto LABEL_7;
      if ( !(unsigned __int8)sub_1FBA0(a1, (((v4 >> 10) - 64) & 0x3FF) - 10240)
        || !(unsigned __int8)sub_1FBA0(a1, (v4 & 0x3FF) - 9216) )
      {
        return 0;
      }
      v1 = *(_DWORD *)(a1 + 16);
      if ( !v1 )
        return 1;
    }
  }
  return 1;
}

