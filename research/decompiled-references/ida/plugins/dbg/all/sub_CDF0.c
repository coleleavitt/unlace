unsigned __int64 __fastcall sub_CDF0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  bool v14; // r13
  __m128 v15; // xmm0
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v32; // rdi
  __int64 v33; // r15
  int v34; // eax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int8 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // rax
  _QWORD *v44; // [rsp+0h] [rbp-2E8h]
  __int64 v45; // [rsp+8h] [rbp-2E0h]
  __int64 v46; // [rsp+18h] [rbp-2D0h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+20h] [rbp-2C8h]
  __int64 v48; // [rsp+28h] [rbp-2C0h]
  __int128 v49; // [rsp+30h] [rbp-2B8h]
  __m128i si128; // [rsp+68h] [rbp-280h] BYREF
  __m128i v51; // [rsp+78h] [rbp-270h]
  __m128i v52; // [rsp+88h] [rbp-260h]
  __m128i v53; // [rsp+98h] [rbp-250h]
  __m128i v54; // [rsp+A8h] [rbp-240h]
  __m128i v55; // [rsp+B8h] [rbp-230h]
  __m128i v56; // [rsp+C8h] [rbp-220h]
  __m128i s; // [rsp+D8h] [rbp-210h] BYREF
  __m128i v58; // [rsp+E8h] [rbp-200h]
  __m128i v59; // [rsp+F8h] [rbp-1F0h]
  __m128i v60; // [rsp+108h] [rbp-1E0h]
  __m128i v61; // [rsp+118h] [rbp-1D0h]
  __m128i v62; // [rsp+128h] [rbp-1C0h]
  __m128i v63; // [rsp+138h] [rbp-1B0h]
  __m128i v64; // [rsp+148h] [rbp-1A0h]
  __int64 v65; // [rsp+158h] [rbp-190h]
  _BYTE v66[264]; // [rsp+160h] [rbp-188h] BYREF
  __int64 v67; // [rsp+268h] [rbp-80h]
  __int64 v68; // [rsp+270h] [rbp-78h]
  char v69[12]; // [rsp+280h] [rbp-68h] BYREF
  unsigned int v70; // [rsp+28Ch] [rbp-5Ch]
  unsigned __int64 v71; // [rsp+2A8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v47 = off_12B90;
  v48 = 0;
  v68 = a3;
  v49 = 0;
  qlseek(a2, a3, 0, a4);
  memset(v66, 0, sizeof(v66));
  qlseek(a2, v68, 0, 0);
  if ( (unsigned __int64)(qlread(a2, v66, 264) - 93) > 0xAB )
    goto LABEL_26;
  v14 = *(_DWORD *)v66 == 19536 || *(_DWORD *)v66 == 4542530 || *(_DWORD *)v66 == 17744;
  if ( !v14 )
    goto LABEL_26;
  if ( *(_WORD *)&v66[24] == 523 )
  {
    si128 = _mm_load_si128((const __m128i *)v66);
    v65 = *(_QWORD *)&v66[256];
    v51 = _mm_load_si128((const __m128i *)&v66[16]);
    v52 = _mm_load_si128((const __m128i *)&v66[32]);
    v53 = _mm_load_si128((const __m128i *)&v66[48]);
    v54 = _mm_load_si128((const __m128i *)&v66[64]);
    v55 = _mm_load_si128((const __m128i *)&v66[80]);
    s = _mm_load_si128((const __m128i *)&v66[128]);
    v58 = _mm_load_si128((const __m128i *)&v66[144]);
    v59 = _mm_load_si128((const __m128i *)&v66[160]);
    v60 = _mm_load_si128((const __m128i *)&v66[176]);
    v61 = _mm_load_si128((const __m128i *)&v66[192]);
    v62 = _mm_load_si128((const __m128i *)&v66[208]);
    v63 = _mm_load_si128((const __m128i *)&v66[224]);
    v64 = _mm_load_si128((const __m128i *)&v66[240]);
    v15 = _mm_shuffle_ps((__m128)_mm_load_si128((const __m128i *)&v66[96]), *(__m128 *)&v66[112], 136);
    v56 = (__m128i)v15;
  }
  else
  {
    v14 = 0;
    if ( *(_WORD *)&v66[24] <= 0x20Bu )
      v14 = *(_WORD *)&v66[24] == 0 || ((*(_WORD *)&v66[24] - 263) & 0xFFFB) == 0;
    si128 = _mm_load_si128((const __m128i *)v66);
    v65 = *(_QWORD *)&v66[240];
    v51 = _mm_load_si128((const __m128i *)&v66[16]);
    v52 = _mm_load_si128((const __m128i *)&v66[32]);
    v53 = _mm_load_si128((const __m128i *)&v66[48]);
    v54 = _mm_load_si128((const __m128i *)&v66[64]);
    v55 = _mm_load_si128((const __m128i *)&v66[80]);
    v56 = _mm_load_si128((const __m128i *)&v66[96]);
    s = _mm_load_si128((const __m128i *)&v66[112]);
    v58 = _mm_load_si128((const __m128i *)&v66[128]);
    v59 = _mm_load_si128((const __m128i *)&v66[144]);
    v60 = _mm_load_si128((const __m128i *)&v66[160]);
    v61 = _mm_load_si128((const __m128i *)&v66[176]);
    v62 = _mm_load_si128((const __m128i *)&v66[192]);
    v63 = _mm_load_si128((const __m128i *)&v66[208]);
    v15 = (__m128)_mm_load_si128((const __m128i *)&v66[224]);
    v64 = (__m128i)v15;
  }
  if ( (unsigned int)(s.m128i_i32[1] - 1) <= 0xE )
  {
    v38 = &s.m128i_i8[8 * s.m128i_u32[1] + 8];
    v39 = (unsigned int)(8 * (16 - s.m128i_i32[1]));
    *(_QWORD *)&v38[v39 - 8] = 0;
    memset(v38, 0, 8LL * ((unsigned int)(v39 - 1) >> 3));
  }
  v16 = 248;
  if ( v51.m128i_i16[4] == 523 )
    v16 = 264;
  v17 = v51.m128i_u16[2] + 24LL;
  v18 = 128;
  if ( v17 >= 0x80 )
    v18 = v51.m128i_u16[2] + 24LL;
  if ( v18 < v16 )
  {
    v19 = 120;
    if ( v16 != 248 )
      v19 = 136;
    if ( v17 >= v19 )
      memset(&s.m128i_u64[16 - ((v16 - v17 + 7) >> 3) + 1], 0, (v16 - v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ( v14 )
  {
    v20 = v53.m128i_i64[0];
    if ( v51.m128i_i16[4] != 523 )
      v20 = v53.m128i_u32[1];
    v67 = v20;
    netnode_check(&v46, "$ PE header", 0, 0);
    v21 = v46;
    a1[18] = v46;
    a1[19] = netnode_altval(v21, -2, 65, v22, v23, v24);
    v28 = netnode_altval(a1[18], -1, 65, v25, v26, v27);
    if ( !(unsigned __int8)sub_C2F0((__int64)a1, a2, v28, v60.m128i_u32[3], v15, a6, a7, a8, v29, v30, a11, a12)
      && si128.m128i_i32[3] )
    {
      v32 = a1[20];
      v44 = a1 + 20;
      if ( v32 )
      {
        a1[21] = 0;
        qfree(v32);
        a1[20] = 0;
        a1[22] = 0;
      }
      if ( v55.m128i_i16[6] != 7 )
      {
        v33 = 1;
        if ( si128.m128i_i16[3] )
        {
          do
          {
            if ( netnode_supval(a1[18], v33, v69, 40, 83) != 40 )
              break;
            v43 = a1[21];
            v41 = a1[20];
            v42 = a1[19] + v70;
            v46 = v42;
            v35 = a1[22];
            v36 = v43 + 1;
            if ( (unsigned __int64)&v46 < v41 || (unsigned __int64)&v46 >= v41 + 8 * v35 )
            {
              if ( v35 < v36 )
              {
                v37 = qvector_reserve(v44, v41, v43 + 1, 8);
                a1[20] = v37;
                v41 = v37;
                v42 = v46;
                v43 = a1[21];
              }
            }
            else if ( v35 < v36 )
            {
              v45 = v42;
              v40 = qvector_reserve(v44, v41, v43 + 1, 8);
              a1[20] = v40;
              v41 = v40;
              v42 = v45;
              v43 = a1[21];
            }
            *(_QWORD *)(v41 + 8 * v43) = v42;
            v34 = si128.m128i_u16[3];
            ++v33;
            ++a1[21];
          }
          while ( v34 >= (int)v33 );
        }
      }
      sub_CCC0((__int64)a1, a2, (__int64)&si128);
    }
    v47 = off_12B90;
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
  }
  else
  {
LABEL_26:
    v47 = off_12B90;
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
  }
  return v71 - __readfsqword(0x28u);
}

