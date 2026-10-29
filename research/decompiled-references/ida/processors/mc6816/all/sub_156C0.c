__int64 __fastcall sub_156C0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v7; // r12d
  unsigned __int64 v8; // rcx
  int v9; // edx
  __int16 v10; // ax
  char v11; // di
  __int64 v12; // r9
  int v13; // [rsp+18h] [rbp-50h] BYREF
  int v14; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v15[1] = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 >= v5 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    *(_DWORD *)(a1 + 228) = (v7 & 1) == 0;
    if ( (v7 & 0x100) != 0 )
      sub_152F0(a1, a2, (unsigned __int8 *)(a2 + 40), 1, a3);
    if ( (v7 & 0x200) != 0 )
      sub_152F0(a1, a2, (unsigned __int8 *)(a2 + 80), 1, a3);
    if ( (v7 & 0x400) != 0 )
      sub_152F0(a1, a2, (unsigned __int8 *)(a2 + 120), 1, a3);
    if ( (v7 & 4) != 0 )
      sub_152F0(a1, a2, (unsigned __int8 *)(a2 + 40), 0, a3);
    if ( (v7 & 8) != 0 )
      sub_152F0(a1, a2, (unsigned __int8 *)(a2 + 80), 0, a3);
    if ( (v7 & 0x10) != 0 )
      sub_152F0(a1, a2, (unsigned __int8 *)(a2 + 120), 0, a3);
  }
  else
  {
    *(_DWORD *)(a1 + 228) = 1;
  }
  v15[0] = -1;
  if ( sub_154F0(-1, &v13, &v14, v15, (const void *)a2) != -1 && v14 >= 0 )
  {
    if ( v13 < 0 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      do
        v12 = sub_154F0(v12, &v13, &v14, v15, (const void *)a2);
      while ( v12 != -1 && v13 < -1 );
    }
    get_item_end();
    split_sreg_range();
  }
  if ( (unsigned __int8)segtype() == 1 )
  {
    *(_DWORD *)(a1 + 228) = 0;
  }
  else if ( *(_DWORD *)(a1 + 228) )
  {
    add_cref();
  }
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_DWORD *)(a1 + 228) )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0xE2:
          if ( *(_BYTE *)(a2 + 41) == 5 )
            goto LABEL_35;
          break;
        case 0xE6:
        case 0xE7:
          if ( get_func() )
            goto LABEL_38;
          break;
        case 0xE8:
        case 0xEB:
          if ( *(_BYTE *)(a2 + 41) == 8 )
          {
            v8 = *(_QWORD *)(a2 + 48);
            v9 = 7;
            v10 = 0;
            do
            {
              v11 = v8;
              v8 >>= 1;
              v10 += v11 & 1;
              --v9;
            }
            while ( v9 );
          }
LABEL_35:
          if ( get_func() )
            goto LABEL_38;
          break;
        case 0xE9:
        case 0xEA:
          if ( get_func() )
LABEL_38:
            add_auto_stkpnt();
          break;
        default:
          return 1;
      }
    }
    else
    {
      recalc_spd();
    }
  }
  return 1;
}

