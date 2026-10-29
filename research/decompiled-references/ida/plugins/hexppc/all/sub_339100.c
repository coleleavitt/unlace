__int64 sub_339100()
{
  __int64 module_data; // r14
  size_t v1; // rbx
  __m128i v2; // xmm4
  int v3; // eax
  size_t v4; // rbx
  unsigned __int64 v5; // rbx
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  bool v15; // zf
  __m128i v16; // xmm0
  void *v17; // r15
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  const void *v22; // rsi
  __m128i v23; // xmm0
  __m128i v24; // xmm5
  __m128i v25; // xmm6
  __m128i v26; // xmm7
  __m128i v27; // xmm0
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r15
  size_t v30; // r12
  __int64 v31; // r12
  unsigned __int64 v32; // rax
  void *v33; // rdi
  void *v34; // r13
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+Ch] [rbp-1B4h]
  int v39; // [rsp+10h] [rbp-1B0h]
  int v40; // [rsp+14h] [rbp-1ACh]
  __int64 v41; // [rsp+18h] [rbp-1A8h]
  __m128i v42; // [rsp+20h] [rbp-1A0h] BYREF
  __m128i v43; // [rsp+30h] [rbp-190h] BYREF
  __m128i v44; // [rsp+40h] [rbp-180h] BYREF
  int v45; // [rsp+50h] [rbp-170h]
  char v46; // [rsp+56h] [rbp-16Ah]
  unsigned __int8 v47; // [rsp+57h] [rbp-169h]
  _QWORD *v48; // [rsp+58h] [rbp-168h]
  __int64 *v49; // [rsp+60h] [rbp-160h]
  __int64 v50; // [rsp+68h] [rbp-158h]
  __int64 v51; // [rsp+70h] [rbp-150h]
  __int64 v52; // [rsp+78h] [rbp-148h]
  __int64 *v53; // [rsp+80h] [rbp-140h]
  __int64 *v54; // [rsp+88h] [rbp-138h]
  __int64 v55; // [rsp+90h] [rbp-130h] BYREF
  __int64 v56; // [rsp+98h] [rbp-128h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-120h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-118h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-110h] BYREF
  _QWORD v60[2]; // [rsp+B8h] [rbp-108h] BYREF
  __m128i v61; // [rsp+C8h] [rbp-F8h]
  __m128i v62; // [rsp+D8h] [rbp-E8h]
  __m128i v63; // [rsp+E8h] [rbp-D8h] BYREF
  __m128i v64[2]; // [rsp+F8h] [rbp-C8h] BYREF
  int v65; // [rsp+118h] [rbp-A8h]
  void *v66; // [rsp+120h] [rbp-A0h]
  __int128 v67; // [rsp+128h] [rbp-98h]
  void *src; // [rsp+138h] [rbp-88h]
  __int128 v69; // [rsp+140h] [rbp-80h]
  char v70; // [rsp+150h] [rbp-70h]
  unsigned __int64 v71; // [rsp+151h] [rbp-6Fh]
  int v72; // [rsp+15Ch] [rbp-64h]
  __m128i v73; // [rsp+160h] [rbp-60h] BYREF
  __m128i v74; // [rsp+170h] [rbp-50h] BYREF
  int v75; // [rsp+180h] [rbp-40h]
  unsigned __int64 v76; // [rsp+188h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  v66 = nullptr;
  module_data = get_module_data();
  v1 = *(_QWORD *)(module_data + 672);
  v41 = *(_QWORD *)(module_data + 568);
  v63 = _mm_loadu_si128((const __m128i *)(module_data + 608));
  v60[1] = v41;
  v2 = _mm_cvtsi32_si128(*(_DWORD *)(module_data + 604));
  v3 = *(_DWORD *)(module_data + 656);
  v64[0] = _mm_loadu_si128((const __m128i *)(module_data + 624));
  v42 = _mm_loadu_si128((const __m128i *)(module_data + 576));
  v40 = v3;
  v65 = v3;
  v61 = v42;
  v44 = _mm_loadu_si128((const __m128i *)(module_data + 592));
  v45 = _mm_cvtsi128_si32(v2);
  v62 = v44;
  v43 = _mm_loadu_si128((const __m128i *)(module_data + 640));
  v64[1] = v43;
  v67 = 0;
  if ( v1 )
  {
    v21 = (void *)qalloc_or_throw();
    v22 = *(const void **)(module_data + 664);
    *((_QWORD *)&v67 + 1) = v1;
    v66 = v21;
    memcpy(v21, v22, v1);
    *(_QWORD *)&v67 = v1;
  }
  v4 = *(_QWORD *)(module_data + 696);
  src = nullptr;
  v69 = 0;
  if ( v4 )
  {
    v19 = (void *)qalloc_or_throw();
    v20 = *(const void **)(module_data + 688);
    src = v19;
    *((_QWORD *)&v69 + 1) = v4;
    memcpy(v19, v20, v4);
    *(_QWORD *)&v69 = v4;
  }
  v5 = *(_QWORD *)(module_data + 713);
  v6 = _mm_loadu_si128((const __m128i *)(module_data + 728));
  v46 = *(_BYTE *)(module_data + 712);
  v70 = v46;
  v73 = v6;
  v7 = _mm_loadu_si128((const __m128i *)(module_data + 744));
  v71 = v5;
  v47 = HIBYTE(v5) & 1;
  v8 = *(_DWORD *)(module_data + 724);
  v74 = v7;
  v39 = v8;
  v72 = v8;
  v38 = *(_DWORD *)(module_data + 760);
  v75 = v38;
  v55 = *(int *)(module_data + 592);
  v56 = *(int *)(module_data + 596);
  v57 = *(int *)(module_data + 600);
  v58 = *(int *)(module_data + 640);
  v59 = *(int *)(module_data + 648);
  v60[0] = *(int *)(module_data + 644);
  v49 = &v58;
  v53 = &v56;
  v50 = module_data + 588;
  v51 = module_data + 584;
  v52 = module_data + 580;
  v48 = v60;
  v54 = &v55;
  while ( (unsigned int)sub_338C80(
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
                          v52,
                          v51,
                          v50,
                          v53,
                          v49,
                          v54,
                          &v59,
                          &v57,
                          v48,
                          sub_338EA0,
                          sub_338E10,
                          sub_338D50,
                          sub_33B7C0,
                          sub_33B7C0,
                          sub_33B7C0,
                          sub_33B7C0,
                          sub_33B4F0) )
  {
    *(_BYTE *)(*(_QWORD *)(module_data + 840) + 286LL) |= 1u;
    switch ( v58 )
    {
      case 0LL:
        v9 = 0;
        goto LABEL_11;
      case 16LL:
        v9 = 16;
LABEL_11:
        v10 = v55;
        v11 = v60[0];
        *(_DWORD *)(module_data + 640) = v9;
        *(_DWORD *)(module_data + 592) = v10;
        v12 = v56;
        *(_DWORD *)(module_data + 644) = v11;
        v13 = v59;
        *(_DWORD *)(module_data + 596) = v12;
        v14 = v57;
        *(_DWORD *)(module_data + 648) = v13;
        v15 = *(_DWORD *)(module_data + 604) == v45;
        *(_DWORD *)(module_data + 600) = v14;
        if ( !v15
          || (v16 = _mm_load_si128(&v44),
              _mm_cvtsi128_si32(_mm_unpackhi_epi32(v16, v16)) != v14
           || *(_QWORD *)(module_data + 592) != v16.m128i_i64[0])
          || v43.m128i_i32[0] != v9
          || *(_DWORD *)(module_data + 580) != _mm_cvtsi128_si32(_mm_shuffle_epi32(v42, 85))
          || *(_QWORD *)(module_data + 584) != v42.m128i_i64[1] )
        {
          sub_391B50(module_data, !v15, -1);
        }
        if ( *(_BYTE *)(module_data + 720) != v47 )
          reg_int_op();
        v17 = src;
        goto LABEL_18;
      case 10LL:
        v9 = 10;
        goto LABEL_11;
    }
    sub_2B11F0((__int64)"Radix must be 0, 10 or 16");
  }
  v23 = _mm_loadu_si128(&v63);
  v24 = _mm_load_si128(&v42);
  v25 = _mm_load_si128(&v44);
  *(_QWORD *)(module_data + 568) = v41;
  v26 = _mm_load_si128(&v43);
  *(__m128i *)(module_data + 608) = v23;
  v27 = _mm_loadu_si128(v64);
  *(_DWORD *)(module_data + 656) = v40;
  v28 = v67;
  *(__m128i *)(module_data + 576) = v24;
  *(__m128i *)(module_data + 592) = v25;
  v29 = v28;
  *(__m128i *)(module_data + 624) = v27;
  *(__m128i *)(module_data + 640) = v26;
  if ( v28 && (v30 = v28 - 1, v28 != 1) )
  {
    v34 = v66;
    v35 = *(void **)(module_data + 664);
    if ( *(_QWORD *)(module_data + 680) < v28 )
    {
      v37 = qvector_reserve();
      *(_QWORD *)(module_data + 664) = v37;
      v35 = (void *)v37;
    }
    *(_QWORD *)(module_data + 672) = v29;
    memmove(v35, v34, v30);
    *(_BYTE *)(*(_QWORD *)(module_data + 664) + v29 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 672) = 0;
  }
  v31 = v69;
  v17 = src;
  if ( (unsigned __int64)v69 > 1 )
  {
    v33 = *(void **)(module_data + 688);
    if ( *(_QWORD *)(module_data + 704) < (unsigned __int64)v69 )
    {
      v36 = qvector_reserve();
      *(_QWORD *)(module_data + 688) = v36;
      v33 = (void *)v36;
    }
    *(_QWORD *)(module_data + 696) = v31;
    memmove(v33, v17, v31 - 1);
    *(_BYTE *)(*(_QWORD *)(module_data + 688) + v31 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 696) = 0;
  }
  *(_BYTE *)(module_data + 712) = v46;
  v32 = (unsigned __int64)v47 << 8;
  *(__m128i *)(module_data + 728) = _mm_load_si128(&v73);
  *(__m128i *)(module_data + 744) = _mm_load_si128(&v74);
  *(_QWORD *)(module_data + 713) = v5 & 1
                                 | ((BYTE1(v5) & 1
                                   | (((v5 >> 16) & 1
                                     | (((v5 >> 24) & 1
                                       | ((BYTE4(v5) & 1 | (((v5 >> 40) & 1 | ((HIWORD(v5) & 1 | v32) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  *(_DWORD *)(module_data + 724) = v39;
  *(_DWORD *)(module_data + 760) = v38;
LABEL_18:
  if ( v17 )
    qfree();
  if ( v66 )
    qfree();
  return 1;
}

