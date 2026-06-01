__int64 __fastcall sub_4AB00(
        __int64 a1,
        const char *a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v9; // rbx
  int v10; // ebp
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64); // rax
  char v17; // al
  __int64 v18; // r9
  char v19; // r8
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i si128; // xmm0
  __int64 i; // rax
  __int64 v30; // r14
  _QWORD *v31; // r15
  char v32; // al
  __int64 v33; // r13
  __int64 v34; // r10
  size_t v35; // r11
  size_t v36; // r8
  unsigned __int64 v37; // rdx
  char v38; // bp
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __m128i v42; // xmm0
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // rbx
  _QWORD *v49; // r14
  void *v50; // rbp
  const char *v51; // r14
  __int64 v52; // r8
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  bool v55; // zf
  const char *v56; // rsi
  const char *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-108h]
  __int64 v61; // [rsp+0h] [rbp-108h]
  const char **v62; // [rsp+8h] [rbp-100h]
  __int64 v63; // [rsp+8h] [rbp-100h]
  unsigned __int8 v64; // [rsp+8h] [rbp-100h]
  __int64 *v65; // [rsp+8h] [rbp-100h]
  __int64 *v66; // [rsp+10h] [rbp-F8h]
  __int64 v67; // [rsp+10h] [rbp-F8h]
  __int64 v68; // [rsp+18h] [rbp-F0h]
  __int64 v69; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v70; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v71; // [rsp+20h] [rbp-E8h]
  size_t v72; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+28h] [rbp-E0h]
  size_t v74; // [rsp+30h] [rbp-D8h]
  __int64 v75; // [rsp+38h] [rbp-D0h]
  void *v76; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v77; // [rsp+48h] [rbp-C0h]
  __int64 v78; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+68h] [rbp-A0h]
  const char *v80; // [rsp+80h] [rbp-88h] BYREF
  __m128i v81; // [rsp+88h] [rbp-80h]
  _BYTE v82[28]; // [rsp+98h] [rbp-70h]
  int v83; // [rsp+B4h] [rbp-54h]
  __int64 v84; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-40h]

  v9 = a1;
  HIDWORD(v68) = a3;
  v66 = a5;
  v85 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 960) )
  {
    si128.m128i_i64[0] = 0;
    v78 = 0;
    v79 = 0;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1083, &v78, &callui, a4, a5, a6);
    for ( i = get_first_seg(); ; i = get_next_seg() )
    {
      v30 = v78;
      v31 = (_QWORD *)i;
      if ( !i )
        break;
      v32 = 0;
      v33 = v78 + 80 * v79;
      if ( v33 == v78 )
        goto LABEL_43;
      do
      {
        if ( *(_QWORD *)v30 < v31[1] && *v31 < *(_QWORD *)(v30 + 8) )
        {
          if ( (*(_BYTE *)(v30 + 73) & 4) == 0
            || *(_QWORD *)(v30 + 48) && (v39 = *(_BYTE **)(v30 + 40), *v39 == 73) && v39[1] == 79 && !v39[2] )
          {
            v81 = 0;
            v80 = nullptr;
            v40 = qvector_reserve();
            v80 = (const char *)v40;
            v81.m128i_i64[0] = 49;
            *(__m128i *)v40 = _mm_load_si128((const __m128i *)&xmmword_77480);
            *(__m128i *)(v40 + 16) = _mm_load_si128((const __m128i *)&xmmword_77490);
            si128 = _mm_load_si128((const __m128i *)&xmmword_774A0);
            *(__m128i *)(v40 + 32) = si128;
            v56 = v80;
            *((_BYTE *)v80 + 48) = 0;
            v37 = *(_QWORD *)(v30 + 24);
            if ( v37 > 1 )
            {
              v34 = v81.m128i_i64[0];
              v35 = v37 - 1;
              v36 = v37 - 1;
              if ( v81.m128i_i64[0] )
              {
                v34 = v81.m128i_i64[0] - 1;
                v36 = v35 + v81.m128i_i64[0] - 1;
                v37 += v81.m128i_i64[0] - 1;
              }
              if ( v81.m128i_i64[1] < v37 )
              {
                v75 = v34;
                v74 = v36;
                v72 = v35;
                v70 = v37;
                v80 = (const char *)qvector_reserve();
                v34 = v75;
                v56 = v80;
                v36 = v74;
                v35 = v72;
                v37 = v70;
              }
              v81.m128i_i64[0] = v37;
              v56[v36] = 0;
              memcpy((void *)&v80[v34], *(const void **)(v30 + 16), v35);
            }
            else
            {
              sub_20960((__int64 *)&v80);
            }
            v38 = sub_41D70(*(double *)si128.m128i_i64, a8, (__int64)v31, v80, (__int64)v65);
            if ( !v38 )
            {
              v44 = *v66;
              if ( (unsigned __int64)v66[2] <= 0x2D )
              {
                v58 = qvector_reserve();
                *v66 = v58;
                v44 = v58;
              }
              v45 = _mm_load_si128((const __m128i *)&xmmword_774B0);
              v66[1] = 46;
              *(__m128i *)v44 = v45;
              *(__m128i *)(v44 + 16) = _mm_load_si128((const __m128i *)&xmmword_774C0);
              *(__m128i *)(v44 + 29) = _mm_load_si128((const __m128i *)&xmmword_774D0);
              *(_BYTE *)(*v66 + 45) = 0;
              if ( v80 )
              {
                v81.m128i_i64[0] = 0;
                qfree();
              }
LABEL_55:
              v30 = v78;
              if ( v78 )
              {
                v46 = v79;
                if ( (_QWORD)v79 )
                {
LABEL_57:
                  v47 = v46;
                  v48 = 0;
                  do
                  {
                    v49 = (_QWORD *)(80 * v48 + v30);
                    if ( v49[5] )
                    {
                      v49[6] = 0;
                      qfree();
                    }
                    if ( v49[2] )
                    {
                      v49[3] = 0;
                      qfree();
                    }
                    ++v48;
                    v30 = v78;
                  }
                  while ( v48 != v47 );
                  *(_QWORD *)&v79 = 0;
                  v9 = a1;
                  qfree();
                  if ( v38 )
                    goto LABEL_64;
                }
                else
                {
                  qfree();
                }
              }
              return 0;
            }
            if ( v80 )
            {
              v81.m128i_i64[0] = 0;
              qfree();
            }
          }
          v32 = 1;
        }
        v30 += 80;
      }
      while ( v33 != v30 );
      if ( !v32 )
      {
LABEL_43:
        v38 = sub_41D70(*(double *)si128.m128i_i64, a8, (__int64)v31, "lays outside valid memory regions", (__int64)v65);
        if ( !v38 )
        {
          v41 = *v66;
          if ( (unsigned __int64)v66[2] <= 0x25 )
          {
            v59 = qvector_reserve();
            *v66 = v59;
            v41 = v59;
          }
          v42 = _mm_load_si128((const __m128i *)&xmmword_774E0);
          v66[1] = 38;
          *(__m128i *)v41 = v42;
          *(__m128i *)(v41 + 16) = _mm_load_si128((const __m128i *)&xmmword_774F0);
          *(_QWORD *)(v41 + 29) = 0x6465746365746564LL;
          *(_BYTE *)(*v66 + 37) = 0;
          goto LABEL_55;
        }
      }
    }
    if ( v78 )
    {
      v46 = v79;
      v38 = 1;
      if ( (_QWORD)v79 )
        goto LABEL_57;
      qfree();
    }
LABEL_64:
    v76 = nullptr;
    v77 = 0;
    sub_41510(&v76);
    v50 = v76;
    v51 = (const char *)v76;
    if ( !(_QWORD)v77 )
      v51 = s;
    if ( sub_14160(v51) )
    {
      v79 = 0;
      v78 = 0;
      sub_15620(v65);
      v52 = v79;
      v53 = 2;
      if ( (_QWORD)v79 )
      {
        v53 = v79 + 1;
        v52 = v79 - 1;
      }
      v54 = v78;
      if ( *((_QWORD *)&v79 + 1) < v53 )
      {
        v73 = v52;
        v71 = v53;
        v78 = qvector_reserve();
        v52 = v73;
        v54 = v78;
        v53 = v71;
      }
      *(_QWORD *)&v79 = v53;
      *(_BYTE *)(v54 + v52) = 0;
      *(_BYTE *)(v78 + v52 + 1) = 0;
      v55 = *(_BYTE *)(v9 + 968) == 0;
      v80 = nullptr;
      v81 = 0;
      if ( !v55 )
        goto LABEL_72;
      if ( (unsigned __int8)sub_47C40(v9, v51) )
      {
        if ( v80 )
        {
          v81.m128i_i64[0] = 0;
          qfree();
        }
LABEL_72:
        if ( v78 )
        {
          *(_QWORD *)&v79 = 0;
          qfree();
        }
        if ( v50 )
          qfree();
        goto LABEL_2;
      }
      v57 = s;
      if ( v81.m128i_i64[0] )
        v57 = v80;
      sub_13170((__int64)"Could not start external debugger with command line:\n%s\nError: %s\n", v51, v57);
      sub_130A0((__int64)"Could not start external debugger. Please check settings.");
      if ( v80 )
      {
        v81.m128i_i64[0] = 0;
        qfree();
      }
      if ( v78 )
      {
        *(_QWORD *)&v79 = 0;
        qfree();
      }
    }
    if ( v50 )
      qfree();
    return 0;
  }
LABEL_2:
  if ( a2 )
  {
    if ( !*a2 )
      a2 = "localhost";
  }
  else
  {
    a2 = "localhost";
  }
  v10 = 21;
  v62 = &v80;
  while ( 1 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 712LL);
    if ( v16 != sub_3CC00 )
      break;
    v11 = sub_5D080(*(_QWORD *)(v9 + 864), a2, HIDWORD(v68), v66);
    if ( v11 )
      goto LABEL_14;
LABEL_7:
    if ( *(_QWORD *)(v9 + 1688) && !(unsigned int)check_process_exit() )
    {
      sub_13170((__int64)"External debugger died, exit code %d\n", (_DWORD)v80);
      sub_130A0((__int64)"External debugger died before we could connect to it");
      return 0;
    }
    if ( !*(_QWORD *)(v9 + 960) )
      return 0;
    if ( !--v10 )
      return 0;
    qsleep();
  }
  v11 = v16(v9, (__int64)a2, HIDWORD(v68), (__int64)v66);
  if ( !v11 )
    goto LABEL_7;
LABEL_14:
  LOBYTE(v62) = v11;
  *(_OWORD *)&v82[12] = 0;
  v83 = 0;
  v80 = (const char *)&dword_40;
  v81 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_8C910),
          (__m128i)(unsigned __int64)"Send a command to GDB monitor");
  v84 = 0xFFFFFFFFLL;
  *(__m128 *)v82 = _mm_loadh_ps((const double *)&PLUGIN_ptr);
  v17 = callui(127, &v80, v12, v13, v14, v15, v60, v62, v66, v68);
  v19 = v63;
  if ( v17 )
  {
    v20 = callui(129, "Debug/Take memory", "gdb:sendMonitorCmd", 1, (unsigned __int8)v63, v18, v61, v63, v67, v69);
    v19 = v63;
    if ( !v20 )
    {
      callui(128, "gdb:sendMonitorCmd", v21, v22, (unsigned __int8)v63, v23, v61, v63, v67, v69);
      v19 = v63;
    }
  }
  LOBYTE(v63) = v19;
  sub_14E00((__int64)&off_8C380, 1u, 1);
  callui(85, &unk_8C3C0, 1, v24, v25, v26, v61, v63, v67, v69);
  return v64;
}

