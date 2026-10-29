__int64 __fastcall sub_32A2E0(__int64 a1, __int64 *a2, __int64 a3, char a4, double a5, __m128 a6)
{
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rdx
  signed __int64 v12; // rax
  char v13; // al
  __int64 result; // rax
  int tinfo_size; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *i; // rax
  char v19; // al
  __int64 v20; // rbp
  int v21; // eax
  _DWORD *v22; // rax
  void *v23; // rax
  const void *v24; // rsi
  __m128 v25; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v26[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 284);
  if ( v9 == 4 )
  {
    LODWORD(v10) = 8;
  }
  else
  {
    if ( v9 != 3 )
    {
      v10 = 1;
      if ( (unsigned int)(v9 - 34) <= 4 )
      {
        tinfo_size = get_tinfo_size();
        v9 = *(_DWORD *)(a1 + 284);
        v10 = tinfo_size;
      }
      switch ( v9 )
      {
        case 2:
        case 3:
        case 4:
        case 5:
        case 34:
        case 35:
          if ( *(_QWORD *)(a1 + 32) != 3 )
            goto LABEL_45;
          if ( (_DWORD)v10 != -1 )
            goto LABEL_23;
          goto LABEL_24;
        case 6:
        case 8:
        case 36:
        case 38:
          if ( *(_QWORD *)(a1 + 32) == 2 )
          {
            v11 = *(_QWORD *)(a1 + 24);
            if ( *(_BYTE *)v11 == 10 )
            {
              v12 = -1;
              if ( (_DWORD)v10 != -1 && (v9 == 6 || v9 == 36) )
              {
                v12 = sub_329690((char *)(v11 + 80), v10);
                v11 = *(_QWORD *)(a1 + 24);
              }
              v13 = sub_323AF0(a2, *(_QWORD *)(v11 + 8), v12, a4, *(_QWORD *)(a3 + 64) + 208LL);
              goto LABEL_12;
            }
LABEL_24:
            if ( (a4 & 1) == 0 )
              return 0;
            goto LABEL_25;
          }
          if ( !under_debugger )
            sub_37CFE0(50664);
          return result;
        case 19:
          return 1;
        case 20:
        case 21:
        case 22:
          v21 = sub_329E70(a1);
          if ( v21 <= 0 )
            return 0;
          return sub_323AF0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v21, a4, 0);
        case 23:
          if ( (a4 & 1) == 0 || a4 >= 0 )
            return sub_3241D0(a2, *(_QWORD *)(a1 + 24), a4);
          return 0;
        case 24:
        case 25:
        case 26:
          return sub_3241D0(a2, *(_QWORD *)(a1 + 24), a4);
        default:
          return 0;
      }
LABEL_51:
      BUG();
    }
    LODWORD(v10) = 4;
  }
  if ( *(_QWORD *)(a1 + 32) != 3 )
  {
LABEL_45:
    if ( !under_debugger )
      sub_37CFE0(50665);
    goto LABEL_51;
  }
LABEL_23:
  v16 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)v16 != 10 )
    goto LABEL_24;
  v13 = sub_323C80(a2, *(_QWORD *)(v16 + 8), (char *)(v16 + 160), v10, a4, *(_QWORD *)(a3 + 64) + 208LL);
LABEL_12:
  if ( v13 )
    return 1;
  if ( (a4 & 1) == 0 || !*(_QWORD *)(a1 + 32) )
    return 0;
LABEL_25:
  v17 = *(_QWORD *)(a1 + 24);
  for ( i = (_DWORD *)v17; *(_BYTE *)i == 4; i = v22 + 8 )
  {
    v22 = *((_DWORD **)i + 1);
    if ( (unsigned int)(*v22 - 12) > 1 )
      goto LABEL_19;
  }
  if ( *(_BYTE *)i != 10 )
    goto LABEL_19;
  v19 = **((_BYTE **)i + 1);
  if ( v19 != 5 )
  {
    if ( v19 == 6 )
    {
      v20 = *(_QWORD *)(a1 + 224);
      memset(v26, 0, sizeof(v26));
      if ( v20 )
      {
        v23 = (void *)qalloc_or_throw();
        v24 = *(const void **)(a1 + 216);
        *(_QWORD *)&v26[16] = v20;
        *(_QWORD *)v26 = v23;
        memcpy(v23, v24, 16 * v20);
        *(_QWORD *)&v26[8] = v20;
      }
      v25 = _mm_loadh_ps((const double *)(*(_QWORD *)(a3 + 64) + 128LL));
      sub_312310((__int64 *)v26, (__m128i *)&v25);
      sub_3113F0(a2 + 2, (__int64 **)v26);
      if ( *(_QWORD *)v26 )
      {
        *(_QWORD *)&v26[8] = 0;
        qfree();
      }
      return 1;
    }
LABEL_19:
    sub_3113F0(a2 + 2, (__int64 **)(a1 + 216));
    return 1;
  }
  if ( *(_BYTE *)v17 != 4 || **(_DWORD **)(v17 + 8) != 13 )
    goto LABEL_19;
  *(__m128 *)v26 = _mm_loadh_ps((const double *)(*(_QWORD *)(a3 + 64) + 128LL));
  sub_3112F0(a2 + 2, (__m128i *)v26, *(double *)v26, a6);
  return 1;
}

