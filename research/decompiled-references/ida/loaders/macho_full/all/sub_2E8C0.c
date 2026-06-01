__int64 __fastcall sub_2E8C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rax
  const void *v7; // rbp
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 (*v17)(); // rdx
  __int64 (*v18)(); // rcx
  __int64 (__fastcall **v20)(); // rdi
  size_t v21; // rbx
  __int64 v22; // r14
  __int64 (__fastcall **v23)(); // rbx
  __m128i v24; // xmm1
  __int64 v25; // rax
  void *v26; // r8
  void *v27; // rax
  __m128i v28; // [rsp+0h] [rbp-298h] BYREF
  void *src; // [rsp+10h] [rbp-288h] BYREF
  __m128i v30; // [rsp+18h] [rbp-280h]
  __m128i v31; // [rsp+30h] [rbp-268h] BYREF
  char v32; // [rsp+40h] [rbp-258h]
  __int64 (__fastcall **v33)(); // [rsp+50h] [rbp-248h] BYREF
  _BYTE v34[24]; // [rsp+58h] [rbp-240h] BYREF
  __int64 v35; // [rsp+70h] [rbp-228h]
  int v36; // [rsp+78h] [rbp-220h]
  char v37; // [rsp+7Ch] [rbp-21Ch]
  __int64 v38; // [rsp+80h] [rbp-218h]
  char v39; // [rsp+88h] [rbp-210h]
  __int64 v40; // [rsp+98h] [rbp-200h]
  __int128 v41; // [rsp+A0h] [rbp-1F8h]
  __m128i si128; // [rsp+B0h] [rbp-1E8h]
  char v43; // [rsp+C0h] [rbp-1D8h]
  __m128i v44; // [rsp+C8h] [rbp-1D0h]
  __int64 v45; // [rsp+D8h] [rbp-1C0h]
  __int128 v46; // [rsp+E0h] [rbp-1B8h]
  __int16 v47; // [rsp+F0h] [rbp-1A8h]
  __int64 v48; // [rsp+118h] [rbp-180h]
  __int128 v49; // [rsp+120h] [rbp-178h]
  __int64 v50; // [rsp+130h] [rbp-168h]
  __int128 v51; // [rsp+138h] [rbp-160h]
  __int64 v52; // [rsp+148h] [rbp-150h]
  __int128 v53; // [rsp+150h] [rbp-148h]
  __int64 v54; // [rsp+160h] [rbp-138h]
  __int128 v55; // [rsp+168h] [rbp-130h]
  __int64 v56; // [rsp+178h] [rbp-120h]
  __int128 v57; // [rsp+180h] [rbp-118h]
  __int64 v58; // [rsp+190h] [rbp-108h]
  __int128 v59; // [rsp+198h] [rbp-100h]
  __int64 v60; // [rsp+1A8h] [rbp-F0h]
  __int128 v61; // [rsp+1B0h] [rbp-E8h]
  __int64 v62; // [rsp+1C0h] [rbp-D8h]
  __int128 v63; // [rsp+1C8h] [rbp-D0h]
  __int64 v64; // [rsp+1D8h] [rbp-C0h]
  __int128 v65; // [rsp+1E0h] [rbp-B8h]
  __int64 v66; // [rsp+1F0h] [rbp-A8h]
  __int128 v67; // [rsp+1F8h] [rbp-A0h]
  __int16 v68; // [rsp+208h] [rbp-90h]
  char v69; // [rsp+20Ah] [rbp-8Eh]
  int v70; // [rsp+20Ch] [rbp-8Ch]
  __int128 v71; // [rsp+210h] [rbp-88h]
  __int64 v72; // [rsp+220h] [rbp-78h]
  __int64 v73; // [rsp+228h] [rbp-70h]
  int v74; // [rsp+230h] [rbp-68h]
  __int64 v75; // [rsp+238h] [rbp-60h]
  __int128 v76; // [rsp+240h] [rbp-58h]
  __int64 v77; // [rsp+250h] [rbp-48h]
  unsigned __int64 v78; // [rsp+258h] [rbp-40h]

  v5 = *(unsigned int *)(a2 + 24);
  v78 = __readfsqword(0x28u);
  v30 = 0;
  src = nullptr;
  v7 = (const void *)(v5 + a3);
  if ( (v5 + a3 >= a4) | __CFADD__(v5, a3) || v5 <= 0x1F )
  {
    src = (void *)qvector_reserve();
    v30.m128i_i64[0] = 12;
    strcpy((char *)src, "<bad entry>");
  }
  else
  {
    *(_OWORD *)v34 = 0;
    v20 = nullptr;
    v33 = nullptr;
    v21 = a4 - (_QWORD)v7;
    v22 = a4 - (_QWORD)v7 + 1;
    if ( a4 - (_QWORD)v7 != -1 )
    {
      v33 = (__int64 (__fastcall **)())qvector_reserve();
      v20 = v33;
    }
    *(_QWORD *)v34 = v22;
    memmove(v20, v7, v21);
    *((_BYTE *)v33 + v21) = 0;
    v23 = v33;
    v24 = _mm_loadu_si128((const __m128i *)v34);
    *(_OWORD *)v34 = 0;
    v33 = nullptr;
    if ( src )
    {
      v28 = v24;
      v30.m128i_i64[0] = 0;
      qfree();
      v24 = _mm_load_si128(&v28);
    }
    src = v23;
    v30 = v24;
  }
  v8 = (__int64 *)a1[3];
  v9 = v8[1];
  v10 = *v8;
  if ( v8[2] < (unsigned __int64)(v9 + 1) )
  {
    v25 = qvector_reserve();
    *v8 = v25;
    v9 = v8[1];
    v10 = v25;
  }
  v11 = v10 + 80 * v9;
  *(_OWORD *)v11 = 0;
  *(_OWORD *)(v11 + 16) = 0;
  *(_OWORD *)(v11 + 48) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 40) = 0;
  *(_OWORD *)(v11 + 64) = 0;
  ++v8[1];
  v12 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
  *(_QWORD *)v11 = -1;
  *(_QWORD *)(v11 + 8) = v12.m128i_i64[0];
  if ( (void **)(v11 + 40) != &src )
  {
    v13 = v30.m128i_i64[0];
    if ( v30.m128i_i64[0] > 1uLL )
    {
      v26 = src;
      v27 = *(void **)(v11 + 40);
      if ( *(_QWORD *)(v11 + 56) < v30.m128i_i64[0] )
      {
        v28.m128i_i64[0] = (__int64)src;
        v27 = (void *)qvector_reserve();
        *(_QWORD *)(v11 + 40) = v27;
        v26 = (void *)v28.m128i_i64[0];
      }
      *(_QWORD *)(v11 + 48) = v13;
      memmove(v27, v26, v13 - 1);
      *(_BYTE *)(*(_QWORD *)(v11 + 40) + v13 - 1) = 0;
      v12 = _mm_loadl_epi64((const __m128i *)(v11 + 8));
    }
    else
    {
      *(_QWORD *)(v11 + 48) = 0;
    }
  }
  v14 = *(_QWORD *)(a2 + 16);
  *(__m128i *)(v11 + 24) = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)v14);
  v15 = sub_29210(a1[2], v14);
  if ( !v15 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v16 = a1[1];
  v37 = 1;
  v33 = &off_62AA0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
  *(__m128i *)&v34[8] = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v44 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  *(_QWORD *)v34 = v16;
  v35 = -1;
  v36 = 8;
  v38 = v15;
  v39 = 0;
  v40 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v41 = 0;
  v46 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v71 = -1;
  v76 = 0;
  if ( sub_25BB0((__int64)&v33) && sub_25EF0((__int64)&v33, 0, 0, 0) )
  {
    v31.m128i_i64[1] = v11 + 64;
    v31.m128i_i64[0] = (__int64)off_63268;
    v32 = 0;
    sub_27280((__int64)&v33, &v31, v17, v18);
  }
  sub_162E0((__int64)&v33);
  close_linput();
  if ( src )
  {
    v30.m128i_i64[0] = 0;
    qfree();
  }
  return 0;
}

