unsigned __int64 __fastcall sub_46960(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // r12
  __int64 v10; // r13
  __m128i *v11; // rbx
  const __m128i *v12; // rax
  __int64 *v13; // r11
  __int64 v14; // r10
  __m128i *v15; // rbp
  __int64 v16; // r15
  size_t v17; // rbx
  size_t v18; // rbx
  __int32 v19; // eax
  char v20; // al
  __int64 v21; // r11
  char v22; // bl
  __m128i v23; // xmm3
  __int64 v24; // rbp
  __int64 v25; // rax
  __m128i v26; // xmm1
  int v27; // ebx
  __int64 v28; // r12
  __m128i v29; // xmm2
  __int64 v30; // rdi
  __int64 v31; // rdi
  __m128i v32; // xmm4
  const __m128i *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  __m128i v37; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v38; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v39; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-B0h]
  __m128i v41; // [rsp+40h] [rbp-A8h] BYREF
  void *v42; // [rsp+50h] [rbp-98h]
  __int128 v43; // [rsp+58h] [rbp-90h]
  int v44; // [rsp+68h] [rbp-80h]
  __m128i v45; // [rsp+70h] [rbp-78h] BYREF
  void *v46; // [rsp+80h] [rbp-68h]
  __int128 v47; // [rsp+88h] [rbp-60h]
  __int32 v48; // [rsp+98h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v40 = a3;
  v37.m128i_i64[0] = a6;
  v49 = __readfsqword(0x28u);
  if ( a4 )
  {
    v6 = a5;
    if ( a5 )
    {
      v7 = a4;
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        v42 = nullptr;
        v41 = _mm_loadu_si128((const __m128i *)a1);
        v43 = 0;
        v17 = *(_QWORD *)(a1 + 24);
        if ( v17 )
        {
          v36 = *(_QWORD *)(a1 + 24);
          v38.m128i_i64[0] = (__int64)a2;
          *((_QWORD *)&v43 + 1) = v17;
          v42 = (void *)qalloc_or_throw(v36);
          memcpy(v42, *(const void **)(a1 + 16), v17);
          *(_QWORD *)&v43 = v17;
          a2 = (const __m128i *)v38.m128i_i64[0];
        }
        v44 = *(_DWORD *)(a1 + 40);
        v46 = nullptr;
        v45 = _mm_loadu_si128(a2);
        v47 = 0;
        v18 = a2[1].m128i_u64[1];
        if ( v18 )
        {
          v35 = a2[1].m128i_i64[1];
          v38.m128i_i64[0] = (__int64)a2;
          v46 = (void *)qalloc_or_throw(v35);
          *((_QWORD *)&v47 + 1) = v18;
          memcpy(v46, *(const void **)(v38.m128i_i64[0] + 16), v18);
          *(_QWORD *)&v47 = v18;
          a2 = (const __m128i *)v38.m128i_i64[0];
        }
        v19 = a2[2].m128i_i32[2];
        v38.m128i_i64[0] = (__int64)a2;
        v48 = v19;
        v20 = ((__int64 (__fastcall *)(__m128i *, __m128i *))v37.m128i_i64[0])(&v45, &v41);
        v21 = v38.m128i_i64[0];
        v22 = v20;
        if ( v46 )
        {
          v37.m128i_i64[0] = v38.m128i_i64[0];
          *(_QWORD *)&v47 = 0;
          qfree(v46);
          v21 = v38.m128i_i64[0];
        }
        if ( v42 )
        {
          v37.m128i_i64[0] = v21;
          *(_QWORD *)&v43 = 0;
          qfree(v42);
          v21 = v37.m128i_i64[0];
        }
        if ( v22 )
        {
          v23 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          v24 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 16) = 0;
          *(_OWORD *)(a1 + 24) = 0;
          v25 = *(_QWORD *)v21;
          v26 = _mm_loadu_si128((const __m128i *)a1);
          v27 = *(_DWORD *)(a1 + 40);
          v37 = v23;
          *(_QWORD *)a1 = v25;
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(v21 + 8);
          v28 = *(_QWORD *)(v21 + 16);
          v29 = _mm_loadu_si128((const __m128i *)(v21 + 24));
          *(_QWORD *)(v21 + 16) = 0;
          *(_OWORD *)(v21 + 24) = 0;
          v30 = *(_QWORD *)(a1 + 16);
          if ( v30 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v40 = v21;
            v39 = v26;
            v38 = v29;
            qfree(v30);
            v21 = v40;
            v26 = _mm_load_si128(&v39);
            v29 = _mm_load_si128(&v38);
          }
          *(_QWORD *)(a1 + 16) = v28;
          *(__m128i *)(a1 + 24) = v29;
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(v21 + 40);
          v31 = *(_QWORD *)(v21 + 16);
          *(__m128i *)v21 = v26;
          if ( v31 )
          {
            *(_QWORD *)(v21 + 24) = 0;
            v38.m128i_i64[0] = v21;
            qfree(v31);
            v21 = v38.m128i_i64[0];
          }
          v32 = _mm_load_si128(&v37);
          *(_QWORD *)(v21 + 16) = v24;
          *(_DWORD *)(v21 + 40) = v27;
          *(__m128i *)(v21 + 24) = v32;
        }
      }
      else
      {
        while ( 1 )
        {
          v39.m128i_i64[0] = v6;
          v38.m128i_i64[0] = (__int64)a2;
          if ( v7 <= v6 )
          {
            v16 = v6 / 2;
            v15 = (__m128i *)&a2[v6 / 2 + ((v6 + ((unsigned __int64)v6 >> 63)) & 0xFFFFFFFFFFFFFFFELL)];
            v34 = sub_46740(
                    (const __m128i *)a1,
                    (__int64)a2,
                    v15,
                    (__int64 (__fastcall *)(__m128i *, __m128i *))v37.m128i_i64[0]);
            v14 = v39.m128i_i64[0];
            v13 = (__int64 *)v38.m128i_i64[0];
            v11 = (__m128i *)v34;
            v10 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v34->m128i_i64 - a1) >> 4);
          }
          else
          {
            v10 = v7 / 2;
            v11 = (__m128i *)(a1 + 16 * (v7 / 2 + ((v7 + ((unsigned __int64)v7 >> 63)) & 0xFFFFFFFFFFFFFFFELL)));
            v12 = sub_46520(a2, v40, v11, (__int64 (__fastcall *)(__m128i *, __m128i *))v37.m128i_i64[0]);
            v13 = (__int64 *)v38.m128i_i64[0];
            v14 = v39.m128i_i64[0];
            v15 = (__m128i *)v12;
            v16 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v12->m128i_i64 - v38.m128i_i64[0]) >> 4);
          }
          v38.m128i_i64[0] = v14;
          v39.m128i_i64[0] = (__int64)sub_2A0D0(v11->m128i_i64, v13, v15->m128i_i64);
          sub_46960(a1, v11, v39.m128i_i64[0], v10, v16, v37.m128i_i64[0]);
          v6 = v38.m128i_i64[0] - v16;
          v7 -= v10;
          if ( !v7 || !v6 )
            break;
          a1 = v39.m128i_i64[0];
          a2 = v15;
          if ( v7 + v6 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
  return v49 - __readfsqword(0x28u);
}

