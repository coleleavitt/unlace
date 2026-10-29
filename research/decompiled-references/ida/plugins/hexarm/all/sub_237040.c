unsigned __int64 __fastcall sub_237040(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __m128i v5; // xmm0
  _QWORD *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rsi
  const char *v11; // r8
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r15
  char i; // al
  const char *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // edx
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-118h]
  size_t nb; // [rsp+10h] [rbp-110h]
  size_t n; // [rsp+10h] [rbp-110h]
  size_t na; // [rsp+10h] [rbp-110h]
  __int64 v37; // [rsp+20h] [rbp-100h]
  __int64 v38; // [rsp+20h] [rbp-100h]
  unsigned int v39; // [rsp+28h] [rbp-F8h]
  int v40; // [rsp+30h] [rbp-F0h]
  const char *src; // [rsp+40h] [rbp-E0h]
  __int64 v42; // [rsp+50h] [rbp-D0h] BYREF
  signed __int64 v43; // [rsp+58h] [rbp-C8h] BYREF
  void *dest; // [rsp+98h] [rbp-88h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-80h]
  __int64 v46; // [rsp+B0h] [rbp-70h]
  __int64 v47; // [rsp+B8h] [rbp-68h]
  __int64 v48; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v49; // [rsp+C8h] [rbp-58h]
  int v50; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v51; // [rsp+E0h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  v5 = _mm_loadl_epi64((const __m128i *)(a2 + 1496));
  *(_WORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v5, (__m128i)a3);
  *(_QWORD *)a1 = off_4D9EF8;
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
  v46 = 0;
  v47 = -1;
  v48 = -1;
  v49 = 0xFFFFFFFFLL;
  v50 = 0;
  v45 = 0;
  copy_tinfo_t();
  *(_QWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 184) = v48;
  *(_QWORD *)(a1 + 192) = v49;
  *(_DWORD *)(a1 + 200) = v50;
  clear_tinfo_t();
  if ( dest )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  if ( !*(_DWORD *)(a1 + 296) )
    *(_DWORD *)(a1 + 300) = 1;
  v6 = *(_QWORD **)(a1 + 8);
  v7 = v6[157];
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v7 + 96LL * v6[158];
  if ( v7 != v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v7 + 80);
      v11 = s1;
      if ( v10 < 0 )
        LODWORD(v10) = 0;
      if ( *(_QWORD *)(v7 + 32) )
        v11 = *(const char **)(v7 + 24);
      sub_236A70(a1, v7, (((_DWORD)v10 != 0) << 29) | (((*(_BYTE *)(v7 + 88) & 2) != 0) << 6) | 0x28, v10, v11, v7 + 48);
      v7 += 96;
    }
    while ( v9 != v7 );
    v6 = *(_QWORD **)(a1 + 8);
    v8 = (__int64)v6;
  }
  v12 = (_QWORD *)v6[160];
  if ( v12 )
  {
    if ( v6[161] )
    {
      v13 = (_QWORD *)v12[1];
      if ( v12 != v13 )
      {
        while ( 1 )
        {
LABEL_15:
          if ( *((_DWORD *)v13 + 6) == 1 )
          {
            na = v13[4];
            if ( (unsigned __int8)sub_1EFD70((__int64)v6, na, 1) )
            {
              v24 = v13[5];
              v47 = na;
              v48 = v24;
              dest = nullptr;
              v46 = 0;
              v49 = 0xFFFFFFFFLL;
              v50 = 40;
              v45 = 0;
              if ( get_tinfo_size() <= 0 || (get_tinfo_property() & 0x3F) == 1 || (get_tinfo_property() & 0xF) == 0xC )
                clear_tinfo_t();
              sub_236480((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
              clear_tinfo_t();
              if ( dest )
              {
                *(_QWORD *)&v45 = 0;
                qfree();
              }
            }
            v6 = *(_QWORD **)(a1 + 8);
          }
          if ( *((_DWORD *)v13 + 12) == 1 )
          {
            n = v13[7];
            if ( (unsigned __int8)sub_1EFD70((__int64)v6, n, 1) )
            {
              v23 = v13[8];
              v47 = n;
              v48 = v23;
              dest = nullptr;
              v46 = 0;
              v49 = 0xFFFFFFFFLL;
              v50 = 40;
              v45 = 0;
              if ( get_tinfo_size() <= 0 || (get_tinfo_property() & 0x3F) == 1 || (get_tinfo_property() & 0xF) == 0xC )
                clear_tinfo_t();
              sub_236480((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
              clear_tinfo_t();
              if ( dest )
              {
                *(_QWORD *)&v45 = 0;
                qfree();
              }
            }
            v6 = *(_QWORD **)(a1 + 8);
          }
          if ( (*v13 & 2) != 0 )
            goto LABEL_20;
          v14 = (_QWORD *)v13[2];
          if ( (*(_BYTE *)v14 & 2) != 0 )
          {
            v25 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
            v26 = *v25;
            if ( (*v25 & 2) == 0 )
            {
              while ( (_QWORD *)v25[2] == v13 )
              {
                v13 = v25;
                v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v26 & 2) != 0 )
                {
                  v13 = (_QWORD *)v27;
                  if ( (_QWORD *)v27 != v12 )
                    goto LABEL_15;
                  goto LABEL_21;
                }
                v25 = (_QWORD *)v27;
              }
            }
            v13 = v25;
            if ( v25 == v12 )
            {
LABEL_21:
              v8 = (__int64)v6;
              break;
            }
          }
          else
          {
            do
            {
              v13 = v14;
              v14 = (_QWORD *)v14[1];
            }
            while ( (*(_BYTE *)v14 & 2) == 0 );
LABEL_20:
            if ( v13 == v12 )
              goto LABEL_21;
          }
        }
      }
    }
  }
  v15 = v6[54];
  v16 = v15 + 104LL * v6[55];
  if ( v16 != v15 )
  {
    v17 = v6[54];
    for ( i = sub_1C2F20(v17, &v42, &v43, *(_DWORD *)(v17 + 88)); ; i = sub_1C2F20(
                                                                          v17,
                                                                          &v42,
                                                                          &v43,
                                                                          *(_DWORD *)(v17 + 88)) )
    {
      if ( i )
      {
        v21 = v42;
        v22 = *(_QWORD *)(v17 + 16);
        v39 = *(_DWORD *)(v17 + 92);
        v40 = v43;
        if ( (*(_BYTE *)(v17 + 24) & 2) != 0 )
        {
          v19 = s1;
          if ( *(_QWORD *)(v17 + 40) )
            v19 = *(const char **)(v17 + 32);
          dest = nullptr;
          v37 = v17 + 80;
          v45 = 0;
          if ( v19 )
          {
            src = v19;
            nb = strlen(v19);
            dest = (void *)qvector_reserve();
            *(_QWORD *)&v45 = nb + 1;
            memmove(dest, src, nb);
            *((_BYTE *)dest + nb) = 0;
          }
        }
        else
        {
          dest = nullptr;
          v37 = v17 + 80;
          v45 = 0;
        }
        v46 = 0;
        copy_tinfo_t();
        v20 = *(_QWORD *)(a1 + 8);
        v47 = v21;
        v48 = v22;
        v50 = 4;
        v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(v40 - (int)v21)).m128i_u64[0];
        if ( *(_BYTE *)(v20 + 320) && (*(_BYTE *)(v17 + 25) & 1) != 0 )
          v50 = 12;
        if ( *(_DWORD *)v17 == 2 )
          v50 |= 0x80u;
        if ( (*(_BYTE *)(v17 + 26) & 1) != 0 )
          v50 |= 0x40u;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v20 + 936) + 56LL))(
               *(_QWORD *)(v20 + 936),
               v37)
          && !(unsigned int)lexcompare_tinfo() )
        {
          v50 |= 0x30000000u;
        }
        sub_236480((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
        clear_tinfo_t();
        if ( dest )
        {
          *(_QWORD *)&v45 = 0;
          qfree();
        }
      }
      v17 += 104;
      if ( v16 == v17 )
        break;
    }
    v8 = *(_QWORD *)(a1 + 8);
  }
  if ( (unsigned __int8)sub_22D5F0(v8, (_QWORD *)(a1 + 240), (_DWORD *)(a1 + 260), a1 + 232) )
  {
    *(_DWORD *)(a1 + 264) = 805310464;
    sub_236480((__m128i *)(a1 + 88), a1 + 208, nullptr);
  }
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_QWORD *)(v28 + 1472);
  v38 = v29 + 40LL * *(_QWORD *)(v28 + 1480);
  if ( v38 != v29 )
  {
    v33 = *(_QWORD *)(v28 + 1472);
    do
    {
      get_func();
      get_func_frame();
      clear_tinfo_t();
      v33 += 40;
    }
    while ( v38 != v33 );
    v28 = *(_QWORD *)(a1 + 8);
  }
  v30 = *(_DWORD *)(v28 + 116);
  if ( v30 )
  {
    v32 = *(_QWORD *)(v28 + 136);
    HIDWORD(v49) = v30;
    dest = nullptr;
    v46 = 0;
    v47 = v32;
    v48 = -1;
    LODWORD(v49) = -1;
    v50 = 805306896;
    v45 = 0;
    sub_236480((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
    clear_tinfo_t();
    if ( dest )
    {
      *(_QWORD *)&v45 = 0;
      qfree();
    }
  }
  return v51 - __readfsqword(0x28u);
}

