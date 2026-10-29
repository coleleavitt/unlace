__int64 __fastcall sub_35A00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  const char *v5; // r13
  const char *v9; // rbx
  unsigned __int64 v10; // rax
  const char *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 (__fastcall **v24)(); // r14
  __m128i v25; // xmm0
  __int64 (__fastcall **v26)(); // rdi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 (*v30)(); // rdx
  __int64 (*v31)(); // rcx
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-278h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-260h]
  __m128i v35; // [rsp+20h] [rbp-258h] BYREF
  char v36; // [rsp+30h] [rbp-248h]
  __int64 (__fastcall **v37)(); // [rsp+40h] [rbp-238h] BYREF
  _BYTE v38[24]; // [rsp+48h] [rbp-230h] BYREF
  __int64 v39; // [rsp+60h] [rbp-218h]
  int v40; // [rsp+68h] [rbp-210h]
  char v41; // [rsp+6Ch] [rbp-20Ch]
  const char *v42; // [rsp+70h] [rbp-208h]
  char v43; // [rsp+78h] [rbp-200h]
  __int64 v44; // [rsp+88h] [rbp-1F0h]
  __int128 v45; // [rsp+90h] [rbp-1E8h]
  __m128i si128; // [rsp+A0h] [rbp-1D8h]
  char v47; // [rsp+B0h] [rbp-1C8h]
  __m128i v48; // [rsp+B8h] [rbp-1C0h]
  __int64 v49; // [rsp+C8h] [rbp-1B0h]
  __int128 v50; // [rsp+D0h] [rbp-1A8h]
  __int16 v51; // [rsp+E0h] [rbp-198h]
  __int64 v52; // [rsp+108h] [rbp-170h]
  __int128 v53; // [rsp+110h] [rbp-168h]
  __int64 v54; // [rsp+120h] [rbp-158h]
  __int128 v55; // [rsp+128h] [rbp-150h]
  __int64 v56; // [rsp+138h] [rbp-140h]
  __int128 v57; // [rsp+140h] [rbp-138h]
  __int64 v58; // [rsp+150h] [rbp-128h]
  __int128 v59; // [rsp+158h] [rbp-120h]
  __int64 v60; // [rsp+168h] [rbp-110h]
  __int128 v61; // [rsp+170h] [rbp-108h]
  __int64 v62; // [rsp+180h] [rbp-F8h]
  __int128 v63; // [rsp+188h] [rbp-F0h]
  __int64 v64; // [rsp+198h] [rbp-E0h]
  __int128 v65; // [rsp+1A0h] [rbp-D8h]
  __int64 v66; // [rsp+1B0h] [rbp-C8h]
  __int128 v67; // [rsp+1B8h] [rbp-C0h]
  __int64 v68; // [rsp+1C8h] [rbp-B0h]
  __int128 v69; // [rsp+1D0h] [rbp-A8h]
  __int64 v70; // [rsp+1E0h] [rbp-98h]
  __int128 v71; // [rsp+1E8h] [rbp-90h]
  __int16 v72; // [rsp+1F8h] [rbp-80h]
  char v73; // [rsp+1FAh] [rbp-7Eh]
  int v74; // [rsp+1FCh] [rbp-7Ch]
  __int128 v75; // [rsp+200h] [rbp-78h]
  __int64 v76; // [rsp+210h] [rbp-68h]
  __int64 v77; // [rsp+218h] [rbp-60h]
  int v78; // [rsp+220h] [rbp-58h]
  __int64 v79; // [rsp+228h] [rbp-50h]
  __int128 v80; // [rsp+230h] [rbp-48h]
  __int64 v81; // [rsp+240h] [rbp-38h]
  unsigned __int64 v82; // [rsp+248h] [rbp-30h]

  v82 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8) == 0;
  v34 = 0;
  if ( !v4 )
  {
    v5 = *(const char **)a2;
    if ( !strcmp(*(const char **)a2, "_PrelinkKmodInfo") )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        v9 = *(const char **)a3;
        if ( strcmp(v9, "integer") )
          goto LABEL_42;
        v12 = src;
        if ( *(_QWORD *)(a4 + 8) )
          v12 = *(const char **)a4;
        v10 = strtoull(v12, nullptr, 0);
        v34 = v10;
        if ( v10 )
          goto LABEL_19;
      }
    }
    else if ( !strcmp(v5, "OSBundlePrelink") && *(_QWORD *)(a3 + 8) )
    {
      v9 = *(const char **)a3;
      do
      {
        if ( strcmp(v9, "data") )
          break;
        v37 = nullptr;
        *(_OWORD *)v38 = 0;
        if ( (unsigned __int8)base64_decode() && *(_QWORD *)v38 > 0xFu )
          swap_value();
        if ( v37 )
        {
          *(_QWORD *)v38 = 0;
          qfree();
        }
        v10 = v34;
        if ( !v34 )
          break;
LABEL_19:
        v13 = a1[2];
        if ( *(_BYTE *)(v13 + 161) )
          v14 = sub_34130(v13, v10 + 8);
        else
          v14 = sub_34130(v13, v10 + 4);
        if ( v14 != 1 )
          return 0;
        v15 = (__int64 *)a1[3];
        v16 = v15[1];
        v17 = *v15;
        if ( v15[2] < (unsigned __int64)(v16 + 1) )
        {
          v32 = qvector_reserve();
          v16 = v15[1];
          *v15 = v32;
          v17 = v32;
        }
        v18 = v17 + 80 * v16;
        v19 = v34;
        *(_OWORD *)v18 = 0;
        v5 = (const char *)(v18 + 64);
        *(_OWORD *)(v18 + 16) = 0;
        *(_OWORD *)(v18 + 48) = 0;
        *(_QWORD *)(v18 + 32) = 0;
        *(_QWORD *)(v18 + 40) = 0;
        *(_OWORD *)(v18 + 64) = 0;
        ++v15[1];
        *(_QWORD *)v18 = v19;
        v20 = a1[2];
        if ( *(_BYTE *)(v20 + 161) )
          v21 = sub_341C0(v20, v19 + 164);
        else
          v21 = sub_34130(v20, v19 + 152);
        *(_QWORD *)(v18 + 16) = v21;
        v22 = a1[2];
        if ( *(_BYTE *)(v22 + 161) )
          v23 = sub_341C0(v22, v34 + 156);
        else
          v23 = sub_34130(v22, v34 + 148);
        *(_QWORD *)(v18 + 8) = v23;
        sub_34250((__int64)&v37, a1[2], v34);
        v24 = v37;
        v25 = _mm_loadu_si128((const __m128i *)v38);
        v37 = nullptr;
        *(_OWORD *)v38 = 0;
        if ( *(_QWORD *)(v18 + 40) )
        {
          *(_QWORD *)(v18 + 48) = 0;
          v33 = v25;
          qfree();
          v26 = v37;
          v27 = _mm_load_si128(&v33);
          *(_QWORD *)(v18 + 40) = v24;
          *(__m128i *)(v18 + 48) = v27;
          if ( v26 )
          {
            *(_QWORD *)v38 = 0;
            qfree();
          }
        }
        else
        {
          *(_QWORD *)(v18 + 40) = v24;
          *(__m128i *)(v18 + 48) = v25;
        }
        v28 = sub_340B0(a1[2], *(_QWORD *)(v18 + 8));
        *(__m128i *)(v18 + 24) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)(v18 + 8)),
                                   (__m128i)(unsigned __int64)v28);
        v9 = (const char *)sub_344F0(a1[2], v28);
        if ( v9 )
        {
          v29 = a1[1];
          v37 = &off_974D8;
          *(_QWORD *)v38 = v29;
          si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
          *(__m128i *)&v38[8] = _mm_load_si128((const __m128i *)&xmmword_823B0);
          v48 = _mm_load_si128((const __m128i *)&xmmword_82340);
          v39 = -1;
          v40 = 8;
          v41 = 1;
          v42 = v9;
          v43 = 0;
          v44 = 0;
          v47 = 0;
          v49 = 0;
          v51 = 0;
          v52 = 0;
          v54 = 0;
          v56 = 0;
          v58 = 0;
          v60 = 0;
          v62 = 0;
          v45 = 0;
          v50 = 0;
          v53 = 0;
          v55 = 0;
          v57 = 0;
          v59 = 0;
          v61 = 0;
          v63 = 0;
          v64 = 0;
          v66 = 0;
          v68 = 0;
          v70 = 0;
          v72 = 0;
          v73 = 0;
          v74 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          v81 = 0;
          v65 = 0;
          v67 = 0;
          v69 = 0;
          v71 = 0;
          v75 = -1;
          v80 = 0;
          if ( sub_31110((__int64)&v37) && sub_31420((__int64)&v37, 0, 0, 0) )
          {
            v35.m128i_i64[1] = (__int64)v5;
            v35.m128i_i64[0] = (__int64)off_97778;
            v36 = 0;
            sub_32130((__int64)&v37, &v35, v30, v31);
          }
          sub_2BAE0((__int64)&v37);
          close_linput();
          return 0;
        }
        if ( under_debugger )
          BUG();
        interr();
LABEL_42:
        ;
      }
      while ( !strcmp(v5, "OSBundlePrelink") );
    }
  }
  return 0;
}

