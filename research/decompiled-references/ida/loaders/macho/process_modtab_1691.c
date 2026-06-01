__int64 __fastcall sub_2F9D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall ***a4)())
{
  bool v4; // zf
  const char *v5; // r13
  const char *v9; // rbx
  __int64 (__fastcall **v10)(); // rdx
  const char *v11; // rsi
  unsigned __int64 v12; // rax
  const char *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  const char *v26; // rsi
  __int64 (__fastcall **v27)(); // r14
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 (__fastcall **v30)(); // rdi
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 (__fastcall *v33)(); // rdx
  __int64 (__fastcall *v34)(); // rcx
  __int64 v35; // r8
  int v36; // r9d
  __int64 v37; // rax
  __m128i v38; // [rsp+0h] [rbp-278h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-260h] BYREF
  __m128i v40; // [rsp+20h] [rbp-258h] BYREF
  char v41; // [rsp+30h] [rbp-248h]
  __int64 (__fastcall **v42)(); // [rsp+40h] [rbp-238h] BYREF
  _BYTE v43[24]; // [rsp+48h] [rbp-230h] BYREF
  __int64 v44; // [rsp+60h] [rbp-218h]
  int v45; // [rsp+68h] [rbp-210h]
  char v46; // [rsp+6Ch] [rbp-20Ch]
  const char *v47; // [rsp+70h] [rbp-208h]
  char v48; // [rsp+78h] [rbp-200h]
  __int64 v49; // [rsp+88h] [rbp-1F0h]
  __int128 v50; // [rsp+90h] [rbp-1E8h]
  __m128i si128; // [rsp+A0h] [rbp-1D8h]
  char v52; // [rsp+B0h] [rbp-1C8h]
  __m128i v53; // [rsp+B8h] [rbp-1C0h]
  __int64 v54; // [rsp+C8h] [rbp-1B0h]
  __int128 v55; // [rsp+D0h] [rbp-1A8h]
  __int16 v56; // [rsp+E0h] [rbp-198h]
  __int64 v57; // [rsp+108h] [rbp-170h]
  __int128 v58; // [rsp+110h] [rbp-168h]
  __int64 v59; // [rsp+120h] [rbp-158h]
  __int128 v60; // [rsp+128h] [rbp-150h]
  __int64 v61; // [rsp+138h] [rbp-140h]
  __int128 v62; // [rsp+140h] [rbp-138h]
  __int64 v63; // [rsp+150h] [rbp-128h]
  __int128 v64; // [rsp+158h] [rbp-120h]
  __int64 v65; // [rsp+168h] [rbp-110h]
  __int128 v66; // [rsp+170h] [rbp-108h]
  __int64 v67; // [rsp+180h] [rbp-F8h]
  __int128 v68; // [rsp+188h] [rbp-F0h]
  __int64 v69; // [rsp+198h] [rbp-E0h]
  __int128 v70; // [rsp+1A0h] [rbp-D8h]
  __int64 v71; // [rsp+1B0h] [rbp-C8h]
  __int128 v72; // [rsp+1B8h] [rbp-C0h]
  __int64 v73; // [rsp+1C8h] [rbp-B0h]
  __int128 v74; // [rsp+1D0h] [rbp-A8h]
  __int64 v75; // [rsp+1E0h] [rbp-98h]
  __int128 v76; // [rsp+1E8h] [rbp-90h]
  __int16 v77; // [rsp+1F8h] [rbp-80h]
  char v78; // [rsp+1FAh] [rbp-7Eh]
  int v79; // [rsp+1FCh] [rbp-7Ch]
  __int128 v80; // [rsp+200h] [rbp-78h]
  __int64 v81; // [rsp+210h] [rbp-68h]
  __int64 v82; // [rsp+218h] [rbp-60h]
  int v83; // [rsp+220h] [rbp-58h]
  __int64 v84; // [rsp+228h] [rbp-50h]
  __int128 v85; // [rsp+230h] [rbp-48h]
  __int64 v86; // [rsp+240h] [rbp-38h]
  unsigned __int64 v87; // [rsp+248h] [rbp-30h]

  v87 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8) == 0;
  v39 = 0;
  if ( !v4 )
  {
    v5 = *(const char **)a2;
    if ( !strcmp(*(const char **)a2, "_PrelinkKmodInfo") )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        v9 = *(const char **)a3;
        if ( strcmp(v9, "integer") )
          goto LABEL_44;
        v14 = s1;
        if ( a4[1] )
          v14 = (const char *)*a4;
        v12 = strtoull(v14, 0, 0);
        v39 = v12;
        if ( v12 )
          goto LABEL_21;
      }
    }
    else if ( !strcmp(v5, "OSBundlePrelink") && *(_QWORD *)(a3 + 8) )
    {
      v9 = *(const char **)a3;
      do
      {
        if ( strcmp(v9, "data") )
          break;
        v10 = a4[1];
        v42 = 0;
        v11 = s1;
        *(_OWORD *)v43 = 0;
        if ( v10 )
        {
          v11 = (const char *)*a4;
          v10 = (__int64 (__fastcall **)())((char *)v10 - 1);
        }
        if ( (unsigned __int8)base64_decode(&v42, v11, v10) && *(_QWORD *)v43 > 0xFu )
        {
          v11 = (const char *)v42;
          swap_value(&v39, v42, 4);
        }
        if ( v42 )
        {
          *(_QWORD *)v43 = 0;
          qfree(v42, v11);
        }
        v12 = v39;
        if ( !v39 )
          break;
LABEL_21:
        v15 = a1[2];
        if ( *(_BYTE *)(v15 + 161) )
          v16 = sub_28D10(v15, v12 + 8);
        else
          v16 = sub_28D10(v15, v12 + 4);
        if ( v16 != 1 )
          return 0;
        v17 = (__int64 *)a1[3];
        v18 = v17[1];
        v19 = *v17;
        if ( v17[2] < (unsigned __int64)(v18 + 1) )
        {
          v37 = qvector_reserve(a1[3], v19, v18 + 1, 80);
          v18 = v17[1];
          *v17 = v37;
          v19 = v37;
        }
        v20 = v19 + 80 * v18;
        v21 = v39;
        *(_OWORD *)v20 = 0;
        v5 = (const char *)(v20 + 64);
        *(_OWORD *)(v20 + 16) = 0;
        *(_OWORD *)(v20 + 48) = 0;
        *(_QWORD *)(v20 + 32) = 0;
        *(_QWORD *)(v20 + 40) = 0;
        *(_OWORD *)(v20 + 64) = 0;
        ++v17[1];
        *(_QWORD *)v20 = v21;
        v22 = a1[2];
        if ( *(_BYTE *)(v22 + 161) )
          v23 = sub_28DA0(v22, v21 + 164);
        else
          v23 = sub_28D10(v22, v21 + 152);
        *(_QWORD *)(v20 + 16) = v23;
        v24 = a1[2];
        if ( *(_BYTE *)(v24 + 161) )
          v25 = sub_28DA0(v24, v39 + 156);
        else
          v25 = sub_28D10(v24, v39 + 148);
        *(_QWORD *)(v20 + 8) = v25;
        a4 = &v42;
        v26 = (const char *)a1[2];
        sub_28E30(&v42, v26);
        v27 = v42;
        v28 = _mm_loadu_si128((const __m128i *)v43);
        v42 = 0;
        *(_OWORD *)v43 = 0;
        v29 = *(_QWORD *)(v20 + 40);
        if ( v29 )
        {
          *(_QWORD *)(v20 + 48) = 0;
          v38 = v28;
          qfree(v29, v26);
          v30 = v42;
          v31 = _mm_load_si128(&v38);
          *(_QWORD *)(v20 + 40) = v27;
          *(__m128i *)(v20 + 48) = v31;
          if ( v30 )
          {
            *(_QWORD *)v43 = 0;
            qfree(v30, v26);
          }
        }
        else
        {
          *(_QWORD *)(v20 + 40) = v27;
          *(__m128i *)(v20 + 48) = v28;
        }
        *(__m128i *)(v20 + 24) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)(v20 + 8)),
                                   (__m128i)(unsigned __int64)sub_28C90(a1[2]));
        v9 = (const char *)sub_29210(a1[2]);
        if ( v9 )
        {
          v32 = a1[1];
          v42 = &off_62AA0;
          *(_QWORD *)v43 = v32;
          si128 = _mm_load_si128((const __m128i *)&xmmword_57480);
          *(__m128i *)&v43[8] = _mm_load_si128((const __m128i *)&xmmword_574B0);
          v53 = _mm_load_si128((const __m128i *)&xmmword_574C0);
          v44 = -1;
          v45 = 8;
          v46 = 1;
          v47 = v9;
          v48 = 0;
          v49 = 0;
          v52 = 0;
          v54 = 0;
          v56 = 0;
          v57 = 0;
          v59 = 0;
          v61 = 0;
          v63 = 0;
          v65 = 0;
          v67 = 0;
          v50 = 0;
          v55 = 0;
          v58 = 0;
          v60 = 0;
          v62 = 0;
          v64 = 0;
          v66 = 0;
          v68 = 0;
          v69 = 0;
          v71 = 0;
          v73 = 0;
          v75 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          v81 = 0;
          v82 = 0;
          v83 = 0;
          v84 = 0;
          v86 = 0;
          v70 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v80 = -1;
          v85 = 0;
          if ( (unsigned __int8)sub_25BB0(&v42) && (unsigned __int8)sub_25EF0(&v42, 0, 0, 0) )
          {
            v40.m128i_i64[1] = (__int64)v5;
            v40.m128i_i64[0] = (__int64)off_63268;
            v41 = 0;
            sub_27280((__int64)&v42, &v40, v33, v34, v35, v36);
          }
          sub_162E0(&v42);
          close_linput(v9);
          return 0;
        }
        if ( under_debugger )
          BUG();
        interr(20126);
LABEL_44:
        ;
      }
      while ( !strcmp(v5, "OSBundlePrelink") );
    }
  }
  return 0;
}
