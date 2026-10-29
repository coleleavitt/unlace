__int64 __fastcall sub_CE6F0(
        __int64 a1,
        char **p_s1,
        __m128i a3,
        __m128 a4,
        __m128i a5,
        double a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r15d
  unsigned int v10; // r12d
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int32 v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 tinfo_pdata; // rax
  char *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rbx
  int v41; // eax
  _DWORD *v42; // rdi
  char *v43; // rdi
  int v44; // eax
  __int64 v45; // [rsp+10h] [rbp-160h]
  __int64 v46; // [rsp+10h] [rbp-160h]
  char **v47; // [rsp+18h] [rbp-158h]
  unsigned int v48; // [rsp+18h] [rbp-158h]
  unsigned __int8 v49; // [rsp+23h] [rbp-14Dh]
  int v50; // [rsp+24h] [rbp-14Ch]
  unsigned int v51; // [rsp+24h] [rbp-14Ch]
  __int64 v52; // [rsp+28h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-138h]
  __int64 v54; // [rsp+48h] [rbp-128h]
  const __m128i *v55; // [rsp+58h] [rbp-118h]
  char **v56; // [rsp+60h] [rbp-110h] BYREF
  __int64 v57; // [rsp+68h] [rbp-108h] BYREF
  char *s1; // [rsp+70h] [rbp-100h] BYREF
  __int128 v59; // [rsp+78h] [rbp-F8h]
  _QWORD v60[6]; // [rsp+90h] [rbp-E0h] BYREF
  int *v61; // [rsp+C0h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+C8h] [rbp-A8h]
  unsigned __int8 v63; // [rsp+D8h] [rbp-98h]
  __int64 v64; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-88h]
  __m128i si128; // [rsp+F0h] [rbp-80h]
  __int64 v67; // [rsp+100h] [rbp-70h] BYREF
  __int128 v68; // [rsp+108h] [rbp-68h]
  __int64 v69; // [rsp+118h] [rbp-58h]
  __int64 v70; // [rsp+120h] [rbp-50h]
  int v71; // [rsp+128h] [rbp-48h]
  unsigned __int64 v72; // [rsp+138h] [rbp-38h]

  v8 = 1;
  v10 = 0;
  v72 = __readfsqword(0x28u);
  v54 = 8;
  if ( *(int *)(a1 + 64) > 2 )
  {
    while ( 1 )
    {
      v55 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + v54);
      v10 |= sub_CE500((__int64)v55, a3, a4, a5, a6, (__int64)p_s1, v54, a8);
      if ( !*(_QWORD *)(a1 + 800) )
        goto LABEL_13;
      v11 = *(_QWORD *)(a1 + 1496);
      a3 = 0;
      memset(&v60[1], 0, 32);
      v60[5] = v11;
      p_s1 = (char **)v60;
      v60[0] = off_4DC1D0;
      v61 = nullptr;
      v63 = 0;
      v62 = 0;
      sub_11F830(v55, (__int64)v60);
      v12 = v63;
      if ( v63 )
      {
        v18 = v55[1].m128i_i32[2];
        BYTE1(v18) &= ~2u;
        LOBYTE(v18) = v18 | 0x80;
        v55[1].m128i_i32[2] = v18;
        sub_2169A0((_QWORD *)a1, &v61);
        p_s1 = (char **)&byte_1;
        sub_66FA0(a1, 1);
        v10 = v12;
      }
      v13 = v55[3].m128i_i64[0];
      if ( v13 )
      {
        do
        {
          v67 = 0;
          LOBYTE(v68) = 0;
          v64 = (__int64)&off_4DC1F8;
          DWORD1(v68) = 0;
          v14 = v55[4].m128i_i64[0];
          si128 = (__m128i)(unsigned __int64)v55;
          v65 = v14;
          sub_11E900((_BYTE *)v13, (__int64)&v64);
          if ( DWORD1(v68) )
          {
            v55[1].m128i_i32[2] |= 0x80u;
            sub_66FA0(a1, 1);
            v10 = 1;
          }
          p_s1 = (char **)v13;
          v15 = sub_C8120(v55, v13, 0.0);
          v13 = *(_QWORD *)(v13 + 8);
          v10 |= v15;
        }
        while ( v13 );
        v16 = v55[3].m128i_i64[0];
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 64) == 8
            && *(_DWORD *)(*(_QWORD *)(v16 + 72) + 284LL) == 15
            && (unsigned int)v55[22].m128i_i64[0] == 2 )
          {
            v52 = 0;
            v50 = 0;
            v53 = v55[4].m128i_i64[0];
            while ( 1 )
            {
              v19 = *(unsigned int *)(v55[21].m128i_i64[1] + v52);
              if ( (unsigned int)v19 >= *(_DWORD *)(v53 + 64) )
                sub_B7BA0(0.0);
              v20 = *(_QWORD *)(*(_QWORD *)(v53 + 528) + 8 * v19);
              v21 = *(_QWORD *)(v20 + 56);
              if ( !v21 || *(_DWORD *)v21 != 43 || *(_BYTE *)(v21 + 48) != 10 )
                break;
              v22 = *(_QWORD *)(v21 + 56);
              p_s1 = *(char ***)(*(_QWORD *)(v20 + 64) + 1504LL);
              v47 = p_s1;
              if ( v13 )
              {
                v45 = *(_QWORD *)(v20 + 56);
                v23 = sub_1255D0((unsigned __int8 *)v13, (__int64)p_s1, v22, 8);
                v21 = v45;
                if ( !v23 )
                  break;
              }
              else
              {
                v13 = *(_QWORD *)(v21 + 56);
              }
              if ( *(_BYTE *)(v21 + 32) != 4 )
                break;
              v24 = *(_QWORD *)(v21 + 40);
              if ( *(_DWORD *)v24 != 2 || !v24 )
                break;
              if ( *(_BYTE *)(v24 + 48) == 4 && (v42 = *(_DWORD **)(v24 + 56), *v42 == 12) && v42 )
              {
                p_s1 = &s1;
                v43 = (char *)sub_11C8A0((__int64)v42, &s1);
                if ( !v43 )
                  break;
                p_s1 = (char **)&v64;
                if ( !(unsigned __int8)sub_11FD80(v43, &v64, 1u) )
                  break;
                if ( v64 != 4 )
                  break;
                p_s1 = v47;
                if ( !sub_1255D0((unsigned __int8 *)s1, (__int64)v47, v13, 9) )
                  break;
                v44 = 1;
              }
              else
              {
                sub_123A40((__int64)&v64, (unsigned __int8 *)(v24 + 48), v22, a8);
                if ( !(unsigned __int8)sub_126F10((unsigned __int64)&v64, (__int64)p_s1, -4, v25)
                  || !sub_1255D0((unsigned __int8 *)&v64, (__int64)p_s1, v13, 9) )
                {
                  sub_11CDA0((__int64)&v64);
                  break;
                }
                sub_11CDA0((__int64)&v64);
                v44 = 2;
              }
              v50 |= v44;
              if ( v52 )
                break;
              v52 = 4;
            }
            if ( v50 == 3 )
            {
              v56 = nullptr;
              p_s1 = (char **)&v56;
              v49 = sub_BA670(v53, (__int64 *)&v56, 0, 0, (char *)v13, *(_QWORD ***)(v53 + 800), 0, 0, nullptr);
              if ( v49 )
              {
                p_s1 = v56;
                a3 = 0;
                s1 = nullptr;
                v59 = 0;
                if ( ((unsigned __int16)v56 & 0x100) != 0 )
                {
                  tinfo_pdata = get_tinfo_pdata();
                  v28 = s1;
                  if ( tinfo_pdata )
                  {
                    if ( (_QWORD)v59 )
                    {
                      p_s1 = (char **)"_LIST_ENTRY";
                      v28 = s1;
                      if ( !strcmp(s1, "_LIST_ENTRY") )
                      {
                        v65 = 0;
                        v64 = -4294967286LL;
                        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
                        a3 = 0;
                        v67 = 0;
                        v69 = 0;
                        v70 = 0;
                        v71 = 0;
                        v68 = 0;
                        v31 = j__qalloc_or_throw(24, (__int64)"_LIST_ENTRY", v29, v30);
                        sub_123A40(v31, (unsigned __int8 *)v13, v32, v33);
                        *(_QWORD *)(v31 + 16) = *(_QWORD *)(v13 + 16);
                        v65 = v31;
                        HIDWORD(v64) = 4;
                        sub_32C540(&v57, *(_QWORD *)(v53 + 1504), &v56);
                        copy_tinfo_t();
                        clear_tinfo_t();
                        v34 = (_DWORD *)v67;
                        if ( *((_QWORD *)&v68 + 1) <= 4u )
                        {
                          v67 = qvector_reserve((__int64)&v67, v67, 5, 1);
                          v34 = (_DWORD *)v67;
                        }
                        *(_QWORD *)&v68 = 5;
                        *v34 = 1701080931;
                        *(_BYTE *)(v67 + 4) = 0;
                        v35 = (unsigned int *)v55[21].m128i_i64[1];
                        v48 = v35[1];
                        v51 = *v35;
                        if ( *v35 >= *(_DWORD *)(v53 + 64) )
                          sub_B7BA0(0.0);
                        v36 = *(_QWORD *)(*(_QWORD *)(v53 + 528) + 8LL * v51);
                        v37 = *(_QWORD *)(v36 + 56);
                        v57 = 0;
                        v46 = v37;
                        v38 = sub_335B10(
                                v53,
                                *(_QWORD *)(v37 + 24),
                                (__int64)"RtlpCheckListEntry",
                                (__int64)&v57,
                                1,
                                (__int64)&v64,
                                0);
                        clear_tinfo_t();
                        sub_11D890(v46, v38);
                        if ( v38 )
                        {
                          sub_11CDA0(v38 + 64);
                          sub_11CDA0(v38 + 48);
                          sub_11CDA0(v38 + 32);
                          j__qfree(v38);
                        }
                        v39 = *(_DWORD *)(v36 + 24);
                        BYTE1(v39) &= ~2u;
                        LOBYTE(v39) = v39 | 0x80;
                        *(_DWORD *)(v36 + 24) = v39;
                        sub_6B2C0(v36, v51 + 1, 0.0);
                        if ( v48 >= *(_DWORD *)(v53 + 64) )
                          sub_B7BA0(0.0);
                        v40 = *(_QWORD *)(*(_QWORD *)(v53 + 528) + 8LL * v48);
                        sub_11D5A0(*(_QWORD *)(v40 + 56));
                        v41 = *(_DWORD *)(v40 + 24);
                        BYTE1(v41) &= ~2u;
                        LOBYTE(v41) = v41 | 0x80;
                        *(_DWORD *)(v40 + 24) = v41;
                        sub_6B2C0(v40, v48 + 1, 0.0);
                        v55[22].m128i_i64[0] = 0;
                        *(_DWORD *)v53 |= 0x400u;
                        cleanup_argloc();
                        if ( v67 )
                        {
                          *(_QWORD *)&v68 = 0;
                          qfree(v67);
                        }
                        clear_tinfo_t();
                        sub_11CDA0((__int64)&v64);
                        if ( s1 )
                        {
                          *(_QWORD *)&v59 = 0;
                          qfree((__int64)s1);
                        }
                        clear_tinfo_t();
                        p_s1 = (char **)&byte_1;
                        sub_66FA0(a1, 1);
                        v10 = v49;
                        goto LABEL_11;
                      }
                    }
                  }
                  if ( v28 )
                  {
                    *(_QWORD *)&v59 = 0;
                    qfree((__int64)v28);
                  }
                }
              }
              clear_tinfo_t();
            }
          }
        }
      }
LABEL_11:
      v60[0] = off_4DC1D0;
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree((__int64)v61);
      }
LABEL_13:
      v17 = *(_DWORD *)(a1 + 64);
      if ( (int)v17 <= (int)(v8 + 2) )
        return v10;
      ++v8;
      v54 += 8;
      if ( v8 >= v17 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, *(double *)a3.m128i_i64);
        BUG();
      }
    }
  }
  return v10;
}

