__int64 __fastcall sub_141C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  size_t *v17; // rdi
  __int64 v18; // r14
  __m128i v19; // xmm0
  __int64 *v20; // r13
  __int64 v21; // rdi
  __int64 v22; // r14
  __m128i v23; // xmm0
  __int64 v24; // rdi
  unsigned __int64 v25; // r14
  __int64 *v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r14
  __m128i *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdx
  __m128i *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i *v39; // rsi
  const __m128i *v40; // rdi
  __int64 v41; // rcx
  __m128i si128; // xmm0
  bool v43; // cf
  __m128i *v44; // rsi
  __int64 v45; // r15
  __int32 v46; // r8d
  __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r15
  __int32 v52; // r11d
  __int32 v53; // r9d
  __int8 v54; // r10
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdi
  __m128i *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __m128i *v65; // rsi
  const __m128i *v66; // rdi
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __m128i *v69; // rsi
  __int64 v70; // rax
  unsigned __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __m128i v77; // [rsp+0h] [rbp-188h] BYREF
  __int64 *v78; // [rsp+10h] [rbp-178h]
  __m128i *v79; // [rsp+18h] [rbp-170h]
  __int64 v80; // [rsp+20h] [rbp-168h]
  __int64 v81; // [rsp+28h] [rbp-160h]
  __int64 v82; // [rsp+30h] [rbp-158h] BYREF
  __int64 v83; // [rsp+38h] [rbp-150h] BYREF
  __m128i v84; // [rsp+40h] [rbp-148h] BYREF
  __int64 v85; // [rsp+50h] [rbp-138h] BYREF
  __m128i v86; // [rsp+58h] [rbp-130h] BYREF
  __int64 v87; // [rsp+68h] [rbp-120h] BYREF
  __m128i v88; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v89[24]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v90; // [rsp+98h] [rbp-F0h]
  __m128i v91; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v92; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v93; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v94; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v95[2]; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v96; // [rsp+100h] [rbp-88h] BYREF
  __m128i v97; // [rsp+110h] [rbp-78h] BYREF
  __m128i v98; // [rsp+120h] [rbp-68h] BYREF
  __m128i v99; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v100; // [rsp+148h] [rbp-40h]

  v3 = *a2;
  v100 = __readfsqword(0x28u);
  v82 = 0;
  if ( netnode_supval(v3, 0, &v82, 8, 83) != 8 )
    sub_13740((__int64)"couldn't get magic number from node");
  if ( v82 == 6386541 )
  {
    sub_9C70((__int64)"Retrieving netnode data...");
    v6 = netnode_supfirst(*a2, 102);
    v78 = &v83;
    v79 = &v84;
    if ( v6 == -1 )
    {
LABEL_34:
      LOBYTE(v78) = 1;
    }
    else
    {
      while ( 1 )
      {
        v7 = *a2;
        v83 = 16;
        if ( !netnode_getblob(v7, v79, v78, v6, 358) || v83 != 16 )
          break;
        v8 = *a2;
        v85 = 0;
        v87 = 0;
        v77.m128i_i64[0] = (__int64)&v85;
        v86 = 0;
        v88 = 0;
        if ( !netnode_qgetblob(v8, &v85, 8, v6, 368) && v85 )
        {
          v86.m128i_i64[0] = 0;
          qfree(v85);
          v85 = 0;
          v86.m128i_i64[1] = 0;
        }
        if ( !netnode_qgetblob(*a2, &v87, 8, v6, 370) && v87 )
        {
          v88.m128i_i64[0] = 0;
          qfree(v87);
          v87 = 0;
          v88.m128i_i64[1] = 0;
        }
        v9 = v84.m128i_u32[2];
        v10 = *(_QWORD *)(a1 + 80);
        v11 = (unsigned int)(v84.m128i_i32[2] + 1);
        if ( v10 < v11 )
        {
          v12 = *(_QWORD *)(a1 + 72);
          if ( *(_QWORD *)(a1 + 88) < v11 )
          {
            v76 = qvector_reserve(a1 + 72, v12, (unsigned int)(v84.m128i_i32[2] + 1), 16);
            *(_QWORD *)(a1 + 72) = v76;
            v10 = *(_QWORD *)(a1 + 80);
            v12 = v76;
          }
          memset((void *)(v12 + 16 * v10), 0, 16 * (v11 - v10));
          v15 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 80) = v11;
          if ( v11 != v15 )
          {
            memset(v89, 0, sizeof(v89));
            v90 = 0;
            v91 = 0;
            if ( v11 < v15 )
            {
              v25 = v11;
              do
              {
                v26 = (__int64 *)(*(_QWORD *)(a1 + 48) + 48 * v25);
                v27 = v26[3];
                if ( v27 )
                {
                  v26[4] = 0;
                  v77.m128i_i64[0] = v15;
                  qfree(v27);
                  v15 = v77.m128i_i64[0];
                }
                v28 = *v26;
                if ( *v26 )
                {
                  v26[1] = 0;
                  v77.m128i_i64[0] = v15;
                  qfree(v28);
                  v15 = v77.m128i_i64[0];
                }
                ++v25;
              }
              while ( v25 < v15 );
              *(_QWORD *)(a1 + 56) = v11;
            }
            else
            {
              v16 = *(_QWORD *)(a1 + 48);
              v17 = (size_t *)(a1 + 48);
              if ( (unsigned __int64)v89 < v16 || (unsigned __int64)v89 >= 48LL * *(_QWORD *)(a1 + 64) + v16 )
              {
                sub_13FC0(v17, (const void *)v11, (__int64)v89, v13, v14);
              }
              else
              {
                memset(v95, 0, sizeof(v95));
                v96 = 0;
                sub_13FC0(v17, (const void *)v11, (__int64)v95, v13, v14);
                if ( v95[1].m128i_i64[1] )
                {
                  v96.m128i_i64[0] = 0;
                  qfree(v95[1].m128i_i64[1]);
                }
                if ( v95[0].m128i_i64[0] )
                {
                  v95[0].m128i_i64[1] = 0;
                  qfree(v95[0].m128i_i64[0]);
                }
              }
            }
            if ( v90 )
            {
              v91.m128i_i64[0] = 0;
              qfree(v90);
            }
            if ( *(_QWORD *)v89 )
            {
              *(_QWORD *)&v89[8] = 0;
              qfree(*(_QWORD *)v89);
            }
          }
          v9 = v84.m128i_u32[2];
        }
        *(__m128i *)(*(_QWORD *)(a1 + 72) + 16 * v9) = _mm_load_si128(&v84);
        v18 = v85;
        v85 = 0;
        v19 = _mm_loadu_si128(&v86);
        v86 = 0;
        v20 = (__int64 *)(*(_QWORD *)(a1 + 48) + 48LL * v84.m128i_u32[2]);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          v77 = v19;
          qfree(v21);
          v19 = _mm_load_si128(&v77);
        }
        *v20 = v18;
        *(__m128i *)(v20 + 1) = v19;
        v22 = v87;
        v23 = _mm_load_si128(&v88);
        v87 = 0;
        v88 = 0;
        v24 = v20[3];
        if ( v24 )
        {
          v20[4] = 0;
          v77 = v23;
          qfree(v24);
          v23 = _mm_load_si128(&v77);
        }
        v20[3] = v22;
        *((__m128i *)v20 + 2) = v23;
        if ( v87 )
        {
          v88.m128i_i64[0] = 0;
          qfree(v87);
        }
        if ( v85 )
        {
          v86.m128i_i64[0] = 0;
          qfree(v85);
        }
        v6 = netnode_supnext(*a2, v6, 102);
        if ( v6 == -1 )
          goto LABEL_34;
      }
      sub_13740((__int64)"couldn't retrieve func finfo 0%llx", v6);
      LOBYTE(v78) = 0;
    }
    v29 = netnode_supfirst(*a2, 103);
    if ( v29 != -1 )
    {
      v77.m128i_i64[0] = (__int64)&v85;
      v80 = a1 + 96;
      while ( 1 )
      {
        v31 = *a2;
        v92.m128i_i8[0] = 0;
        v94.m128i_i8[0] = 0;
        v85 = 96;
        if ( !netnode_getblob(v31, v89, v77.m128i_i64[0], v29, 103) || v85 != 96 )
          break;
        v32 = *(_QWORD *)(a1 + 104);
        v33 = *(_QWORD *)(a1 + 96);
        v34 = *(_QWORD *)(a1 + 112);
        v35 = v32 + 1;
        if ( (unsigned __int64)v89 < v33 || (unsigned __int64)v89 >= v33 + 96 * v34 )
        {
          if ( v34 < v35 )
          {
            v37 = qvector_reserve(v80, 0, v35, 96);
            v38 = *(_QWORD *)(a1 + 104);
            v39 = *(__m128i **)(a1 + 112);
            *(_QWORD *)(a1 + 112) = v34;
            v40 = *(const __m128i **)(a1 + 96);
            v33 = v37;
            v41 = v38 - 1;
            if ( v41 >= 0 )
            {
              do
              {
                si128 = _mm_load_si128(v40);
                v37 += 96;
                v40 += 6;
                *(__m128i *)(v37 - 96) = si128;
                *(__m128i *)(v37 - 80) = _mm_load_si128(v40 - 5);
                *(__m128i *)(v37 - 64) = _mm_load_si128(v40 - 4);
                *(__m128i *)(v37 - 48) = _mm_load_si128(v40 - 3);
                *(__m128i *)(v37 - 32) = _mm_load_si128(v40 - 2);
                *(__m128i *)(v37 - 16) = _mm_load_si128(v40 - 1);
                v43 = v41-- == 0;
              }
              while ( !v43 );
              v40 = *(const __m128i **)(a1 + 96);
            }
            v79 = v39;
            qfree(v40);
            v44 = v79;
            *(_QWORD *)(a1 + 96) = v33;
            v32 = *(_QWORD *)(a1 + 104);
            *(_QWORD *)(a1 + 112) = v44;
          }
          v36 = (__m128i *)(v33 + 96 * v32);
          *v36 = _mm_load_si128((const __m128i *)v89);
          v36[1] = _mm_load_si128((const __m128i *)&v89[16]);
          v36[2] = _mm_load_si128(&v91);
          v36[3] = _mm_load_si128(&v92);
          v36[4] = _mm_load_si128(&v93);
          v36[5] = _mm_load_si128(&v94);
        }
        else
        {
          v95[0] = _mm_load_si128((const __m128i *)v89);
          v95[1] = _mm_load_si128((const __m128i *)&v89[16]);
          v96 = _mm_load_si128(&v91);
          v97 = _mm_load_si128(&v92);
          v98 = _mm_load_si128(&v93);
          v99 = _mm_load_si128(&v94);
          if ( v34 < v35 )
          {
            v63 = qvector_reserve(v80, 0, v35, 96);
            v64 = *(_QWORD *)(a1 + 104);
            v65 = *(__m128i **)(a1 + 112);
            *(_QWORD *)(a1 + 112) = v34;
            v66 = *(const __m128i **)(a1 + 96);
            v33 = v63;
            v67 = v64 - 1;
            if ( v67 >= 0 )
            {
              do
              {
                v68 = _mm_load_si128(v66);
                v63 += 96;
                v66 += 6;
                *(__m128i *)(v63 - 96) = v68;
                *(__m128i *)(v63 - 80) = _mm_load_si128(v66 - 5);
                *(__m128i *)(v63 - 64) = _mm_load_si128(v66 - 4);
                *(__m128i *)(v63 - 48) = _mm_load_si128(v66 - 3);
                *(__m128i *)(v63 - 32) = _mm_load_si128(v66 - 2);
                *(__m128i *)(v63 - 16) = _mm_load_si128(v66 - 1);
                v43 = v67-- == 0;
              }
              while ( !v43 );
              v66 = *(const __m128i **)(a1 + 96);
            }
            v79 = v65;
            qfree(v66);
            v69 = v79;
            *(_QWORD *)(a1 + 96) = v33;
            v32 = *(_QWORD *)(a1 + 104);
            *(_QWORD *)(a1 + 112) = v69;
          }
          v30 = (__m128i *)(v33 + 96 * v32);
          *v30 = _mm_load_si128(v95);
          v30[1] = _mm_load_si128(&v95[1]);
          v30[2] = _mm_load_si128(&v96);
          v30[3] = _mm_load_si128(&v97);
          v30[4] = _mm_load_si128(&v98);
          v30[5] = _mm_load_si128(&v99);
        }
        ++*(_QWORD *)(a1 + 104);
        v29 = netnode_supnext(*a2, v29, 103);
        if ( v29 == -1 )
          goto LABEL_66;
      }
      sub_13740((__int64)"couldn't retrieve global finfo %llu", v29);
      LOBYTE(v78) = 0;
    }
LABEL_66:
    v45 = netnode_supfirst(*a2, 105);
    if ( v45 != -1 )
    {
      while ( 1 )
      {
        v47 = *a2;
        v95[0].m128i_i64[0] = 4;
        if ( !netnode_getblob(v47, v89, v95, v45, 105) || v95[0].m128i_i64[0] != 4 )
          break;
        v72 = *(_QWORD *)(a1 + 128);
        v71 = *(_QWORD *)(a1 + 120);
        v48 = *(_QWORD *)(a1 + 136);
        v49 = v72 + 1;
        if ( (unsigned __int64)v89 < v71 || (unsigned __int64)v89 >= v71 + 4 * v48 )
        {
          if ( v48 < v49 )
          {
            v50 = qvector_reserve(a1 + 120, v71, v72 + 1, 4);
            *(_QWORD *)(a1 + 120) = v50;
            v71 = v50;
            v72 = *(_QWORD *)(a1 + 128);
          }
          *(_DWORD *)(v71 + 4 * v72) = *(_DWORD *)v89;
        }
        else
        {
          v46 = *(_DWORD *)v89;
          if ( v48 < v49 )
          {
            v77.m128i_i32[0] = *(_DWORD *)v89;
            v70 = qvector_reserve(a1 + 120, v71, v72 + 1, 4);
            v46 = v77.m128i_i32[0];
            *(_QWORD *)(a1 + 120) = v70;
            v71 = v70;
            v72 = *(_QWORD *)(a1 + 128);
          }
          *(_DWORD *)(v71 + 4 * v72) = v46;
        }
        ++*(_QWORD *)(a1 + 128);
        v45 = netnode_supnext(*a2, v45, 105);
        if ( v45 == -1 )
          goto LABEL_80;
      }
      sub_13740((__int64)"couldn't retrieve import finfo %llu", v45);
      LOBYTE(v78) = 0;
    }
LABEL_80:
    v51 = netnode_supfirst(*a2, 101);
    if ( v51 != -1 )
    {
      while ( 1 )
      {
        v57 = *a2;
        *(_QWORD *)v89 = 24;
        if ( !netnode_getblob(v57, v95, v89, v51, 101) || *(_QWORD *)v89 != 24 )
          break;
        v75 = *(_QWORD *)(a1 + 152);
        v74 = *(_QWORD *)(a1 + 144);
        v58 = *(_QWORD *)(a1 + 160);
        v59 = v75 + 1;
        if ( (unsigned __int64)v95 < v74 || (unsigned __int64)v95 >= v74 + 24 * v58 )
        {
          if ( v58 < v59 )
          {
            v61 = qvector_reserve(a1 + 144, v74, v75 + 1, 24);
            *(_QWORD *)(a1 + 144) = v61;
            v74 = v61;
            v75 = *(_QWORD *)(a1 + 152);
          }
          v60 = (__m128i *)(v74 + 24 * v75);
          *v60 = _mm_load_si128(v95);
          v60[1].m128i_i64[0] = v95[1].m128i_i64[0];
        }
        else
        {
          v52 = v95[0].m128i_i32[0];
          v53 = v95[0].m128i_i32[2];
          v54 = v95[0].m128i_i8[4];
          v55 = v95[1].m128i_i64[0];
          if ( v58 < v59 )
          {
            v81 = v95[1].m128i_i64[0];
            LODWORD(v80) = v95[0].m128i_i32[2];
            LOBYTE(v79) = v95[0].m128i_i8[4];
            v77.m128i_i32[0] = v95[0].m128i_i32[0];
            v73 = qvector_reserve(a1 + 144, v74, v75 + 1, 24);
            v55 = v81;
            v53 = v80;
            *(_QWORD *)(a1 + 144) = v73;
            v74 = v73;
            v54 = (char)v79;
            v75 = *(_QWORD *)(a1 + 152);
            v52 = v77.m128i_i32[0];
          }
          v56 = v74 + 24 * v75;
          *(_DWORD *)v56 = v52;
          *(_BYTE *)(v56 + 4) = v54;
          *(_DWORD *)(v56 + 8) = v53;
          *(_QWORD *)(v56 + 16) = v55;
        }
        ++*(_QWORD *)(a1 + 152);
        v51 = netnode_supnext(*a2, v51, 101);
        if ( v51 == -1 )
          goto LABEL_94;
      }
      sub_13740((__int64)"couldn't retrieve export finfo %llu", v51);
      LOBYTE(v78) = 0;
    }
LABEL_94:
    v62 = netnode_altval(*a2, 0, 115);
    if ( v62 )
      *(_DWORD *)(a1 + 192) = v62;
  }
  else
  {
    sub_9C70((__int64)"WASM netnode is not ready yet...\n");
    LOBYTE(v78) = 0;
  }
  return (unsigned __int8)v78;
}

