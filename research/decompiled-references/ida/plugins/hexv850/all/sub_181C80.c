__int64 __fastcall sub_181C80(__int64 a1, __int64 a2, __int64 a3, char a4, __m128i a5)
{
  __int64 v5; // r14
  unsigned int v7; // r15d
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  char tinfo_property; // al
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+10h] [rbp-88h]
  unsigned int v19; // [rsp+1Ch] [rbp-7Ch]
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  unsigned __int64 tinfo_size; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v24[9]; // [rsp+50h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(v5 + 1) & 0x10) == 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 4) & 0x90) != 0 )
    return 0;
  v7 = sub_17F6C0(a1 + 24, a2, a3, 1, a4, a5);
  if ( !(_BYTE)v7 )
    return 0;
  v23 = 0;
  v19 = *(_DWORD *)a3 - 56;
  if ( v19 > 1 )
  {
    if ( *(_BYTE *)(a1 + 24) == 4 || *(_DWORD *)a3 == 1 )
    {
LABEL_16:
      *(_DWORD *)(a1 + 136) &= ~8u;
      clear_tinfo_t();
      goto LABEL_17;
    }
    v18 = a3 + 64;
LABEL_10:
    if ( *(_BYTE *)v18 == 5
      && (v10 = *(_QWORD *)(v5 + 800)) != 0
      && (unsigned int)sub_1F69A0(&v23, v24, v10, v18) != -1
      && (v24[0] & 0x8000000000000000LL) == 0LL )
    {
      *(_QWORD *)(a1 + 104) = v24[0];
      copy_tinfo_t();
    }
    else if ( !(unsigned __int8)sub_A3C80(v5, (char *)v18, &v23, (unsigned __int64 *)(a1 + 104), 0) )
    {
LABEL_15:
      if ( v19 <= 1 )
        goto LABEL_26;
      goto LABEL_16;
    }
    tinfo_property = get_tinfo_property();
    v24[0] = 0;
    if ( (tinfo_property & 0xF) == 0xB )
      v24[0] = get_tinfo_property();
    else
      copy_tinfo_t();
    tinfo_size = get_tinfo_size();
    v14 = *(_QWORD *)(v5 + 1496);
    v15 = v14 + 376;
    v21 = v14 + 408;
    while ( 1 )
    {
      v20 = v15;
      if ( !(unsigned int)lexcompare_tinfo() )
        break;
      v15 = v20 + 8;
      if ( v21 == v20 + 8 )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB )
        {
          if ( *(_QWORD *)(a1 + 104)
            && (get_tinfo_property() & 0x2F) != 0xD
            && tinfo_size >= *(_QWORD *)(a1 + 104) + *(int *)(v18 + 4) )
          {
            goto LABEL_54;
          }
LABEL_43:
          clear_tinfo_t();
          goto LABEL_15;
        }
        if ( (get_tinfo_property() & 0x1F) == 0x12
          || (get_tinfo_property() & 0x3F) == 0x22
          || *(_BYTE *)v18 == 5 && (v24[0] & 0x3F) == 0x11 )
        {
          clear_tinfo_t();
          goto LABEL_26;
        }
        if ( tinfo_size && !(*(_QWORD *)(a1 + 104) % tinfo_size) )
          goto LABEL_43;
LABEL_54:
        clear_tinfo_t();
        clear_tinfo_t();
        return 0;
      }
    }
    if ( tinfo_size && !(*(_QWORD *)(a1 + 104) % tinfo_size) )
    {
      *(_DWORD *)(a1 + 124) = tinfo_size;
      clear_tinfo_t();
      goto LABEL_26;
    }
    goto LABEL_54;
  }
  if ( *(_BYTE *)(a3 + 64) == 8 )
  {
    v16 = *(_QWORD *)(a3 + 72);
    if ( *(_DWORD *)(v16 + 284) == 2 )
    {
      v17 = *(_QWORD *)(v16 + 24);
      if ( *(_BYTE *)v17 == 10 )
      {
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 )
          goto LABEL_10;
      }
    }
  }
LABEL_26:
  *(_DWORD *)(a1 + 136) |= 8u;
  clear_tinfo_t();
LABEL_17:
  if ( a4 )
  {
    v11 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 4 )
    {
      if ( v11 != 67 )
        goto LABEL_20;
      if ( *(_DWORD *)(a3 + 36) != *(_DWORD *)(a3 + 68) )
        return v7;
    }
    v23 = 0;
    if ( (unsigned __int8)sub_A3C80(v5, (char *)(a3 + 32), &v23, v24, 0) && (get_tinfo_property() & 0x2F) == 0xD )
    {
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
    v11 = *(_DWORD *)a3;
  }
  else
  {
    if ( !(unsigned __int8)sub_17F430(a1, a2, a3) )
      return 0;
    v11 = *(_DWORD *)a3;
  }
LABEL_20:
  if ( (unsigned int)(v11 - 56) <= 1 )
  {
    v12 = 32;
    if ( *(_BYTE *)(a3 + 32) == 11 )
      v12 = (*(_DWORD *)(*(_QWORD *)(a3 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
    *(_DWORD *)(a1 + 136) |= v12;
  }
  return v7;
}

