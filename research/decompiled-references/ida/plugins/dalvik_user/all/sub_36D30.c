__int64 __fastcall sub_36D30(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  char tinfo_property; // al
  char v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // r13
  __int64 v19; // rsi
  __m128i si128; // xmm0
  __m128i *v21; // r12
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rbp
  __int64 v27; // r13
  unsigned __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // r13
  unsigned __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // r13
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // r13
  unsigned __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbp
  unsigned __int64 v45; // r13
  __int64 v46; // rsi
  unsigned __int64 v47; // rbp
  size_t v48; // r14
  __int64 v49; // r13
  size_t v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rax
  char *v53; // r13
  __int64 v54; // rax
  size_t v55; // r12
  __int64 v56; // r13
  __int64 v57; // r15
  unsigned __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // r14
  unsigned __int64 v62; // r13
  __int64 v63; // rsi
  __m128i v64; // xmm0
  __m128i *v65; // r12
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  char *v73; // [rsp+0h] [rbp-78h] BYREF
  __int128 v74; // [rsp+8h] [rbp-70h]
  __int64 v75; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v77; // [rsp+28h] [rbp-50h]
  unsigned __int64 v78; // [rsp+38h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  a1[1] = 0;
  v3 = v2;
  tinfo_property = get_tinfo_property();
  v5 = tinfo_property & 0xF;
  switch ( tinfo_property & 0xF )
  {
    case 0:
      return 0;
    case 1:
      v26 = a1[1];
      if ( v26 )
      {
        v28 = v26 + 1;
        v27 = a1[1];
        --v26;
      }
      else
      {
        v27 = 1;
        v28 = 2;
      }
      v29 = *a1;
      if ( a1[2] < v28 )
      {
        v43 = qvector_reserve();
        *a1 = v43;
        v29 = v43;
      }
      a1[1] = v28;
      *(_BYTE *)(v29 + v26) = 86;
      *(_BYTE *)(*a1 + v27) = 0;
      goto LABEL_10;
    case 2:
      v6 = *a2;
      s1 = nullptr;
      v77 = 0;
      if ( (v6 & 0x100) != 0 && get_tinfo_pdata() && (_QWORD)v77 && !strcmp(s1, "_wchar16_t") )
      {
        sub_31610(a1, 67);
      }
      else
      {
        v7 = a1[1];
        v8 = 2;
        if ( v7 )
          v8 = v7-- + 1;
        v9 = *a1;
        if ( a1[2] < v8 )
        {
          v42 = qvector_reserve();
          *a1 = v42;
          v9 = v42;
        }
        a1[1] = v8;
        *(_BYTE *)(v9 + v7) = 66;
        *(_BYTE *)(*a1 + v7 + 1) = 0;
      }
      if ( s1 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      goto LABEL_10;
    case 3:
      v34 = a1[1];
      if ( v34 )
      {
        v36 = v34 + 1;
        v35 = a1[1];
        --v34;
      }
      else
      {
        v35 = 1;
        v36 = 2;
      }
      v37 = *a1;
      if ( a1[2] < v36 )
      {
        v67 = qvector_reserve();
        *a1 = v67;
        v37 = v67;
      }
      a1[1] = v36;
      *(_BYTE *)(v37 + v34) = 83;
      *(_BYTE *)(*a1 + v35) = 0;
      goto LABEL_10;
    case 4:
    case 7:
      v11 = a1[1];
      if ( v11 )
      {
        v13 = v11 + 1;
        v12 = a1[1];
        --v11;
      }
      else
      {
        v12 = 1;
        v13 = 2;
      }
      v14 = *a1;
      if ( a1[2] < v13 )
      {
        v68 = qvector_reserve();
        *a1 = v68;
        v14 = v68;
      }
      a1[1] = v13;
      *(_BYTE *)(v14 + v11) = 73;
      *(_BYTE *)(*a1 + v12) = 0;
      goto LABEL_10;
    case 5:
      v30 = a1[1];
      if ( v30 )
      {
        v32 = v30 + 1;
        v31 = a1[1];
        --v30;
      }
      else
      {
        v31 = 1;
        v32 = 2;
      }
      v33 = *a1;
      if ( a1[2] < v32 )
      {
        v66 = qvector_reserve();
        *a1 = v66;
        v33 = v66;
      }
      a1[1] = v32;
      *(_BYTE *)(v33 + v30) = 74;
      *(_BYTE *)(*a1 + v31) = 0;
      goto LABEL_10;
    case 8:
      v38 = a1[1];
      if ( v38 )
      {
        v40 = v38 + 1;
        v39 = a1[1];
        --v38;
      }
      else
      {
        v39 = 1;
        v40 = 2;
      }
      v41 = *a1;
      if ( a1[2] < v40 )
      {
        v52 = qvector_reserve();
        *a1 = v52;
        v41 = v52;
      }
      a1[1] = v40;
      *(_BYTE *)(v41 + v38) = 90;
      *(_BYTE *)(*a1 + v39) = 0;
      goto LABEL_10;
    case 9:
      if ( tinfo_property == 9 )
      {
        sub_31610(a1, 70);
      }
      else
      {
        if ( tinfo_property != 25 )
          return 0;
        sub_31610(a1, 68);
      }
      goto LABEL_10;
    case 0xA:
    case 0xD:
      v15 = *a2;
      v73 = nullptr;
      v74 = 0;
      if ( (v15 & 0x100) != 0 && get_tinfo_pdata() )
        goto LABEL_88;
      if ( v5 != 10 )
      {
        if ( (debug & 0x40000) == 0 )
          goto LABEL_25;
        goto LABEL_23;
      }
      s1 = (char *)get_tinfo_property();
      if ( (BYTE1(s1) & 1) == 0 )
      {
        clear_tinfo_t();
        if ( (debug & 0x40000) == 0 )
          goto LABEL_25;
        goto LABEL_23;
      }
      if ( !get_tinfo_pdata() )
      {
        clear_tinfo_t();
        if ( (debug & 0x40000) == 0 )
          goto LABEL_25;
LABEL_23:
        if ( (_QWORD)v74 )
          sub_111A0((__int64)"DEXTIF: typename %s\n", v73);
        else
          sub_111A0((__int64)"DEXTIF: typename %s\n", nptr);
LABEL_25:
        v16 = a1[1];
        if ( v16 )
        {
          v17 = v16 + 17;
          v18 = v16 + 18;
          --v16;
        }
        else
        {
          v18 = 19;
          v17 = 18;
        }
        v19 = *a1;
        if ( a1[2] < v18 )
        {
          v69 = qvector_reserve();
          *a1 = v69;
          v19 = v69;
        }
        a1[1] = v18;
        si128 = _mm_load_si128((const __m128i *)&xmmword_6A3E0);
        *(_BYTE *)(v19 + v17) = 0;
        v21 = (__m128i *)(*a1 + v16);
        v21[1].m128i_i16[0] = 15220;
        *v21 = si128;
        goto LABEL_30;
      }
      clear_tinfo_t();
LABEL_88:
      if ( (debug & 0x40000) != 0 )
      {
        if ( (_QWORD)v74 )
          sub_111A0((__int64)"DEXTIF: typename %s\n", v73);
        else
          sub_111A0((__int64)"DEXTIF: typename %s\n", nptr);
      }
      if ( !(_QWORD)v74 )
      {
        v53 = (char *)nptr;
LABEL_93:
        s1 = nullptr;
        v77 = 0;
        if ( (unsigned __int8)sub_1B300((__int64)&s1, v53)
          && (_QWORD *)(v3 + 1112) != sub_23D40(v3 + 1104, (__int64)&s1) )
        {
          if ( (_QWORD)v77 )
          {
            v54 = v77 - 1;
            v55 = v77 - 1;
            if ( (_QWORD)v77 == 1 )
            {
              if ( !s1 )
                goto LABEL_30;
            }
            else
            {
              v56 = (a1[1] == 0) + a1[1] - 1;
              v57 = v54 + v56;
              v58 = v54 + (a1[1] == 0) + a1[1];
              if ( a1[2] < v58 )
                *a1 = qvector_reserve();
              v59 = *a1;
              a1[1] = v58;
              *(_BYTE *)(v59 + v57) = 0;
              memcpy((void *)(v56 + *a1), s1, v55);
              if ( !s1 )
                goto LABEL_30;
            }
            *(_QWORD *)&v77 = 0;
          }
          else if ( !s1 )
          {
            goto LABEL_30;
          }
          qfree();
          goto LABEL_30;
        }
        if ( s1 )
        {
          *(_QWORD *)&v77 = 0;
          qfree();
        }
        goto LABEL_25;
      }
      v53 = v73;
      if ( !strcmp(v73, "wchar16_t") )
      {
        sub_31610(a1, 67);
        goto LABEL_30;
      }
      if ( strcmp(v73, "java.lang.String") && strcmp(v73, "String") )
        goto LABEL_93;
      v60 = a1[1];
      if ( v60 )
      {
        v61 = v60 + 17;
        v62 = v60 + 18;
        --v60;
      }
      else
      {
        v62 = 19;
        v61 = 18;
      }
      v63 = *a1;
      if ( a1[2] < v62 )
      {
        v71 = qvector_reserve();
        *a1 = v71;
        v63 = v71;
      }
      v64 = _mm_load_si128((const __m128i *)&xmmword_6A560);
      a1[1] = v62;
      *(_BYTE *)(v63 + v61) = 0;
      v65 = (__m128i *)(*a1 + v60);
      v65[1].m128i_i16[0] = 15207;
      *v65 = v64;
LABEL_30:
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree();
      }
LABEL_10:
      if ( (debug & 0x40000) != 0 )
      {
        if ( a1[1] )
          sub_111A0((__int64)"DEXTIF: signature from tif: %s\n", (const char *)*a1);
        else
          sub_111A0((__int64)"DEXTIF: signature from tif: %s\n", nptr);
      }
      return 1;
    case 0xB:
      v73 = nullptr;
      *(_QWORD *)&v74 = 0;
      get_tinfo_details();
      if ( (unsigned __int8)sub_36D30(
                              (unsigned int)&s1,
                              (unsigned int)&v73,
                              v22,
                              v23,
                              v24,
                              v25,
                              (__int64)v73,
                              v74,
                              DWORD2(v74),
                              v75,
                              0,
                              0,
                              0) )
      {
        v44 = a1[1];
        v45 = 2;
        if ( v44 )
          v45 = v44-- + 1;
        v46 = *a1;
        if ( a1[2] < v45 )
        {
          v70 = qvector_reserve();
          *a1 = v70;
          v46 = v70;
        }
        a1[1] = v45;
        *(_BYTE *)(v46 + v44) = 91;
        *(_BYTE *)(*a1 + v44 + 1) = 0;
        v47 = v77;
        if ( (_QWORD)v77 )
        {
          v48 = v77 - 1;
          if ( (_QWORD)v77 != 1 )
          {
            v49 = a1[1];
            v50 = v77 - 1;
            if ( v49 )
            {
              --v49;
              v50 = v48 + v49;
              v47 = v77 + v49;
            }
            v51 = *a1;
            if ( a1[2] < v47 )
            {
              v72 = qvector_reserve();
              *a1 = v72;
              v51 = v72;
            }
            a1[1] = v47;
            *(_BYTE *)(v51 + v50) = 0;
            memcpy((void *)(v49 + *a1), s1, v48);
          }
        }
        if ( s1 )
        {
          *(_QWORD *)&v77 = 0;
          qfree();
        }
        clear_tinfo_t();
        goto LABEL_10;
      }
      if ( s1 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      clear_tinfo_t();
      return 0;
    default:
      goto LABEL_10;
  }
}

