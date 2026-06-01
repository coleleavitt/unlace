unsigned __int64 __fastcall sub_236C80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __m128i v5; // xmm0
  double v6; // xmm0_8
  _QWORD *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rsi
  const char *v12; // r8
  _QWORD *v13; // r12
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // r15
  char i; // al
  const char *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // edx
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-118h]
  size_t nb; // [rsp+10h] [rbp-110h]
  size_t n; // [rsp+10h] [rbp-110h]
  size_t na; // [rsp+10h] [rbp-110h]
  __int64 v38; // [rsp+20h] [rbp-100h]
  __int64 v39; // [rsp+20h] [rbp-100h]
  unsigned int v40; // [rsp+28h] [rbp-F8h]
  int v41; // [rsp+30h] [rbp-F0h]
  const char *src; // [rsp+40h] [rbp-E0h]
  __int64 v43; // [rsp+50h] [rbp-D0h] BYREF
  signed __int64 v44; // [rsp+58h] [rbp-C8h] BYREF
  void *dest; // [rsp+98h] [rbp-88h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-80h]
  __int64 v47; // [rsp+B0h] [rbp-70h]
  __int64 v48; // [rsp+B8h] [rbp-68h]
  __int64 v49; // [rsp+C0h] [rbp-60h]
  __int64 v50; // [rsp+C8h] [rbp-58h]
  int v51; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v52; // [rsp+E0h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  v5 = _mm_loadl_epi64((const __m128i *)(a2 + 1496));
  *(_WORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v5, (__m128i)a3);
  v6 = 0.0;
  *(_QWORD *)a1 = off_4DF838;
  *(_QWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 80) = -1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 128) = -1;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 184) = -1;
  *(_QWORD *)(a1 + 192) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = -1;
  *(_QWORD *)(a1 + 248) = -1;
  *(_QWORD *)(a1 + 256) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 300) = 1;
  *(_BYTE *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  dest = nullptr;
  v47 = 0;
  v48 = -1;
  v49 = -1;
  v50 = 0xFFFFFFFFLL;
  v51 = 0;
  v46 = 0;
  copy_tinfo_t();
  *(_QWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 184) = v49;
  *(_QWORD *)(a1 + 192) = v50;
  *(_DWORD *)(a1 + 200) = v51;
  clear_tinfo_t();
  if ( dest )
  {
    *(_QWORD *)&v46 = 0;
    qfree((__int64)dest);
  }
  if ( !*(_DWORD *)(a1 + 296) )
    *(_DWORD *)(a1 + 300) = 1;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = v7[157];
  v9 = *(_QWORD *)(a1 + 8);
  v10 = v8 + 96LL * v7[158];
  if ( v8 != v10 )
  {
    do
    {
      v11 = *(_QWORD *)(v8 + 80);
      v12 = s1;
      if ( v11 < 0 )
        LODWORD(v11) = 0;
      if ( *(_QWORD *)(v8 + 32) )
        v12 = *(const char **)(v8 + 24);
      sub_2366B0(a1, v8, (((_DWORD)v11 != 0) << 29) | (((*(_BYTE *)(v8 + 88) & 2) != 0) << 6) | 0x28, v11, v12, v8 + 48);
      v8 += 96;
    }
    while ( v10 != v8 );
    v7 = *(_QWORD **)(a1 + 8);
    v9 = (__int64)v7;
  }
  v13 = (_QWORD *)v7[160];
  if ( v13 )
  {
    if ( v7[161] )
    {
      v14 = (_QWORD *)v13[1];
      if ( v13 != v14 )
      {
        while ( 1 )
        {
LABEL_15:
          if ( *((_DWORD *)v14 + 6) == 1 )
          {
            na = v14[4];
            if ( (unsigned __int8)sub_1EF9B0((__int64)v7, na, 1) )
            {
              v25 = v14[5];
              v6 = 0.0;
              v48 = na;
              v49 = v25;
              dest = nullptr;
              v47 = 0;
              v50 = 0xFFFFFFFFLL;
              v51 = 40;
              v46 = 0;
              if ( get_tinfo_size() <= 0 || (get_tinfo_property() & 0x3F) == 1 || (get_tinfo_property() & 0xF) == 0xC )
                clear_tinfo_t();
              sub_2360C0((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
              clear_tinfo_t();
              if ( dest )
              {
                *(_QWORD *)&v46 = 0;
                qfree((__int64)dest);
              }
            }
            v7 = *(_QWORD **)(a1 + 8);
          }
          if ( *((_DWORD *)v14 + 12) == 1 )
          {
            n = v14[7];
            if ( (unsigned __int8)sub_1EF9B0((__int64)v7, n, 1) )
            {
              v24 = v14[8];
              v6 = 0.0;
              v48 = n;
              v49 = v24;
              dest = nullptr;
              v47 = 0;
              v50 = 0xFFFFFFFFLL;
              v51 = 40;
              v46 = 0;
              if ( get_tinfo_size() <= 0 || (get_tinfo_property() & 0x3F) == 1 || (get_tinfo_property() & 0xF) == 0xC )
                clear_tinfo_t();
              sub_2360C0((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
              clear_tinfo_t();
              if ( dest )
              {
                *(_QWORD *)&v46 = 0;
                qfree((__int64)dest);
              }
            }
            v7 = *(_QWORD **)(a1 + 8);
          }
          if ( (*v14 & 2) != 0 )
            goto LABEL_20;
          v15 = (_QWORD *)v14[2];
          if ( (*(_BYTE *)v15 & 2) != 0 )
          {
            v26 = (_QWORD *)(*v14 & 0xFFFFFFFFFFFFFFFCLL);
            v27 = *v26;
            if ( (*v26 & 2) == 0 )
            {
              while ( (_QWORD *)v26[2] == v14 )
              {
                v14 = v26;
                v28 = v27 & 0xFFFFFFFFFFFFFFFCLL;
                v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v27 & 2) != 0 )
                {
                  v14 = (_QWORD *)v28;
                  if ( (_QWORD *)v28 != v13 )
                    goto LABEL_15;
                  goto LABEL_21;
                }
                v26 = (_QWORD *)v28;
              }
            }
            v14 = v26;
            if ( v26 == v13 )
            {
LABEL_21:
              v9 = (__int64)v7;
              break;
            }
          }
          else
          {
            do
            {
              v14 = v15;
              v15 = (_QWORD *)v15[1];
            }
            while ( (*(_BYTE *)v15 & 2) == 0 );
LABEL_20:
            if ( v14 == v13 )
              goto LABEL_21;
          }
        }
      }
    }
  }
  v16 = v7[54];
  v17 = v16 + 104LL * v7[55];
  if ( v17 != v16 )
  {
    v18 = v7[54];
    for ( i = sub_1C34E0(v18, &v43, &v44, *(_DWORD *)(v18 + 88), 0.0);
          ;
          i = sub_1C34E0(v18, &v43, &v44, *(_DWORD *)(v18 + 88), v6) )
    {
      if ( i )
      {
        v22 = v43;
        v23 = *(_QWORD *)(v18 + 16);
        v40 = *(_DWORD *)(v18 + 92);
        v41 = v44;
        if ( (*(_BYTE *)(v18 + 24) & 2) != 0 )
        {
          v20 = s1;
          if ( *(_QWORD *)(v18 + 40) )
            v20 = *(const char **)(v18 + 32);
          dest = nullptr;
          v38 = v18 + 80;
          v46 = 0;
          if ( v20 )
          {
            src = v20;
            nb = strlen(v20);
            dest = (void *)qvector_reserve((__int64)&dest, 0, nb + 1, 1);
            *(_QWORD *)&v46 = nb + 1;
            memmove(dest, src, nb);
            *((_BYTE *)dest + nb) = 0;
          }
        }
        else
        {
          dest = nullptr;
          v38 = v18 + 80;
          v46 = 0;
        }
        v47 = 0;
        copy_tinfo_t();
        *(_QWORD *)&v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v41 - (int)v22)).m128i_u64[0];
        v21 = *(_QWORD *)(a1 + 8);
        v48 = v22;
        v49 = v23;
        v51 = 4;
        v50 = *(_QWORD *)&v6;
        if ( *(_BYTE *)(v21 + 320) && (*(_BYTE *)(v18 + 25) & 1) != 0 )
          v51 = 12;
        if ( *(_DWORD *)v18 == 2 )
          v51 |= 0x80u;
        if ( (*(_BYTE *)(v18 + 26) & 1) != 0 )
          v51 |= 0x40u;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 936) + 56LL))(
               *(_QWORD *)(v21 + 936),
               v38)
          && !(unsigned int)lexcompare_tinfo() )
        {
          v51 |= 0x30000000u;
        }
        sub_2360C0((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
        clear_tinfo_t();
        if ( dest )
        {
          *(_QWORD *)&v46 = 0;
          qfree((__int64)dest);
        }
      }
      v18 += 104;
      if ( v17 == v18 )
        break;
    }
    v9 = *(_QWORD *)(a1 + 8);
  }
  if ( (unsigned __int8)sub_22D230(v9, (_QWORD *)(a1 + 240), (_DWORD *)(a1 + 260), a1 + 232, v6) )
  {
    *(_DWORD *)(a1 + 264) = 805310464;
    sub_2360C0((__m128i *)(a1 + 88), a1 + 208, nullptr);
  }
  v29 = *(_QWORD *)(a1 + 8);
  v30 = *(_QWORD *)(v29 + 1472);
  v39 = v30 + 40LL * *(_QWORD *)(v29 + 1480);
  if ( v39 != v30 )
  {
    v34 = *(_QWORD *)(v29 + 1472);
    do
    {
      get_func();
      get_func_frame();
      clear_tinfo_t();
      v34 += 40;
    }
    while ( v39 != v34 );
    v29 = *(_QWORD *)(a1 + 8);
  }
  v31 = *(_DWORD *)(v29 + 116);
  if ( v31 )
  {
    v33 = *(_QWORD *)(v29 + 136);
    HIDWORD(v50) = v31;
    dest = nullptr;
    v47 = 0;
    v48 = v33;
    v49 = -1;
    LODWORD(v50) = -1;
    v51 = 805306896;
    v46 = 0;
    sub_2360C0((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
    clear_tinfo_t();
    if ( dest )
    {
      *(_QWORD *)&v46 = 0;
      qfree((__int64)dest);
    }
  }
  return v52 - __readfsqword(0x28u);
}

