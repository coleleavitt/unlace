__int64 __fastcall sub_3F2660(__int64 a1, unsigned int a2, int a3)
{
  _WORD *v3; // rax
  __int64 v4; // rsi
  int v6; // edx
  __m128i si128; // xmm1
  __m128i *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(_DWORD *, unsigned int); // rax
  _DWORD *v19; // r10
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(_DWORD *, unsigned int); // rax
  __int64 v23; // r10
  int v24; // r12d
  _BYTE *v25; // rax
  int i; // r8d
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r12
  int v30; // eax
  __m128i v31; // xmm0
  _BYTE *j; // r14
  __int64 v33; // rax
  int v34; // esi
  int v35; // r12d
  int tinfo_size; // eax
  __int64 v37; // rax
  _BYTE *v38; // r12
  int v39; // eax
  int v40; // edx
  int v41; // esi
  int v42; // edx
  __int64 v43; // rax
  int v44; // esi
  int v45; // eax
  __int64 v46; // r12
  unsigned __int8 v47; // al
  __int64 v48; // r12
  unsigned __int8 v49; // al
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // r12
  unsigned __int8 v54; // al
  int v55; // ecx
  __int64 v56; // r12
  unsigned __int8 v57; // al
  char v58; // [rsp+8h] [rbp-3A8h]
  unsigned int dtype_size; // [rsp+8h] [rbp-3A8h]
  __int64 v60; // [rsp+8h] [rbp-3A8h]
  __int64 v61; // [rsp+8h] [rbp-3A8h]
  __int64 v62; // [rsp+10h] [rbp-3A0h]
  int v63; // [rsp+18h] [rbp-398h]
  int v64; // [rsp+18h] [rbp-398h]
  int v66; // [rsp+20h] [rbp-390h]
  _BYTE *v67; // [rsp+20h] [rbp-390h]
  unsigned int v68; // [rsp+20h] [rbp-390h]
  __int64 v69; // [rsp+20h] [rbp-390h]
  __int64 v70; // [rsp+20h] [rbp-390h]
  __int64 v71; // [rsp+20h] [rbp-390h]
  __int64 v72; // [rsp+28h] [rbp-388h]
  int v73; // [rsp+28h] [rbp-388h]
  _BYTE *v74; // [rsp+28h] [rbp-388h]
  int v75; // [rsp+28h] [rbp-388h]
  __int64 v76; // [rsp+28h] [rbp-388h]
  __int64 v77; // [rsp+28h] [rbp-388h]
  __int64 v78; // [rsp+28h] [rbp-388h]
  __int64 v79; // [rsp+28h] [rbp-388h]
  const char *v80; // [rsp+30h] [rbp-380h]
  __int64 *v81; // [rsp+30h] [rbp-380h]
  __int64 v82; // [rsp+38h] [rbp-378h]
  _QWORD v83[2]; // [rsp+50h] [rbp-360h] BYREF
  __int64 v84[2]; // [rsp+60h] [rbp-350h] BYREF
  __int64 *v85; // [rsp+70h] [rbp-340h] BYREF
  __int128 v86; // [rsp+78h] [rbp-338h]
  __int64 v87[2]; // [rsp+90h] [rbp-320h] BYREF
  __int64 *v88; // [rsp+A0h] [rbp-310h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-308h]
  __int128 v90; // [rsp+C0h] [rbp-2F0h] BYREF
  __int64 *v91; // [rsp+D0h] [rbp-2E0h] BYREF
  __int128 v92; // [rsp+D8h] [rbp-2D8h]
  _BYTE v93[24]; // [rsp+F0h] [rbp-2C0h] BYREF
  _BYTE v94[24]; // [rsp+140h] [rbp-270h] BYREF
  _BYTE v95[80]; // [rsp+320h] [rbp-90h] BYREF
  char v96; // [rsp+370h] [rbp-40h] BYREF
  unsigned __int64 v97; // [rsp+378h] [rbp-38h]

  v3 = &unk_4D6C08;
  v4 = *(unsigned __int16 *)(a1 + 48);
  v97 = __readfsqword(0x28u);
  v6 = 0;
  while ( *v3 != (_WORD)v4 )
  {
    ++v6;
    v3 += 8;
    if ( v6 == 71 )
      return 0;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
  v62 = v6;
  v80 = (&off_4D6C00)[2 * v6];
  v8 = (__m128i *)v93;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v96 );
  v83[0] = 0;
  v84[0] = 0;
  v84[1] = 0;
  v85 = nullptr;
  v87[0] = 0;
  v87[1] = 0;
  v88 = nullptr;
  v83[1] = 0;
  v86 = 0;
  v89 = 0;
  if ( (unsigned __int16)v4 <= 0x116u )
  {
    if ( (unsigned __int16)v4 > 0xD9u )
    {
      LOWORD(v4) = v4 - 218;
      switch ( v4 )
      {
        case 0LL:
          if ( (*(_BYTE *)(a1 + 68) & 8) != 0 )
          {
            *(_QWORD *)&v90 = 39;
            v46 = *(_QWORD *)(a1 + 72);
            v76 = *(_QWORD *)(a1 + 40);
            v69 = *(_QWORD *)(a1 + 832);
            copy_tinfo_t();
            clear_tinfo_t();
            v47 = getinf();
            sub_11CFD0((__int64)v93, v69, (int)v46, v47, v76, 0);
            *(_QWORD *)&v90 = 39;
            v48 = *(_QWORD *)(a1 + 112);
            v77 = *(_QWORD *)(a1 + 40);
            v70 = *(_QWORD *)(a1 + 832);
            copy_tinfo_t();
            clear_tinfo_t();
            v49 = getinf();
            sub_11CFD0((__int64)v94, v70, (int)v48, v49, v77, 0);
          }
          goto LABEL_73;
        case 1LL:
        case 2LL:
        case 6LL:
        case 7LL:
          *(_QWORD *)&v90 = 39;
          v56 = *(_QWORD *)(a1 + 72);
          v79 = *(_QWORD *)(a1 + 40);
          v71 = *(_QWORD *)(a1 + 832);
          copy_tinfo_t();
          clear_tinfo_t();
          v57 = getinf();
          sub_11CFD0((__int64)v93, v71, (int)v56, v57, v79, 0);
          v73 = 1;
          v67 = v94;
          goto LABEL_20;
        case 19LL:
        case 20LL:
          goto LABEL_70;
        case 21LL:
        case 22LL:
        case 23LL:
        case 24LL:
        case 25LL:
        case 26LL:
        case 27LL:
        case 28LL:
        case 29LL:
        case 30LL:
        case 31LL:
        case 32LL:
        case 33LL:
        case 34LL:
        case 35LL:
        case 36LL:
        case 37LL:
        case 38LL:
        case 39LL:
        case 40LL:
          v67 = v93;
          v73 = 0;
          goto LABEL_20;
        case 41LL:
        case 42LL:
        case 43LL:
        case 44LL:
        case 45LL:
        case 46LL:
        case 47LL:
        case 48LL:
        case 49LL:
        case 50LL:
        case 51LL:
        case 52LL:
        case 53LL:
        case 54LL:
        case 55LL:
        case 56LL:
        case 57LL:
        case 58LL:
        case 59LL:
        case 60LL:
          v67 = v93;
          v73 = 0;
LABEL_20:
          v16 = *(_QWORD *)(a1 + 832);
          v17 = *(unsigned __int16 *)(a1 + 110);
          v18 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v16 + 168LL);
          if ( v18 == sub_3E59C0 )
          {
            v63 = sub_3E59C0(*(_DWORD **)(a1 + 832), v17);
          }
          else
          {
            v63 = ((__int64 (__fastcall *)(_QWORD, __int64, double))v18)(*(_QWORD *)(a1 + 832), v17, 0.0);
            v16 = *(_QWORD *)(a1 + 832);
          }
          dtype_size = get_dtype_size();
          sub_328100((__int64 *)&v90, v16, dtype_size, 2);
          sub_32AD90((__int64)v67, v63, dtype_size);
          clear_tinfo_t();
          v19 = *(_DWORD **)(a1 + 832);
          v20 = 80LL * (v73 + 1);
          if ( *(_BYTE *)(a1 + 145) == 5 )
          {
            v61 = *(_QWORD *)(a1 + 832);
            *(_QWORD *)&v90 = 39;
            v53 = *(_QWORD *)(a1 + 152);
            v78 = *(_QWORD *)(a1 + 40);
            copy_tinfo_t();
            clear_tinfo_t();
            v54 = getinf();
            sub_11CFD0((__int64)&v93[v20], v61, (int)v53, v54, v78, 0);
          }
          else
          {
            v74 = &v93[80 * v73 + 80];
            v21 = *(unsigned __int16 *)(a1 + 150);
            v22 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v19 + 168LL);
            if ( v22 == sub_3E59C0 )
            {
              v24 = sub_3E59C0(v19, v21);
            }
            else
            {
              v24 = ((__int64 (__fastcall *)(_DWORD *, __int64, double))v22)(v19, v21, 0.0);
              v23 = *(_QWORD *)(a1 + 832);
            }
            v60 = v23;
            v68 = get_dtype_size();
            sub_328100((__int64 *)&v90, v60, v68, 2);
            sub_32AD90((__int64)v74, v24, v68);
            clear_tinfo_t();
          }
          *(_QWORD *)&v90 = 1;
          copy_tinfo_t();
          clear_tinfo_t();
          v58 = 1;
          v66 = 0;
          goto LABEL_27;
        default:
          goto LABEL_80;
      }
    }
    if ( (unsigned __int16)v4 > 0x53u )
    {
      if ( (_WORD)v4 != 169 )
        goto LABEL_80;
      v33 = *(_QWORD *)(a1 + 832);
      v34 = *(_DWORD *)(v33 + 376);
      *(_QWORD *)&v90 = 7;
      v35 = *(_DWORD *)(v33 + 352);
      v75 = v34;
      tinfo_size = get_tinfo_size();
      sub_32AD90((__int64)v93, v35, tinfo_size);
      clear_tinfo_t();
      v37 = *(_QWORD *)(a1 + 800);
      v64 = *(_DWORD *)(*(_QWORD *)(v37 + 112) + 80LL);
      if ( *(_BYTE *)(v37 + 145) )
        v64 = -*(_DWORD *)(*(_QWORD *)(v37 + 112) + 80LL);
      v38 = v95;
      do
      {
        v39 = get_tinfo_size();
        sub_32AD90((__int64)v38, v75, v39);
        v38 -= 80;
        v75 -= v64;
      }
      while ( v93 != v38 );
      v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
      v41 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 352LL);
      v90 = 0u;
      sub_60440((__int64 *)&v90, v41, v40);
      v91 = nullptr;
      v92 = 0;
      sub_60840(v84, (__int64 *)&v90);
      sub_312B30((__int64 *)&v85, &v91);
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree();
      }
      qfree();
      v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
      v43 = *(_QWORD *)(a1 + 832);
      v44 = *(_DWORD *)(v43 + 380);
      v45 = *(_DWORD *)(v43 + 364);
      if ( v44 >= v45 )
      {
        v55 = v44;
        v44 = v45;
        v45 = v55;
      }
      v90 = 0u;
      sub_60440((__int64 *)&v90, v44, v45 + v42 - v44);
      v91 = nullptr;
      v92 = 0;
      sub_60840(v84, (__int64 *)&v90);
      sub_312B30((__int64 *)&v85, &v91);
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree();
      }
      qfree();
      v90 = 0u;
      v91 = nullptr;
      v92 = 0;
      v91 = (__int64 *)qvector_reserve();
      *(__m128i *)&v91[2 * v92] = _mm_load_si128((const __m128i *)&xmmword_411C00);
      *(_QWORD *)&v92 = v92 + 1;
      sub_60840(v84, (__int64 *)&v90);
      sub_312B30((__int64 *)&v85, &v91);
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree();
      }
      qfree();
      v90 = 0u;
      v91 = nullptr;
      v92 = 0;
      v91 = (__int64 *)qvector_reserve();
      *(__m128i *)&v91[2 * v92] = _mm_load_si128((const __m128i *)&xmmword_411C00);
      *(_QWORD *)&v92 = v92 + 1;
      sub_60840(v87, (__int64 *)&v90);
      sub_312B30((__int64 *)&v88, &v91);
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree();
      }
      qfree();
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) == 18 )
      {
        v58 = 1;
        v80 = "linux_syscall";
        v66 = 0;
        goto LABEL_28;
      }
      goto LABEL_67;
    }
    if ( (unsigned __int16)v4 <= 0x15u )
    {
      if ( (_WORD)v4 == 21 )
        goto LABEL_14;
      goto LABEL_80;
    }
    v9 = 1LL << ((unsigned __int8)v4 - 22);
    if ( (v9 & 0x350400008000000LL) == 0 )
    {
      if ( (_WORD)v4 != 83 )
      {
        if ( (v9 & 1) != 0 )
        {
LABEL_14:
          v72 = *(_QWORD *)(a1 + 832);
          v82 = *(_QWORD *)(a1 + 800);
          v10 = (_QWORD *)operator new(0x10u);
          *v10 = off_4D6A78;
          v10[1] = v82;
          *(_QWORD *)(v72 + 4512) = v10;
          sub_14DC90(*(_QWORD *)(v82 + 112), (__int64)v10);
          v11 = *(_QWORD *)(a1 + 832);
          LODWORD(v72) = get_dtype_size();
          sub_328100((__int64 *)&v90, v11, v72, 2);
          sub_32AD90((__int64)v93, a3, v72);
          clear_tinfo_t();
          v12 = *(_QWORD *)(a1 + 832);
          v13 = get_dtype_size();
          sub_328100((__int64 *)&v90, v12, v13, 2);
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_15;
        }
LABEL_80:
        if ( !under_debugger )
          sub_37EEE0(0xC900u, 0.0);
        BUG();
      }
      goto LABEL_73;
    }
    goto LABEL_88;
  }
  if ( (unsigned __int16)v4 > 0x4B3u )
  {
    if ( (unsigned __int16)v4 > 0x821u )
    {
      if ( (_WORD)v4 != 2499 )
        goto LABEL_80;
      goto LABEL_88;
    }
    if ( (unsigned __int16)v4 > 0x81Du )
    {
LABEL_70:
      *(_QWORD *)&v90 = 1;
      copy_tinfo_t();
      clear_tinfo_t();
      v58 = 0;
      v66 = 0;
LABEL_27:
      if ( !v80 )
        goto LABEL_16;
LABEL_28:
      v25 = v93;
      for ( i = 0; i != 8; ++i )
      {
        if ( !*v25 )
          break;
        v25 += 80;
      }
      v27 = sub_331530(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v80, v83, i, (__int64)v93, v66);
      v28 = *(_QWORD *)(v27 + 72);
      v29 = (_QWORD *)v27;
      *(_DWORD *)(v28 + 284) = 0;
      v30 = *(_DWORD *)(v28 + 280);
      *(_DWORD *)(v28 + 280) = v30 | 4;
      if ( *((_BYTE *)&off_4D6C00 + 16 * v62 + 10) )
        *(_DWORD *)(v28 + 280) = v30 | 0x14;
      v81 = (__int64 *)v28;
      sub_60840((__int64 *)(v28 + 136), v84);
      sub_312B30(v81 + 19, &v85);
      v81 += 27;
      sub_312B30(v81, &v85);
      sub_312B30(v81, &v88);
      if ( v58 )
        *((_DWORD *)v29 + 1) |= 0x80000u;
      if ( v66 )
      {
        v31 = _mm_cvtsi32_si128(*((_DWORD *)v29 + 17));
        LODWORD(v90) = 1;
        *(_QWORD *)((char *)&v90 + 4) = _mm_unpacklo_epi32(v31, _mm_cvtsi32_si128(a2)).m128i_u64[0];
        v29 = sub_121820((__int64)v29, (unsigned __int8 *)&v90);
        sub_119360((__int64)&v90);
      }
      sub_B1850(*(_QWORD **)(a1 + 16), (__int64)v29);
      if ( get_tinfo_size() )
      {
        v50 = get_tinfo_size();
        sub_3EC840(a1, a2, v50);
      }
      v14 = 1;
      goto LABEL_40;
    }
    if ( (_WORD)v4 != 1293 )
      goto LABEL_80;
LABEL_83:
    copy_tinfo_t();
    clear_tinfo_t();
    v51 = get_tinfo_size();
    sub_32AD90((__int64)v93, a3, v51);
    *(_QWORD *)&v90 = 9;
    copy_tinfo_t();
    clear_tinfo_t();
    goto LABEL_15;
  }
  if ( (unsigned __int16)v4 > 0x4B1u )
  {
LABEL_73:
    *(_QWORD *)&v90 = 1;
    copy_tinfo_t();
    clear_tinfo_t();
LABEL_67:
    v58 = 1;
    v66 = 0;
    goto LABEL_27;
  }
  if ( (_WORD)v4 == 619 )
    goto LABEL_83;
  if ( (unsigned __int16)v4 <= 0x26Bu )
  {
    if ( (_WORD)v4 != 590 && (_WORD)v4 != 612 && (_WORD)v4 != 371 )
      goto LABEL_80;
    goto LABEL_88;
  }
  if ( (_WORD)v4 == 636 )
    goto LABEL_83;
  if ( (_WORD)v4 != 802 )
    goto LABEL_80;
LABEL_88:
  copy_tinfo_t();
  clear_tinfo_t();
  v52 = get_tinfo_size();
  sub_32AD90((__int64)v93, a3, v52);
  *(_QWORD *)&v90 = 25;
  copy_tinfo_t();
  clear_tinfo_t();
LABEL_15:
  v58 = 0;
  v66 = 1;
  if ( v80 )
    goto LABEL_28;
LABEL_16:
  v14 = 0;
LABEL_40:
  clear_tinfo_t();
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    qfree();
  }
  qfree();
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree();
  }
  qfree();
  clear_tinfo_t();
  for ( j = v95; ; j -= 80 )
  {
    cleanup_argloc();
    if ( *((_QWORD *)j + 4) )
    {
      *((_QWORD *)j + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_119360((__int64)j);
    if ( v93 == j )
      break;
  }
  return v14;
}

