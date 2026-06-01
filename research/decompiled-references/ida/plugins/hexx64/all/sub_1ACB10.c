__int64 __fastcall sub_1ACB10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // r14
  unsigned __int8 v9; // r15
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // ecx
  signed int v13; // esi
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // ebx
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // edx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // r12
  __int64 *v28; // r15
  const __m128i *v29; // rsi
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  __int64 v37; // rdx
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  int v51; // r12d
  __int64 v52; // r13
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // [rsp+0h] [rbp-1F0h]
  __int64 v63; // [rsp+20h] [rbp-1D0h]
  __int64 v64; // [rsp+28h] [rbp-1C8h]
  __int64 v65; // [rsp+30h] [rbp-1C0h]
  int v66; // [rsp+38h] [rbp-1B8h]
  signed int v67; // [rsp+3Ch] [rbp-1B4h]
  __int64 v69; // [rsp+58h] [rbp-198h]
  __int64 v70; // [rsp+58h] [rbp-198h]
  _QWORD *v71; // [rsp+58h] [rbp-198h]
  char v72[8]; // [rsp+60h] [rbp-190h] BYREF
  __int64 v73; // [rsp+68h] [rbp-188h]
  __int64 v74; // [rsp+70h] [rbp-180h] BYREF
  __int128 v75; // [rsp+78h] [rbp-178h] BYREF
  __int128 v76; // [rsp+88h] [rbp-168h]
  __int64 v77[16]; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v78; // [rsp+120h] [rbp-D0h] BYREF
  __int128 v79; // [rsp+128h] [rbp-C8h] BYREF
  __int128 v80; // [rsp+138h] [rbp-B8h]
  __int64 v81; // [rsp+148h] [rbp-A8h]
  __int128 v82; // [rsp+150h] [rbp-A0h]
  __int128 v83; // [rsp+160h] [rbp-90h]
  __int64 v84; // [rsp+190h] [rbp-60h]
  int v85; // [rsp+198h] [rbp-58h]
  __int64 v86; // [rsp+1A0h] [rbp-50h]
  char v87; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 v88; // [rsp+1B8h] [rbp-38h]

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v88 = __readfsqword(0x28u);
  v9 = a3;
  v64 = *(_QWORD *)(v8 + 1504);
  sub_139B90(v8, (__int64)a2, a3, a4, a5, a6);
  v10 = *(_DWORD *)(a1 + 112);
  if ( !v10 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v11 + 8) == 3 || !*(_DWORD *)(v11 + 48) )
    {
      v12 = *(_DWORD *)(v8 + 72) & 0xFFFFFFF0;
      if ( v12 == 208 || v12 == 64 )
      {
        if ( (unsigned int)(*(_DWORD *)(v8 + 72) - 208) <= 0x2F && (unsigned int)sub_13D300((_QWORD *)v8, 3) )
        {
          v10 = *(_DWORD *)(a1 + 112);
        }
        else
        {
          if ( *(_BYTE *)(v8 + 320) )
          {
            if ( !under_debugger )
              sub_383060(0xC966u, a7);
            goto LABEL_111;
          }
          *(_DWORD *)(a1 + 112) = 1;
          v10 = 1;
        }
      }
    }
  }
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v67 = v13;
  if ( !(unsigned __int8)sub_1AC200(
                           a1,
                           (__int64)a2,
                           *(_QWORD *)(a1 + 104) + v13 * v10,
                           v13 * *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL),
                           v9,
                           a7,
                           a8) )
  {
    v21 = *(_DWORD *)(v8 + 72) & 0xFFFFFFF0;
    if ( v21 != 208 && v21 != 64 )
      return 0;
    v18 = *(_DWORD *)(a1 + 112);
LABEL_16:
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL) < v18 )
      return 0;
LABEL_17:
    sub_1A0DE0((__int64)v77, v8, a2, v14, v15, v16, a7, a8);
    v22 = *(_QWORD *)(a1 + 16);
    v23 = *(_DWORD *)(a1 + 112);
    v69 = *(_QWORD *)(v22 + 104);
    v24 = *(_QWORD *)(a1 + 104) + (int)(v23 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
    if ( v24 < 0 )
      v24 = 0;
    v25 = sub_1A1040(v77, v22 + 96, v23, v24, *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL) - v23, v67);
    v26 = *(_QWORD *)(a1 + 104);
    v27 = v25;
    v63 = (__int64)v25;
    if ( v26 < 0 )
      v26 = 0;
    v28 = (__int64 *)sub_1A1040(v77, *(_QWORD *)(a1 + 16) + 96LL, 0, v26, *(_DWORD *)(a1 + 112) + 1, v67);
    sub_1A00C0(v77, 0);
    if ( !v27[3] )
      goto LABEL_25;
    v29 = (const __m128i *)v8;
    v30 = *(_QWORD *)(a1 + 104) + (int)v69 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( v30 < 0 )
      v30 = 0;
    v31 = sub_1A1110(v63, v8, v30, a7);
    if ( v31 )
    {
      v32 = v69 + v31;
    }
    else
    {
LABEL_25:
      v29 = (const __m128i *)v8;
      v32 = sub_1A1170(v63, v8, a7);
    }
    v33 = *(_DWORD *)(a1 + 112);
    if ( v32 >= v33 )
      v33 = v32;
    v66 = v33;
    sub_190300(v8, v29);
    if ( a2 )
    {
      v34 = *(_QWORD *)(a1 + 16);
      a7 = 0.0;
      v35 = *(int *)(a1 + 112);
      v74 = 0;
      v75 = 0u;
      v36 = *(_QWORD *)(a1 + 104);
      v76 = 0;
      v37 = *(int *)(v34 + 24);
      if ( (int)v35 > (int)v37 )
        v35 = v37;
      if ( (int)v35 > 0 )
      {
        v70 = 0;
        v65 = 4 * v35;
        do
        {
          if ( v28 )
          {
            while ( v36 < *(_QWORD *)(v8 + 168) )
            {
              v41 = *(_QWORD *)(v8 + 1440);
              v78 = 0;
              v79 = 0;
              v42 = v36 + v41;
              if ( !__CFADD__(v42, v67 - 1LL) )
              {
                v62 = v42;
                v78 = qvector_reserve((__int64)&v78, 0, 1, 16);
                v61 = (_QWORD *)(16 * v79 + v78);
                *v61 = v62;
                v61[1] = v67;
                *(_QWORD *)&v79 = v79 + 1;
              }
              if ( !(unsigned __int8)sub_317F40(v28 + 2, (__int64)&v78) )
              {
                if ( v78 )
                {
                  *(_QWORD *)&v79 = 0;
                  qfree(v78);
                }
                break;
              }
              if ( v78 )
              {
                *(_QWORD *)&v79 = 0;
                qfree(v78);
              }
              v70 += 4;
              v36 += v67;
              if ( v65 == v70 )
                goto LABEL_46;
            }
          }
          v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) + v70);
          v78 = 0;
          *(_QWORD *)&v79 = 0;
          sub_63E80((__int64 *)&v78, v38, v67, 0.0);
          a8 = 0;
          *((_QWORD *)&v79 + 1) = 0;
          v80 = 0;
          sub_64280(&v74, (__int64 *)&v78, 0.0);
          sub_316CB0((__int64 *)&v75 + 1, (__int64 **)&v79 + 1, v39, v40);
          if ( *((_QWORD *)&v79 + 1) )
          {
            *(_QWORD *)&v80 = 0;
            qfree(*((__int64 *)&v79 + 1));
          }
          v36 += v67;
          qfree(v78);
          v70 += 4;
        }
        while ( v65 != v70 );
      }
LABEL_46:
      sub_19D1A0((__int64)a2, &v74, 0.0, a8);
      sub_19D1A0((__int64)(a2 + 7), &v74, 0.0, a8);
      if ( *((_QWORD *)&v75 + 1) )
      {
        *(_QWORD *)&v76 = 0;
        qfree(*((__int64 *)&v75 + 1));
      }
      qfree(v74);
    }
    v43 = *(_QWORD *)(a1 + 72);
    if ( v43 )
    {
      v45 = *(_QWORD *)(a1 + 64) + 40 * v43 - 40;
      v46 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) * v66;
      if ( *(_QWORD *)(v45 + 24) >= v46 )
        goto LABEL_60;
      if ( (*(_BYTE *)(v45 + 32) & 2) != 0 )
      {
        *(_QWORD *)(v45 + 24) = v46;
        goto LABEL_60;
      }
    }
    else
    {
      v44 = *(_DWORD *)(v8 + 72) & 0xFFFFFFF0;
      if ( v44 != 64 && v44 != 208 )
        goto LABEL_52;
      v59 = *(_QWORD *)(a1 + 8);
      v60 = *(_QWORD *)(a1 + 104);
      if ( *(_BYTE *)(v8 + 320) )
      {
        if ( *(_DWORD *)(a1 + 112) != v66 )
        {
          v46 = v60 + *(_DWORD *)(*(_QWORD *)(v59 + 112) + 80LL) * v66;
          goto LABEL_101;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 112) = v66;
      }
      *(_BYTE *)(a1 + 116) = 0;
      v46 = v60 + *(_DWORD *)(*(_QWORD *)(v59 + 112) + 80LL) * v66;
    }
LABEL_101:
    *(_BYTE *)(sub_1999C0((const __m128i **)(a1 + 64), v46, 0, 0, a7) + 32) = 2;
LABEL_60:
    v47 = *(_DWORD *)(v8 + 72) & 0xFFFFFFF0;
    if ( v47 != 64
      && v47 != 208
      && !sub_317040(
            (unsigned __int64 **)(v63 + 16),
            *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) + *(_QWORD *)(v8 + 1440)) )
    {
      goto LABEL_52;
    }
    if ( !*(_BYTE *)(a1 + 116) )
    {
LABEL_91:
      v19 = 1;
      goto LABEL_92;
    }
    v48 = *(_QWORD *)(a1 + 72);
    v49 = *(_QWORD *)(a1 + 64);
    v50 = v49 + 40 * v48 - 40;
    if ( (*(_BYTE *)(v50 + 32) & 2) != 0
      && *(_QWORD *)(v50 + 24) == *(_QWORD *)(a1 + 104)
                                + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) )
    {
LABEL_52:
      v19 = 0;
LABEL_92:
      sub_19FFD0((__int64)v77);
      return v19;
    }
    if ( *(__int64 *)(v49 + 24) >= 0 || *(_BYTE *)(v8 + 320) && (v48 == 1 || *(__int64 *)(v49 + 64) >= 0) )
    {
      v74 = 0;
      v75 = 0;
      sub_32C270(v72, v64, v67);
      print_tinfo();
      get_func();
      v73 = 0;
      get_func_frame();
      if ( *(_QWORD *)(a1 + 72) )
      {
        v51 = 0;
        v52 = -1;
        v53 = 0;
        v71 = nullptr;
        do
        {
          v71 = sub_19E8E0(a1, (__int64)v71, v51, (__int64)v72, (__int64)&v74, 0.0);
          v54 = *(_QWORD *)(a1 + 64) + 40 * v53;
          v55 = *(_QWORD *)(v54 + 24);
          if ( v52 < 0 )
            v52 = *(_QWORD *)(v54 + 24);
          if ( v55 < 0 )
            v55 = 0;
          v56 = sub_1CFD50((_QWORD *)v8, v55);
          v87 = 0;
          v84 = 1;
          v78 = 8 * v56;
          v79 = 0u;
          v81 = 0;
          v85 = -1;
          v86 = 0;
          v80 = 0;
          v82 = 0;
          v83 = 0;
          if ( (unsigned int)find_tinfo_udt_member() != -1 && (v78 >> 3 != v56 || v67 < (unsigned __int64)v79 >> 3) )
            set_tinfo_property4();
          clear_tinfo_t();
          if ( v81 )
          {
            *(_QWORD *)&v82 = 0;
            qfree(v81);
          }
          if ( *((_QWORD *)&v79 + 1) )
          {
            *(_QWORD *)&v80 = 0;
            qfree(*((__int64 *)&v79 + 1));
          }
          v53 = ++v51;
        }
        while ( (unsigned __int64)v51 < *(_QWORD *)(a1 + 72) );
        if ( v52 >= 0 )
          sub_18D890(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL), v52, 0.0);
        if ( v71 )
        {
          if ( *(_DWORD *)(v8 + 64) <= 1u )
            sub_195140(0.0);
          v57 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL);
          v58 = *(_DWORD *)(v57 + 24);
          BYTE1(v58) &= ~2u;
          LOBYTE(v58) = v58 | 0x80;
          *(_DWORD *)(v57 + 24) = v58;
        }
      }
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree(v74);
      }
      goto LABEL_91;
    }
    if ( !under_debugger )
      sub_383060(0xC9C9u, a7);
LABEL_111:
    BUG();
  }
  v14 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v17 = (*(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) - *(_QWORD *)(a1 + 104)) / v14;
  v18 = *(_DWORD *)(a1 + 112);
  if ( v18 > (int)v17 )
  {
    if ( !under_debugger )
      sub_383060(0xC8FAu, a7);
    goto LABEL_111;
  }
  if ( v18 >= (int)v17 || *(_BYTE *)(v8 + 320) )
    goto LABEL_16;
  *(_DWORD *)(a1 + 112) = v17;
  if ( *(_DWORD *)(*(_QWORD *)(v8 + 1496) + 656LL) >= (int)v17 )
    goto LABEL_17;
  return 0;
}

