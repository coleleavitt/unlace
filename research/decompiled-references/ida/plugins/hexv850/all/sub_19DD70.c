__int64 __fastcall sub_19DD70(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // r15
  int v12; // r13d
  void *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // rcx
  void *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r14
  unsigned int v20; // r9d
  __int64 v21; // rcx
  int *v22; // r13
  int v23; // eax
  int v24; // r14d
  int v25; // eax
  int v26; // r13d
  int v27; // eax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rcx
  size_t v31; // rsi
  char *v32; // r12
  size_t v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // rdi
  unsigned int v44; // ebx
  bool v46; // zf
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rax
  __m128i si128; // xmm1
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // rbx
  __int64 v55; // r12
  int v56; // esi
  int v57; // esi
  __int64 v58; // rsi
  __int64 v59; // rsi
  __m128i v60; // xmm0
  __int64 v61; // rsi
  __int64 v63; // rax
  unsigned __int64 tinfo_size; // rax
  __int64 v65; // rsi
  __int64 v66; // [rsp+8h] [rbp-1B0h]
  __int64 v67; // [rsp+8h] [rbp-1B0h]
  size_t n[2]; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v69; // [rsp+20h] [rbp-198h]
  unsigned int v70; // [rsp+28h] [rbp-190h]
  int v71; // [rsp+2Ch] [rbp-18Ch]
  __int64 v72; // [rsp+30h] [rbp-188h]
  __int64 v73; // [rsp+38h] [rbp-180h]
  _QWORD *v74; // [rsp+40h] [rbp-178h]
  char *v75; // [rsp+48h] [rbp-170h]
  __int64 v76; // [rsp+50h] [rbp-168h] BYREF
  __int128 v77; // [rsp+58h] [rbp-160h]
  __int64 v78[16]; // [rsp+70h] [rbp-148h] BYREF
  __m128i *v79; // [rsp+F0h] [rbp-C8h] BYREF
  int v80; // [rsp+F8h] [rbp-C0h]
  __m128i v81; // [rsp+100h] [rbp-B8h]
  __int64 v82; // [rsp+110h] [rbp-A8h]
  int v83; // [rsp+118h] [rbp-A0h]
  char *v84; // [rsp+120h] [rbp-98h]
  __int64 v85; // [rsp+128h] [rbp-90h]
  int v86; // [rsp+130h] [rbp-88h]
  __m128i v87; // [rsp+138h] [rbp-80h]
  __int64 v88; // [rsp+148h] [rbp-70h]
  void *v89; // [rsp+150h] [rbp-68h]
  __int128 v90; // [rsp+158h] [rbp-60h]
  __int64 v91; // [rsp+168h] [rbp-50h]
  unsigned __int64 v92; // [rsp+178h] [rbp-40h]

  v6 = (__int64)a1;
  v7 = a1[2];
  v92 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v7 + 280);
  sub_134FD0(v8, (__int64)a2, a3, a4, a5, a6);
  sub_19C0E0((__int64)v78, v8, a2);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 24LL))(*(_QWORD *)(v6 + 16));
  if ( *(_BYTE *)(v8 + 320) )
  {
    v10 = a1[28];
    v11 = a1 + 18;
    if ( v10 == -1 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a1[1] + 112LL) + 80LL);
      v10 = (int)((v12 + sub_EE1C0(v8) - 1) & -v12);
    }
  }
  else
  {
    v10 = a1[44];
    v11 = a1 + 34;
  }
  v13 = sub_19C340(v78, a1[2] + 96LL, 0xFFFFFFFF, v10, *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL), *(char *)(v9 + 12));
  v14 = *((_DWORD *)v11 + 10);
  v66 = (__int64)v13;
  v15 = *(char *)(v9 + 12);
  if ( v14 == -1 )
  {
    v16 = -1;
  }
  else
  {
    v16 = v11[4];
    if ( v16 != -1 )
      v16 += (int)(v14 * v15);
  }
  v17 = sub_19C340(v78, a1[2] + 96LL, v14, v16, *(_DWORD *)(a1[2] + 24LL) - v14, v15);
  v18 = *((_DWORD *)v11 + 16);
  v19 = (__int64)v17;
  v20 = *(char *)(v9 + 13);
  if ( v18 == -1 )
  {
    v21 = -1;
  }
  else
  {
    v21 = v11[7];
    if ( v21 != -1 )
      v21 += (int)(v18 * v20);
  }
  v22 = (int *)sub_19C340(v78, a1[2] + 120LL, v18, v21, *(_DWORD *)(a1[2] + 48LL) - v18, v20);
  if ( v19 )
  {
    sub_1982B0((__int64)a1, v19, (__int64)v22);
    sub_19B3C0(v78, 1);
    if ( *(_DWORD *)(v19 + 48) == -1 )
      v23 = sub_19C410(v19, v8, *(int *)(v19 + 52));
    else
      v23 = sub_19C470(v19, v8);
    v24 = v23;
  }
  else
  {
    sub_1982B0((__int64)a1, 0, (__int64)v22);
    sub_19B3C0(v78, 1);
    v24 = 0;
  }
  if ( v22 )
  {
    if ( v22[12] == -1 )
      v25 = sub_19C410((__int64)v22, v8, v22[13]);
    else
      v25 = sub_19C470((__int64)v22, v8);
    v26 = v25;
  }
  else
  {
    v26 = 0;
  }
  if ( v66 )
  {
    v27 = *(_DWORD *)(v66 + 48) == -1 ? sub_19C410(v66, v8, *(int *)(v66 + 52)) : sub_19C470(v66, v8);
    v70 = v27 * *(char *)(v9 + 12);
    if ( v27 )
    {
      v28 = a1[2];
      v29 = *(_QWORD *)(v28 + 24);
      if ( v29 - v24 > (int)(*(_QWORD *)(v28 + 48) - v26) )
      {
        tinfo_size = get_tinfo_size();
        v65 = a1[2];
        if ( !(v70 % tinfo_size) )
        {
          v26 = *(_DWORD *)(v65 + 48);
LABEL_24:
          if ( !a1[16] )
            goto LABEL_25;
LABEL_48:
          v32 = (char *)&unk_4AF740;
          goto LABEL_31;
        }
        v29 = *(_DWORD *)(v65 + 24);
      }
      v24 = v29;
      goto LABEL_24;
    }
  }
  if ( v24 <= *((_DWORD *)v11 + 10) && v26 <= *((_DWORD *)v11 + 16) )
  {
    v44 = 0;
    goto LABEL_43;
  }
  v46 = a1[16] == 0;
  v70 = 0;
  if ( !v46 )
    goto LABEL_48;
LABEL_25:
  if ( !*(_BYTE *)(v8 + 320) )
  {
    if ( !under_debugger )
      sub_37CFE0(51389);
LABEL_73:
    BUG();
  }
  sub_1975D0((__int64)a1, v9);
  if ( v11[10] == -1 )
    v11[10] = *(_QWORD *)(v8 + 144);
  v30 = a1[16];
  if ( a1[17] < (unsigned __int64)(v30 + 1) )
  {
    n[0] = a1[17];
    v47 = qvector_reserve();
    v32 = (char *)&unk_4AF740;
    v48 = a1[16];
    v49 = a1[17];
    a1[17] = n[0];
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AF770, (__m128i)(unsigned __int64)off_4AF750);
    v69 = v49;
    v51 = a1[15];
    v52 = v48 - 1;
    if ( v52 >= 0 )
    {
      v72 = v47;
      v71 = v26;
      v73 = v8;
      v53 = v47;
      v74 = a1;
      v54 = v51;
      v75 = (char *)&unk_4AF740;
      v55 = v52;
      do
      {
        *(_QWORD *)v53 = *(_QWORD *)v54;
        v56 = *(_DWORD *)(v54 + 8);
        *(__m128i *)(v53 + 16) = si128;
        *(_DWORD *)(v53 + 8) = v56;
        *(_QWORD *)(v53 + 32) = *(_QWORD *)(v54 + 32);
        v57 = *(_DWORD *)(v54 + 40);
        *(_QWORD *)(v53 + 48) = off_4AF750;
        *(_DWORD *)(v53 + 40) = v57;
        *(_QWORD *)(v53 + 56) = *(_QWORD *)(v54 + 56);
        *(_DWORD *)(v53 + 64) = *(_DWORD *)(v54 + 64);
        v58 = *(_QWORD *)(v54 + 88);
        *(__m128i *)(v53 + 72) = _mm_loadu_si128((const __m128i *)(v54 + 72));
        *(_QWORD *)(v53 + 88) = v58;
        v59 = *(_QWORD *)(v54 + 96);
        v60 = _mm_loadu_si128((const __m128i *)(v54 + 104));
        *(_QWORD *)(v54 + 96) = 0;
        *(_QWORD *)(v53 + 96) = v59;
        *(__m128i *)(v53 + 104) = v60;
        v61 = *(_QWORD *)(v54 + 120);
        *(_QWORD *)(v54 + 112) = 0;
        *(_QWORD *)(v53 + 120) = v61;
        if ( *(_QWORD *)(v54 + 96) )
        {
          *(_QWORD *)(v54 + 104) = 0;
          *(__m128i *)n = si128;
          qfree();
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v54 += 128;
        v53 += 128;
      }
      while ( v55-- != 0 );
      v6 = (__int64)v74;
      v26 = v71;
      v47 = v72;
      v8 = v73;
      v32 = v75;
    }
    n[0] = v47;
    qfree();
    v31 = n[0];
    v63 = v69;
    v30 = *(_QWORD *)(v6 + 128);
    *(_QWORD *)(v6 + 120) = n[0];
    *(_QWORD *)(v6 + 136) = v63;
  }
  else
  {
    v31 = a1[15];
    v32 = (char *)&unk_4AF740;
  }
  v33 = v31 + (v30 << 7);
  *(_DWORD *)(v33 + 8) = 0;
  *(_QWORD *)v33 = 0;
  *(_QWORD *)(v33 + 32) = -1;
  *(_DWORD *)(v33 + 40) = -1;
  *(_OWORD *)(v33 + 72) = -1;
  *(_QWORD *)(v33 + 48) = v32 + 16;
  *(_QWORD *)(v33 + 56) = -1;
  *(_DWORD *)(v33 + 64) = -1;
  *(_QWORD *)(v33 + 88) = -1;
  *(_QWORD *)(v33 + 96) = 0;
  *(_QWORD *)(v33 + 120) = 0;
  *(__m128i *)(v33 + 16) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)off_4AF770,
                             (__m128i)(unsigned __int64)(v32 + 16));
  *(_OWORD *)(v33 + 104) = 0;
  ++*(_QWORD *)(v6 + 128);
  *(_DWORD *)(v33 + 8) |= 0x20u;
  n[0] = v33;
  v34 = get_tinfo_size();
  v35 = sub_133580((_QWORD *)v8, v34, 0);
  *(_QWORD *)(n[0] + 72) = v35;
  if ( v35 == -1 )
  {
    if ( !under_debugger )
      sub_37CFE0(52217);
    goto LABEL_73;
  }
LABEL_31:
  v36 = *(_QWORD *)(v6 + 120);
  v37 = *(_QWORD *)(v36 + 32);
  v79 = *(__m128i **)v36;
  v38 = *(_DWORD *)(v36 + 8);
  v82 = v37;
  LODWORD(v37) = *(_DWORD *)(v36 + 40);
  v84 = v32 + 16;
  v39 = *(_QWORD *)(v36 + 56);
  v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AF770, (__m128i)(unsigned __int64)(v32 + 16));
  v40 = _mm_loadu_si128((const __m128i *)(v36 + 72));
  v85 = v39;
  LODWORD(v39) = *(_DWORD *)(v36 + 64);
  v87 = v40;
  v86 = v39;
  v41 = *(_QWORD *)(v36 + 88);
  v90 = 0;
  v42 = *(_QWORD *)(v36 + 104);
  v80 = v38;
  v83 = v37;
  v88 = v41;
  v89 = nullptr;
  if ( v42 )
  {
    v67 = v36;
    n[0] = 8 * v42;
    v89 = (void *)qalloc_or_throw();
    *((_QWORD *)&v90 + 1) = v42;
    memcpy(v89, *(const void **)(v67 + 96), n[0]);
    *(_QWORD *)&v90 = v42;
    v36 = v67;
    LOBYTE(v38) = v80;
  }
  v91 = *(_QWORD *)(v36 + 120);
  if ( (v38 & 2) != 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(51390);
    goto LABEL_73;
  }
  v83 = v24;
  v86 = v26;
  v80 = v38 & 0x20 | 8;
  v87.m128i_i64[1] = v11[10] + v70;
  v79 = sub_CD5E0(v8);
  v91 = 0;
  v76 = 0;
  v77 = 0;
  v76 = qvector_reserve();
  *(_QWORD *)(v76 + 8 * v77) = &v79;
  *(_QWORD *)&v77 = v77 + 1;
  sub_19D360(v6, &v76);
  sub_196850((__int64)&v79, *(_QWORD *)(v91 + 24), v91, (int)"va_end", 26);
  v43 = *(_QWORD *)(v6 + 400);
  *(_DWORD *)(v6 + 312) = v24;
  *(_DWORD *)(v6 + 336) = v26;
  if ( v43 )
  {
    *(_QWORD *)(v6 + 408) = 0;
    qfree();
    *(_QWORD *)(v6 + 400) = 0;
    *(_QWORD *)(v6 + 416) = 0;
  }
  if ( *(_QWORD *)(v6 + 424) )
  {
    *(_QWORD *)(v6 + 432) = 0;
    qfree();
    *(_QWORD *)(v6 + 424) = 0;
    *(_QWORD *)(v6 + 440) = 0;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    qfree();
  }
  v44 = 1;
LABEL_43:
  sub_19B2D0((__int64)v78);
  return v44;
}

