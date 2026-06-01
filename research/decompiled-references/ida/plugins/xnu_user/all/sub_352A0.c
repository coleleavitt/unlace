__int64 __fastcall sub_352A0(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // r12d
  int v5; // r15d
  __int64 v6; // rbp
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128 v19; // xmm0
  __int64 (*v20)(); // rcx
  __int64 v21; // rax
  __int64 (*v22)(); // rdx
  __m128i v23; // xmm0
  __int64 (__fastcall **v24)(); // rdi
  __m128i v25; // xmm0
  __m128i *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-3C0h]
  unsigned int v29; // [rsp+Ch] [rbp-3BCh]
  __int64 v30; // [rsp+10h] [rbp-3B8h]
  __int64 v31; // [rsp+18h] [rbp-3B0h] BYREF
  __int64 v32; // [rsp+20h] [rbp-3A8h]
  __int64 (__fastcall ***v33)(); // [rsp+28h] [rbp-3A0h]
  __int64 v34; // [rsp+30h] [rbp-398h]
  __int64 (*v35)(); // [rsp+38h] [rbp-390h]
  __m128i v36; // [rsp+40h] [rbp-388h] BYREF
  __int64 v37; // [rsp+50h] [rbp-378h] BYREF
  __int64 v38; // [rsp+58h] [rbp-370h]
  __int64 (__fastcall **v39)(); // [rsp+60h] [rbp-368h] BYREF
  __m128i v40; // [rsp+68h] [rbp-360h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-348h] BYREF
  __m128i si128; // [rsp+90h] [rbp-338h]
  __int64 v43; // [rsp+A0h] [rbp-328h]
  int v44; // [rsp+A8h] [rbp-320h]
  char v45; // [rsp+ACh] [rbp-31Ch]
  __int64 v46; // [rsp+B0h] [rbp-318h]
  char v47; // [rsp+B8h] [rbp-310h]
  __int64 v48; // [rsp+C8h] [rbp-300h]
  __int128 v49; // [rsp+D0h] [rbp-2F8h]
  __m128i v50; // [rsp+E0h] [rbp-2E8h]
  char v51; // [rsp+F0h] [rbp-2D8h]
  __m128i v52; // [rsp+F8h] [rbp-2D0h]
  __int64 v53; // [rsp+108h] [rbp-2C0h]
  __int128 v54; // [rsp+110h] [rbp-2B8h]
  __int16 v55; // [rsp+120h] [rbp-2A8h]
  __int64 v56; // [rsp+148h] [rbp-280h]
  __int128 v57; // [rsp+150h] [rbp-278h]
  __int64 v58; // [rsp+160h] [rbp-268h]
  __int128 v59; // [rsp+168h] [rbp-260h]
  __int64 v60; // [rsp+178h] [rbp-250h]
  __int128 v61; // [rsp+180h] [rbp-248h]
  __int64 v62; // [rsp+190h] [rbp-238h]
  __int128 v63; // [rsp+198h] [rbp-230h]
  __int64 v64; // [rsp+1A8h] [rbp-220h]
  __int128 v65; // [rsp+1B0h] [rbp-218h]
  __int64 v66; // [rsp+1C0h] [rbp-208h]
  __int128 v67; // [rsp+1C8h] [rbp-200h]
  __int64 v68; // [rsp+1D8h] [rbp-1F0h]
  __int128 v69; // [rsp+1E0h] [rbp-1E8h]
  __int64 v70; // [rsp+1F0h] [rbp-1D8h]
  __int128 v71; // [rsp+1F8h] [rbp-1D0h]
  __int64 v72; // [rsp+208h] [rbp-1C0h]
  __int128 v73; // [rsp+210h] [rbp-1B8h]
  __int64 v74; // [rsp+220h] [rbp-1A8h]
  __int128 v75; // [rsp+228h] [rbp-1A0h]
  __int16 v76; // [rsp+238h] [rbp-190h]
  char v77; // [rsp+23Ah] [rbp-18Eh]
  int v78; // [rsp+23Ch] [rbp-18Ch]
  __int128 v79; // [rsp+240h] [rbp-188h]
  __int64 v80; // [rsp+250h] [rbp-178h]
  __int64 v81; // [rsp+258h] [rbp-170h]
  int v82; // [rsp+260h] [rbp-168h]
  __int64 v83; // [rsp+268h] [rbp-160h]
  __int128 v84; // [rsp+270h] [rbp-158h]
  __int64 v85; // [rsp+280h] [rbp-148h]
  __m128i v86[2]; // [rsp+290h] [rbp-138h] BYREF
  __int64 v87; // [rsp+2B8h] [rbp-110h]
  int v88; // [rsp+2C0h] [rbp-108h]
  __m128i v89[2]; // [rsp+2E0h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+308h] [rbp-C0h]
  int v91; // [rsp+310h] [rbp-B8h]
  __m128i v92[2]; // [rsp+330h] [rbp-98h] BYREF
  unsigned __int64 v93; // [rsp+350h] [rbp-78h]
  __int64 v94; // [rsp+358h] [rbp-70h]
  unsigned __int64 v95; // [rsp+388h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 161)
    && (unsigned __int8)sub_34390(a1, "__PRELINK_INFO", "__kmod_start", v86)
    && (v4 = v87, v87)
    && (unsigned __int8)sub_34390(a1, "__PRELINK_INFO", "__kmod_info", v89)
    && (v5 = v90, v90)
    && (v1 = sub_34390(a1, "__TEXT_EXEC", "__text", v92), (_BYTE)v1)
    && (v30 = v94) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v6 + v88;
    v8 = v91 + v6;
    v28 = v7 + v4;
    v29 = v8 + v5;
    if ( v7 < v7 + v4 && v8 < v8 + v5 )
    {
      do
      {
        v37 = 0;
        v38 = 0;
        if ( v7 != qlseek() || qlread() != 8 || v8 != qlseek() || qlread() != 8 )
          break;
        v9 = v37;
        if ( (v37 & 0x4000000000000000LL) == 0 )
        {
          if ( v37 < 0 )
            v9 = *(_QWORD *)(a1 + 448) + (unsigned int)v37;
          else
            v9 = (v37 << 21 >> 21) & 0xFFFFFFFFFFFFFFLL | (v37 << 13) & 0xFF00000000000000LL;
        }
        v10 = v38;
        v37 = v9;
        if ( (v38 & 0x4000000000000000LL) == 0 )
        {
          if ( v38 < 0 )
            v10 = *(_QWORD *)(a1 + 448) + (unsigned int)v38;
          else
            v10 = (v38 << 21 >> 21) & 0xFFFFFFFFFFFFFFLL | (v38 << 13) & 0xFF00000000000000LL;
        }
        v38 = v10;
        if ( v9 >= v93 && v9 < v30 + v93 )
        {
          v31 = sub_340B0(a1, v9);
          v11 = sub_344F0(a1, v31);
          if ( !v11 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          v41[1] = *(_QWORD *)(a1 + 8);
          v55 = 0;
          v41[0] = &off_974D8;
          v43 = -1;
          v44 = 8;
          v45 = 1;
          v46 = v11;
          v47 = 0;
          v48 = 0;
          v51 = 0;
          v53 = 0;
          v56 = 0;
          v58 = 0;
          v60 = 0;
          v62 = 0;
          v64 = 0;
          v66 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_823B0);
          v49 = 0;
          v50 = _mm_load_si128((const __m128i *)&xmmword_82350);
          v52 = _mm_load_si128((const __m128i *)&xmmword_82340);
          v54 = 0;
          v57 = 0;
          v59 = 0;
          v61 = 0;
          v63 = 0;
          v65 = 0;
          v67 = 0;
          v68 = 0;
          v70 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v80 = 0;
          v81 = 0;
          v82 = 0;
          v83 = 0;
          v85 = 0;
          v69 = 0;
          v71 = 0;
          v73 = 0;
          v75 = 0;
          v79 = -1;
          v84 = 0;
          if ( !sub_31110((__int64)v41) || !sub_31420((__int64)v41, 0, 0, 0) )
            goto LABEL_43;
          if ( !(_BYTE)v76 )
            sub_33E50((__int64)v41);
          v12 = v58;
          v13 = v58 + 72 * v59;
          if ( v13 == v58 )
            goto LABEL_43;
          while ( *(_QWORD *)(v12 + 40) )
          {
            v12 += 72;
            if ( v13 == v12 )
              goto LABEL_43;
          }
          v14 = *(_QWORD *)(v12 + 32);
          if ( v14 )
          {
            v15 = *(_QWORD *)(a1 + 304);
            v16 = *(_QWORD *)(a1 + 296);
            if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v15 + 1) )
            {
              v32 = v14;
              v27 = qvector_reserve();
              *(_QWORD *)(a1 + 296) = v27;
              v16 = v27;
              v14 = v32;
              v15 = *(_QWORD *)(a1 + 304);
            }
            v17 = v38;
            v18 = v16 + 80 * v15;
            *(_OWORD *)v18 = 0;
            *(_OWORD *)(v18 + 16) = 0;
            *(_OWORD *)(v18 + 48) = 0;
            *(_OWORD *)(v18 + 64) = 0;
            *(_QWORD *)(v18 + 32) = 0;
            v19 = _mm_loadh_ps((const double *)&v37);
            *(_QWORD *)(v18 + 40) = 0;
            ++*(_QWORD *)(a1 + 304);
            *(_QWORD *)(v18 + 16) = v14;
            v34 = v18;
            *(__m128 *)v18 = v19;
            v32 = v18 + 64;
            v33 = &v39;
            sub_34250((__int64)&v39, a1, v17);
            v21 = v34;
            v22 = (__int64 (*)())v39;
            v39 = nullptr;
            v23 = _mm_loadu_si128(&v40);
            v40 = 0;
            if ( *(_QWORD *)(v34 + 40) )
            {
              *(_QWORD *)(v34 + 48) = 0;
              v35 = v22;
              v34 = v21;
              v36 = v23;
              qfree();
              v24 = v39;
              v21 = v34;
              v22 = v35;
              v25 = _mm_load_si128(&v36);
              *(_QWORD *)(v34 + 40) = v35;
              *(__m128i *)(v21 + 48) = v25;
              if ( v24 )
              {
                v40.m128i_i64[0] = 0;
                qfree();
                v21 = v34;
              }
            }
            else
            {
              *(_QWORD *)(v34 + 40) = v22;
              *(__m128i *)(v21 + 48) = v23;
            }
            v26 = (__m128i *)v33;
            *(__m128 *)(v21 + 24) = _mm_loadh_ps((const double *)&v31);
            v39 = off_97778;
            v40.m128i_i8[8] = 0;
            v40.m128i_i64[0] = v32;
            sub_32130((__int64)v41, v26, v22, v20);
            sub_2BAE0((__int64)v41);
            close_linput();
          }
          else
          {
LABEL_43:
            sub_2BAE0((__int64)v41);
            close_linput();
          }
        }
        v7 += 8;
        v8 += 8;
        if ( v7 >= v28 )
          break;
      }
      while ( v8 < v29 );
    }
  }
  else
  {
    return 0;
  }
  return v1;
}

