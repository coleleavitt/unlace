__int64 __fastcall sub_12CD50(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        double a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // r15
  int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rbx
  int v16; // ecx
  __int16 v17; // dx
  unsigned int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rcx
  int v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  signed int v28; // [rsp+20h] [rbp-48h]

  v9 = a1;
  v27 = *(_QWORD *)(a1 + 16);
  if ( a6 )
  {
    if ( *(_QWORD *)(a2 + 72) )
    {
      v12 = *(_DWORD *)(a1 + 68);
      v24 = a5;
      a8 = 0;
      *(_DWORD *)(a1 + 68) = v12 - 1;
      *a6 = v12 - 1;
      *(_DWORD *)(a1 + 64) = a3 + 1;
      sub_12CCC0((__int64 *)a1, *(_QWORD *)(a2 + 72), (unsigned int)*a6, a7);
      a5 = v24;
      *(_DWORD *)(a1 + 64) = 0;
    }
    else
    {
      *a6 = 0;
    }
  }
  if ( a5 && (*(_BYTE *)(a2 + 99) & 8) != 0 )
  {
    v28 = *(unsigned __int16 *)(a2 + 94);
    v13 = sub_CF000(a1, v28);
  }
  else
  {
    v28 = *(unsigned __int16 *)(a2 + 96);
    v13 = sub_CF000(a1, v28);
  }
  v14 = v13;
  if ( a8 )
  {
    if ( v13 == a9 )
    {
      if ( *(_QWORD *)(a8 + 72) )
        a8 = 0;
    }
    else
    {
      a8 = 0;
    }
  }
  if ( v28 )
  {
    v15 = 0;
    v25 = (unsigned int)(v28 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v16 = *(__int16 *)(*(_QWORD *)(a2 + 8) + 2 * v15);
        if ( !a8 || (v17 = *(_WORD *)(*(_QWORD *)(a8 + 8) + 2 * v15), v17 == -2) || v17 != (_WORD)v16 )
        {
          v18 = v14 + v15;
          if ( (_WORD)v16 == 0xFFFE )
          {
            *(_DWORD *)(a1 + 64) = a3 + 1;
            sub_127370((__int64 *)a1, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 24LL * (int)v15 + 8), v18, a7);
            *(_DWORD *)(a1 + 64) = 0;
          }
          else
          {
            sub_127530(*(__int64 **)(a1 + 16), *(_QWORD *)(a2 + 24), a3, v16, v18, a7);
          }
          if ( *(__int16 *)(*(_QWORD *)(a2 + 8) + 2 * v15) >= 0 )
          {
            v21 = *(_DWORD *)(v27 + 144);
            if ( v21 > 0 )
            {
              v22 = *(_QWORD *)(v27 + 136);
              if ( *(_BYTE *)(v22 + 24LL * v21 - 24) == 87 )
                break;
            }
          }
        }
        if ( v25 == ++v15 )
          goto LABEL_22;
      }
      ++v15;
      sub_D0600(*(_QWORD *)v27, (_QWORD *)(v27 + 136), v21 - 1, v22, v19, v20);
    }
    while ( v25 != v15 );
LABEL_22:
    v9 = a1;
  }
  if ( !a4 )
  {
    if ( v28 != 1 )
      goto LABEL_25;
LABEL_35:
    sub_CF060(v9, v14);
    return v14;
  }
  sub_E1710(v27, 97, v14, v28, a4);
  if ( v28 == 1 )
    goto LABEL_35;
LABEL_25:
  if ( v28 > *(_DWORD *)(v9 + 40) )
  {
    *(_DWORD *)(v9 + 40) = v28;
    *(_DWORD *)(v9 + 44) = v14;
  }
  return v14;
}
