__int64 __fastcall sub_3E090(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 *a7,
        _QWORD *a8,
        __int64 *a9,
        _QWORD *a10,
        __int64 *a11)
{
  __int64 result; // rax
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  _QWORD *v28; // rax
  __int64 v29; // r10
  __int64 v30; // r11

  result = 4;
  if ( (a2 & 0xFFF) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 72) + ((a2 >> 36) & 0xFF8);
    v17 = sub_3E000(a1, v16, 8);
    if ( v17 )
    {
      if ( a11 )
        *a11 = v16;
      if ( a10 )
        *a10 = v17;
      if ( (*(_BYTE *)v17 & 1) == 0 )
        return 0;
      v20 = ((v19 >> 27) & 0xFF8) + (*v17 & ~(-1LL << *(_QWORD *)(v18 + 4176)) & 0xFFFFFFFFFFFFF000LL);
      v21 = sub_3E000(v18, v20, 8);
      if ( a9 )
        *a9 = v20;
      if ( v21 )
      {
        if ( (*(_BYTE *)v21 & 1) == 0 )
          return 0;
        if ( a8 )
          *a8 = v21;
        v24 = ((v23 >> 18) & 0xFF8) + (*v21 & ~(-1LL << *(_QWORD *)(v22 + 4176)) & 0xFFFFFFFFFFFFF000LL);
        v25 = sub_3E000(v22, v24, 8);
        if ( a7 )
          *a7 = v24;
        if ( !v25 )
          return 6;
        if ( (*(_BYTE *)v25 & 1) == 0 )
          return 0;
        if ( a6 )
          *a6 = v25;
        v28 = sub_3E000(
                v26,
                (*v25 & ~(-1LL << *(_QWORD *)(v26 + 4176)) & 0xFFFFFFFFFFFFF000LL) + ((v27 >> 9) & 0xFF8),
                8);
        if ( a5 )
          *a5 = v30;
        if ( v28 )
        {
          if ( (*(_BYTE *)v28 & 1) != 0 )
          {
            if ( a4 )
              *a4 = v28;
            if ( a3 )
              *a3 = *v28 & ~(-1LL << *(_QWORD *)(v29 + 4176)) & 0xFFFFFFFFFFFFF000LL;
          }
          return 0;
        }
      }
    }
    return 6;
  }
  return result;
}

