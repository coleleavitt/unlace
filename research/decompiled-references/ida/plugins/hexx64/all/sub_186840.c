__int64 __fastcall sub_186840(__int64 a1, __int64 a2, __int64 a3, char a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r14
  unsigned int v8; // r15d
  _QWORD **v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  char tinfo_property; // al
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+10h] [rbp-88h]
  unsigned int v21; // [rsp+1Ch] [rbp-7Ch]
  __int64 v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+28h] [rbp-70h]
  unsigned __int64 tinfo_size; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v26[9]; // [rsp+50h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(v6 + 1) & 0x10) == 0 )
    return 0;
  if ( (*(_BYTE *)(a3 + 4) & 0x90) != 0 )
    return 0;
  v8 = sub_184280(a1 + 24, a2, a3, 1, a4, a5, a6);
  if ( !(_BYTE)v8 )
    return 0;
  v25 = 0;
  v21 = *(_DWORD *)a3 - 56;
  if ( v21 > 1 )
  {
    if ( *(_BYTE *)(a1 + 24) == 4 || *(_DWORD *)a3 == 1 )
    {
LABEL_16:
      *(_DWORD *)(a1 + 136) &= ~8u;
      clear_tinfo_t();
      goto LABEL_17;
    }
    v20 = a3 + 64;
LABEL_10:
    if ( *(_BYTE *)v20 == 5
      && (v11 = *(_QWORD ***)(v6 + 800)) != nullptr
      && (unsigned int)sub_1FBD60((__int64)&v25, v26, v11, v20) != -1
      && (v26[0] & 0x8000000000000000LL) == 0LL )
    {
      *(_QWORD *)(a1 + 104) = v26[0];
      copy_tinfo_t();
    }
    else if ( !(unsigned __int8)sub_A8840(
                                  v6,
                                  (char *)v20,
                                  &v25,
                                  (unsigned __int64 *)(a1 + 104),
                                  0,
                                  *(double *)a5.m128i_i64) )
    {
LABEL_15:
      if ( v21 <= 1 )
        goto LABEL_26;
      goto LABEL_16;
    }
    tinfo_property = get_tinfo_property();
    v26[0] = 0;
    if ( (tinfo_property & 0xF) == 0xB )
      v26[0] = get_tinfo_property();
    else
      copy_tinfo_t();
    tinfo_size = get_tinfo_size();
    v16 = *(_QWORD *)(v6 + 1496);
    v17 = v16 + 376;
    v23 = v16 + 408;
    while ( 1 )
    {
      v22 = v17;
      if ( !(unsigned int)lexcompare_tinfo() )
        break;
      v17 = v22 + 8;
      if ( v23 == v22 + 8 )
      {
        if ( (get_tinfo_property() & 0xF) != 0xB )
        {
          if ( *(_QWORD *)(a1 + 104)
            && (get_tinfo_property() & 0x2F) != 0xD
            && tinfo_size >= *(_QWORD *)(a1 + 104) + *(int *)(v20 + 4) )
          {
            goto LABEL_54;
          }
LABEL_43:
          clear_tinfo_t();
          goto LABEL_15;
        }
        if ( (get_tinfo_property() & 0x1F) == 0x12
          || (get_tinfo_property() & 0x3F) == 0x22
          || *(_BYTE *)v20 == 5 && (v26[0] & 0x3F) == 0x11 )
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
    v18 = *(_QWORD *)(a3 + 72);
    if ( *(_DWORD *)(v18 + 284) == 2 )
    {
      v19 = *(_QWORD *)(v18 + 24);
      if ( *(_BYTE *)v19 == 10 )
      {
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
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
    v13 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 4 )
    {
      if ( v13 != 67 )
        goto LABEL_20;
      if ( *(_DWORD *)(a3 + 36) != *(_DWORD *)(a3 + 68) )
        return v8;
    }
    v25 = 0;
    if ( (unsigned __int8)sub_A8840(v6, (char *)(a3 + 32), &v25, v26, 0, *(double *)a5.m128i_i64)
      && (get_tinfo_property() & 0x2F) == 0xD )
    {
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
    v13 = *(_DWORD *)a3;
  }
  else
  {
    if ( !(unsigned __int8)sub_183FF0(a1, a2, a3, v12, a5) )
      return 0;
    v13 = *(_DWORD *)a3;
  }
LABEL_20:
  if ( (unsigned int)(v13 - 56) <= 1 )
  {
    v14 = 32;
    if ( *(_BYTE *)(a3 + 32) == 11 )
      v14 = (*(_DWORD *)(*(_QWORD *)(a3 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
    *(_DWORD *)(a1 + 136) |= v14;
  }
  return v8;
}

