__int64 __fastcall sub_391E0(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  volatile signed __int32 *v4; // r15
  unsigned __int64 *v5; // rax
  unsigned int v7; // edx
  unsigned __int64 v8; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // r11
  int v12; // r13d
  volatile signed __int32 *v13; // rbp
  int v14; // r9d
  volatile signed __int32 *v15; // r12
  int v16; // r8d
  unsigned __int64 v17; // r15
  int v18; // r10d
  __int64 v19; // rdi
  unsigned __int64 *v20; // rsi
  int v21; // ecx
  unsigned __int64 *v22; // rdx
  int v23; // eax
  int v24; // r10d
  unsigned __int64 *v25; // rax
  int v26; // edx
  int i; // ecx
  int v28; // r10d
  int j; // ecx
  int v30; // eax
  __m128 v31; // xmm0
  __m128 v32; // xmm4
  unsigned __int64 v33; // xmm4_8
  __int64 v34; // r15
  __m128i v35; // xmm0
  __int64 v36; // r12
  __m128i v37; // xmm0
  __int64 v38; // rbp
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  volatile signed __int32 *v41; // r14
  volatile signed __int32 *v42; // r13
  volatile signed __int32 *v43; // rdi
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  struct _Unwind_Exception *v48; // rbx
  volatile signed __int32 *v49; // [rsp+8h] [rbp-190h]
  volatile signed __int32 *v50; // [rsp+8h] [rbp-190h]
  volatile signed __int32 *v51; // [rsp+10h] [rbp-188h]
  volatile signed __int32 *v52; // [rsp+10h] [rbp-188h]
  volatile signed __int32 *v53; // [rsp+18h] [rbp-180h]
  volatile signed __int32 *v54; // [rsp+18h] [rbp-180h]
  volatile signed __int32 *v55; // [rsp+20h] [rbp-178h]
  volatile signed __int32 *v56; // [rsp+20h] [rbp-178h]
  volatile signed __int32 *v57; // [rsp+28h] [rbp-170h]
  volatile signed __int32 *v58; // [rsp+28h] [rbp-170h]
  volatile signed __int32 *v59; // [rsp+30h] [rbp-168h]
  volatile signed __int32 *v60; // [rsp+30h] [rbp-168h]
  volatile signed __int32 *v61; // [rsp+38h] [rbp-160h]
  __m128i v62; // [rsp+50h] [rbp-148h] BYREF
  __m128i v63; // [rsp+60h] [rbp-138h] BYREF
  __m128i v64; // [rsp+70h] [rbp-128h] BYREF
  __m128i v65; // [rsp+80h] [rbp-118h] BYREF
  __m128i v66; // [rsp+90h] [rbp-108h] BYREF
  __m128i v67; // [rsp+A0h] [rbp-F8h] BYREF
  __m128 v68; // [rsp+B0h] [rbp-E8h] BYREF
  __m128i v69; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v70; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v71; // [rsp+E0h] [rbp-B8h] BYREF
  __m128i v72; // [rsp+F0h] [rbp-A8h] BYREF
  __m128i v73; // [rsp+100h] [rbp-98h] BYREF
  __m128i v74; // [rsp+110h] [rbp-88h] BYREF
  __m128 v75; // [rsp+120h] [rbp-78h] BYREF
  __m128i v76; // [rsp+130h] [rbp-68h] BYREF
  __m128i v77; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v78; // [rsp+158h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 104) == 4 )
  {
    v5 = *(unsigned __int64 **)(a1 + 56);
    v7 = 0;
    v8 = *v5;
    if ( !*v5 )
    {
      v10 = *(_QWORD *)(a1 + 96);
      v11 = *(_QWORD *)(a1 + 64);
      v12 = *(_DWORD *)(v10 + 24);
      v13 = *(volatile signed __int32 **)(v10 + 32);
      v14 = *(_DWORD *)(v10 + 40);
      v15 = *(volatile signed __int32 **)(v10 + 48);
      v16 = *(_DWORD *)(v10 + 56);
      v49 = *(volatile signed __int32 **)(v10 + 16);
      if ( v11 > 0x40 )
      {
        v48 = (struct _Unwind_Exception *)sub_31CE0();
        if ( v61 )
          sub_1C430(v61);
        if ( v49 )
          sub_1C430(v49);
        if ( v13 )
          sub_1C430(v13);
        if ( v51 )
          sub_1C430(v51);
        if ( v57 )
          sub_1C430(v57);
        if ( v15 )
          sub_1C430(v15);
        if ( v53 )
          sub_1C430(v53);
        if ( v59 )
          sub_1C430(v59);
        if ( v4 )
          sub_1C430(v4);
        if ( v55 )
        {
          sub_1C430(v55);
          sub_1C430(v55);
        }
        if ( v53 )
          sub_1C430(v53);
        if ( v51 )
          sub_1C430(v51);
        _Unwind_Resume(v48);
      }
      v17 = 0;
      if ( v11 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        v19 = *(_QWORD *)(a1 + 56);
        v20 = v5;
        v21 = 0;
        v11 = 0;
        v22 = v5;
        v23 = v18;
        while ( 1 )
        {
          if ( v12 == *((_DWORD *)v20 + 2) && v49 == (volatile signed __int32 *)*v20 )
          {
            v20 += 2;
            v11 |= 1LL << v21;
            v24 = v21 + 1;
            if ( v23 == v21 + 1 )
            {
LABEL_13:
              v25 = v22;
              v17 = 0;
              v26 = v21;
              for ( i = 0; ; i = v28 )
              {
                if ( *((_DWORD *)v25 + 2) == v14 && v13 == (volatile signed __int32 *)*v25 )
                {
                  v25 += 2;
                  v17 |= 1LL << i;
                  v28 = i + 1;
                  if ( i == v26 )
                  {
LABEL_19:
                    for ( j = 0; ; j = v30 )
                    {
                      if ( *(_DWORD *)(v19 + 8) == v16 && *(volatile signed __int32 **)v19 == v15 )
                      {
                        v19 += 16;
                        v8 |= 1LL << j;
                        v30 = j + 1;
                        if ( j == v26 )
                          goto LABEL_25;
                      }
                      else
                      {
                        v30 = j + 1;
                        v19 += 16;
                        if ( j == v26 )
                          goto LABEL_25;
                      }
                    }
                  }
                }
                else
                {
                  v28 = i + 1;
                  v25 += 2;
                  if ( i == v26 )
                    goto LABEL_19;
                }
              }
            }
          }
          else
          {
            v24 = v21 + 1;
            v20 += 2;
            if ( v23 == v21 + 1 )
              goto LABEL_13;
          }
          v21 = v24;
        }
      }
LABEL_25:
      sub_35840(&v62, byte_4E9E0, *(_DWORD *)(a1 + 16), v11);
      v52 = (volatile signed __int32 *)v62.m128i_i64[1];
      sub_35840(&v63, byte_4E9E0, *(_DWORD *)(a1 + 16), v17);
      v54 = (volatile signed __int32 *)v63.m128i_i64[1];
      sub_35840(&v64, byte_4E9E0, *(_DWORD *)(a1 + 16), v8);
      v31 = (__m128)_mm_load_si128(&v64);
      v33 = _mm_movehl_ps(v32, v31).m128_u64[0];
      v75 = v31;
      v56 = (volatile signed __int32 *)v33;
      if ( v33 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v33 + 8), 1u);
        else
          ++*(_DWORD *)(v33 + 8);
      }
      v34 = operator new(0x20u);
      *(_QWORD *)v34 = off_4DA48;
      *(_QWORD *)(v34 + 8) = 0x100000001LL;
      *(_QWORD *)(v34 + 16) = off_4D960;
      *(_QWORD *)(v34 + 24) = v15;
      v74.m128i_i64[0] = v34 + 16;
      v74.m128i_i64[1] = v34;
      sub_38200(&v76, &v74, (const __m128i *)&v75, *(double *)v31.m128_u64, a3, a4);
      v60 = (volatile signed __int32 *)v76.m128i_i64[1];
      v35 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v63), (__m128i)(unsigned __int64)v54);
      v71 = v35;
      if ( v54 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v54 + 2, 1u);
        else
          ++*((_DWORD *)v54 + 2);
      }
      v36 = operator new(0x20u);
      *(_QWORD *)v36 = off_4DA48;
      *(_QWORD *)(v36 + 8) = 0x100000001LL;
      *(_QWORD *)(v36 + 16) = off_4D960;
      *(_QWORD *)(v36 + 24) = v13;
      v70.m128i_i64[0] = v36 + 16;
      v70.m128i_i64[1] = v36;
      sub_38200(&v72, &v70, &v71, *(double *)v35.m128i_i64, a3, a4);
      v58 = (volatile signed __int32 *)v72.m128i_i64[1];
      v37 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v62), (__m128i)(unsigned __int64)v52);
      v66 = v37;
      if ( v52 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v52 + 2, 1u);
        else
          ++*((_DWORD *)v52 + 2);
      }
      v38 = operator new(0x20u);
      *(_QWORD *)v38 = off_4DA48;
      *(_QWORD *)(v38 + 8) = 0x100000001LL;
      *(_QWORD *)(v38 + 16) = off_4D960;
      *(_QWORD *)(v38 + 24) = v49;
      v65.m128i_i64[0] = v38 + 16;
      v65.m128i_i64[1] = v38;
      sub_38200(&v67, &v65, &v66, *(double *)v37.m128i_i64, a3, (__m128)(unsigned __int64)v52);
      v39 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
      v40 = _mm_movehl_ps(a3, v39);
      v50 = (volatile signed __int32 *)v67.m128i_i64[1];
      v68 = v39;
      if ( v40.m128_u64[0] )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v40.m128_u64[0] + 8), 1u);
        else
          ++*(_DWORD *)(v40.m128_u64[0] + 8);
      }
      v67.m128i_i64[1] = (__int64)v50;
      sub_38330(&v69, (const __m128i *)&v68, &v67, *(double *)v39.m128_u64, v40, (__m128)(unsigned __int64)v52);
      v41 = (volatile signed __int32 *)v69.m128i_i64[1];
      v72.m128i_i64[1] = (__int64)v58;
      sub_38330(&v73, &v69, &v72, *(double *)v39.m128_u64, v40, (__m128)(unsigned __int64)v52);
      v42 = (volatile signed __int32 *)v73.m128i_i64[1];
      v76.m128i_i64[1] = (__int64)v60;
      sub_38330(&v77, &v73, &v76, *(double *)v39.m128_u64, v40, (__m128)(unsigned __int64)v52);
      v43 = *(volatile signed __int32 **)(a1 + 88);
      *(__m128i *)(a1 + 80) = _mm_load_si128(&v77);
      if ( v43 )
        sub_1C430(v43);
      if ( v42 )
        sub_1C430(v42);
      if ( v41 )
        sub_1C430(v41);
      if ( v40.m128_u64[0] )
        sub_1C430((volatile signed __int32 *)v40.m128_u64[0]);
      if ( v50 )
        sub_1C430(v50);
      if ( v38 )
        sub_1C430((volatile signed __int32 *)v38);
      if ( v52 )
        sub_1C430(v52);
      if ( v58 )
        sub_1C430(v58);
      if ( v36 )
        sub_1C430((volatile signed __int32 *)v36);
      if ( v54 )
        sub_1C430(v54);
      if ( v60 )
        sub_1C430(v60);
      if ( v34 )
        sub_1C430((volatile signed __int32 *)v34);
      if ( v56 )
        sub_1C430(v56);
      v44 = *(_QWORD **)(a1 + 56);
      v45 = &v44[2 * *(_QWORD *)(a1 + 64)];
      if ( v44 != v45 )
      {
        if ( ((16 * *(_BYTE *)(a1 + 64)) & 0x10) == 0 || (*v44 = 0, v44 += 2, v45 != v44) )
        {
          do
          {
            *v44 = 0;
            v44 += 4;
            *(v44 - 2) = 0;
          }
          while ( v45 != v44 );
        }
      }
      sub_32600((__int64 *)(a1 + 32), (unsigned __int64 *)(a1 + 56));
      sub_35940((_QWORD *)a1, (__m128i *)(a1 + 56), v46, v47);
      if ( v56 )
        sub_1C430(v56);
      if ( v54 )
        sub_1C430(v54);
      if ( v52 )
        sub_1C430(v52);
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
