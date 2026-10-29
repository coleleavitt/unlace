__int64 __fastcall sub_3BD3B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  unsigned __int64 v12; // r12
  __int16 *v13; // rsi
  char v14; // al
  __m128i si128; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // rsi
  double v26; // xmm0_8
  unsigned __int64 *func; // rax
  __int64 v28; // r13
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  char *v31; // r13
  __int64 v32; // r13
  unsigned __int64 v33; // r14
  __int64 v34; // r15
  char *v35; // r13
  __int64 v36; // r13
  unsigned __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // r13
  __int64 v40; // r15
  unsigned __int64 v41; // r14
  __m128i *v42; // r13
  __int64 v43; // r13
  unsigned __int64 v44; // r14
  __int64 v45; // r15
  _DWORD *v46; // r13
  __int64 v47; // r13
  unsigned __int64 v48; // r14
  __int64 v49; // r15
  char *v50; // r13
  __int64 v51; // r13
  __int64 v52; // r15
  unsigned __int64 v53; // r14
  __int16 v54; // [rsp+Eh] [rbp-5Ah] BYREF
  __int16 *v55; // [rsp+10h] [rbp-58h] BYREF
  __int128 v56; // [rsp+18h] [rbp-50h]
  unsigned __int64 v57; // [rsp+28h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( a2 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    v26 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v55, &callui, a4, a5, a6);
    func = (unsigned __int64 *)get_func();
    if ( !func )
    {
      sub_2B4E70((__int64)"Please position the cursor within a function", v26);
      return 0;
    }
    v12 = *func;
  }
  v13 = &v54;
  v54 = 3;
  if ( (unsigned int)sub_33CF00(
                       (__int64)"Reset decompiler information\n"
                                "\n"
                                "Reset remembered:\n"
                                "<~L~ocal variable types:C>\n"
                                "<~S~plit assignments:C>\n"
                                "<#Instructions added or removed by the user#~U~ser-defined micro instructions:C>\n"
                                "<#Forced arguments for ellipsis functions#~V~ararg fine tuning:C>\n"
                                "<User-defined ~f~unction calls:C>\n"
                                "<Disabled assignment ~p~ropagations:C>\n"
                                "<All local ~i~nfo:C>\n"
                                "<All ~c~aches:C>>\n"
                                "\n",
                       &v54) )
  {
    v14 = v54;
    if ( !v54 )
      return 1;
    si128.m128i_i64[0] = 0;
    v17 = *(_QWORD *)(a1 + 16);
    v55 = nullptr;
    v56 = 0;
    if ( (v54 & 0x40) != 0 )
    {
      sub_2B6310(v17);
      v51 = v56;
      if ( (_QWORD)v56 )
      {
        v52 = v56 + 14;
        v53 = v56 + 15;
        v51 = v56 - 1;
      }
      else
      {
        v53 = 16;
        v52 = 15;
      }
      v13 = v55;
      if ( *((_QWORD *)&v56 + 1) < v53 )
      {
        v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v53, 1);
        v13 = v55;
      }
      *(_QWORD *)&v56 = v53;
      *((_BYTE *)v13 + v52) = 0;
      qmemcpy((char *)v55 + v51, " all_local_info", 15);
      v17 = *(_QWORD *)(a1 + 16);
      if ( (v54 & 0x80u) == 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (v54 & 1) != 0 )
      {
        sub_216900(v17, v12);
        v47 = v56;
        if ( (_QWORD)v56 )
        {
          v49 = v56 + 20;
          v48 = v56 + 21;
          v47 = v56 - 1;
        }
        else
        {
          v48 = 22;
          v49 = 21;
        }
        v13 = v55;
        if ( *((_QWORD *)&v56 + 1) < v48 )
        {
          v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v48, 1);
          v13 = v55;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_424AB0);
        *(_QWORD *)&v56 = v48;
        *((_BYTE *)v13 + v49) = 0;
        v50 = (char *)v55 + v47;
        *(__m128i *)v50 = si128;
        *(_QWORD *)(v50 + 13) = 0x73657079745F656CLL;
        v14 = v54;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 2) != 0 )
      {
        sub_2B8200(v17, v12);
        v43 = v56;
        if ( (_QWORD)v56 )
        {
          v45 = v56 + 6;
          v44 = v56 + 7;
          v43 = v56 - 1;
        }
        else
        {
          v44 = 8;
          v45 = 7;
        }
        v13 = v55;
        if ( *((_QWORD *)&v56 + 1) < v44 )
        {
          v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v44, 1);
          v13 = v55;
        }
        *(_QWORD *)&v56 = v44;
        *((_BYTE *)v13 + v45) = 0;
        v46 = (_DWORD *)((char *)v55 + v43);
        *v46 = 1819308832;
        v14 = v54;
        *(_DWORD *)((char *)v46 + 3) = 1937009004;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 4) != 0 )
      {
        sub_2B8650(v17, v12);
        v39 = v56;
        if ( (_QWORD)v56 )
        {
          v40 = v56 + 17;
          v41 = v56 + 18;
          v39 = v56 - 1;
        }
        else
        {
          v41 = 19;
          v40 = 18;
        }
        v13 = v55;
        if ( *((_QWORD *)&v56 + 1) < v41 )
        {
          v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v41, 1);
          v13 = v55;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_424AC0);
        *(_QWORD *)&v56 = v41;
        *((_BYTE *)v13 + v40) = 0;
        v42 = (__m128i *)((char *)v55 + v39);
        v42[1].m128i_i16[0] = 29550;
        v14 = v54;
        *v42 = si128;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 8) != 0 )
      {
        sub_2B6940(v17, v12);
        v36 = v56;
        if ( (_QWORD)v56 )
        {
          v38 = v56 + 13;
          v37 = v56 + 14;
          v36 = v56 - 1;
        }
        else
        {
          v37 = 15;
          v38 = 14;
        }
        v13 = v55;
        if ( *((_QWORD *)&v56 + 1) < v37 )
        {
          v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v37, 1);
          v13 = v55;
        }
        *(_QWORD *)&v56 = v37;
        *((_BYTE *)v13 + v38) = 0;
        qmemcpy((char *)v55 + v36, " variadic_args", 14);
        v14 = v54;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 0x10) != 0 )
      {
        sub_3C5AB0(v17, v12);
        v32 = v56;
        if ( (_QWORD)v56 )
        {
          v34 = v56 + 18;
          v33 = v56 + 19;
          v32 = v56 - 1;
        }
        else
        {
          v33 = 20;
          v34 = 19;
        }
        v13 = v55;
        if ( *((_QWORD *)&v56 + 1) < v33 )
        {
          v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v33, 1);
          v13 = v55;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_424AD0);
        *(_QWORD *)&v56 = v33;
        *((_BYTE *)v13 + v34) = 0;
        v35 = (char *)v55 + v32;
        *(__m128i *)v35 = si128;
        v14 = v54;
        *(_DWORD *)(v35 + 15) = 1936485473;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 0x20) != 0 )
      {
        sub_216950(v17, v12);
        v28 = v56;
        if ( (_QWORD)v56 )
        {
          v30 = v56 + 21;
          v29 = v56 + 22;
          v28 = v56 - 1;
        }
        else
        {
          v29 = 23;
          v30 = 22;
        }
        v13 = v55;
        if ( *((_QWORD *)&v56 + 1) < v29 )
        {
          v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v29, 1);
          v13 = v55;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_424AE0);
        *(_QWORD *)&v56 = v29;
        *((_BYTE *)v13 + v30) = 0;
        v31 = (char *)v55 + v28;
        *(__m128i *)v31 = si128;
        *(_QWORD *)(v31 + 14) = 0x736E6F6974616761LL;
        v14 = v54;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( v14 >= 0 )
        goto LABEL_19;
    }
    sub_146970(v17, (__int64)v13);
    v18 = v56;
    if ( (_QWORD)v56 )
    {
      v19 = v56 + 10;
      v20 = v56 + 11;
      v18 = v56 - 1;
    }
    else
    {
      v20 = 12;
      v19 = 11;
    }
    v21 = (__int64)v55;
    if ( *((_QWORD *)&v56 + 1) < v20 )
    {
      v55 = (__int16 *)qvector_reserve((__int64)&v55, (__int64)v55, v20, 1);
      v21 = (__int64)v55;
    }
    *(_QWORD *)&v56 = v20;
    *(_BYTE *)(v21 + v19) = 0;
    qmemcpy((char *)v55 + v18, " all_caches", 11);
    v17 = *(_QWORD *)(a1 + 16);
LABEL_19:
    sub_147D70(*(_QWORD *)(v17 + 112), v12, 0);
    if ( a2 )
      sub_395CC0(a2, 1u, v22, v23, v24, *(double *)si128.m128i_i64, a8, a9, a10);
    v25 = s1;
    if ( (_QWORD)v56 )
      v25 = (const char *)v55;
    sub_33C190((__int64)"AUTOHIDE REGISTRY\nThe following settings have been reset:%s", v25);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree((__int64)v55);
    }
    return 1;
  }
  return 0;
}

