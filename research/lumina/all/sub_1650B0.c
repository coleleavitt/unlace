__int64 __fastcall sub_1650B0(char *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v6; // r12
  unsigned int v7; // ebp
  unsigned int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  __m128i si128; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // al
  int v18; // edx
  char *v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // eax
  char *v22; // rdi
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rdi
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int i; // r13d
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 (__fastcall *v51)(__int64, const char **, _UNKNOWN **); // r15
  unsigned int v52; // eax
  unsigned int v53; // [rsp+Ch] [rbp-5Ch] BYREF
  char *v54; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v55; // [rsp+18h] [rbp-50h] BYREF
  const char *v56[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = (_QWORD *)a2;
  *(_QWORD *)a2 = 0;
  v56[1] = (const char *)__readfsqword(0x28u);
  v53 = a3;
  v54 = nullptr;
  v55 = nullptr;
  v7 = sub_FEBD0((__int64)a1, a2);
  if ( v7 )
    return v7;
  v8 = v53;
  if ( (_BYTE)word_241484 )
  {
    if ( (v53 & 0x8000) == 0 )
    {
      v7 = 1;
      if ( (v53 & 0x10000) == 0 )
        v7 = HIBYTE(word_241484);
    }
  }
  if ( (v53 & 0x40000) != 0 )
  {
    v8 = v53 & 0xFFFDFFFF;
  }
  else if ( dword_2415CC )
  {
    v8 = v53 | 0x20000;
  }
  v53 = v8 & 0xFFF600E7;
  v9 = sub_D2260(0x300u, a2);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( !v7 )
    {
      v11 = v9[3];
      if ( !v11 )
      {
LABEL_10:
        v12 = v53;
        *(_DWORD *)(v10 + 40) = 2;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1BAEE0);
        *(_BYTE *)(v10 + 113) = 109;
        *(_DWORD *)(v10 + 180) = 0;
        *(_BYTE *)(v10 + 101) = 1;
        *(_BYTE *)(v10 + 106) = -1;
        *(_DWORD *)(v10 + 408) = 1;
        *(_QWORD *)(v10 + 608) = 0;
        *(_WORD *)(v10 + 412) = 0;
        *(_QWORD *)(v10 + 616) = 0;
        *(_DWORD *)(v10 + 88) = (v12 & 0x2000000) == 0 ? 255 : -1;
        *(_QWORD *)(v10 + 624) = 0;
        *(_QWORD *)(v10 + 168) = 0x7FFE0000C350LL;
        *(__m128i *)(v10 + 136) = si128;
        *(_QWORD *)(v10 + 32) = v10 + 656;
        *(_QWORD *)(v10 + 536) = 0;
        v14 = _mm_load_si128((const __m128i *)&xmmword_1BAEF0);
        *(_DWORD *)(v10 + 176) = 1000;
        *(_QWORD *)(v10 + 544) = 0;
        *(__m128i *)(v10 + 152) = v14;
        v15 = qword_2415A8;
        *(_QWORD *)(v10 + 552) = 0;
        *(_QWORD *)(v10 + 64) = v15;
        *(_DWORD *)(v10 + 116) = 0;
        *(_QWORD *)(v10 + 200) = &off_241440;
        *(_QWORD *)(v10 + 48) |= 0xE00480E0uLL;
        sub_F6B70(v10, "BINARY", 1, 0, (__int64)sub_C7E20, 0);
        sub_F6B70(v10, "BINARY", 3, 0, (__int64)sub_C7E20, 0);
        sub_F6B70(v10, "BINARY", 2, 0, (__int64)sub_C7E20, 0);
        sub_F6B70(v10, "NOCASE", 1, 0, (__int64)sub_CAE30, 0);
        a2 = (__int64)"RTRIM";
        sub_F6B70(v10, "RTRIM", 1, 0, (__int64)sub_C7E50, 0);
        if ( !*(_BYTE *)(v10 + 103) )
        {
          v17 = v53;
          v18 = 70;
          *(_DWORD *)(v10 + 76) = v53;
          if ( !_bittest(&v18, v17 & 7) )
          {
            sub_E8BB0(
              0x15u,
              "%s at line %d of [%.10s]",
              "misuse",
              173346,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            a2 = 21;
LABEL_13:
            v19 = "%s";
            if ( !v55 )
              v19 = nullptr;
            sub_F63C0(v10, a2, v19);
            sub_C91C0((__int64)v55, a2);
            goto LABEL_16;
          }
          v25 = sub_10A750(a4, a1, &v53, (__int64 *)v10, &v54, &v55);
          a2 = v25;
          if ( v25 )
          {
            if ( v25 == 7 && !*(_BYTE *)(v10 + 103) && !*(_BYTE *)(v10 + 104) )
            {
              sub_DBE60(v10);
              a2 = 7;
            }
            goto LABEL_13;
          }
          v27 = sub_11B4B0(*(_QWORD *)v10, (__int64)v54, v10, (_QWORD *)(*(_QWORD *)(v10 + 32) + 8LL), 0, v53 | 0x100);
          if ( v27 )
          {
            if ( v27 == 3082 )
            {
              *(_DWORD *)(v10 + 80) = 7;
              v27 = 7;
            }
            else
            {
              *(_DWORD *)(v10 + 80) = v27;
            }
            a2 = v27;
            sub_CA220((__int64 *)v10, v27, v28, v29, v30, v31);
          }
          else
          {
            v32 = *(_QWORD *)(v10 + 32);
            v33 = *(_QWORD *)(v32 + 8);
            if ( *(_BYTE *)(v33 + 17) )
            {
              sub_CC740(*(_QWORD *)(v32 + 8));
              v32 = *(_QWORD *)(v10 + 32);
              v33 = *(_QWORD *)(v32 + 8);
            }
            *(_QWORD *)(v32 + 24) = sub_E3C00(v10, v33);
            if ( !*(_BYTE *)(v10 + 103) )
            {
              v33 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 24LL) + 113LL);
              *(_BYTE *)(v10 + 100) = v33;
              *(_QWORD *)(v10 + 16) = sub_E31C0(v10, v33, "BINARY");
            }
            v35 = *(_QWORD *)(v10 + 32);
            v36 = *(_QWORD *)(v35 + 8);
            if ( *(_BYTE *)(v36 + 17) )
            {
              v37 = (*(_DWORD *)(v36 + 20))-- == 1;
              if ( v37 )
                sub_CC7D0(v36, v33, v34);
              v35 = *(_QWORD *)(v10 + 32);
            }
            *(_QWORD *)(v35 + 56) = sub_E3C00(v10, 0);
            **(_QWORD **)(v10 + 32) = "main";
            a2 = (__int64)"temp";
            *(_BYTE *)(*(_QWORD *)(v10 + 32) + 16LL) = 3;
            *(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL) = "temp";
            *(_BYTE *)(*(_QWORD *)(v10 + 32) + 48LL) = 1;
            v37 = *(_BYTE *)(v10 + 103) == 0;
            *(_BYTE *)(v10 + 113) = 118;
            if ( v37 )
            {
              v37 = *(_QWORD *)(v10 + 392) == 0;
              *(_DWORD *)(v10 + 80) = 0;
              if ( v37 )
                *(_DWORD *)(v10 + 84) = -1;
              else
                sub_CA220((__int64 *)v10, 0, v16, v38, v39, v40);
              a2 = (__int64)"MATCH";
              if ( (unsigned int)sub_10A630(v10, "MATCH", 2) == 7 && !*(_BYTE *)(v10 + 103) && !*(_BYTE *)(v10 + 104) )
                sub_DBE60(v10);
              v41 = sub_EA660(v10);
              if ( v41 || (v41 = sub_C5370(v10)) != 0 || (v41 = sub_E3750(v10)) != 0 )
              {
                *(_DWORD *)(v10 + 80) = v41;
                sub_CA220((__int64 *)v10, v41, v42, v43, v44, v45);
              }
              else
              {
                if ( dword_242180 )
                {
                  for ( i = 0; ; ++i )
                  {
                    if ( (_BYTE)word_241484 && (v47 = xmmword_2414F0(2), (v48 = v47) != 0) )
                    {
                      xmmword_241500(v47);
                      if ( dword_242180 <= i )
                      {
                        xmmword_241510(v48, a2, v49);
LABEL_64:
                        v56[0] = nullptr;
                        sub_C91C0(0, a2);
                        goto LABEL_65;
                      }
                      v51 = *(__int64 (__fastcall **)(__int64, const char **, _UNKNOWN **))(qword_242188 + 8LL * i);
                      xmmword_241510(v48, a2, qword_242188);
                    }
                    else
                    {
                      if ( dword_242180 <= i )
                        goto LABEL_64;
                      v51 = *(__int64 (__fastcall **)(__int64, const char **, _UNKNOWN **))(qword_242188 + 8LL * i);
                    }
                    v56[0] = nullptr;
                    if ( v51 )
                    {
                      a2 = (__int64)v56;
                      v52 = v51(v10, v56, &off_23B460);
                      if ( v52 )
                        break;
                    }
                    sub_C91C0((__int64)v56[0], a2);
                  }
                  a2 = v52;
                  sub_F63C0(v10, v52, "automatic extension loading failed: %s", v56[0]);
                  sub_C91C0((__int64)v56[0], a2);
                }
LABEL_65:
                if ( (unsigned int)sub_EA660(v10) )
                  goto LABEL_16;
              }
              sub_D37F0(v10, nullptr, dword_241494, dword_241498);
              a2 = 1000;
              sub_D1D00((_QWORD *)v10, 1000, v50);
            }
          }
        }
LABEL_16:
        v20 = *(_QWORD *)(v10 + 24);
        if ( v20 )
          xmmword_241510(v20, a2, v16);
        goto LABEL_18;
      }
LABEL_9:
      xmmword_241500(v11);
      goto LABEL_10;
    }
    if ( (_BYTE)word_241484 )
    {
      v11 = xmmword_2414F0(1);
      *(_QWORD *)(v10 + 24) = v11;
      if ( v11 )
        goto LABEL_9;
    }
    else
    {
      v9[3] = 0;
    }
    v26 = v10;
    v10 = 0;
    sub_C91C0(v26, a2);
  }
LABEL_18:
  v21 = sub_EA660(v10);
  v7 = v21;
  if ( (_BYTE)v21 == 7 )
  {
    v24 = v10;
    a2 = 0;
    v10 = 0;
    sub_11D020(v24, 0);
  }
  else if ( v21 )
  {
    *(_BYTE *)(v10 + 113) = -70;
  }
  v22 = v54;
  *v6 = v10;
  if ( v22 )
    sub_D1DA0((__int64)v22, a2);
  return v7;
}
