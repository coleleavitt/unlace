__int64 __fastcall sub_CA230(__int64 a1, __m128i a2, double a3, __m128i a4, double a5)
{
  unsigned int v5; // r15d
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rax
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  char v23; // al
  __int64 v24; // rax
  __int64 tinfo_pdata; // rax
  char *v27; // rdi
  __int64 v28; // r12
  __int64 *v29; // rdi
  _DWORD *v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD *v42; // rdi
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // [rsp-8h] [rbp-178h]
  int v46; // [rsp+0h] [rbp-170h]
  __int64 v47; // [rsp+10h] [rbp-160h]
  __int64 v48; // [rsp+10h] [rbp-160h]
  __int64 v49; // [rsp+18h] [rbp-158h]
  unsigned int v50; // [rsp+18h] [rbp-158h]
  unsigned int v51; // [rsp+18h] [rbp-158h]
  unsigned __int8 v52; // [rsp+23h] [rbp-14Dh]
  int v53; // [rsp+24h] [rbp-14Ch]
  unsigned int v54; // [rsp+24h] [rbp-14Ch]
  __int64 v55; // [rsp+28h] [rbp-148h]
  __int64 v56; // [rsp+38h] [rbp-138h]
  __int64 v57; // [rsp+48h] [rbp-128h]
  __int64 v58; // [rsp+58h] [rbp-118h]
  __int64 v59; // [rsp+60h] [rbp-110h] BYREF
  __int64 v60; // [rsp+68h] [rbp-108h] BYREF
  char *s1; // [rsp+70h] [rbp-100h] BYREF
  __int128 v62; // [rsp+78h] [rbp-F8h]
  _QWORD v63[6]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-B0h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-A8h]
  unsigned __int8 v66; // [rsp+D8h] [rbp-98h]
  __int64 v67; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-88h]
  __m128i si128; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v70; // [rsp+100h] [rbp-70h] BYREF
  __int128 v71; // [rsp+108h] [rbp-68h]
  __int64 v72; // [rsp+118h] [rbp-58h]
  __int64 v73; // [rsp+120h] [rbp-50h]
  int v74; // [rsp+128h] [rbp-48h]
  unsigned __int64 v75; // [rsp+138h] [rbp-38h]

  v5 = 1;
  v7 = 0;
  v75 = __readfsqword(0x28u);
  v57 = 8;
  if ( *(int *)(a1 + 64) > 2 )
  {
    while ( 1 )
    {
      v58 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v57);
      v7 |= sub_CA040((_QWORD *)v58, a2, a3, a4, a5);
      if ( !*(_QWORD *)(a1 + 800) )
        goto LABEL_13;
      v8 = *(_QWORD *)(a1 + 1496);
      a2 = 0;
      memset(&v63[1], 0, 32);
      v63[5] = v8;
      v63[0] = off_4AEC50;
      v64 = 0;
      v66 = 0;
      v65 = 0;
      sub_11B370(v58, v63);
      v12 = v66;
      if ( v66 )
      {
        v19 = *(_DWORD *)(v58 + 24);
        BYTE1(v19) &= ~2u;
        LOBYTE(v19) = v19 | 0x80;
        *(_DWORD *)(v58 + 24) = v19;
        sub_211DA0(a1, &v64);
        sub_62C20(a1, 1u, (__int64)"recognized CONTAINING_RECORD");
        v7 = v12;
      }
      v13 = *(_QWORD *)(v58 + 48);
      if ( v13 )
      {
        do
        {
          v70 = 0;
          LOBYTE(v71) = 0;
          v67 = (__int64)off_4AEC78;
          DWORD1(v71) = 0;
          v14 = *(_QWORD *)(v58 + 64);
          si128 = (__m128i)(unsigned __int64)v58;
          v68 = v14;
          sub_11A440(v13, &v67, v9, v58, v10, v11);
          if ( DWORD1(v71) )
          {
            *(_DWORD *)(v58 + 24) |= 0x80u;
            sub_62C20(a1, 1u, (__int64)"straighten lvar pairs");
            v7 = 1;
          }
          v15 = (char *)v58;
          v16 = sub_C3C60(v58, v13);
          v13 = *(_QWORD *)(v13 + 8);
          v7 |= v16;
        }
        while ( v13 );
        v17 = *(_QWORD *)(v58 + 48);
        if ( v17 )
        {
          if ( *(_BYTE *)(v17 + 64) == 8
            && *(_DWORD *)(*(_QWORD *)(v17 + 72) + 284LL) == 15
            && (unsigned int)*(_QWORD *)(v58 + 352) == 2 )
          {
            v55 = 0;
            v53 = 0;
            v56 = *(_QWORD *)(v58 + 64);
            while ( 1 )
            {
              v20 = *(unsigned int *)(*(_QWORD *)(v58 + 344) + v55);
              if ( (unsigned int)v20 >= *(_DWORD *)(v56 + 64) )
                sub_B36E0(v15);
              v21 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v20);
              v22 = *(_QWORD *)(v21 + 56);
              if ( !v22 || *(_DWORD *)v22 != 43 || *(_BYTE *)(v22 + 48) != 10 )
                break;
              v49 = *(_QWORD *)(*(_QWORD *)(v21 + 64) + 1504LL);
              if ( v13 )
              {
                v47 = *(_QWORD *)(v21 + 56);
                v23 = sub_121110(v13, *(_QWORD *)(*(_QWORD *)(v21 + 64) + 1504LL), *(_QWORD *)(v22 + 56), 8);
                v22 = v47;
                if ( !v23 )
                  break;
              }
              else
              {
                v13 = *(_QWORD *)(v22 + 56);
              }
              if ( *(_BYTE *)(v22 + 32) != 4 )
                break;
              v24 = *(_QWORD *)(v22 + 40);
              if ( *(_DWORD *)v24 != 2 || !v24 )
                break;
              if ( *(_BYTE *)(v24 + 48) == 4 && (v42 = *(_DWORD **)(v24 + 56), *v42 == 12) && v42 )
              {
                v43 = sub_1183E0(v42, &s1);
                if ( !v43 )
                  break;
                if ( !(unsigned __int8)sub_11B8C0(v43, &v67, 1) )
                  break;
                if ( v67 != 4 )
                  break;
                v15 = s1;
                if ( !(unsigned __int8)sub_121110(s1, v49, v13, 9) )
                  break;
                v44 = 1;
              }
              else
              {
                sub_11F580(&v67, v24 + 48);
                if ( !(unsigned __int8)sub_122A50(&v67, v49, 4294967292LL)
                  || (v15 = (char *)&v67, !(unsigned __int8)sub_121110(&v67, v49, v13, 9)) )
                {
                  sub_1188E0(&v67);
                  break;
                }
                sub_1188E0(&v67);
                v44 = 2;
              }
              v53 |= v44;
              if ( v55 )
                break;
              v55 = 4;
            }
            if ( v53 == 3 )
            {
              v59 = 0;
              v52 = sub_B61B0(v56, &v59, 0, 0, (char *)v13, *(_QWORD *)(v56 + 800), 0, 0, nullptr);
              if ( v52 )
              {
                a2 = 0;
                s1 = nullptr;
                v62 = 0;
                if ( (v59 & 0x100) != 0 )
                {
                  tinfo_pdata = get_tinfo_pdata();
                  v27 = s1;
                  if ( tinfo_pdata )
                  {
                    if ( (_QWORD)v62 )
                    {
                      v27 = s1;
                      if ( !strcmp(s1, "_LIST_ENTRY") )
                      {
                        v68 = 0;
                        v67 = -4294967286LL;
                        si128 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
                        a2 = 0;
                        v70 = 0;
                        v72 = 0;
                        v73 = 0;
                        v74 = 0;
                        v71 = 0;
                        v28 = j__qalloc_or_throw();
                        sub_11F580(v28, v13);
                        *(_QWORD *)(v28 + 16) = *(_QWORD *)(v13 + 16);
                        v68 = v28;
                        HIDWORD(v67) = 4;
                        sub_327290(&v60, *(_QWORD *)(v56 + 1504), &v59);
                        copy_tinfo_t();
                        v29 = &v60;
                        clear_tinfo_t();
                        v30 = (_DWORD *)v70;
                        if ( *((_QWORD *)&v71 + 1) <= 4u )
                        {
                          v29 = &v70;
                          v70 = qvector_reserve();
                          v30 = (_DWORD *)v70;
                        }
                        *(_QWORD *)&v71 = 5;
                        *v30 = 1701080931;
                        *(_BYTE *)(v70 + 4) = 0;
                        v31 = *(unsigned int **)(v58 + 344);
                        v50 = v31[1];
                        v54 = *v31;
                        if ( *v31 >= *(_DWORD *)(v56 + 64) )
                          sub_B36E0(v29);
                        v32 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8LL * v54);
                        v33 = *(_QWORD *)(v32 + 56);
                        v60 = 0;
                        v34 = sub_330570(
                                v56,
                                *(_QWORD *)(v33 + 24),
                                (unsigned int)"RtlpCheckListEntry",
                                (unsigned int)&v60,
                                1,
                                (unsigned int)&v67,
                                0,
                                v45,
                                v46,
                                (unsigned int)&si128.m128i_u32[2],
                                v33,
                                v50);
                        clear_tinfo_t();
                        sub_1193D0(v48, v34);
                        if ( v34 )
                        {
                          sub_1188E0(v34 + 64);
                          sub_1188E0(v34 + 48);
                          sub_1188E0(v34 + 32);
                          j__qfree();
                        }
                        v37 = *(_DWORD *)(v32 + 24);
                        BYTE1(v37) &= ~2u;
                        LOBYTE(v37) = v37 | 0x80;
                        *(_DWORD *)(v32 + 24) = v37;
                        sub_66F40(v32, v54 + 1, v35, v36);
                        if ( v51 >= *(_DWORD *)(v56 + 64) )
                          sub_B36E0(v32);
                        v38 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8LL * v51);
                        sub_1190E0(*(_QWORD *)(v38 + 56));
                        v39 = *(_DWORD *)(v38 + 24);
                        BYTE1(v39) &= ~2u;
                        LOBYTE(v39) = v39 | 0x80;
                        *(_DWORD *)(v38 + 24) = v39;
                        sub_66F40(v38, v51 + 1, v40, v41);
                        *(_QWORD *)(v58 + 352) = 0;
                        *(_DWORD *)v56 |= 0x400u;
                        cleanup_argloc();
                        if ( v70 )
                        {
                          *(_QWORD *)&v71 = 0;
                          qfree();
                        }
                        clear_tinfo_t();
                        sub_1188E0(&v67);
                        if ( s1 )
                        {
                          *(_QWORD *)&v62 = 0;
                          qfree();
                        }
                        clear_tinfo_t();
                        sub_62C20(a1, 1u, (__int64)"recognized RtlpCheckListEntry");
                        v7 = v52;
                        goto LABEL_11;
                      }
                    }
                  }
                  if ( v27 )
                  {
                    *(_QWORD *)&v62 = 0;
                    qfree();
                  }
                }
              }
              clear_tinfo_t();
            }
          }
        }
      }
LABEL_11:
      v63[0] = off_4AEC50;
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
LABEL_13:
      v18 = *(_DWORD *)(a1 + 64);
      if ( (int)v18 <= (int)(v5 + 2) )
        return v7;
      ++v5;
      v57 += 8;
      if ( v5 >= v18 )
      {
        if ( !under_debugger )
          sub_37DDE0(52719);
        BUG();
      }
    }
  }
  return v7;
}

