__int64 __fastcall sub_42860(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
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
  _QWORD *v20; // rdx
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int128 *v27; // [rsp+0h] [rbp-2D8h] BYREF
  __int64 *v28; // [rsp+8h] [rbp-2D0h]
  unsigned __int64 v29; // [rsp+18h] [rbp-2C0h] BYREF
  __int128 v30; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-2A8h]
  __m128i si128; // [rsp+40h] [rbp-298h] BYREF
  __int64 v33; // [rsp+50h] [rbp-288h]
  int v34; // [rsp+58h] [rbp-280h]
  char v35; // [rsp+5Ch] [rbp-27Ch]
  _BYTE v36[24]; // [rsp+60h] [rbp-278h] BYREF
  __int64 v37; // [rsp+78h] [rbp-260h]
  char v38; // [rsp+80h] [rbp-258h]
  _OWORD v39[2]; // [rsp+90h] [rbp-248h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-228h]
  int v41; // [rsp+B8h] [rbp-220h]
  char v42; // [rsp+BCh] [rbp-21Ch]
  __int64 v43; // [rsp+C0h] [rbp-218h]
  char v44; // [rsp+C8h] [rbp-210h]
  __int64 v45; // [rsp+D8h] [rbp-200h]
  __int128 v46; // [rsp+E0h] [rbp-1F8h]
  __m128i v47; // [rsp+F0h] [rbp-1E8h]
  char v48; // [rsp+100h] [rbp-1D8h]
  __m128i v49; // [rsp+108h] [rbp-1D0h]
  __int64 v50; // [rsp+118h] [rbp-1C0h]
  __int128 v51; // [rsp+120h] [rbp-1B8h]
  __int16 v52; // [rsp+130h] [rbp-1A8h]
  __int64 v53; // [rsp+158h] [rbp-180h]
  __int128 v54; // [rsp+160h] [rbp-178h]
  __int64 v55; // [rsp+170h] [rbp-168h]
  __int128 v56; // [rsp+178h] [rbp-160h]
  __int64 v57; // [rsp+188h] [rbp-150h]
  __int128 v58; // [rsp+190h] [rbp-148h]
  __int64 v59; // [rsp+1A0h] [rbp-138h]
  __int128 v60; // [rsp+1A8h] [rbp-130h]
  __int64 v61; // [rsp+1B8h] [rbp-120h]
  __int128 v62; // [rsp+1C0h] [rbp-118h]
  __int64 v63; // [rsp+1D0h] [rbp-108h]
  __int128 v64; // [rsp+1D8h] [rbp-100h]
  __int64 v65; // [rsp+1E8h] [rbp-F0h]
  __int128 v66; // [rsp+1F0h] [rbp-E8h]
  __int64 v67; // [rsp+200h] [rbp-D8h]
  __int128 v68; // [rsp+208h] [rbp-D0h]
  __int64 v69; // [rsp+218h] [rbp-C0h]
  __int128 v70; // [rsp+220h] [rbp-B8h]
  __int64 v71; // [rsp+230h] [rbp-A8h]
  __int128 v72; // [rsp+238h] [rbp-A0h]
  __int16 v73; // [rsp+248h] [rbp-90h]
  char v74; // [rsp+24Ah] [rbp-8Eh]
  int v75; // [rsp+24Ch] [rbp-8Ch]
  __int128 v76; // [rsp+250h] [rbp-88h]
  __int64 v77; // [rsp+260h] [rbp-78h]
  __int64 v78; // [rsp+268h] [rbp-70h]
  int v79; // [rsp+270h] [rbp-68h]
  __int64 v80; // [rsp+278h] [rbp-60h]
  __int128 v81; // [rsp+280h] [rbp-58h]
  __int64 v82; // [rsp+290h] [rbp-48h]
  unsigned __int64 v83; // [rsp+298h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v7 = operator new(0x28u);
  *(_QWORD *)v7 = &off_98228;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = a1;
  *(_QWORD *)(v7 + 8) = 0xFFFFFFFFLL;
  *(_DWORD *)(v7 + 16) = 0;
  generic_linput = create_generic_linput();
  if ( !generic_linput )
    return 0;
  v34 = 8;
  v9 = generic_linput;
  v33 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_823B0);
  v35 = 1;
  v10 = sub_15920();
  v11 = _mm_load_si128((const __m128i *)&xmmword_823B0);
  v12 = si128.m128i_i64[0];
  if ( v10 == 8 )
    v12 = si128.m128i_i64[1];
  else
    v10 = 4;
  v33 = v12;
  v34 = v10;
  v39[1] = v11;
  v52 = 0;
  v47 = _mm_load_si128((const __m128i *)&xmmword_82350);
  v39[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_974D8, (__m128i)(unsigned __int64)&si128);
  v49 = _mm_load_si128((const __m128i *)&xmmword_82340);
  v40 = -1;
  v41 = 8;
  v42 = 1;
  v43 = v9;
  v44 = 1;
  v45 = 0;
  v48 = 0;
  v50 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v46 = 0;
  v51 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v13 = *(_DWORD *)(a1 + 16);
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v79 = a4 | 1;
  v80 = 0;
  v82 = 0;
  v70 = 0;
  v72 = 0;
  v76 = -1;
  v81 = 0;
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
  v17 = sub_368C0((__int64)v39, a3, a2, v14);
  if ( !(_BYTE)v17 )
  {
LABEL_15:
    v17 = 0;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 )
  {
    v31 = 0;
    v27 = &v30;
    v30 = 0;
    v28 = (__int64 *)v36;
    *(__m128 *)v36 = _mm_loadh_ps((const double *)&v27);
    if ( (unsigned __int8)sub_32130((__int64)v39, (__m128i *)v36, v15, v16) )
    {
      v19 = sub_2E780((__int64)v39, v31);
      v20 = *(_QWORD **)(a1 + 48);
      v21 = (_QWORD *)(a1 + 40);
      *(_QWORD *)v36 = 0;
      v22 = a2 + v19;
      v23 = (_QWORD *)(a1 + 40);
      v29 = v22;
      if ( !v20 )
        goto LABEL_26;
      do
      {
        if ( v20[4] >= v22 )
        {
          v23 = v20;
          v20 = (_QWORD *)v20[2];
        }
        else
        {
          v20 = (_QWORD *)v20[3];
        }
      }
      while ( v20 );
      if ( v21 == v23 || v22 < v23[4] )
      {
LABEL_26:
        v23 = sub_426D0((_QWORD *)(a1 + 32), v23, &v29, v28);
        v24 = sub_364D0(v39, (__int64)v27, 1);
        v23[5] = v24;
        if ( !v24 )
          goto LABEL_10;
        *(_BYTE *)(v24 + 48) = 1;
        v44 = 0;
      }
      if ( v23[5] )
      {
        v25 = v28;
        memset(v36, 0, sizeof(v36));
        v38 = 0;
        v37 = 0;
        sub_37670((__int64)v39, (__int64)v27, v28);
        v26 = v23[5];
        v38 = 0;
        v37 = v26;
        if ( v26 )
        {
          sub_2B9C0(v25, (_QWORD *)a3, v14);
          if ( v38 )
          {
            if ( v37 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
          }
        }
        if ( *(_QWORD *)v36 )
        {
          *(_QWORD *)&v36[8] = 0;
          qfree();
        }
      }
      goto LABEL_10;
    }
    goto LABEL_15;
  }
LABEL_10:
  sub_2BAE0((__int64)v39);
  return v17;
}

