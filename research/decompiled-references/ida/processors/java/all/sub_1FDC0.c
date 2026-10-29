__int64 __fastcall sub_1FDC0(__int64 a1)
{
  int v1; // ecx
  __int64 v2; // r12
  unsigned __int16 *v3; // rdx
  unsigned int v4; // ebp
  int v5; // r13d
  unsigned int v6; // r13d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = 0x200000017003LL;
    while ( 1 )
    {
      v3 = *(unsigned __int16 **)(a1 + 8);
      if ( (unsigned __int16)(*v3 - 46) <= 0x2Du && _bittest64(&v2, (unsigned int)*v3 - 46) )
        return 1;
      *(_QWORD *)(a1 + 8) = v3 + 1;
      v4 = *v3;
      *(_DWORD *)(a1 + 16) = v1 - 1;
      if ( v4 - 56320 <= 0x3FF )
        goto LABEL_18;
      if ( v4 - 55296 > 0x3FF )
        break;
      if ( v1 == 1 )
        goto LABEL_18;
      v5 = v3[1];
      if ( (unsigned int)(v5 - 56320) > 0x3FF )
        goto LABEL_18;
      *(_QWORD *)(a1 + 8) = v3 + 2;
      *(_DWORD *)(a1 + 16) = v1 - 2;
      v6 = ((unsigned int)sub_10000 + ((v4 << 10) & 0xFFC00)) | v5 & 0x3FF;
      if ( (unsigned __int8)is_cp_graphical(v6) )
        goto LABEL_16;
      if ( !(unsigned __int8)sub_1FBA0(a1, (((v6 >> 10) - 64) & 0x3FF) - 10240)
        || !(unsigned __int8)sub_1FBA0(a1, (v6 & 0x3FF) - 9216) )
      {
        return 0;
      }
LABEL_13:
      v1 = *(_DWORD *)(a1 + 16);
      if ( !v1 )
        return 1;
    }
    if ( (unsigned __int8)is_cp_graphical(v4) )
    {
LABEL_16:
      if ( !(unsigned __int8)sub_1F840(a1) )
        return 0;
      goto LABEL_13;
    }
LABEL_18:
    if ( !(unsigned __int8)sub_1FBA0(a1, v4) )
      return 0;
    goto LABEL_13;
  }
  return 1;
}

