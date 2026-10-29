unsigned __int64 __fastcall sub_2A0CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int *v9; // r15
  int v10; // eax
  char tinfo_property; // al
  char v12; // al
  signed int v13; // eax
  __int64 v14; // rbp
  int v15; // eax
  __m128i v16; // xmm0
  int v17; // ecx
  __int64 v18; // r15
  __int64 v19; // r13
  char v20; // al
  char v21; // al
  __int64 v22; // rbx
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rbx
  unsigned int *v28; // r13
  __int64 v29; // [rsp+10h] [rbp-88h]
  int v30; // [rsp+10h] [rbp-88h]
  int v31; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v34[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v29 = (a3 - 1) / 2;
  if ( a2 < v29 )
  {
    for ( i = a2; ; i = v6 )
    {
      v6 = 2 * (i + 1);
      v7 = (i + 1) << 6;
      v8 = a1 + v7 - 32;
      v9 = (unsigned int *)(a1 + v7);
      v10 = *(_DWORD *)(v8 + 28);
      if ( *(_DWORD *)(a1 + v7 + 28) < v10 )
        goto LABEL_19;
      if ( *(_DWORD *)(a1 + v7 + 28) > v10 )
        goto LABEL_14;
      if ( (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
        && ((tinfo_property & 0xFu) <= 8 || (tinfo_property & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D
        || (v12 = get_tinfo_property(), (v12 & 0x3E) != 0)
        && ((v12 & 0xFu) <= 8 || (v12 & 0x3F) == 0x2D)
        && (get_tinfo_property() & 0x3F) == 0x2D )
      {
        v31 = score_tinfo();
        v15 = score_tinfo();
        if ( v31 > v15 )
          goto LABEL_14;
        if ( v31 < v15 )
          goto LABEL_19;
      }
      v13 = *(_DWORD *)(v8 + 24);
      if ( (int)v9[6] < v13 || (int)v9[6] <= v13 && (int)sub_29E6F0((__int64)v9, v8, a5) < 0 )
      {
LABEL_19:
        --v6;
        v9 = (unsigned int *)(a1 + 32 * v6);
      }
LABEL_14:
      v14 = a1 + 32 * i;
      sub_29F770(v14, v9, a5);
      copy_tinfo_t();
      *(_DWORD *)(v14 + 24) = v9[6];
      *(_DWORD *)(v14 + 28) = v9[7];
      if ( v6 >= v29 )
        goto LABEL_23;
    }
  }
  v6 = a2;
LABEL_23:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v6 )
  {
    v25 = v6 + 1;
    v26 = 2 * (v6 + 1);
    v27 = a1 + 32 * v6;
    v28 = (unsigned int *)(a1 + (v25 << 6) - 32);
    sub_29F770(v27, v28, a5);
    copy_tinfo_t();
    *(_DWORD *)(v27 + 24) = v28[6];
    *(_DWORD *)(v27 + 28) = v28[7];
    v6 = v26 - 1;
  }
  v34[0] = 0;
  sub_29F770((__int64)v34, (unsigned int *)a4, a5);
  v35 = 0;
  copy_tinfo_t();
  v16 = _mm_loadl_epi64((const __m128i *)(a4 + 24));
  v36 = v16.m128i_i64[0];
  v17 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v16, 229));
  v18 = (v6 - 1) / 2;
  if ( v6 <= a2 )
  {
    v19 = a1 + 32 * v6;
  }
  else
  {
    while ( 1 )
    {
      v19 = a1 + 32 * v18;
      if ( v17 <= *(_DWORD *)(v19 + 28) )
      {
        if ( v17 < *(_DWORD *)(v19 + 28) )
          break;
        if ( (v20 = get_tinfo_property(), (v20 & 0x3E) == 0)
          || (v20 & 0xFu) > 8 && (v20 & 0x3F) != 0x2D
          || (get_tinfo_property() & 0x3F) != 0x2D )
        {
          v21 = get_tinfo_property();
          if ( (v21 & 0x3E) == 0 || (v21 & 0xFu) > 8 && (v21 & 0x3F) != 0x2D )
            goto LABEL_37;
          if ( (get_tinfo_property() & 0x3F) != 0x2D )
            goto LABEL_37;
        }
        v30 = score_tinfo();
        v23 = score_tinfo();
        if ( v30 > v23 )
          break;
        if ( v30 >= v23 )
        {
LABEL_37:
          if ( *(_DWORD *)(v19 + 24) >= (int)v36
            && (*(_DWORD *)(v19 + 24) > (int)v36
             || (int)sub_29E6F0(a1 + 32 * v18, (__int64)v34, *(double *)v16.m128i_i64) >= 0) )
          {
            break;
          }
        }
      }
      v22 = a1 + 32 * v6;
      sub_29F770(v22, (unsigned int *)(a1 + 32 * v18), *(double *)v16.m128i_i64);
      copy_tinfo_t();
      *(_DWORD *)(v22 + 24) = *(_DWORD *)(v19 + 24);
      *(_DWORD *)(v22 + 28) = *(_DWORD *)(v19 + 28);
      if ( a2 >= v18 )
        goto LABEL_45;
      v6 = v18;
      v17 = HIDWORD(v36);
      v18 = (v18 - 1) / 2;
    }
    v19 = a1 + 32 * v6;
  }
LABEL_45:
  sub_29F770(v19, v34, *(double *)v16.m128i_i64);
  copy_tinfo_t();
  *(_QWORD *)(v19 + 24) = v36;
  clear_tinfo_t();
  sub_29EC30((__int64)v34, *(double *)v16.m128i_i64);
  return v37 - __readfsqword(0x28u);
}

