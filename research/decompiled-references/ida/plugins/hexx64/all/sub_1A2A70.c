__int64 __fastcall sub_1A2A70(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r12
  __int64 v15; // rcx
  _QWORD *v16; // r15
  int v17; // r13d
  void *v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  void *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r14
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int *v28; // r13
  int v29; // eax
  int v30; // r14d
  int v31; // eax
  int v32; // r13d
  int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rcx
  size_t v37; // rsi
  char *v38; // r12
  size_t v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rdi
  unsigned int v53; // ebx
  bool v55; // zf
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rax
  __m128i si128; // xmm1
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rbp
  __int64 v63; // rbx
  __int64 v64; // r12
  int v65; // esi
  int v66; // esi
  __int64 v67; // rsi
  __int64 v68; // rsi
  __m128i v69; // xmm0
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v73; // rax
  unsigned __int64 tinfo_size; // rax
  __int64 v75; // rsi
  __int64 v76; // [rsp+8h] [rbp-1B0h]
  __int64 v77; // [rsp+8h] [rbp-1B0h]
  size_t n[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v79; // [rsp+20h] [rbp-198h]
  unsigned int v80; // [rsp+28h] [rbp-190h]
  int v81; // [rsp+2Ch] [rbp-18Ch]
  __int64 v82; // [rsp+30h] [rbp-188h]
  __int64 v83; // [rsp+38h] [rbp-180h]
  _QWORD *v84; // [rsp+40h] [rbp-178h]
  char *v85; // [rsp+48h] [rbp-170h]
  __int64 v86; // [rsp+50h] [rbp-168h] BYREF
  __int128 v87; // [rsp+58h] [rbp-160h]
  __int64 v88[16]; // [rsp+70h] [rbp-148h] BYREF
  __m128i *v89; // [rsp+F0h] [rbp-C8h] BYREF
  int v90; // [rsp+F8h] [rbp-C0h]
  __m128i v91; // [rsp+100h] [rbp-B8h]
  __int64 v92; // [rsp+110h] [rbp-A8h]
  int v93; // [rsp+118h] [rbp-A0h]
  char *v94; // [rsp+120h] [rbp-98h]
  __int64 v95; // [rsp+128h] [rbp-90h]
  int v96; // [rsp+130h] [rbp-88h]
  __m128i v97; // [rsp+138h] [rbp-80h]
  __int64 v98; // [rsp+148h] [rbp-70h]
  void *v99; // [rsp+150h] [rbp-68h]
  __int128 v100; // [rsp+158h] [rbp-60h]
  __int64 v101; // [rsp+168h] [rbp-50h]
  unsigned __int64 v102; // [rsp+178h] [rbp-40h]

  v8 = a1;
  v9 = a1[2];
  v102 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(v9 + 280);
  sub_139B90(v10, (__int64)a2, a3, a4, a5, a6);
  sub_1A0DE0((__int64)v88, v10, a2, v11, v12, v13, a7, a8);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8[2] + 24LL))(v8[2]);
  if ( *(_BYTE *)(v10 + 320) )
  {
    v15 = a1[28];
    v16 = a1 + 18;
    if ( v15 == -1 )
    {
      v17 = *(_DWORD *)(*(_QWORD *)(a1[1] + 112LL) + 80LL);
      v15 = (int)((v17 + sub_F2D80(v10) - 1) & -v17);
    }
  }
  else
  {
    v15 = a1[44];
    v16 = a1 + 34;
  }
  v18 = sub_1A1040(
          v88,
          a1[2] + 96LL,
          0xFFFFFFFF,
          v15,
          *(_DWORD *)(*(_QWORD *)(v10 + 1496) + 656LL),
          *(char *)(v14 + 12));
  v19 = *((_DWORD *)v16 + 10);
  v76 = (__int64)v18;
  v20 = *(char *)(v14 + 12);
  if ( v19 == -1 )
  {
    v21 = -1;
  }
  else
  {
    v21 = v16[4];
    if ( v21 != -1 )
      v21 += (int)(v19 * v20);
  }
  v22 = sub_1A1040(v88, a1[2] + 96LL, v19, v21, *(_DWORD *)(a1[2] + 24LL) - v19, v20);
  v23 = *((_DWORD *)v16 + 16);
  v24 = (__int64)v22;
  v25 = *(char *)(v14 + 13);
  if ( v23 == -1 )
  {
    v26 = -1;
  }
  else
  {
    v26 = v16[7];
    if ( v26 != -1 )
      v26 += (int)(v23 * v25);
  }
  v28 = (int *)sub_1A1040(v88, a1[2] + 120LL, v23, v26, *(_DWORD *)(a1[2] + 48LL) - v23, v25);
  if ( v24 )
  {
    sub_19CFB0((__int64)a1, v24, (__int64)v28, v27);
    sub_1A00C0(v88, 1);
    if ( *(_DWORD *)(v24 + 48) == -1 )
      v29 = sub_1A1110(v24, v10, *(int *)(v24 + 52), a7);
    else
      v29 = sub_1A1170(v24, v10, a7);
    v30 = v29;
  }
  else
  {
    sub_19CFB0((__int64)a1, 0, (__int64)v28, v27);
    sub_1A00C0(v88, 1);
    v30 = 0;
  }
  if ( v28 )
  {
    if ( v28[12] == -1 )
      v31 = sub_1A1110((__int64)v28, v10, v28[13], a7);
    else
      v31 = sub_1A1170((__int64)v28, v10, a7);
    v32 = v31;
  }
  else
  {
    v32 = 0;
  }
  if ( v76 )
  {
    v33 = *(_DWORD *)(v76 + 48) == -1 ? sub_1A1110(v76, v10, *(int *)(v76 + 52), a7) : sub_1A1170(v76, v10, a7);
    v80 = v33 * *(char *)(v14 + 12);
    if ( v33 )
    {
      v34 = a1[2];
      v35 = *(_QWORD *)(v34 + 24);
      if ( v35 - v30 > (int)(*(_QWORD *)(v34 + 48) - v32) )
      {
        tinfo_size = get_tinfo_size();
        v75 = a1[2];
        if ( !(v80 % tinfo_size) )
        {
          v32 = *(_DWORD *)(v75 + 48);
LABEL_24:
          if ( !a1[16] )
            goto LABEL_25;
LABEL_48:
          v38 = (char *)&unk_4DBD60;
          goto LABEL_31;
        }
        v35 = *(_DWORD *)(v75 + 24);
      }
      v30 = v35;
      goto LABEL_24;
    }
  }
  if ( v30 <= *((_DWORD *)v16 + 10) && v32 <= *((_DWORD *)v16 + 16) )
  {
    v53 = 0;
    goto LABEL_43;
  }
  v55 = a1[16] == 0;
  v80 = 0;
  if ( !v55 )
    goto LABEL_48;
LABEL_25:
  if ( !*(_BYTE *)(v10 + 320) )
  {
    if ( !under_debugger )
      sub_383060(0xC8BDu, a7);
LABEL_73:
    BUG();
  }
  sub_19C2D0((__int64)a1, v14);
  if ( v16[10] == -1 )
    v16[10] = *(_QWORD *)(v10 + 144);
  v36 = a1[16];
  if ( a1[17] < (unsigned __int64)(v36 + 1) )
  {
    n[0] = a1[17];
    v56 = qvector_reserve((__int64)(a1 + 15), 0, v36 + 1, 128);
    v38 = (char *)&unk_4DBD60;
    v57 = a1[16];
    v58 = a1[17];
    a1[17] = n[0];
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
    v79 = v58;
    v60 = a1[15];
    v61 = v57 - 1;
    if ( v61 >= 0 )
    {
      v82 = v56;
      v81 = v32;
      v83 = v10;
      v62 = v56;
      v84 = a1;
      v63 = v60;
      v85 = (char *)&unk_4DBD60;
      v64 = v61;
      do
      {
        *(_QWORD *)v62 = *(_QWORD *)v63;
        v65 = *(_DWORD *)(v63 + 8);
        *(__m128i *)(v62 + 16) = si128;
        *(_DWORD *)(v62 + 8) = v65;
        *(_QWORD *)(v62 + 32) = *(_QWORD *)(v63 + 32);
        v66 = *(_DWORD *)(v63 + 40);
        *(_QWORD *)(v62 + 48) = off_4DBD70;
        *(_DWORD *)(v62 + 40) = v66;
        *(_QWORD *)(v62 + 56) = *(_QWORD *)(v63 + 56);
        *(_DWORD *)(v62 + 64) = *(_DWORD *)(v63 + 64);
        v67 = *(_QWORD *)(v63 + 88);
        *(__m128i *)(v62 + 72) = _mm_loadu_si128((const __m128i *)(v63 + 72));
        *(_QWORD *)(v62 + 88) = v67;
        v68 = *(_QWORD *)(v63 + 96);
        v69 = _mm_loadu_si128((const __m128i *)(v63 + 104));
        *(_QWORD *)(v63 + 96) = 0;
        *(_QWORD *)(v62 + 96) = v68;
        *(__m128i *)(v62 + 104) = v69;
        v70 = *(_QWORD *)(v63 + 120);
        *(_QWORD *)(v63 + 112) = 0;
        *(_QWORD *)(v62 + 120) = v70;
        v71 = *(_QWORD *)(v63 + 96);
        if ( v71 )
        {
          *(_QWORD *)(v63 + 104) = 0;
          *(__m128i *)n = si128;
          qfree(v71);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v63 += 128;
        v62 += 128;
      }
      while ( v64-- != 0 );
      v8 = v84;
      v32 = v81;
      v56 = v82;
      v10 = v83;
      v38 = v85;
      v60 = v84[15];
    }
    n[0] = v56;
    qfree(v60);
    v37 = n[0];
    v73 = v79;
    v36 = v8[16];
    v8[15] = n[0];
    v8[17] = v73;
  }
  else
  {
    v37 = a1[15];
    v38 = (char *)&unk_4DBD60;
  }
  v39 = v37 + (v36 << 7);
  *(_DWORD *)(v39 + 8) = 0;
  *(_QWORD *)v39 = 0;
  *(_QWORD *)(v39 + 32) = -1;
  *(_DWORD *)(v39 + 40) = -1;
  *(_OWORD *)(v39 + 72) = -1;
  *(_QWORD *)(v39 + 48) = v38 + 16;
  *(_QWORD *)(v39 + 56) = -1;
  *(_DWORD *)(v39 + 64) = -1;
  *(_QWORD *)(v39 + 88) = -1;
  *(_QWORD *)(v39 + 96) = 0;
  *(_QWORD *)(v39 + 120) = 0;
  *(__m128i *)(v39 + 16) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)off_4DBD90,
                             (__m128i)(unsigned __int64)(v38 + 16));
  *(_OWORD *)(v39 + 104) = 0;
  ++v8[16];
  *(_DWORD *)(v39 + 8) |= 0x20u;
  n[0] = v39;
  v40 = get_tinfo_size();
  v41 = sub_138140((_QWORD *)v10, v40, 0, 0.0);
  *(_QWORD *)(n[0] + 72) = v41;
  if ( v41 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCBF9u, 0.0);
    goto LABEL_73;
  }
LABEL_31:
  v42 = v8[15];
  v43 = *(_QWORD *)(v42 + 32);
  v89 = *(__m128i **)v42;
  v44 = *(_DWORD *)(v42 + 8);
  v92 = v43;
  v45 = *(unsigned int *)(v42 + 40);
  v94 = v38 + 16;
  v46 = *(_QWORD *)(v42 + 56);
  v91 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)(v38 + 16));
  v47 = _mm_loadu_si128((const __m128i *)(v42 + 72));
  v95 = v46;
  LODWORD(v46) = *(_DWORD *)(v42 + 64);
  v97 = v47;
  v96 = v46;
  v48 = *(_QWORD *)(v42 + 88);
  v100 = 0;
  v49 = *(_QWORD *)(v42 + 104);
  v90 = v44;
  v93 = v45;
  v98 = v48;
  v99 = nullptr;
  if ( v49 )
  {
    v77 = v42;
    n[0] = 8 * v49;
    v99 = (void *)qalloc_or_throw(8 * v49, v45, 8 * v49, v42);
    *((_QWORD *)&v100 + 1) = v49;
    v45 = *(_QWORD *)(v77 + 96);
    memcpy(v99, (const void *)v45, n[0]);
    *(_QWORD *)&v100 = v49;
    v42 = v77;
    LOBYTE(v44) = v90;
  }
  v50 = *(_QWORD *)(v42 + 120);
  v101 = v50;
  if ( (v44 & 2) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC8BEu, 0.0);
    goto LABEL_73;
  }
  v93 = v30;
  v96 = v32;
  v90 = v44 & 0x20 | 8;
  v97.m128i_i64[1] = v16[10] + v80;
  v89 = sub_D21A0(v10, v45, v50, v42, 0.0);
  v101 = 0;
  v86 = 0;
  v87 = 0;
  v86 = qvector_reserve((__int64)&v86, 0, 1, 8);
  *(_QWORD *)(v86 + 8 * v87) = &v89;
  *(_QWORD *)&v87 = v87 + 1;
  sub_1A2060((__int64)v8, &v86);
  sub_19B550((__int64)&v89, *(_QWORD *)(v101 + 24), v101, (__int64)"va_end", 26, 0.0);
  v51 = v8[50];
  *((_DWORD *)v8 + 78) = v30;
  *((_DWORD *)v8 + 84) = v32;
  if ( v51 )
  {
    v8[51] = 0;
    qfree(v51);
    v8[50] = 0;
    v8[52] = 0;
  }
  v52 = v8[53];
  if ( v52 )
  {
    v8[54] = 0;
    qfree(v52);
    v8[53] = 0;
    v8[55] = 0;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86);
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree((__int64)v99);
  }
  v53 = 1;
LABEL_43:
  sub_19FFD0((__int64)v88);
  return v53;
}

