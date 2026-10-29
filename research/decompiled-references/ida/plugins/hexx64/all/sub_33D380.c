__int64 __fastcall sub_33D380(__int64 a1, const void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 module_data; // r14
  size_t v5; // rbx
  __m128i v6; // xmm4
  int v7; // eax
  size_t v8; // rbx
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // r8
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  bool v21; // zf
  unsigned __int8 v22; // si
  __m128i v23; // xmm0
  __int64 v24; // rcx
  void *v25; // r15
  void *v27; // rax
  const void *v28; // rsi
  void *v29; // rax
  __m128i v30; // xmm0
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __m128i v34; // xmm0
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r15
  size_t v37; // r12
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  void *v40; // rdi
  void *v41; // r13
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // [rsp+Ch] [rbp-1B4h]
  int v46; // [rsp+10h] [rbp-1B0h]
  int v47; // [rsp+14h] [rbp-1ACh]
  __int64 v48; // [rsp+18h] [rbp-1A8h]
  __m128i v49; // [rsp+20h] [rbp-1A0h] BYREF
  __m128i v50; // [rsp+30h] [rbp-190h] BYREF
  __m128i v51; // [rsp+40h] [rbp-180h] BYREF
  unsigned int v52; // [rsp+50h] [rbp-170h]
  char v53; // [rsp+56h] [rbp-16Ah]
  unsigned __int8 v54; // [rsp+57h] [rbp-169h]
  _QWORD *v55; // [rsp+58h] [rbp-168h]
  __int64 *v56; // [rsp+60h] [rbp-160h]
  __int64 v57; // [rsp+68h] [rbp-158h]
  __int64 v58; // [rsp+70h] [rbp-150h]
  __int64 v59; // [rsp+78h] [rbp-148h]
  __int64 *v60; // [rsp+80h] [rbp-140h]
  __int64 *v61; // [rsp+88h] [rbp-138h]
  __int64 v62; // [rsp+90h] [rbp-130h] BYREF
  __int64 v63; // [rsp+98h] [rbp-128h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-120h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-118h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-110h] BYREF
  _QWORD v67[2]; // [rsp+B8h] [rbp-108h] BYREF
  __m128i v68; // [rsp+C8h] [rbp-F8h]
  __m128i v69; // [rsp+D8h] [rbp-E8h]
  __m128i v70; // [rsp+E8h] [rbp-D8h] BYREF
  __m128i v71[2]; // [rsp+F8h] [rbp-C8h] BYREF
  int v72; // [rsp+118h] [rbp-A8h]
  void *v73; // [rsp+120h] [rbp-A0h]
  __int128 v74; // [rsp+128h] [rbp-98h]
  void *src; // [rsp+138h] [rbp-88h]
  __int128 v76; // [rsp+140h] [rbp-80h]
  char v77; // [rsp+150h] [rbp-70h]
  unsigned __int64 v78; // [rsp+151h] [rbp-6Fh]
  int v79; // [rsp+15Ch] [rbp-64h]
  __m128i v80; // [rsp+160h] [rbp-60h] BYREF
  __m128i v81; // [rsp+170h] [rbp-50h] BYREF
  int v82; // [rsp+180h] [rbp-40h]
  unsigned __int64 v83; // [rsp+188h] [rbp-38h]

  v83 = __readfsqword(0x28u);
  v73 = nullptr;
  module_data = get_module_data();
  v5 = *(_QWORD *)(module_data + 672);
  v48 = *(_QWORD *)(module_data + 568);
  v70 = _mm_loadu_si128((const __m128i *)(module_data + 608));
  v67[1] = v48;
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(module_data + 604));
  v7 = *(_DWORD *)(module_data + 656);
  v71[0] = _mm_loadu_si128((const __m128i *)(module_data + 624));
  v49 = _mm_loadu_si128((const __m128i *)(module_data + 576));
  v47 = v7;
  v72 = v7;
  v68 = v49;
  v51 = _mm_loadu_si128((const __m128i *)(module_data + 592));
  v52 = _mm_cvtsi128_si32(v6);
  v69 = v51;
  v50 = _mm_loadu_si128((const __m128i *)(module_data + 640));
  v71[1] = v50;
  v74 = 0;
  if ( v5 )
  {
    v29 = (void *)qalloc_or_throw(v5, (__int64)a2, v2, v3);
    a2 = *(const void **)(module_data + 664);
    *((_QWORD *)&v74 + 1) = v5;
    v73 = v29;
    memcpy(v29, a2, v5);
    *(_QWORD *)&v74 = v5;
  }
  v8 = *(_QWORD *)(module_data + 696);
  src = nullptr;
  v76 = 0;
  if ( v8 )
  {
    v27 = (void *)qalloc_or_throw(v8, (__int64)a2, v2, v3);
    v28 = *(const void **)(module_data + 688);
    src = v27;
    *((_QWORD *)&v76 + 1) = v8;
    memcpy(v27, v28, v8);
    *(_QWORD *)&v76 = v8;
  }
  v9 = *(_QWORD *)(module_data + 713);
  v10 = _mm_loadu_si128((const __m128i *)(module_data + 728));
  v53 = *(_BYTE *)(module_data + 712);
  v77 = v53;
  v80 = v10;
  v11 = _mm_loadu_si128((const __m128i *)(module_data + 744));
  v78 = v9;
  v54 = HIBYTE(v9) & 1;
  v12 = *(_DWORD *)(module_data + 724);
  v81 = v11;
  v46 = v12;
  v79 = v12;
  v45 = *(_DWORD *)(module_data + 760);
  v82 = v45;
  v62 = *(int *)(module_data + 592);
  v63 = *(int *)(module_data + 596);
  v64 = *(int *)(module_data + 600);
  v65 = *(int *)(module_data + 640);
  v66 = *(int *)(module_data + 648);
  v67[0] = *(int *)(module_data + 644);
  v56 = &v65;
  v60 = &v63;
  v57 = module_data + 588;
  v58 = module_data + 584;
  v59 = module_data + 580;
  v55 = v67;
  v61 = &v62;
  while ( (unsigned int)sub_33CF00(
                          (__int64)"Hex-Rays Decompiler Options\n"
                                   "\n"
                                   " <#Background color of variable definition area#~V~ariable definition color:K::12::>\n"
                                   " <#Background color of function statement area#~F~unction body color      :K::12::>\n"
                                   " <#Background color of marked functions#~M~arked function color    :K::12::>\n"
                                   "\n"
                                   " <~C~omment indent:D::12::> <#Default number base for constants (0, 10 or 16)#Default"
                                   " radi~x~ :D::12::>\n"
                                   " <~B~lock indent  :D::12::> <#Strings longer than this value won't be printed#Max ~s~"
                                   "trlit len:D::12::>\n"
                                   " <~R~ight margin  :D::12::> <#Max number of commas in an expression#Max c~o~mmas    :"
                                   "D::12::>\n"
                                   "\n"
                                   " <Op~t~ions 1:B:0:::> <Opt~i~ons 2:B:1:::> <Optio~n~s 3:B:2:::>\n"
                                   " <Warnings ~1~:B:0:::> <Warnings ~2~:B:1:::> <Warnings ~3~:B:2:::> <Warnings ~4~:B:3:"
                                   "::>\n"
                                   " <O~p~timizations:B:0:::>\n"
                                   "\n"
                                   "To modify default options, please edit hexrays.cfg\n"
                                   "\n",
                          v59,
                          v58,
                          v57,
                          v60,
                          v56,
                          v61,
                          &v66,
                          &v64,
                          v55,
                          sub_33D120,
                          sub_33D090,
                          sub_33CFD0,
                          sub_33F940,
                          sub_33F940,
                          sub_33F940,
                          sub_33F940,
                          sub_33F690) )
  {
    *(_BYTE *)(*(_QWORD *)(module_data + 840) + 286LL) |= 1u;
    switch ( v65 )
    {
      case 0LL:
        v14 = 0;
        goto LABEL_11;
      case 16LL:
        v14 = 16;
LABEL_11:
        v15 = v62;
        v16 = v67[0];
        *(_DWORD *)(module_data + 640) = v14;
        *(_DWORD *)(module_data + 592) = v15;
        v17 = v63;
        *(_DWORD *)(module_data + 644) = v16;
        v18 = v66;
        *(_DWORD *)(module_data + 596) = v17;
        v19 = v64;
        *(_DWORD *)(module_data + 648) = v18;
        v20 = v52;
        v21 = *(_DWORD *)(module_data + 604) == v52;
        *(_DWORD *)(module_data + 600) = v19;
        v22 = !v21;
        if ( !v21
          || (v23 = _mm_load_si128(&v51),
              v24 = v23.m128i_i64[0],
              v11 = _mm_unpackhi_epi32(v23, v23),
              v21 = *(_QWORD *)(module_data + 592) == v24,
              v20 = (unsigned int)_mm_cvtsi128_si32(v11),
              (_DWORD)v20 != v19 || !v21)
          || v50.m128i_i32[0] != v14
          || (v11 = _mm_shuffle_epi32(v49, 85), *(_DWORD *)(module_data + 580) != _mm_cvtsi128_si32(v11))
          || *(_QWORD *)(module_data + 584) != v49.m128i_i64[1] )
        {
          sub_395CD0(module_data, v22, -1, v20, v13, *(double *)v11.m128i_i64);
        }
        if ( *(_BYTE *)(module_data + 720) != v54 )
          reg_int_op();
        v25 = src;
        goto LABEL_18;
      case 10LL:
        v14 = 10;
        goto LABEL_11;
    }
    sub_2B4E70((__int64)"Radix must be 0, 10 or 16");
  }
  v30 = _mm_loadu_si128(&v70);
  v31 = _mm_load_si128(&v49);
  v32 = _mm_load_si128(&v51);
  *(_QWORD *)(module_data + 568) = v48;
  v33 = _mm_load_si128(&v50);
  *(__m128i *)(module_data + 608) = v30;
  v34 = _mm_loadu_si128(v71);
  *(_DWORD *)(module_data + 656) = v47;
  v35 = v74;
  *(__m128i *)(module_data + 576) = v31;
  *(__m128i *)(module_data + 592) = v32;
  v36 = v35;
  *(__m128i *)(module_data + 624) = v34;
  *(__m128i *)(module_data + 640) = v33;
  if ( v35 && (v37 = v35 - 1, v35 != 1) )
  {
    v41 = v73;
    v42 = *(void **)(module_data + 664);
    if ( *(_QWORD *)(module_data + 680) < v35 )
    {
      v44 = qvector_reserve(module_data + 664, *(_QWORD *)(module_data + 664), v35, 1);
      *(_QWORD *)(module_data + 664) = v44;
      v42 = (void *)v44;
    }
    *(_QWORD *)(module_data + 672) = v36;
    memmove(v42, v41, v37);
    *(_BYTE *)(*(_QWORD *)(module_data + 664) + v36 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 672) = 0;
  }
  v38 = v76;
  v25 = src;
  if ( (unsigned __int64)v76 > 1 )
  {
    v40 = *(void **)(module_data + 688);
    if ( *(_QWORD *)(module_data + 704) < (unsigned __int64)v76 )
    {
      v43 = qvector_reserve(module_data + 688, *(_QWORD *)(module_data + 688), v76, 1);
      *(_QWORD *)(module_data + 688) = v43;
      v40 = (void *)v43;
    }
    *(_QWORD *)(module_data + 696) = v38;
    memmove(v40, v25, v38 - 1);
    *(_BYTE *)(*(_QWORD *)(module_data + 688) + v38 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 696) = 0;
  }
  *(_BYTE *)(module_data + 712) = v53;
  v39 = (unsigned __int64)v54 << 8;
  *(__m128i *)(module_data + 728) = _mm_load_si128(&v80);
  *(__m128i *)(module_data + 744) = _mm_load_si128(&v81);
  *(_QWORD *)(module_data + 713) = v9 & 1
                                 | ((BYTE1(v9) & 1
                                   | (((v9 >> 16) & 1
                                     | (((v9 >> 24) & 1
                                       | ((BYTE4(v9) & 1 | (((v9 >> 40) & 1 | ((HIWORD(v9) & 1 | v39) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  *(_DWORD *)(module_data + 724) = v46;
  *(_DWORD *)(module_data + 760) = v45;
LABEL_18:
  if ( v25 )
    qfree((__int64)v25);
  if ( v73 )
    qfree((__int64)v73);
  return 1;
}

