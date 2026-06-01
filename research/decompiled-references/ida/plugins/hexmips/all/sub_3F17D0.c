__int64 __fastcall sub_3F17D0(
        __int64 a1,
        __int64 a2,
        int a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // r14d
  unsigned __int16 v17; // cx
  __int64 result; // rax
  __int64 v19; // rax

  v14 = a5;
  v17 = *(_WORD *)(a1 + 48);
  if ( v17 == 519 )
    goto LABEL_22;
  if ( v17 > 0x207u )
  {
    if ( v17 > 0x33Bu )
    {
      if ( v17 > 0x6B0u )
      {
        if ( v17 != 1721 )
        {
          if ( v17 != 1722 )
            goto LABEL_9;
          goto LABEL_25;
        }
      }
      else if ( v17 <= 0x6AEu )
      {
        if ( v17 > 0x46Bu )
        {
          if ( (unsigned __int16)(v17 - 1706) > 4u )
            goto LABEL_9;
          goto LABEL_25;
        }
        if ( v17 <= 0x468u && (unsigned __int16)(v17 - 1010) > 3u )
          goto LABEL_9;
      }
    }
    else
    {
      if ( v17 > 0x339u )
        goto LABEL_8;
      if ( v17 != 815 )
      {
        if ( v17 > 0x32Fu )
        {
          if ( (unsigned __int16)(v17 - 822) <= 1u )
          {
LABEL_8:
            if ( (unsigned __int8)sub_3F1490(
                                    a1,
                                    (unsigned int)a2,
                                    (unsigned int)a3,
                                    a4,
                                    (unsigned int)a5,
                                    a6,
                                    a7,
                                    a8,
                                    a9,
                                    a10,
                                    a11,
                                    a12,
                                    a13,
                                    a14) )
              return 1;
          }
LABEL_9:
          result = 0;
          if ( !v14 )
            return result;
          goto LABEL_10;
        }
        if ( v17 > 0x25Au )
        {
          if ( (unsigned __int16)(v17 - 603) > 1u )
            goto LABEL_9;
          goto LABEL_25;
        }
        if ( v17 <= 0x258u )
        {
          if ( v17 != 538 )
            goto LABEL_9;
          goto LABEL_25;
        }
      }
    }
LABEL_22:
    if ( !(_DWORD)a5 )
      goto LABEL_23;
    goto LABEL_10;
  }
  if ( v17 > 0x91u )
  {
    if ( v17 > 0xD0u )
    {
      if ( (unsigned __int16)(v17 - 209) > 1u )
        goto LABEL_9;
      goto LABEL_25;
    }
    if ( v17 > 0xCEu )
      goto LABEL_22;
    if ( (unsigned __int16)(v17 - 148) > 2u )
      goto LABEL_9;
LABEL_25:
    if ( !(_DWORD)a5 )
      goto LABEL_11;
LABEL_10:
    if ( v14 != 1 )
    {
LABEL_11:
      sub_3EAB70(
        a1,
        1u,
        (int)a4,
        (int)a2,
        *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
        a3,
        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      return 1;
    }
LABEL_23:
    sub_3EAB70(
      a1,
      2u,
      (int)a4,
      *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
      a3,
      (int)a2,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
    return 1;
  }
  if ( v17 <= 0x77u )
    goto LABEL_9;
  v19 = 1LL << ((unsigned __int8)v17 - 120);
  if ( (v19 & 0x17943) != 0 )
    goto LABEL_22;
  if ( (v19 & 0x78003C) == 0 )
  {
    if ( (v19 & 0x3040000) == 0 )
      goto LABEL_9;
    goto LABEL_25;
  }
  if ( (unsigned __int8)sub_3F0EC0(a1, a2, a3, (unsigned __int64)a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14) )
    return 1;
  result = 0;
  if ( v14 )
    goto LABEL_10;
  return result;
}

