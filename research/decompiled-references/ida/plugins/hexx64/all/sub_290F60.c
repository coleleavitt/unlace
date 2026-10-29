__int64 __fastcall sub_290F60(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // r15
  int tinfo_size; // r13d
  int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 tinfo_property; // rax
  bool v22; // bp
  int v23; // ebp
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+10h] [rbp-48h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v3 = a1[3];
  v4 = a1[2];
  v28 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 8 * v3 - 8);
  v26 = 0;
  if ( !(unsigned __int8)sub_284900(a1, (int)&v26, a2, a3) )
  {
    if ( *(_DWORD *)(v6 + 8) != 16 || *(_QWORD *)(v6 + 24) == a2 || (get_tinfo_property() & 0x3F) == 1 )
      goto LABEL_30;
    copy_tinfo_t();
  }
  tinfo_size = get_tinfo_size();
  v8 = get_tinfo_size();
  if ( *(_DWORD *)(v6 + 8) != 57
    || a2 == *(_QWORD *)(v6 + 24)
    || (v9 = *(unsigned __int8 *)(sub_284360(v6, a2, nullptr, a3) + 60), !(_BYTE)v9) )
  {
    v12 = *(_DWORD *)(a2 + 8);
    v13 = *(_QWORD *)(a1[9] + 112LL);
    if ( v12 == 51 )
    {
      v14 = a2;
      while ( *(_DWORD *)(v14 + 40) == *(_DWORD *)(v13 + 84) )
      {
        v14 = *(_QWORD *)(v14 + 24);
        v12 = *(_DWORD *)(v14 + 8);
        if ( v12 != 51 )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      if ( v12 == 48 )
        goto LABEL_22;
    }
    v15 = *(_DWORD *)(v13 + 84);
    v16 = a1[2];
    v17 = a1[3] - 1;
    if ( v17 < 0 )
    {
      if ( !(unsigned int)a1[3] )
        goto LABEL_22;
    }
    else
    {
      v18 = v16 + 8LL * (unsigned int)v17;
      while ( *(_DWORD *)(*(_QWORD *)v18 + 8LL) == 51 && v15 == *(_DWORD *)(*(_QWORD *)v18 + 40LL) )
      {
        --v17;
        v18 -= 8;
        if ( v17 == -1 )
          goto LABEL_22;
      }
    }
    v19 = *(_QWORD *)(v16 + 8LL * v17);
    if ( *(_DWORD *)(v19 + 8) == 57 )
    {
      v24 = *(_QWORD *)(v19 + 24);
      v25 = a2;
      if ( v17 != a1[3] - 1LL )
        v25 = *(_QWORD *)(v16 + 8LL * (v17 + 1));
      if ( v24 == v25 && !(unsigned __int8)sub_2801E0(a2, (__int64)&v26, 0) )
        goto LABEL_30;
    }
LABEL_22:
    if ( tinfo_size != -1 )
    {
      if ( v8 == -1 || !(unsigned __int8)sub_280B80(a1[9], a2) )
        goto LABEL_30;
      if ( (get_tinfo_property() & 0xF) == 0xA && *(_DWORD *)(a2 + 8) != 48 )
      {
        v27 = 0;
        tinfo_property = get_tinfo_property();
        v27 = tinfo_property;
        if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
        {
          clear_tinfo_t();
          goto LABEL_30;
        }
        clear_tinfo_t();
      }
      if ( tinfo_size == v8 && sub_32DA30(&v26) )
        goto LABEL_30;
    }
    v9 = sub_246B40(a2, a1[9], &v26, a3);
    goto LABEL_31;
  }
  if ( (unsigned __int8)sub_28FF70((__int64)a1, a2, a2, a3) )
  {
LABEL_30:
    v9 = 0;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 8) == 48
    && tinfo_size == get_tinfo_size()
    && (v22 = (get_tinfo_property() & 0xF) == 9, v22 == ((get_tinfo_property() & 0xF) == 9))
    && (v23 = get_tinfo_property(), v23 == (unsigned int)get_tinfo_property()) )
  {
    copy_tinfo_t();
  }
  else
  {
    sub_244E70(a2, (__int64)&v26, v10, v11);
  }
LABEL_31:
  clear_tinfo_t();
  return v9;
}

