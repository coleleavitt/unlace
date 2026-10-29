__int64 __fastcall sub_46B10(__int64 a1, const char *a2, int a3, _QWORD *a4, char a5)
{
  int v5; // r13d
  __int16 v7; // r14
  __int64 v8; // r15
  unsigned __int16 v10; // r14
  __int64 v11; // rbx
  __int16 v12; // ax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  size_t v18; // r13
  unsigned __int8 v19; // al
  const char *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r15
  size_t v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r15
  size_t v29; // r13
  __int16 v30; // cx
  __int16 v31; // ax
  __int16 v32; // cx
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // ax
  __int16 v38; // cx
  __int16 v39; // cx
  __int16 v40; // ax
  __int16 v41; // cx
  unsigned __int16 v42; // ax
  size_t v43; // r13
  const void *v44; // r14
  void *v45; // rdi
  const void *v46; // r14
  void *v47; // rdi
  const void *v48; // r14
  void *v49; // rdi
  const void *v50; // r14
  void *v51; // rdi
  __int64 v52; // rdi
  const char *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // r13
  const void *v59; // rbx
  const char **n; // [rsp+18h] [rbp-68h]
  __int16 v64; // [rsp+24h] [rbp-5Ch] BYREF
  __int16 v65; // [rsp+26h] [rbp-5Ah] BYREF
  __int64 v66; // [rsp+28h] [rbp-58h]
  unsigned __int64 v67; // [rsp+30h] [rbp-50h] BYREF
  __int64 v68; // [rsp+38h] [rbp-48h]
  unsigned __int64 v69; // [rsp+48h] [rbp-38h]

  v5 = 0;
  v7 = *(_WORD *)(a1 + 184);
  v69 = __readfsqword(0x28u);
  n = (const char **)&off_AA220;
  if ( !a2 )
  {
    v11 = a1 + 192;
    v12 = v7 & 3;
    *(__m128i *)(a1 + 296) = _mm_loadu_si128((const __m128i *)(a1 + 192));
    v13 = _mm_loadu_si128((const __m128i *)(a1 + 212));
    if ( (v7 & 0x10) != 0 )
      v12 = v7 & 3 | 4;
    *(__m128i *)(a1 + 316) = v13;
    if ( (v7 & 0x20) != 0 )
      v12 |= 8u;
    v64 = v12;
    *(_DWORD *)(a1 + 312) = *(_DWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 332) = *(_QWORD *)(a1 + 228);
    v14 = *(_QWORD *)(a1 + 248);
    v15 = v14;
    if ( !v14 || (v43 = v14 - 1, v14 == 1) )
    {
      *(_QWORD *)(a1 + 352) = 0;
    }
    else
    {
      v44 = *(const void **)(a1 + 240);
      v45 = *(void **)(a1 + 344);
      if ( *(_QWORD *)(a1 + 360) < v14 )
      {
        v54 = qvector_reserve();
        *(_QWORD *)(a1 + 344) = v54;
        v45 = (void *)v54;
      }
      *(_QWORD *)(a1 + 352) = v15;
      memmove(v45, v44, v43);
      *(_BYTE *)(*(_QWORD *)(a1 + 344) + v15 - 1) = 0;
    }
    v16 = *(_QWORD *)(a1 + 272);
    v17 = v16;
    if ( v16 && (v18 = v16 - 1, v16 != 1) )
    {
      v50 = *(const void **)(a1 + 264);
      v51 = *(void **)(a1 + 368);
      if ( *(_QWORD *)(a1 + 384) < v16 )
      {
        v55 = qvector_reserve();
        *(_QWORD *)(a1 + 368) = v55;
        v51 = (void *)v55;
      }
      *(_QWORD *)(a1 + 376) = v17;
      memmove(v51, v50, v18);
      *(_BYTE *)(*(_QWORD *)(a1 + 368) + v17 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 376) = 0;
    }
    *(_WORD *)(a1 + 392) = *(_WORD *)(a1 + 288);
    sub_55E60(&v67, v11);
    v19 = *(_BYTE *)(a1 + 185) & 0xF;
    if ( v19 >= 3u )
      v19 = 0;
    v65 = v19;
    v20 = &s1;
    if ( v68 )
      v20 = (const char *)v67;
    if ( (unsigned int)sub_438C0(
                         (__int64)"@0:1350[]\n"
                                  "ARM specific options\n"
                                  "%/%*\n"
                                  " <~S~implify instructions:C>\n"
                                  " <~D~isable pointer dereferencing:C>\n"
                                  " <~N~o automatic ARM-THUMB switch:C>\n"
                                  " <Disable ~B~L jumps detection:C>>\n"
                                  " <#Do not convert scattered pairs#Scattered MOVT/MOVW pairs analysis#How to handle MOV"
                                  "T paired with an earlier MOVW on the same register#~L~eave as is:R>\n"
                                  " <#Convert only if the combined constant is a valid address#~V~alid addresses only:R>\n"
                                  " <#Combine all pairs regardless of the value#Convert a~g~ressively:R>>\n"
                                  " <Edit ~A~RM architecture options:B10:1:::>\n"
                                  " Current architecture:\n"
                                  "%11A\n"
                                  "\n"
                                  "\n"
                                  "\n"
                                  "\n"
                                  "\n"
                                  "\n",
                         sub_423F0,
                         a1,
                         &v64,
                         &v65,
                         sub_459B0,
                         v20) )
    {
      v21 = _mm_loadu_si128((const __m128i *)(a1 + 296));
      *(_DWORD *)(a1 + 208) = *(_DWORD *)(a1 + 312);
      v22 = *(_QWORD *)(a1 + 332);
      *(__m128i *)(a1 + 192) = v21;
      v23 = _mm_loadu_si128((const __m128i *)(a1 + 316));
      *(_QWORD *)(a1 + 228) = v22;
      v24 = *(_QWORD *)(a1 + 352);
      *(__m128i *)(a1 + 212) = v23;
      v25 = v24;
      if ( v24 && (v26 = v24 - 1, v24 != 1) )
      {
        v46 = *(const void **)(a1 + 344);
        v47 = *(void **)(a1 + 240);
        if ( *(_QWORD *)(a1 + 256) < v24 )
        {
          v56 = qvector_reserve();
          *(_QWORD *)(a1 + 240) = v56;
          v47 = (void *)v56;
        }
        *(_QWORD *)(a1 + 248) = v25;
        memmove(v47, v46, v26);
        *(_BYTE *)(*(_QWORD *)(a1 + 240) + v25 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 248) = 0;
      }
      v27 = *(_QWORD *)(a1 + 376);
      v28 = v27;
      if ( v27 && (v29 = v27 - 1, v27 != 1) )
      {
        v48 = *(const void **)(a1 + 368);
        v49 = *(void **)(a1 + 264);
        if ( *(_QWORD *)(a1 + 280) < v27 )
        {
          v57 = qvector_reserve();
          *(_QWORD *)(a1 + 264) = v57;
          v49 = (void *)v57;
        }
        *(_QWORD *)(a1 + 272) = v28;
        memmove(v49, v48, v29);
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + v28 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 272) = 0;
      }
      *(_WORD *)(a1 + 288) = *(_WORD *)(a1 + 392);
      sub_55330(v11);
      v30 = *(_WORD *)(a1 + 184);
      v31 = v30 & 0xFFFE;
      v32 = v30 | 1;
      if ( (v64 & 1) != 0 )
        v31 = v32;
      v33 = v31;
      v34 = v31 & 0xFFFD;
      v35 = v33 | 2;
      if ( (v64 & 2) != 0 )
        v34 = v35;
      v36 = v34;
      v37 = v34 & 0xFFEF;
      v38 = v36 | 0x10;
      if ( (v64 & 4) != 0 )
        v37 = v38;
      v39 = v37;
      v40 = v37 & 0xFFDF;
      v41 = v39 | 0x20;
      if ( (v64 & 8) != 0 )
        v40 = v41;
      HIBYTE(v40) &= 0xF0u;
      v42 = (v65 << 8) & 0xF00 | v40;
      *(_WORD *)(a1 + 184) = v42;
      if ( a5 )
      {
        v66 = v42;
        netnode_supset();
      }
    }
    if ( v67 )
    {
      v68 = 0;
      qfree();
    }
    return 0;
  }
  while ( strcmp(*n, a2) )
  {
    ++v5;
    n += 5;
    if ( v5 == 7 )
      return 1;
  }
  if ( !strcmp(a2, "ARM_MOVT_CONVERT") )
  {
    v8 = 2;
    if ( a3 == 2 )
    {
      v8 = 3;
      if ( *a4 <= 2u )
      {
        v10 = ((unsigned __int16)*a4 << 8) | v7 & 0xF0FF;
        *(_WORD *)(a1 + 184) = v10;
        if ( a5 )
        {
          v67 = v10;
          netnode_supset();
        }
        return 0;
      }
    }
  }
  else
  {
    v8 = cfgopt_t__apply3();
    if ( !v8 && ((__int64)(&off_AA220)[5 * v5 + 2] & 0xF) == 1 )
    {
      v52 = a1 + 192;
      v53 = &s1;
      if ( *(_QWORD *)(a1 + 432) )
        v53 = *(const char **)(a1 + 424);
      if ( (unsigned __int8)sub_56980(v52, v53) )
      {
        v58 = *(_QWORD *)(a1 + 432);
        if ( v58 > 1 )
        {
          v59 = *(const void **)(a1 + 424);
          if ( *(_QWORD *)(a1 + 416) < v58 )
            *(_QWORD *)(a1 + 400) = qvector_reserve();
          *(_QWORD *)(a1 + 408) = v58;
          memmove(*(void **)(a1 + 400), v59, v58 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 400) + v58 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 408) = 0;
        }
      }
      else
      {
        v8 = 3;
      }
    }
    if ( a5 && *(_WORD *)(a1 + 184) != v7 )
    {
      v67 = *(unsigned __int16 *)(a1 + 184);
      netnode_supset();
    }
  }
  return v8;
}

