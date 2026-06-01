__int64 __fastcall sub_197540(__int64 a1, unsigned __int8 **a2)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  int v7; // eax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 (__fastcall **v11)(); // rbx
  __m128i v12; // xmm0
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 (__fastcall **v15)(); // rax
  __int64 (__fastcall **v16)(); // rbp
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 (__fastcall **v19)(); // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 (__fastcall **v27)(); // r8
  int v28; // edi
  int v29; // edi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __m128i v32; // xmm1
  __int64 v33; // rdi
  bool v34; // cf
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 (__fastcall **v40)(); // r9
  __int64 (__fastcall **v41)(); // rcx
  __int64 v42; // rax
  __int64 v43; // rbp
  int v44; // edi
  int v45; // edi
  __int64 (__fastcall *v46)(); // rdi
  __int64 (__fastcall *v47)(); // rdi
  __m128i v48; // xmm1
  __int64 (__fastcall *v49)(); // rdi
  __int64 v50; // rax
  __m128i v51; // [rsp+0h] [rbp-108h] BYREF
  __m128i v52; // [rsp+10h] [rbp-F8h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall **v54)(); // [rsp+30h] [rbp-D8h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  __int64 v56; // [rsp+40h] [rbp-C8h] BYREF
  int v57; // [rsp+48h] [rbp-C0h]
  __m128i v58; // [rsp+50h] [rbp-B8h]
  __int64 v59; // [rsp+60h] [rbp-A8h]
  int v60; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall **v61)(); // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h]
  int v63; // [rsp+80h] [rbp-88h]
  __int128 v64; // [rsp+88h] [rbp-80h]
  __int64 v65; // [rsp+98h] [rbp-70h]
  __int64 v66; // [rsp+A0h] [rbp-68h]
  __int128 v67; // [rsp+A8h] [rbp-60h]
  __int64 v68; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+C8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_7EA50(a1, a2) )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  sub_7CAC0(a1 + 64, (__int64)a2);
  v7 = sub_7C760(a2);
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = v7;
  v11 = *(__int64 (__fastcall ***)())(a1 + 120);
  if ( v7 != v9 )
  {
    v56 = 0;
    v64 = -1;
    v57 = 0;
    v60 = -1;
    v61 = off_4D6430;
    v59 = -1;
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4D6450, (__m128i)(unsigned __int64)off_4D6430);
    v62 = -1;
    v63 = -1;
    v65 = -1;
    v66 = 0;
    v68 = 0;
    v58 = v12;
    v67 = 0;
    if ( v7 < v9 )
    {
      v20 = v7;
      do
      {
        v21 = v8 + (v20 << 7);
        if ( *(_QWORD *)(v21 + 96) )
        {
          *(_QWORD *)(v21 + 104) = 0;
          qfree();
          v8 = *(_QWORD *)(a1 + 120);
        }
        ++v20;
      }
      while ( v20 < v9 );
      *(_QWORD *)(a1 + 128) = v10;
      v11 = (__int64 (__fastcall **)())v8;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 136);
      if ( &v56 < (__int64 *)v11 || &v56 >= (__int64 *)&v11[16 * v13] )
      {
        if ( v13 < v7 )
        {
          v52.m128i_i64[0] = *(_QWORD *)(a1 + 136);
          v51 = v12;
          v11 = (__int64 (__fastcall **)())qvector_reserve();
          v22 = *(_QWORD *)(a1 + 136);
          v23 = *(_QWORD *)(a1 + 120);
          v24 = *(_QWORD *)(a1 + 128) - 1LL;
          *(_QWORD *)(a1 + 136) = v52.m128i_i64[0];
          v25 = _mm_load_si128(&v51);
          v55 = v22;
          if ( v24 >= 0 )
          {
            v26 = (__int64)v11;
            v27 = off_4D6430;
            do
            {
              *(_QWORD *)v26 = *(_QWORD *)v23;
              v28 = *(_DWORD *)(v23 + 8);
              *(__m128i *)(v26 + 16) = v25;
              *(_DWORD *)(v26 + 8) = v28;
              *(_QWORD *)(v26 + 32) = *(_QWORD *)(v23 + 32);
              v29 = *(_DWORD *)(v23 + 40);
              *(_QWORD *)(v26 + 48) = v27;
              *(_DWORD *)(v26 + 40) = v29;
              *(_QWORD *)(v26 + 56) = *(_QWORD *)(v23 + 56);
              *(_DWORD *)(v26 + 64) = *(_DWORD *)(v23 + 64);
              v30 = *(_QWORD *)(v23 + 88);
              *(__m128i *)(v26 + 72) = _mm_loadu_si128((const __m128i *)(v23 + 72));
              *(_QWORD *)(v26 + 88) = v30;
              v31 = *(_QWORD *)(v23 + 96);
              v32 = _mm_loadu_si128((const __m128i *)(v23 + 104));
              *(_QWORD *)(v23 + 96) = 0;
              *(_QWORD *)(v26 + 96) = v31;
              *(__m128i *)(v26 + 104) = v32;
              v33 = *(_QWORD *)(v23 + 120);
              *(_QWORD *)(v23 + 112) = 0;
              *(_QWORD *)(v26 + 120) = v33;
              if ( *(_QWORD *)(v23 + 96) )
              {
                *(_QWORD *)(v23 + 104) = 0;
                v54 = v27;
                v53 = (__int64 (__fastcall **)())v24;
                v52.m128i_i64[0] = v26;
                v51 = v25;
                qfree();
                v27 = v54;
                v24 = (__int64)v53;
                v26 = v52.m128i_i64[0];
                v25 = _mm_load_si128(&v51);
              }
              v23 += 128;
              v26 += 128;
              v34 = v24-- == 0;
            }
            while ( !v34 );
          }
          v51 = v25;
          qfree();
          v35 = v55;
          *(_QWORD *)(a1 + 120) = v11;
          v9 = *(_QWORD *)(a1 + 128);
          v12 = _mm_load_si128(&v51);
          *(_QWORD *)(a1 + 136) = v35;
        }
        if ( v9 < v10 )
        {
          do
          {
            v14 = v9++;
            v15 = &v11[16 * v14];
            *v15 = nullptr;
            *((_DWORD *)v15 + 2) = 0;
            v15[4] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v15 + 10) = -1;
            v15[6] = (__int64 (__fastcall *)())off_4D6430;
            v15[7] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v15 + 16) = -1;
            v15[11] = (__int64 (__fastcall *)())-1LL;
            v15[12] = nullptr;
            v15[15] = nullptr;
            *((__m128i *)v15 + 1) = v12;
            *(_OWORD *)(v15 + 9) = -1;
            *(_OWORD *)(v15 + 13) = 0;
            v11 = *(__int64 (__fastcall ***)())(a1 + 120);
          }
          while ( v10 != v9 );
        }
      }
      else
      {
        if ( v13 < v7 )
        {
          v53 = off_4D6430;
          v52.m128i_i64[0] = v13;
          v51 = v12;
          v36 = qvector_reserve();
          v37 = _mm_load_si128(&v51);
          v11 = (__int64 (__fastcall **)())v36;
          v38 = *(_QWORD *)(a1 + 136);
          v39 = *(_QWORD *)(a1 + 128);
          *(_QWORD *)(a1 + 136) = v52.m128i_i64[0];
          v40 = v53;
          v41 = v11;
          v55 = v38;
          v42 = *(_QWORD *)(a1 + 120);
          v43 = v39 - 1;
          if ( v43 >= 0 )
          {
            do
            {
              *v41 = *(__int64 (__fastcall **)())v42;
              v44 = *(_DWORD *)(v42 + 8);
              *((__m128i *)v41 + 1) = v37;
              *((_DWORD *)v41 + 2) = v44;
              v41[4] = *(__int64 (__fastcall **)())(v42 + 32);
              v45 = *(_DWORD *)(v42 + 40);
              v41[6] = (__int64 (__fastcall *)())v40;
              *((_DWORD *)v41 + 10) = v45;
              v41[7] = *(__int64 (__fastcall **)())(v42 + 56);
              *((_DWORD *)v41 + 16) = *(_DWORD *)(v42 + 64);
              v46 = *(__int64 (__fastcall **)())(v42 + 88);
              *(__m128i *)(v41 + 9) = _mm_loadu_si128((const __m128i *)(v42 + 72));
              v41[11] = v46;
              v47 = *(__int64 (__fastcall **)())(v42 + 96);
              v48 = _mm_loadu_si128((const __m128i *)(v42 + 104));
              *(_QWORD *)(v42 + 96) = 0;
              v41[12] = v47;
              *(__m128i *)(v41 + 13) = v48;
              v49 = *(__int64 (__fastcall **)())(v42 + 120);
              *(_QWORD *)(v42 + 112) = 0;
              v41[15] = v49;
              if ( *(_QWORD *)(v42 + 96) )
              {
                *(_QWORD *)(v42 + 104) = 0;
                v54 = v40;
                v53 = v41;
                v51.m128i_i64[0] = v42;
                v52 = v37;
                qfree();
                v40 = v54;
                v41 = v53;
                v37 = _mm_load_si128(&v52);
                v42 = v51.m128i_i64[0];
              }
              v42 += 128;
              v41 += 16;
              v34 = v43-- == 0;
            }
            while ( !v34 );
          }
          v51 = v37;
          qfree();
          v50 = v55;
          *(_QWORD *)(a1 + 120) = v11;
          v9 = *(_QWORD *)(a1 + 128);
          v12 = _mm_load_si128(&v51);
          *(_QWORD *)(a1 + 136) = v50;
        }
        if ( v9 < v10 )
        {
          do
          {
            v18 = v9++;
            v19 = &v11[16 * v18];
            *v19 = nullptr;
            *((_DWORD *)v19 + 2) = 0;
            v19[4] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v19 + 10) = -1;
            v19[6] = (__int64 (__fastcall *)())off_4D6430;
            v19[7] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v19 + 16) = -1;
            v19[11] = (__int64 (__fastcall *)())-1LL;
            v19[12] = nullptr;
            v19[15] = nullptr;
            *((__m128i *)v19 + 1) = v12;
            *(_OWORD *)(v19 + 9) = -1;
            *(_OWORD *)(v19 + 13) = 0;
            v11 = *(__int64 (__fastcall ***)())(a1 + 120);
          }
          while ( v10 != v9 );
        }
      }
      *(_QWORD *)(a1 + 128) = v10;
    }
    v9 = v10;
  }
  v16 = &v11[16 * v9];
  while ( v16 != v11 )
  {
    v17 = (__int64)v11;
    v11 += 16;
    sub_7E830(v17, a2, v6);
  }
  if ( (unsigned __int8)sub_7E830(a1 + 144, a2, v6) && (v4 = sub_7E830(a1 + 272, a2, v6), (_BYTE)v4) )
  {
    if ( *(_QWORD *)(a1 + 400) )
    {
      *(_QWORD *)(a1 + 408) = 0;
      qfree();
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 416) = 0;
    }
    if ( *(_QWORD *)(a1 + 424) )
    {
      *(_QWORD *)(a1 + 432) = 0;
      qfree();
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 440) = 0;
    }
    clear_tinfo_t();
    clear_tinfo_t();
    *(_DWORD *)(a1 + 464) = sub_7C760(a2);
    *(_BYTE *)(a1 + 468) = (unsigned __int8)sub_7C740(a2) != 0;
  }
  else
  {
    return 0;
  }
  return v4;
}

