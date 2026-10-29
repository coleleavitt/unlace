__int64 __fastcall sub_1AC60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rdi
  __int64 generic_linput; // rax
  __int64 v9; // r14
  int v10; // eax
  __m128i v11; // xmm1
  __int64 v12; // rdx
  int v13; // eax
  __int32 v14; // r14d
  __int64 (*v15)(); // rdx
  __int64 (*v16)(); // rcx
  unsigned int v17; // r15d
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rbp
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // rax
  __int128 *v26; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 *v27; // [rsp+8h] [rbp-2D0h]
  unsigned __int64 v28; // [rsp+18h] [rbp-2C0h] BYREF
  __int128 v29; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-2A8h]
  __m128i si128; // [rsp+40h] [rbp-298h] BYREF
  __int64 v32; // [rsp+50h] [rbp-288h]
  int v33; // [rsp+58h] [rbp-280h]
  char v34; // [rsp+5Ch] [rbp-27Ch]
  _BYTE v35[24]; // [rsp+60h] [rbp-278h] BYREF
  __int64 v36; // [rsp+78h] [rbp-260h]
  char v37; // [rsp+80h] [rbp-258h]
  _OWORD v38[2]; // [rsp+90h] [rbp-248h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-228h]
  int v40; // [rsp+B8h] [rbp-220h]
  char v41; // [rsp+BCh] [rbp-21Ch]
  __int64 v42; // [rsp+C0h] [rbp-218h]
  char v43; // [rsp+C8h] [rbp-210h]
  __int64 v44; // [rsp+D8h] [rbp-200h]
  __int128 v45; // [rsp+E0h] [rbp-1F8h]
  __m128i v46; // [rsp+F0h] [rbp-1E8h]
  char v47; // [rsp+100h] [rbp-1D8h]
  __m128i v48; // [rsp+108h] [rbp-1D0h]
  __int64 v49; // [rsp+118h] [rbp-1C0h]
  __int128 v50; // [rsp+120h] [rbp-1B8h]
  __int16 v51; // [rsp+130h] [rbp-1A8h]
  __int64 v52; // [rsp+158h] [rbp-180h]
  __int128 v53; // [rsp+160h] [rbp-178h]
  __int64 v54; // [rsp+170h] [rbp-168h]
  __int128 v55; // [rsp+178h] [rbp-160h]
  __int64 v56; // [rsp+188h] [rbp-150h]
  __int128 v57; // [rsp+190h] [rbp-148h]
  __int64 v58; // [rsp+1A0h] [rbp-138h]
  __int128 v59; // [rsp+1A8h] [rbp-130h]
  __int64 v60; // [rsp+1B8h] [rbp-120h]
  __int128 v61; // [rsp+1C0h] [rbp-118h]
  __int64 v62; // [rsp+1D0h] [rbp-108h]
  __int128 v63; // [rsp+1D8h] [rbp-100h]
  __int64 v64; // [rsp+1E8h] [rbp-F0h]
  __int128 v65; // [rsp+1F0h] [rbp-E8h]
  __int64 v66; // [rsp+200h] [rbp-D8h]
  __int128 v67; // [rsp+208h] [rbp-D0h]
  __int64 v68; // [rsp+218h] [rbp-C0h]
  __int128 v69; // [rsp+220h] [rbp-B8h]
  __int64 v70; // [rsp+230h] [rbp-A8h]
  __int128 v71; // [rsp+238h] [rbp-A0h]
  __int16 v72; // [rsp+248h] [rbp-90h]
  char v73; // [rsp+24Ah] [rbp-8Eh]
  int v74; // [rsp+24Ch] [rbp-8Ch]
  __int128 v75; // [rsp+250h] [rbp-88h]
  __int64 v76; // [rsp+260h] [rbp-78h]
  __int64 v77; // [rsp+268h] [rbp-70h]
  int v78; // [rsp+270h] [rbp-68h]
  __int64 v79; // [rsp+278h] [rbp-60h]
  __int128 v80; // [rsp+280h] [rbp-58h]
  __int64 v81; // [rsp+290h] [rbp-48h]
  unsigned __int64 v82; // [rsp+298h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v7 = operator new(0x28u);
  *(_QWORD *)v7 = &off_469F8;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  *(_QWORD *)(v7 + 8) = 0xFFFFFFFFLL;
  *(_DWORD *)(v7 + 16) = 0;
  generic_linput = create_generic_linput();
  if ( !generic_linput )
    return 0;
  v33 = 8;
  v9 = generic_linput;
  v32 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3BEB0);
  v34 = 1;
  v10 = sub_F4F0();
  v11 = _mm_load_si128((const __m128i *)&xmmword_3BEB0);
  v12 = si128.m128i_i64[0];
  if ( v10 == 8 )
    v12 = si128.m128i_i64[1];
  else
    v10 = 4;
  v32 = v12;
  v33 = v10;
  v38[1] = v11;
  v51 = 0;
  v46 = _mm_load_si128((const __m128i *)&xmmword_3BEA0);
  v38[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_46290, (__m128i)(unsigned __int64)&si128);
  v48 = _mm_load_si128((const __m128i *)&xmmword_3BEC0);
  v39 = -1;
  v40 = 8;
  v41 = 1;
  v42 = v9;
  v43 = 1;
  v44 = 0;
  v47 = 0;
  v49 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v45 = 0;
  v50 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v13 = *(_DWORD *)(a1 + 16);
  v68 = 0;
  v70 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v76 = 0;
  v77 = 0;
  v78 = a4 | 1;
  v79 = 0;
  v81 = 0;
  v69 = 0;
  v71 = 0;
  v75 = -1;
  v80 = 0;
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
  v17 = sub_195C0((__int64)v38, a3, a2, v14);
  if ( !(_BYTE)v17 )
  {
LABEL_15:
    v17 = 0;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 )
  {
    v30 = 0;
    v26 = &v29;
    v29 = 0;
    v27 = (__int64 *)v35;
    *(__m128 *)v35 = _mm_loadh_ps((const double *)&v26);
    if ( (unsigned __int8)sub_16990((__int64)v38, (__m128i *)v35, v15, v16) )
    {
      v19 = sub_14A00((__int64)v38, v30);
      v20 = *(_QWORD **)(a1 + 48);
      *(_QWORD *)v35 = 0;
      v21 = a2 + v19;
      v22 = (_QWORD *)(a1 + 40);
      v28 = v21;
      if ( !v20 )
        goto LABEL_26;
      do
      {
        if ( v20[4] >= v21 )
        {
          v22 = v20;
          v20 = (_QWORD *)v20[2];
        }
        else
        {
          v20 = (_QWORD *)v20[3];
        }
      }
      while ( v20 );
      if ( (_QWORD *)(a1 + 40) == v22 || v21 < v22[4] )
      {
LABEL_26:
        v22 = sub_1AAC0((_QWORD *)(a1 + 32), v22, &v28, v27);
        v23 = sub_191F0(v38, (__int64)v26, 1);
        v22[5] = v23;
        if ( !v23 )
          goto LABEL_10;
        *(_BYTE *)(v23 + 48) = 1;
        v43 = 0;
      }
      if ( v22[5] )
      {
        v24 = v27;
        memset(v35, 0, sizeof(v35));
        v37 = 0;
        v36 = 0;
        sub_1A3D0((__int64)v38, (__int64)v26, v27);
        v25 = v22[5];
        v37 = 0;
        v36 = v25;
        if ( v25 )
        {
          sub_13380(v24, (__int64 *)a3, v14);
          if ( v37 )
          {
            if ( v36 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
          }
        }
        if ( *(_QWORD *)v35 )
        {
          *(_QWORD *)&v35[8] = 0;
          qfree();
        }
      }
      goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  sub_134D0((__int64)v38);
  return v17;
}

