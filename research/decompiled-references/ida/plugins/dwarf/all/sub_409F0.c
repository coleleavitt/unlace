unsigned __int64 __fastcall sub_409F0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  char v7; // al
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  char v11; // cl
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i *v14; // r15
  __int64 v15; // rdx
  int v16; // eax
  __m128i v17; // xmm0
  int v18; // eax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rdi
  __m128i *v23; // r14
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int32 v30; // ecx
  __m128i v31; // xmm0
  __int32 v32; // ecx
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // rbp
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __int64 v39; // rbp
  __m128i v40; // xmm0
  __int64 *v41; // r14
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v47; // xmm0
  __int64 *v48; // r15
  int v49; // eax
  __m128i v50; // xmm0
  int v51; // eax
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r14
  __m128i v56; // xmm0
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r14
  __m128i v60; // xmm0
  int v61; // eax
  __m128i v62; // xmm0
  int v63; // eax
  __m128i v64; // xmm0
  int v65; // eax
  __m128i v66; // xmm0
  _QWORD *v67; // rax
  __int64 v68; // rdi
  __int64 v69; // r15
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 v72; // r15
  __m128i v73; // xmm0
  __int64 *v74; // r14
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // rdx
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __m128i v80; // [rsp+0h] [rbp-118h] BYREF
  __m128i v81; // [rsp+10h] [rbp-108h] BYREF
  __int64 *v82; // [rsp+28h] [rbp-F0h]
  __int64 v83; // [rsp+30h] [rbp-E8h]
  __int64 v84; // [rsp+38h] [rbp-E0h]
  __m128i v85; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-C8h]
  __m128i v87; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-B0h]
  __m128i v89; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+80h] [rbp-98h] BYREF
  __m128i v91; // [rsp+88h] [rbp-90h] BYREF
  __m128i v92; // [rsp+98h] [rbp-80h] BYREF
  __m128i v93; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-60h]
  __int64 v95; // [rsp+C0h] [rbp-58h]
  char v96; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v97; // [rsp+D8h] [rbp-40h]

  v84 = a2;
  v97 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 144 )
  {
    v5 = a1 + 208;
    v82 = &v90;
    do
    {
      v6 = v5 - 64;
      v7 = a3(v5 - 64, a1);
      v8 = _mm_loadu_si128((const __m128i *)(v5 - 40));
      v9 = _mm_loadu_si128((const __m128i *)(v5 - 64));
      v10 = _mm_loadu_si128((const __m128i *)(v5 - 16));
      v11 = v7;
      v12 = *(_QWORD *)(v5 - 24);
      v86 = *(_QWORD *)(v5 - 48);
      v85 = v9;
      *(_QWORD *)(v5 - 48) = 0;
      v87 = v8;
      *(_OWORD *)(v5 - 40) = 0;
      v88 = v12;
      *(_QWORD *)(v5 - 24) = 0;
      v89 = v10;
      *(_OWORD *)(v5 - 16) = 0;
      v90 = 0;
      if ( v11 )
      {
        copy_tinfo_t(v82, v5);
        v13 = _mm_loadu_si128((const __m128i *)(v5 + 8));
        v14 = (__m128i *)v5;
        v15 = v6 - a1;
        v94 = *(_QWORD *)(v5 + 56);
        v16 = *(_DWORD *)(v5 + 64);
        v91 = v13;
        v17 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        LODWORD(v95) = v16;
        v18 = *(_DWORD *)(v5 + 68);
        v92 = v17;
        v19 = _mm_loadu_si128((const __m128i *)(v5 + 40));
        HIDWORD(v95) = v18;
        LOBYTE(v18) = *(_BYTE *)(v5 + 72);
        v93 = v19;
        v96 = v18;
        v83 = v5 + 80;
        v20 = 0x8E38E38E38E38E39LL * ((v6 - a1) >> 4);
        if ( v15 > 0 )
        {
          do
          {
            v21 = v14[-13].m128i_i64[0];
            v22 = v14[-3].m128i_i64[0];
            v23 = v14;
            v24 = _mm_loadu_si128((__m128i *)((char *)v14 - 184));
            *(__m128i *)((char *)&v14[-12] + 8) = 0;
            v14[-4].m128i_i64[0] = v21;
            v14[-4].m128i_i64[1] = v14[-13].m128i_i64[1];
            v25 = v14[-12].m128i_i64[0];
            v14[-12].m128i_i64[0] = 0;
            if ( v22 )
            {
              v14[-3].m128i_i64[1] = 0;
              v80.m128i_i64[0] = v25;
              v81 = v24;
              qfree(v22);
              v24 = _mm_load_si128(&v81);
              v25 = v80.m128i_i64[0];
            }
            v26 = v14[-2].m128i_i64[1];
            v14[-3].m128i_i64[0] = v25;
            *(__m128i *)((char *)v14 - 40) = v24;
            v27 = v14[-11].m128i_i64[1];
            v28 = _mm_loadu_si128(v14 - 10);
            v14[-11].m128i_i64[1] = 0;
            v14[-10] = 0;
            if ( v26 )
            {
              v14[-1].m128i_i64[0] = 0;
              v80.m128i_i64[0] = v27;
              v81 = v28;
              qfree(v26);
              v28 = _mm_load_si128(&v81);
              v27 = v80.m128i_i64[0];
            }
            v14[-2].m128i_i64[1] = v27;
            v14 -= 9;
            v14[8] = v28;
            copy_tinfo_t(v23, v14);
            v29 = _mm_loadu_si128((__m128i *)((char *)v23 - 136));
            v23[3].m128i_i32[2] = v23[-6].m128i_i32[2];
            v30 = v23[-5].m128i_i32[0];
            *(__m128i *)((char *)v23 + 8) = v29;
            v31 = _mm_loadu_si128((__m128i *)((char *)v23 - 120));
            v23[4].m128i_i32[0] = v30;
            v32 = v23[-5].m128i_i32[1];
            *(__m128i *)((char *)v23 + 24) = v31;
            v33 = _mm_loadu_si128((__m128i *)((char *)v23 - 104));
            v23[4].m128i_i32[1] = v32;
            LOBYTE(v32) = v23[-5].m128i_i8[8];
            *(__m128i *)((char *)v23 + 40) = v33;
            v23[4].m128i_i8[8] = v32;
            --v20;
          }
          while ( v20 );
        }
        v34 = _mm_load_si128(&v85);
        v35 = *(_QWORD *)(a1 + 16);
        v36 = v86;
        v86 = 0;
        *(__m128i *)a1 = v34;
        v37 = _mm_loadu_si128(&v87);
        v87 = 0;
        if ( v35 )
        {
          *(_QWORD *)(a1 + 24) = 0;
          v80 = v37;
          qfree(v35);
          v37 = _mm_load_si128(&v80);
        }
        v38 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 16) = v36;
        *(__m128i *)(a1 + 24) = v37;
        v39 = v88;
        v40 = _mm_load_si128(&v89);
        v88 = 0;
        v89 = 0;
        if ( v38 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          v80 = v40;
          qfree(v38);
          v40 = _mm_load_si128(&v80);
        }
        v41 = v82;
        *(_QWORD *)(a1 + 40) = v39;
        *(__m128i *)(a1 + 48) = v40;
        copy_tinfo_t(a1 + 64, v41);
        v42 = _mm_loadu_si128(&v91);
        *(_DWORD *)(a1 + 120) = v94;
        v43 = v95;
        *(__m128i *)(a1 + 72) = v42;
        v44 = _mm_loadu_si128(&v92);
        *(_QWORD *)(a1 + 128) = v43;
        LOBYTE(v43) = v96;
        *(__m128i *)(a1 + 88) = v44;
        v45 = _mm_loadu_si128(&v93);
        *(_BYTE *)(a1 + 136) = v43;
        *(__m128i *)(a1 + 104) = v45;
        clear_tinfo_t(v41);
        if ( v88 )
        {
          v89.m128i_i64[0] = 0;
          qfree(v88);
        }
        if ( v86 )
        {
          v87.m128i_i64[0] = 0;
          qfree(v86);
        }
      }
      else
      {
        copy_tinfo_t(v82, v5);
        v47 = _mm_loadu_si128((const __m128i *)(v5 + 8));
        v48 = (__int64 *)(v5 - 208);
        v94 = *(_QWORD *)(v5 + 56);
        v49 = *(_DWORD *)(v5 + 64);
        v91 = v47;
        v50 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        LODWORD(v95) = v49;
        v51 = *(_DWORD *)(v5 + 68);
        v92 = v50;
        v52 = _mm_loadu_si128((const __m128i *)(v5 + 40));
        HIDWORD(v95) = v51;
        LOBYTE(v51) = *(_BYTE *)(v5 + 72);
        v93 = v52;
        v96 = v51;
        while ( (unsigned __int8)a3((__int64)&v85, (__int64)v48) )
        {
          v53 = *v48;
          v54 = v48[20];
          v55 = v48[2];
          v56 = _mm_loadu_si128((const __m128i *)(v48 + 3));
          v48[2] = 0;
          v48[18] = v53;
          v57 = v48[1];
          *(_OWORD *)(v48 + 3) = 0;
          v48[19] = v57;
          if ( v54 )
          {
            v48[21] = 0;
            v80 = v56;
            qfree(v54);
            v56 = _mm_load_si128(&v80);
          }
          v58 = v48[23];
          v48[20] = v55;
          *(__m128i *)(v48 + 21) = v56;
          v59 = v48[5];
          v60 = _mm_loadu_si128((const __m128i *)v48 + 3);
          v48[5] = 0;
          *((_OWORD *)v48 + 3) = 0;
          if ( v58 )
          {
            v48[24] = 0;
            v80 = v60;
            qfree(v58);
            v60 = _mm_load_si128(&v80);
          }
          v48[23] = v59;
          *((__m128i *)v48 + 12) = v60;
          copy_tinfo_t(v48 + 26, v48 + 8);
          v61 = *((_DWORD *)v48 + 30);
          v62 = _mm_loadu_si128((const __m128i *)(v48 + 9));
          v48 -= 18;
          *((_DWORD *)v48 + 102) = v61;
          v63 = *((_DWORD *)v48 + 68);
          *(__m128i *)(v48 + 45) = v62;
          v64 = _mm_loadu_si128((const __m128i *)(v48 + 29));
          *((_DWORD *)v48 + 104) = v63;
          v65 = *((_DWORD *)v48 + 69);
          *(__m128i *)(v48 + 47) = v64;
          v66 = _mm_loadu_si128((const __m128i *)(v48 + 31));
          *((_DWORD *)v48 + 105) = v65;
          LOBYTE(v65) = *((_BYTE *)v48 + 280);
          *(__m128i *)(v48 + 49) = v66;
          *((_BYTE *)v48 + 424) = v65;
        }
        v67 = v48 + 18;
        *((__m128i *)v48 + 9) = _mm_load_si128(&v85);
        v68 = v48[20];
        v69 = v86;
        v86 = 0;
        v70 = _mm_loadu_si128(&v87);
        v87 = 0;
        if ( v68 )
        {
          v67[3] = 0;
          v80.m128i_i64[0] = (__int64)v67;
          v81 = v70;
          qfree(v68);
          v70 = _mm_load_si128(&v81);
          v67 = (_QWORD *)v80.m128i_i64[0];
        }
        v71 = v67[5];
        v67[2] = v69;
        *(__m128i *)(v67 + 3) = v70;
        v72 = v88;
        v73 = _mm_load_si128(&v89);
        v88 = 0;
        v89 = 0;
        if ( v71 )
        {
          v67[6] = 0;
          v80.m128i_i64[0] = (__int64)v67;
          v81 = v73;
          qfree(v71);
          v73 = _mm_load_si128(&v81);
          v67 = (_QWORD *)v80.m128i_i64[0];
        }
        v74 = v82;
        v67[5] = v72;
        *((__m128i *)v67 + 3) = v73;
        v80.m128i_i64[0] = (__int64)v67;
        copy_tinfo_t(v67 + 8, v74);
        v75 = v80.m128i_i64[0];
        v76 = _mm_loadu_si128(&v91);
        *(_DWORD *)(v80.m128i_i64[0] + 120) = v94;
        v77 = v95;
        *(__m128i *)(v75 + 72) = v76;
        v78 = _mm_loadu_si128(&v92);
        *(_QWORD *)(v75 + 128) = v77;
        LOBYTE(v77) = v96;
        *(__m128i *)(v75 + 88) = v78;
        v79 = _mm_loadu_si128(&v93);
        *(_BYTE *)(v75 + 136) = v77;
        *(__m128i *)(v75 + 104) = v79;
        clear_tinfo_t(v74);
        if ( v88 )
        {
          v89.m128i_i64[0] = 0;
          qfree(v88);
        }
        if ( v86 )
        {
          v87.m128i_i64[0] = 0;
          qfree(v86);
        }
        v83 = v5 + 80;
      }
      v5 += 144;
    }
    while ( v84 != v83 );
  }
  return v97 - __readfsqword(0x28u);
}

