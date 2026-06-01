__int64 __fastcall sub_39C60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rdi
  __int64 generic_linput; // rax
  __int64 v9; // r14
  int v10; // eax
  __m128i v11; // xmm1
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r14d
  __int64 (*v15)(); // rdx
  __int64 (*v16)(); // rcx
  unsigned int v17; // r15d
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int128 *v32; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 *v33; // [rsp+8h] [rbp-2D0h]
  unsigned __int64 v34; // [rsp+18h] [rbp-2C0h] BYREF
  __int128 v35; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-2A8h]
  __m128i si128; // [rsp+40h] [rbp-298h] BYREF
  __int64 v38; // [rsp+50h] [rbp-288h]
  int v39; // [rsp+58h] [rbp-280h]
  char v40; // [rsp+5Ch] [rbp-27Ch]
  _BYTE v41[24]; // [rsp+60h] [rbp-278h] BYREF
  __int64 v42; // [rsp+78h] [rbp-260h]
  char v43; // [rsp+80h] [rbp-258h]
  _OWORD v44[2]; // [rsp+90h] [rbp-248h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-228h]
  int v46; // [rsp+B8h] [rbp-220h]
  char v47; // [rsp+BCh] [rbp-21Ch]
  __int64 v48; // [rsp+C0h] [rbp-218h]
  char v49; // [rsp+C8h] [rbp-210h]
  __int64 v50; // [rsp+D8h] [rbp-200h]
  __int128 v51; // [rsp+E0h] [rbp-1F8h]
  __m128i v52; // [rsp+F0h] [rbp-1E8h]
  char v53; // [rsp+100h] [rbp-1D8h]
  __m128i v54; // [rsp+108h] [rbp-1D0h]
  __int64 v55; // [rsp+118h] [rbp-1C0h]
  __int128 v56; // [rsp+120h] [rbp-1B8h]
  __int16 v57; // [rsp+130h] [rbp-1A8h]
  __int64 v58; // [rsp+158h] [rbp-180h]
  __int128 v59; // [rsp+160h] [rbp-178h]
  __int64 v60; // [rsp+170h] [rbp-168h]
  __int128 v61; // [rsp+178h] [rbp-160h]
  __int64 v62; // [rsp+188h] [rbp-150h]
  __int128 v63; // [rsp+190h] [rbp-148h]
  __int64 v64; // [rsp+1A0h] [rbp-138h]
  __int128 v65; // [rsp+1A8h] [rbp-130h]
  __int64 v66; // [rsp+1B8h] [rbp-120h]
  __int128 v67; // [rsp+1C0h] [rbp-118h]
  __int64 v68; // [rsp+1D0h] [rbp-108h]
  __int128 v69; // [rsp+1D8h] [rbp-100h]
  __int64 v70; // [rsp+1E8h] [rbp-F0h]
  __int128 v71; // [rsp+1F0h] [rbp-E8h]
  __int64 v72; // [rsp+200h] [rbp-D8h]
  __int128 v73; // [rsp+208h] [rbp-D0h]
  __int64 v74; // [rsp+218h] [rbp-C0h]
  __int128 v75; // [rsp+220h] [rbp-B8h]
  __int64 v76; // [rsp+230h] [rbp-A8h]
  __int128 v77; // [rsp+238h] [rbp-A0h]
  __int16 v78; // [rsp+248h] [rbp-90h]
  char v79; // [rsp+24Ah] [rbp-8Eh]
  int v80; // [rsp+24Ch] [rbp-8Ch]
  __int128 v81; // [rsp+250h] [rbp-88h]
  __int64 v82; // [rsp+260h] [rbp-78h]
  __int64 v83; // [rsp+268h] [rbp-70h]
  int v84; // [rsp+270h] [rbp-68h]
  __int64 v85; // [rsp+278h] [rbp-60h]
  __int128 v86; // [rsp+280h] [rbp-58h]
  __int64 v87; // [rsp+290h] [rbp-48h]
  unsigned __int64 v88; // [rsp+298h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v7 = operator new(0x28u);
  *(_QWORD *)v7 = &off_8C210;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  *(_QWORD *)(v7 + 8) = 0xFFFFFFFFLL;
  *(_DWORD *)(v7 + 16) = 0;
  generic_linput = create_generic_linput();
  if ( !generic_linput )
    return 0;
  v39 = 8;
  v9 = generic_linput;
  v38 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_77450);
  v40 = 1;
  v10 = sub_14B40();
  v11 = _mm_load_si128((const __m128i *)&xmmword_77450);
  v12 = si128.m128i_i64[0];
  if ( v10 == 8 )
    v12 = si128.m128i_i64[1];
  else
    v10 = 4;
  v38 = v12;
  v39 = v10;
  v44[1] = v11;
  v57 = 0;
  v52 = _mm_load_si128((const __m128i *)&xmmword_77440);
  v44[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_8BA58, (__m128i)(unsigned __int64)&si128);
  v54 = _mm_load_si128((const __m128i *)&xmmword_773F0);
  v45 = -1;
  v46 = 8;
  v47 = 1;
  v48 = v9;
  v49 = 1;
  v50 = 0;
  v53 = 0;
  v55 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v51 = 0;
  v56 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v13 = *(_DWORD *)(a1 + 16);
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v82 = 0;
  v83 = 0;
  v84 = a4 | 1;
  v85 = 0;
  v87 = 0;
  v75 = 0;
  v77 = 0;
  v81 = -1;
  v86 = 0;
  if ( v13 )
  {
    v14 = -1;
    if ( v13 == 13 )
    {
      v14 = 12;
      if ( *(_BYTE *)(a1 + 24) )
        v14 = 16777228;
    }
  }
  else
  {
    v14 = 7;
    if ( *(_BYTE *)(a1 + 24) )
      v14 = 16777223;
  }
  v17 = sub_2F0C0((__int64)v44, a3, a2, v14);
  if ( !(_BYTE)v17 )
  {
LABEL_15:
    v17 = 0;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 )
  {
    v36 = 0;
    v32 = &v35;
    v35 = 0;
    v33 = (__int64 *)v41;
    *(__m128 *)v41 = _mm_loadh_ps((const double *)&v32);
    if ( (unsigned __int8)sub_2BFD0((__int64)v44, (__m128i *)v41, v15, v16) )
    {
      v19 = sub_28D00((__int64)v44, v36);
      v22 = *(_QWORD **)(a1 + 48);
      *(_QWORD *)v41 = 0;
      v23 = a2 + v19;
      v24 = (_QWORD *)(a1 + 40);
      v34 = v23;
      if ( !v22 )
        goto LABEL_26;
      do
      {
        v25 = v22[3];
        if ( v22[4] >= v23 )
        {
          v24 = v22;
          v22 = (_QWORD *)v22[2];
        }
        else
        {
          v22 = (_QWORD *)v22[3];
        }
      }
      while ( v22 );
      if ( (_QWORD *)(a1 + 40) == v24 || v23 < v24[4] )
      {
LABEL_26:
        v24 = sub_39AD0((_QWORD *)(a1 + 32), v24, &v34, v33);
        v29 = sub_2E830(v44, (__int64)v32, 1, v26, v27, v28);
        v24[5] = v29;
        if ( !v29 )
          goto LABEL_10;
        *(_BYTE *)(v29 + 48) = 1;
        v49 = 0;
      }
      if ( v24[5] )
      {
        v30 = v33;
        memset(v41, 0, sizeof(v41));
        v43 = 0;
        v42 = 0;
        sub_30C40((__int64)v44, (__int64)v32, v33, v25, v20, v21);
        v31 = v24[5];
        v43 = 0;
        v42 = v31;
        if ( v31 )
        {
          sub_26460(v30, (_QWORD *)a3, v14);
          if ( v43 )
          {
            if ( v42 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
          }
        }
        if ( *(_QWORD *)v41 )
        {
          *(_QWORD *)&v41[8] = 0;
          qfree();
        }
      }
      goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  sub_26580((__int64)v44);
  return v17;
}

