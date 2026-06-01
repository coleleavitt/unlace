__int64 __fastcall sub_43A10(_QWORD *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v6; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  bool v17; // zf
  __int64 i; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r11
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  int v26; // ecx
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // rcx

  v2 = a1[9];
  v3 = v2 + 16LL * a1[10];
  if ( v2 == v3 )
    goto LABEL_61;
  while ( *(_WORD *)(v2 + 8) != 29 )
  {
    v2 += 16;
    if ( v3 == v2 )
      goto LABEL_61;
  }
  if ( !v2 )
  {
LABEL_61:
    sub_43050();
    return sub_43D60();
  }
  v6 = *(_QWORD *)v2;
  if ( *(__int64 *)v2 >= 0 )
    return 1;
  v8 = sub_3C070((_DWORD *)(*a1 + 120LL));
  v9 = *a1;
  v10 = a1[4];
  v11 = v8;
  v12 = a1[3];
  v13 = *(_DWORD *)(*a1 + 120LL);
  v14 = 32 * v10;
  v15 = (unsigned int)(v13 - 1);
  v16 = v12 + 32 * v10;
  if ( (unsigned int)v15 <= 1 || v13 == 5 )
  {
    if ( !v14 )
    {
      v22 = 0;
      v23 = 0;
      goto LABEL_50;
    }
    v26 = 11;
    for ( i = 0; *(unsigned __int16 *)(v12 + 24) == v26; i = v27 )
    {
      v27 = *(_QWORD *)(v12 + 8);
      v15 = v27 + *(_QWORD *)(v12 + 16);
      if ( v15 != i )
        break;
      v12 += 32;
      --v26;
      if ( v12 == v16 )
        goto LABEL_49;
    }
    goto LABEL_35;
  }
  v17 = v13 == 3;
  i = 0;
  if ( v17 && *(_DWORD *)(v9 + 184) == 8 )
  {
LABEL_35:
    v15 = 16;
    goto LABEL_12;
  }
  v15 = 8;
LABEL_12:
  if ( v12 != v16 )
  {
    v19 = *(unsigned __int16 *)(v12 + 24);
    v20 = v11 | 0x90000000;
    if ( *(unsigned __int16 *)(v12 + 24) > 0x3Fu || !_bittest64(&v20, v19) )
      goto LABEL_64;
    v21 = *(_QWORD *)(v12 + 8);
    if ( i > v21 + *(_QWORD *)(v12 + 16) && (int)v15 + v21 >= i )
      i = v21 + *(_QWORD *)(v12 + 16);
    if ( (unsigned int)(v19 - 32) <= 0x1F )
    {
      while ( 1 )
      {
        v28 = *(unsigned __int16 *)(v12 + 24);
        if ( (unsigned __int16)(v28 - 32) > 0x1Fu )
          break;
        if ( !_bittest64(&v20, v28) )
          break;
        v30 = *(_QWORD *)(v12 + 8);
        if ( v30 + *(_QWORD *)(v12 + 16) != i )
          break;
        v12 += 32;
        i = v30;
        if ( v12 == v16 )
          goto LABEL_57;
      }
      if ( v12 != v16 )
      {
        if ( *(unsigned __int16 *)(v12 + 24) <= 0x3Fu )
        {
          if ( _bittest64(&v20, *(unsigned __int16 *)(v12 + 24)) )
          {
            v29 = *(_QWORD *)(v12 + 8);
            if ( v29 + *(_QWORD *)(v12 + 16) < i && v29 + (int)v15 >= i )
              i = v29 + *(_QWORD *)(v12 + 16);
          }
        }
        goto LABEL_19;
      }
LABEL_57:
      v22 = i;
      v14 = -i;
      v23 = (unsigned __int16)-(__int16)i;
    }
    else
    {
LABEL_64:
      while ( 1 )
      {
LABEL_19:
        v22 = i;
        if ( *(unsigned __int16 *)(v12 + 24) > 0x3Fu )
        {
          v14 = -i;
          v23 = (unsigned __int16)-(__int16)i;
          v10 -= (v16 - v12) >> 5;
          goto LABEL_21;
        }
        if ( !_bittest64(&v20, *(unsigned __int16 *)(v12 + 24))
          || (v15 = *(_QWORD *)(v12 + 8), v15 + *(_QWORD *)(v12 + 16) != i) )
        {
          v14 = -i;
          v23 = (unsigned __int16)-(__int16)i;
          goto LABEL_50;
        }
        v12 += 32;
        if ( v12 == v16 )
          break;
        i = v15;
      }
      v22 = v15;
      v14 = -v15;
      v23 = (unsigned __int16)-(__int16)v15;
    }
    goto LABEL_21;
  }
  v27 = i;
LABEL_49:
  v22 = v27;
  v12 = v16;
  v14 = -v27;
  v23 = (unsigned __int16)-(__int16)v27;
LABEL_50:
  v10 -= (v16 - v12) >> 5;
LABEL_21:
  a1[4] = v10;
  v24 = a1[1];
  v25 = v22 - v6;
  if ( a2 && *(unsigned __int16 *)(v24 + 40) == v14 && v25 < *(_QWORD *)(v24 + 32) )
    v25 = *(_QWORD *)(v24 + 32);
  if ( !(unsigned __int8)set_frame_size(v24, v25, v23, 0, v15) )
    return 0;
  if ( !a1[16] )
    return 1;
  *(_QWORD *)(a1[1] + 16LL) |= 0x10uLL;
  if ( (unsigned __int8)update_func(a1[1]) )
    return update_fpd(a1[1], v22 - a1[16]);
  else
    return 0;
}
