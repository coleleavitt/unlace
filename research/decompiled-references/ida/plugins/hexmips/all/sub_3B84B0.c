__int64 __fastcall sub_3B84B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r12
  __int16 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
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
  unsigned __int64 *func; // rax
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // r13
  unsigned __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // r13
  unsigned __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // r15
  unsigned __int64 v40; // r14
  __m128i *v41; // r13
  __int64 v42; // r13
  unsigned __int64 v43; // r14
  __int64 v44; // r15
  _DWORD *v45; // r13
  __int64 v46; // r13
  unsigned __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // r13
  __int64 v50; // r13
  __int64 v51; // r15
  unsigned __int64 v52; // r14
  __int16 v53; // [rsp+Eh] [rbp-5Ah] BYREF
  __int64 v54; // [rsp+10h] [rbp-58h] BYREF
  __int128 v55; // [rsp+18h] [rbp-50h]
  unsigned __int64 v56; // [rsp+28h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v54, &callui, a4, a5, a6);
    func = (unsigned __int64 *)get_func();
    if ( !func )
    {
      sub_2B05F0((__int64)"Please position the cursor within a function");
      return 0;
    }
    v8 = *func;
  }
  v9 = &v53;
  v53 = 3;
  if ( (unsigned int)sub_337FF0(
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
                       &v53) )
  {
    v14 = v53;
    if ( !v53 )
      return 1;
    si128.m128i_i64[0] = 0;
    v17 = *(_QWORD *)(a1 + 16);
    v54 = 0;
    v55 = 0;
    if ( (v53 & 0x40) != 0 )
    {
      sub_2B1A90(v17, v8);
      v50 = v55;
      if ( (_QWORD)v55 )
      {
        v51 = v55 + 14;
        v52 = v55 + 15;
        v50 = v55 - 1;
      }
      else
      {
        v52 = 16;
        v51 = 15;
      }
      v9 = (__int16 *)v54;
      if ( *((_QWORD *)&v55 + 1) < v52 )
      {
        v54 = qvector_reserve();
        v9 = (__int16 *)v54;
      }
      *(_QWORD *)&v55 = v52;
      *((_BYTE *)v9 + v51) = 0;
      qmemcpy((void *)(v54 + v50), " all_local_info", 15);
      v17 = *(_QWORD *)(a1 + 16);
      if ( (v53 & 0x80u) == 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (v53 & 1) != 0 )
      {
        sub_212080(v17, v8, v10, v11, v12, v13);
        v46 = v55;
        if ( (_QWORD)v55 )
        {
          v48 = v55 + 20;
          v47 = v55 + 21;
          v46 = v55 - 1;
        }
        else
        {
          v47 = 22;
          v48 = 21;
        }
        v9 = (__int16 *)v54;
        if ( *((_QWORD *)&v55 + 1) < v47 )
        {
          v54 = qvector_reserve();
          v9 = (__int16 *)v54;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_4074F0);
        *(_QWORD *)&v55 = v47;
        *((_BYTE *)v9 + v48) = 0;
        v49 = v54 + v46;
        *(__m128i *)v49 = si128;
        *(_QWORD *)(v49 + 13) = 0x73657079745F656CLL;
        v14 = v53;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 2) != 0 )
      {
        sub_2B3980(v17, v8);
        v42 = v55;
        if ( (_QWORD)v55 )
        {
          v44 = v55 + 6;
          v43 = v55 + 7;
          v42 = v55 - 1;
        }
        else
        {
          v43 = 8;
          v44 = 7;
        }
        v9 = (__int16 *)v54;
        if ( *((_QWORD *)&v55 + 1) < v43 )
        {
          v54 = qvector_reserve();
          v9 = (__int16 *)v54;
        }
        *(_QWORD *)&v55 = v43;
        *((_BYTE *)v9 + v44) = 0;
        v45 = (_DWORD *)(v54 + v42);
        *v45 = 1819308832;
        v14 = v53;
        *(_DWORD *)((char *)v45 + 3) = 1937009004;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 4) != 0 )
      {
        sub_2B3DD0(v17, v8);
        v38 = v55;
        if ( (_QWORD)v55 )
        {
          v39 = v55 + 17;
          v40 = v55 + 18;
          v38 = v55 - 1;
        }
        else
        {
          v40 = 19;
          v39 = 18;
        }
        v9 = (__int16 *)v54;
        if ( *((_QWORD *)&v55 + 1) < v40 )
        {
          v54 = qvector_reserve();
          v9 = (__int16 *)v54;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_407500);
        *(_QWORD *)&v55 = v40;
        v10 = 29550;
        *((_BYTE *)v9 + v39) = 0;
        v41 = (__m128i *)(v54 + v38);
        v41[1].m128i_i16[0] = 29550;
        v14 = v53;
        *v41 = si128;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 8) != 0 )
      {
        sub_2B20C0(v17, v8);
        v35 = v55;
        if ( (_QWORD)v55 )
        {
          v37 = v55 + 13;
          v36 = v55 + 14;
          v35 = v55 - 1;
        }
        else
        {
          v36 = 15;
          v37 = 14;
        }
        v9 = (__int16 *)v54;
        if ( *((_QWORD *)&v55 + 1) < v36 )
        {
          v54 = qvector_reserve();
          v9 = (__int16 *)v54;
        }
        *(_QWORD *)&v55 = v36;
        *((_BYTE *)v9 + v37) = 0;
        qmemcpy((void *)(v54 + v35), " variadic_args", 14);
        v14 = v53;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 0x10) != 0 )
      {
        sub_3C0BB0(v17, v8);
        v31 = v55;
        if ( (_QWORD)v55 )
        {
          v33 = v55 + 18;
          v32 = v55 + 19;
          v31 = v55 - 1;
        }
        else
        {
          v32 = 20;
          v33 = 19;
        }
        v9 = (__int16 *)v54;
        if ( *((_QWORD *)&v55 + 1) < v32 )
        {
          v54 = qvector_reserve();
          v9 = (__int16 *)v54;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_407510);
        *(_QWORD *)&v55 = v32;
        *((_BYTE *)v9 + v33) = 0;
        v34 = v54 + v31;
        *(__m128i *)v34 = si128;
        v14 = v53;
        *(_DWORD *)(v34 + 15) = 1936485473;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( (v14 & 0x20) != 0 )
      {
        sub_2120D0(v17, v8, v10, v11, v12, v13);
        v27 = v55;
        if ( (_QWORD)v55 )
        {
          v29 = v55 + 21;
          v28 = v55 + 22;
          v27 = v55 - 1;
        }
        else
        {
          v28 = 23;
          v29 = 22;
        }
        v9 = (__int16 *)v54;
        if ( *((_QWORD *)&v55 + 1) < v28 )
        {
          v54 = qvector_reserve();
          v9 = (__int16 *)v54;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_407520);
        *(_QWORD *)&v55 = v28;
        *((_BYTE *)v9 + v29) = 0;
        v30 = v54 + v27;
        *(__m128i *)v30 = si128;
        *(_QWORD *)(v30 + 14) = 0x736E6F6974616761LL;
        v14 = v53;
        v17 = *(_QWORD *)(a1 + 16);
      }
      if ( v14 >= 0 )
        goto LABEL_19;
    }
    sub_142770(v17, (__int64)v9);
    v18 = v55;
    if ( (_QWORD)v55 )
    {
      v19 = v55 + 10;
      v20 = v55 + 11;
      v18 = v55 - 1;
    }
    else
    {
      v20 = 12;
      v19 = 11;
    }
    v21 = v54;
    if ( *((_QWORD *)&v55 + 1) < v20 )
    {
      v54 = qvector_reserve();
      v21 = v54;
    }
    *(_QWORD *)&v55 = v20;
    *(_BYTE *)(v21 + v19) = 0;
    qmemcpy((void *)(v54 + v18), " all_caches", 11);
    v17 = *(_QWORD *)(a1 + 16);
LABEL_19:
    sub_143B70(*(_QWORD *)(v17 + 112), v8, 0);
    if ( a2 )
      sub_390DC0(a2, 1u, v22, v23, v24, *(double *)si128.m128i_i64);
    v25 = s1;
    if ( (_QWORD)v55 )
      v25 = (const char *)v54;
    sub_337280((__int64)"AUTOHIDE REGISTRY\nThe following settings have been reset:%s", v25);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree();
    }
    return 1;
  }
  return 0;
}

