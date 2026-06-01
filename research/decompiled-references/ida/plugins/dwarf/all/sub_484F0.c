unsigned __int64 __fastcall sub_484F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int64 v6; // rbp
  signed __int64 v7; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 *v12; // r11
  __int64 v13; // r14
  size_t v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  char v20; // bl
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int64 v23; // r14
  __int64 v24; // rax
  __m128i v25; // xmm1
  __int64 v26; // r13
  char v27; // bp
  __m128i v28; // xmm2
  __int64 v29; // rbx
  __int64 v30; // rax
  __m128i v31; // xmm2
  __int64 v32; // rdi
  __int64 v33; // rdi
  __m128i v34; // xmm4
  __int64 v35; // rax
  void *v37; // rax
  __m128i v38; // [rsp+0h] [rbp-158h] BYREF
  __m128i v39; // [rsp+10h] [rbp-148h] BYREF
  __m128i v40; // [rsp+20h] [rbp-138h] BYREF
  __int64 v41; // [rsp+30h] [rbp-128h]
  __int64 v42; // [rsp+38h] [rbp-120h]
  __m128i v43; // [rsp+40h] [rbp-118h] BYREF
  void *v44; // [rsp+50h] [rbp-108h]
  __int128 v45; // [rsp+58h] [rbp-100h]
  __int64 v46; // [rsp+68h] [rbp-F0h]
  __m128i v47; // [rsp+70h] [rbp-E8h]
  __int64 v48; // [rsp+80h] [rbp-D8h]
  char v49; // [rsp+88h] [rbp-D0h]
  __int64 v50; // [rsp+90h] [rbp-C8h]
  __m128i v51; // [rsp+98h] [rbp-C0h]
  __m128i v52; // [rsp+B0h] [rbp-A8h] BYREF
  void *v53; // [rsp+C0h] [rbp-98h]
  __int128 v54; // [rsp+C8h] [rbp-90h]
  __int64 v55; // [rsp+D8h] [rbp-80h]
  __m128i v56; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-68h]
  char v58; // [rsp+F8h] [rbp-60h]
  __int64 v59; // [rsp+100h] [rbp-58h]
  __m128i v60; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+118h] [rbp-40h]

  v42 = a3;
  v38.m128i_i64[0] = a6;
  v61 = __readfsqword(0x28u);
  if ( a4 )
  {
    v6 = a5;
    if ( a5 )
    {
      v7 = a4;
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        v44 = nullptr;
        v43 = _mm_loadu_si128((const __m128i *)a1);
        v45 = 0;
        v14 = *(_QWORD *)(a1 + 24);
        if ( v14 )
        {
          v37 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 24));
          *((_QWORD *)&v45 + 1) = v14;
          v44 = v37;
          memcpy(v37, *(const void **)(a1 + 16), v14);
          *(_QWORD *)&v45 = v14;
        }
        v46 = *(_QWORD *)(a1 + 40);
        v15 = *(_QWORD *)(a1 + 64);
        v47 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v48 = v15;
        LOBYTE(v15) = *(_BYTE *)(a1 + 72);
        v51 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        v49 = v15;
        v50 = *(_QWORD *)(a1 + 80);
        v53 = nullptr;
        v52 = _mm_loadu_si128((const __m128i *)a2);
        v54 = 0;
        v16 = *(_QWORD *)(a2 + 24);
        if ( v16 )
        {
          v53 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 24));
          *((_QWORD *)&v54 + 1) = v16;
          memcpy(v53, *(const void **)(a2 + 16), v16);
          *(_QWORD *)&v54 = v16;
        }
        v17 = _mm_loadu_si128((const __m128i *)(a2 + 48));
        v55 = *(_QWORD *)(a2 + 40);
        v18 = *(_QWORD *)(a2 + 64);
        v56 = v17;
        v19 = _mm_loadu_si128((const __m128i *)(a2 + 88));
        v57 = v18;
        LOBYTE(v18) = *(_BYTE *)(a2 + 72);
        v60 = v19;
        v58 = v18;
        v59 = *(_QWORD *)(a2 + 80);
        v20 = ((__int64 (__fastcall *)(__m128i *, __m128i *))v38.m128i_i64[0])(&v52, &v43);
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree(v53);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44);
        }
        if ( v20 )
        {
          v21 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          v22 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          v23 = *(_QWORD *)(a1 + 16);
          *(_OWORD *)(a1 + 24) = 0;
          v24 = *(_QWORD *)(a1 + 64);
          v25 = _mm_loadu_si128((const __m128i *)a1);
          v26 = *(_QWORD *)(a1 + 40);
          v38 = v22;
          *(_QWORD *)(a1 + 16) = 0;
          v27 = *(_BYTE *)(a1 + 72);
          v56 = v21;
          v28 = _mm_loadu_si128((const __m128i *)(a1 + 88));
          v29 = *(_QWORD *)(a1 + 80);
          v57 = v24;
          v60 = v28;
          *(_QWORD *)a1 = *(_QWORD *)a2;
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
          v30 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 16) = 0;
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 24));
          *(_OWORD *)(a2 + 24) = 0;
          v32 = *(_QWORD *)(a1 + 16);
          if ( v32 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v41 = v30;
            v40 = v25;
            v39 = v31;
            qfree(v32);
            v30 = v41;
            v25 = _mm_load_si128(&v40);
            v31 = _mm_load_si128(&v39);
          }
          *(_QWORD *)(a1 + 16) = v30;
          *(__m128i *)(a1 + 24) = v31;
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
          *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a2 + 48));
          *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
          *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72);
          *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
          *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
          v33 = *(_QWORD *)(a2 + 16);
          *(__m128i *)a2 = v25;
          if ( v33 )
          {
            *(_QWORD *)(a2 + 24) = 0;
            qfree(v33);
          }
          v34 = _mm_load_si128(&v38);
          *(_QWORD *)(a2 + 16) = v23;
          *(_QWORD *)(a2 + 40) = v26;
          *(__m128i *)(a2 + 24) = v34;
          *(__m128i *)(a2 + 48) = _mm_load_si128(&v56);
          v35 = v57;
          *(_BYTE *)(a2 + 72) = v27;
          *(_QWORD *)(a2 + 64) = v35;
          *(_QWORD *)(a2 + 80) = v29;
          *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v60);
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v6 )
          {
            v13 = v6 / 2;
            v39.m128i_i64[0] = a2
                             + 8
                             * (v6 / 2 + 4 * (v6 / 2 + ((v6 + ((unsigned __int64)v6 >> 63)) & 0xFFFFFFFFFFFFFFFELL)));
            v12 = (__int64 *)sub_48230(
                               a1,
                               a2,
                               v39.m128i_i64[0],
                               (__int64 (__fastcall *)(__m128i *, __m128i *))v38.m128i_i64[0]);
            v10 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v12 - a1) >> 3);
          }
          else
          {
            v10 = v7 / 2;
            v11 = sub_47F70(
                    a2,
                    v42,
                    a1 + 8 * (v7 / 2 + 4 * (v7 / 2 + ((v7 + ((unsigned __int64)v7 >> 63)) & 0xFFFFFFFFFFFFFFFELL))),
                    (__int64 (__fastcall *)(__m128i *, __m128i *))v38.m128i_i64[0]);
            v12 = (__int64 *)(a1
                            + 8 * (v7 / 2 + 4 * (v7 / 2 + ((v7 + ((unsigned __int64)v7 >> 63)) & 0xFFFFFFFFFFFFFFFELL))));
            v39.m128i_i64[0] = v11;
            v13 = 0x4EC4EC4EC4EC4EC5LL * ((v11 - a2) >> 3);
          }
          v40.m128i_i64[0] = (__int64)v12;
          v6 -= v13;
          v41 = sub_295B0(v12, a2, v39.m128i_i64[0]);
          sub_484F0(a1, v40.m128i_i64[0], v41, v10, v13, v38.m128i_i64[0]);
          v7 -= v10;
          if ( !v7 || !v6 )
            break;
          a1 = v41;
          a2 = v39.m128i_i64[0];
          if ( v7 + v6 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
  return v61 - __readfsqword(0x28u);
}

