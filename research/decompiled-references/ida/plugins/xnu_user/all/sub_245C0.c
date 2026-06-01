__int64 __fastcall sub_245C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  bool v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned int v14; // eax
  __m128i v15; // xmm3
  int v16; // eax
  unsigned int v17; // r15d
  int v19; // edx
  __int64 v20; // rsi
  _BYTE *v21; // rdi
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64, __int64, _QWORD *, _QWORD); // [rsp+8h] [rbp-2F0h]
  _QWORD v24[4]; // [rsp+10h] [rbp-2E8h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+30h] [rbp-2C8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-2C0h]
  __int64 v27; // [rsp+40h] [rbp-2B8h]
  unsigned int v28; // [rsp+48h] [rbp-2B0h]
  __int64 (__fastcall **v29)(); // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-2A0h]
  __int128 v31; // [rsp+60h] [rbp-298h]
  unsigned __int16 v32; // [rsp+70h] [rbp-288h]
  __int16 v33; // [rsp+72h] [rbp-286h]
  char v34; // [rsp+74h] [rbp-284h]
  unsigned __int8 v35; // [rsp+75h] [rbp-283h]
  unsigned __int16 v36; // [rsp+76h] [rbp-282h]
  __int64 v37; // [rsp+78h] [rbp-280h]
  __int64 v38; // [rsp+80h] [rbp-278h]
  __int128 v39; // [rsp+88h] [rbp-270h]
  _BYTE v40[248]; // [rsp+98h] [rbp-260h] BYREF
  _BYTE v41[264]; // [rsp+190h] [rbp-168h] BYREF
  __int64 v42; // [rsp+298h] [rbp-60h]
  __int64 v43; // [rsp+2A0h] [rbp-58h]
  char v44; // [rsp+2A8h] [rbp-50h]
  __int64 v45; // [rsp+2B0h] [rbp-48h]
  unsigned __int64 v46; // [rsp+2B8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v5 = sub_2ED80(a1 + 1704, a3);
  if ( !v5 )
    return (unsigned int)-1;
  v29 = off_97238;
  v6 = v5;
  v30 = 0;
  LODWORD(v25) = 0;
  v44 = 0;
  v31 = 0;
  qlseek();
  if ( qlread() != 28 )
    goto LABEL_32;
  if ( v32 != 17744 )
  {
    if ( v32 == 23126 )
    {
      qlseek();
      if ( qlread() == 40 )
      {
        memset(&v40[8], 0, 0xF0u);
        *(_DWORD *)v40 = v32;
        *(_WORD *)&v40[4] = v33;
        v40[6] = v34;
        v20 = v38;
        v14 = v35;
        if ( v33 == 512 || v33 == -31132 || v33 == -21916 )
        {
          *(_QWORD *)&v40[40] = v37;
          *(_WORD *)&v40[24] = 523;
          *(_DWORD *)&v40[84] = HIDWORD(v37) + 40 - v36;
          *(_QWORD *)&v40[48] = v38;
        }
        else
        {
          *(_DWORD *)&v40[52] = v38;
          v20 = (unsigned int)v38;
          *(_WORD *)&v40[24] = 267;
          *(_QWORD *)&v40[40] = v37;
          *(_DWORD *)&v40[84] = HIDWORD(v37) + 40 - v36;
        }
        v13 = 0;
        *(_WORD *)&v40[92] = v35;
        v42 = v20;
        *(_OWORD *)&v40[160] = v39;
        v43 = (unsigned int)v25;
        *(_QWORD *)&v40[56] = 0x100000001LL;
        goto LABEL_28;
      }
LABEL_32:
      v17 = -1;
      goto LABEL_33;
    }
    if ( v32 == 23117 || v32 == 19802 )
    {
      if ( qlread() == 8 && v45 == 0x6B6E694C696E55LL )
        v44 = 1;
      qlseek();
      if ( qlread() != 4 )
        goto LABEL_32;
    }
  }
  v43 = (unsigned int)v25;
  qlseek();
  memset(v41, 0, sizeof(v41));
  qlseek();
  if ( (unsigned __int64)(qlread() - 93) > 0xAB )
    goto LABEL_32;
  v7 = *(_DWORD *)v41 == 19536 || *(_DWORD *)v41 == 4542530 || *(_DWORD *)v41 == 17744;
  if ( !v7 )
    goto LABEL_32;
  if ( *(_WORD *)&v41[24] == 523 )
  {
    *(__m128i *)v40 = _mm_load_si128((const __m128i *)v41);
    *(_QWORD *)&v40[240] = *(_QWORD *)&v41[256];
    *(__m128i *)&v40[16] = _mm_load_si128((const __m128i *)&v41[16]);
    *(__m128i *)&v40[32] = _mm_load_si128((const __m128i *)&v41[32]);
    *(__m128i *)&v40[48] = _mm_load_si128((const __m128i *)&v41[48]);
    *(__m128i *)&v40[64] = _mm_load_si128((const __m128i *)&v41[64]);
    *(__m128i *)&v40[80] = _mm_load_si128((const __m128i *)&v41[80]);
    *(__m128i *)&v40[112] = _mm_load_si128((const __m128i *)&v41[128]);
    *(__m128i *)&v40[128] = _mm_load_si128((const __m128i *)&v41[144]);
    *(__m128i *)&v40[144] = _mm_load_si128((const __m128i *)&v41[160]);
    *(__m128i *)&v40[160] = _mm_load_si128((const __m128i *)&v41[176]);
    *(__m128i *)&v40[176] = _mm_load_si128((const __m128i *)&v41[192]);
    *(__m128i *)&v40[192] = _mm_load_si128((const __m128i *)&v41[208]);
    *(__m128i *)&v40[208] = _mm_load_si128((const __m128i *)&v41[224]);
    *(__m128i *)&v40[224] = _mm_load_si128((const __m128i *)&v41[240]);
    *(__m128 *)&v40[96] = _mm_shuffle_ps((__m128)_mm_load_si128((const __m128i *)&v41[96]), *(__m128 *)&v41[112], 136);
  }
  else
  {
    v7 = 0;
    if ( *(_WORD *)&v41[24] <= 0x20Bu )
      v7 = *(_WORD *)&v41[24] == 0 || ((*(_WORD *)&v41[24] - 263) & 0xFFFB) == 0;
    *(__m128i *)v40 = _mm_load_si128((const __m128i *)v41);
    *(_QWORD *)&v40[240] = *(_QWORD *)&v41[240];
    *(__m128i *)&v40[16] = _mm_load_si128((const __m128i *)&v41[16]);
    *(__m128i *)&v40[32] = _mm_load_si128((const __m128i *)&v41[32]);
    *(__m128i *)&v40[48] = _mm_load_si128((const __m128i *)&v41[48]);
    *(__m128i *)&v40[64] = _mm_load_si128((const __m128i *)&v41[64]);
    *(__m128i *)&v40[80] = _mm_load_si128((const __m128i *)&v41[80]);
    *(__m128i *)&v40[96] = _mm_load_si128((const __m128i *)&v41[96]);
    *(__m128i *)&v40[112] = _mm_load_si128((const __m128i *)&v41[112]);
    *(__m128i *)&v40[128] = _mm_load_si128((const __m128i *)&v41[128]);
    *(__m128i *)&v40[144] = _mm_load_si128((const __m128i *)&v41[144]);
    *(__m128i *)&v40[160] = _mm_load_si128((const __m128i *)&v41[160]);
    *(__m128i *)&v40[176] = _mm_load_si128((const __m128i *)&v41[176]);
    *(__m128i *)&v40[192] = _mm_load_si128((const __m128i *)&v41[192]);
    *(__m128i *)&v40[208] = _mm_load_si128((const __m128i *)&v41[208]);
    *(__m128i *)&v40[224] = _mm_load_si128((const __m128i *)&v41[224]);
  }
  if ( (unsigned int)(*(_DWORD *)&v40[116] - 1) <= 0xE )
  {
    v21 = &v40[8 * *(unsigned int *)&v40[116] + 120];
    v22 = (unsigned int)(8 * (16 - *(_DWORD *)&v40[116]));
    *(_QWORD *)&v21[v22 - 8] = 0;
    memset(v21, 0, 8LL * ((unsigned int)(v22 - 1) >> 3));
  }
  v8 = 248;
  if ( *(_WORD *)&v40[24] == 523 )
    v8 = 264;
  v9 = *(unsigned __int16 *)&v40[20] + 24LL;
  v10 = 128;
  if ( v9 >= 0x80 )
    v10 = *(unsigned __int16 *)&v40[20] + 24LL;
  if ( v10 < v8 )
  {
    v11 = 120;
    if ( v8 != 248 )
      v11 = 136;
    if ( v9 >= v11 )
      memset(&v40[8 * (16 - ((v8 - v9 + 7) >> 3)) + 120], 0, (v8 - v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ( !v7 )
    goto LABEL_32;
  v12 = *(_QWORD *)&v40[48];
  if ( *(_WORD *)&v40[24] != 523 )
    v12 = *(unsigned int *)&v40[52];
  v42 = v12;
  v13 = _mm_cvtsi32_si128(*(unsigned int *)&v40[80]);
  v14 = *(unsigned __int16 *)&v40[92];
LABEL_28:
  v15 = _mm_cvtsi32_si128(v14);
  v16 = *(_DWORD *)(a2 + 8);
  *(__m128i *)(a2 + 12) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(v13, v15),
                            _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128(*(unsigned int *)&v40[168]),
                              _mm_cvtsi32_si128(*(unsigned int *)&v40[172])));
  if ( (v16 & 1) != 0 )
  {
    v26 = a2;
    v25 = (__int64 (__fastcall **)())&off_97260;
    v27 = a3;
    v28 = 0;
    if ( *(_DWORD *)v40 == 23126 )
      v19 = v43 + 40;
    else
      v19 = *(unsigned __int16 *)&v40[20] + (_DWORD)v43 + 24;
    v17 = sub_1C060((__int64)&v29, v6, v19, *(unsigned __int16 *)&v40[6], (__int64)&v25);
    if ( v17 )
      goto LABEL_33;
    if ( v28 )
    {
      v23 = **(__int64 (__fastcall ***)(__int64, __int64, __int64, _QWORD *, _QWORD))a2;
      sub_20360((__int64)v24, ".header");
      v17 = v23(a2, a3, a3 + v28, v24, 0);
      if ( v24[0] )
      {
        v24[1] = 0;
        qfree();
      }
      if ( v17 )
        goto LABEL_33;
    }
    if ( (*(_DWORD *)(a2 + 8) & 2) == 0 )
      goto LABEL_30;
LABEL_42:
    v26 = a2;
    v27 = a3;
    v25 = off_97290;
    v17 = sub_23D80((__int64)&v29, v6, (__int64)&v25);
    if ( v17 )
      goto LABEL_33;
    goto LABEL_30;
  }
  if ( (v16 & 2) != 0 )
    goto LABEL_42;
LABEL_30:
  v17 = 0;
LABEL_33:
  v29 = off_97238;
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  close_linput();
  return v17;
}

