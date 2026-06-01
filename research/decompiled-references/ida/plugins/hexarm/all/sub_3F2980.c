__int64 __fastcall sub_3F2980(const __m128i *a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // eax
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  _DWORD *v9; // rax
  __int64 v10; // r12
  int v11; // eax
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // r12
  char *v15; // r13
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // r14
  int v19; // eax
  int v20; // edx
  __int64 v21; // r13
  char v22; // al
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // r13
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rdx
  void *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  unsigned __int64 v40; // rax
  __int64 v41; // r10
  int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  int *v46; // rcx
  int v47; // eax
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 not_tail; // rax
  __int64 v59; // rdx
  char v60; // al
  unsigned __int8 *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // r15
  unsigned __int64 *v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // r13
  __int64 v69; // rsi
  __int64 v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // [rsp+0h] [rbp-180h]
  __int64 v75; // [rsp+0h] [rbp-180h]
  __int64 v76; // [rsp+8h] [rbp-178h]
  __int64 v77; // [rsp+8h] [rbp-178h]
  __int64 v78; // [rsp+10h] [rbp-170h]
  __int64 v79; // [rsp+18h] [rbp-168h]
  __int64 v80; // [rsp+20h] [rbp-160h]
  unsigned __int64 *v81; // [rsp+20h] [rbp-160h]
  unsigned __int8 *v82; // [rsp+20h] [rbp-160h]
  __m128i *v83; // [rsp+20h] [rbp-160h]
  __int64 v84; // [rsp+28h] [rbp-158h]
  int v85; // [rsp+28h] [rbp-158h]
  __m128i v86; // [rsp+30h] [rbp-150h] BYREF
  __int64 v87; // [rsp+48h] [rbp-138h] BYREF
  _QWORD v88[2]; // [rsp+50h] [rbp-130h] BYREF
  unsigned __int64 v89; // [rsp+60h] [rbp-120h] BYREF
  __int64 v90; // [rsp+68h] [rbp-118h]
  unsigned __int64 v91; // [rsp+70h] [rbp-110h] BYREF
  __m128i *v92; // [rsp+78h] [rbp-108h]
  __m128i v93; // [rsp+128h] [rbp-58h]
  __int64 v94; // [rsp+138h] [rbp-48h]
  unsigned __int64 v95; // [rsp+148h] [rbp-38h]

  v1 = (unsigned int *)a1[2].m128i_i64[0];
  v95 = __readfsqword(0x28u);
  v86.m128i_i64[0] = (__int64)v1;
  v3 = *v1;
  if ( v3 == 54 )
  {
    v22 = *(_BYTE *)(v86.m128i_i64[0] + 64);
    if ( v22 == 1 )
    {
      if ( *(_DWORD *)(a1[2].m128i_i64[1] + 656) != *(_DWORD *)(v86.m128i_i64[0] + 72) )
        return 0;
      v48 = *(_QWORD *)(a1[1].m128i_i64[0] + 64);
      v49 = sub_1CF5F0(v48, *(_QWORD *)(v86.m128i_i64[0] + 24));
      if ( (*(_BYTE *)(v86.m128i_i64[0] + 4) & 0x20) != 0 )
        v49 += *(int *)(*(_QWORD *)(v48 + 1504) + 80LL);
      v50 = a1[1].m128i_i64[0];
      if ( *(_QWORD *)(*(_QWORD *)(v50 + 64) + 136LL) != v49 )
      {
        sub_330CB0(v50, v86.m128i_i64[0]);
        ++a1[3].m128i_i32[0];
        return 0;
      }
      v22 = *(_BYTE *)(v86.m128i_i64[0] + 64);
    }
    if ( v22 == 4 )
    {
      v23 = *(_QWORD *)(v86.m128i_i64[0] + 72);
      if ( *(_DWORD *)v23 == 19
        && (unsigned __int8)sub_11F7C0((char *)(v23 + 48), &v91, 0)
        && v91 == 1
        && *(_BYTE *)(v23 + 32) == 2
        && (*(_BYTE *)(v23 + 33) & 8) != 0 )
      {
        v24 = v86.m128i_i64[0];
        v25 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v23 + 40) + 16LL), *(_DWORD *)(v23 + 36), 0);
        *(_DWORD *)v86.m128i_i64[0] = 55;
        v26 = a1[2].m128i_i64[1];
        sub_11C7E0(v24 + 32);
        *(_BYTE *)(v24 + 32) = 6;
        v27 = 1LL << (8 * *(_BYTE *)(v26 + 84));
        if ( (unsigned __int64)(8 * *(_DWORD *)(v26 + 84)) >= 0x40 )
          v27 = 0;
        *(_QWORD *)(v24 + 40) = v25 & (v27 - 1);
        sub_11C7E0(v24 + 48);
        sub_11C7E0(v24 + 64);
        ++a1[3].m128i_i32[0];
      }
    }
    return 0;
  }
  if ( v3 <= 0x36 )
  {
    if ( v3 != 12 )
    {
      if ( v3 != 13 )
      {
        if ( v3 == 4
          && *(_BYTE *)(v86.m128i_i64[0] + 64) == 5
          && *(_BYTE *)(v86.m128i_i64[0] + 32) == 1
          && *(_DWORD *)(a1[2].m128i_i64[1] + 656) == *(_DWORD *)(v86.m128i_i64[0] + 40) )
        {
          v34 = *(_QWORD *)(a1[1].m128i_i64[0] + 64);
          v35 = *(_QWORD *)(v34 + 920);
          v36 = *(_DWORD *)(v35 + 192);
          if ( (v36 & 1) == 0 )
          {
            v37 = *(_QWORD *)(v34 + 136) - *(_QWORD *)(*(_QWORD *)(v86.m128i_i64[0] + 72) + 8LL);
            *(_DWORD *)(v35 + 192) = v36 | 1;
            *(_QWORD *)(v35 + 184) = v37;
          }
        }
        return 0;
      }
      if ( *(_BYTE *)(v86.m128i_i64[0] + 32) == 1
        && *(_DWORD *)(*(_QWORD *)(a1[1].m128i_i64[0] + 64) + 1184LL) == *(_DWORD *)(v86.m128i_i64[0] + 40)
        && (unsigned __int8)sub_11F7C0((char *)(v86.m128i_i64[0] + 48), &v89, 1u) )
      {
        v92 = nullptr;
        v91 = 0xFFFFFFFF00000000LL;
        sub_125D20((__int64)&v91, (unsigned __int8 *)v86.m128i_i64[0]);
        if ( (unsigned __int8)sub_13C220(
                                a1[1].m128i_i64[0],
                                (__int64)&v91,
                                (int *)v86.m128i_i64[0],
                                0,
                                (__int64)&v91,
                                0xFFFFFFFF) )
        {
          sub_11C390((char *)&v91, a1[2].m128i_i64[1]);
          sub_11C450((char *)(v86.m128i_i64[0] + 32), (char *)&v91);
          sub_11C7E0(v86.m128i_i64[0] + 48);
          *(_DWORD *)v86.m128i_i64[0] = 4;
          ++a1[3].m128i_i32[0];
          sub_11C7E0((__int64)&v91);
          return 0;
        }
        sub_11C7E0((__int64)&v91);
      }
    }
    v12 = sub_3EBA20(v88, v86.m128i_i64[0], *(_QWORD *)(a1[2].m128i_i64[1] + 720));
    v13 = a1[2].m128i_i64[1];
    if ( v12 )
    {
      v14 = v88[0];
LABEL_25:
      v15 = (char *)(v86.m128i_i64[0] + 32);
      sub_11C7E0(v86.m128i_i64[0] + 32);
      *(_BYTE *)(v86.m128i_i64[0] + 32) = 6;
      v16 = 8 * *(_DWORD *)(v13 + 84);
      if ( (unsigned __int64)v16 <= 0x3F )
        v14 &= ~(-1LL << v16);
      v17 = v86.m128i_i64[0];
      *(_QWORD *)(v86.m128i_i64[0] + 40) = v14;
      v18 = v17 + 48;
      sub_11C390(v15, a1[2].m128i_i64[1]);
      goto LABEL_28;
    }
    v21 = *(_QWORD *)(v13 + 720);
    if ( v21 == -1 )
      goto LABEL_100;
    if ( *(_BYTE *)(v86.m128i_i64[0] + 32) == 10 )
    {
      v51 = v86.m128i_i64[0];
      v52 = *(_QWORD *)(v86.m128i_i64[0] + 40);
      if ( *(_BYTE *)v52 == 6 )
      {
        if ( v21 == *(_QWORD *)(v52 + 8) )
        {
          v39 = v86.m128i_i64[0] + 48;
LABEL_69:
          if ( *(_DWORD *)v86.m128i_i64[0] == 12 && *(_BYTE *)v39 == 10 )
          {
            v65 = *(_QWORD *)(v39 + 8);
            if ( *(_BYTE *)v65 == 6 && (*(_BYTE *)(v39 + 1) & 8) != 0 )
            {
              v14 = *(_QWORD *)(v65 + 8);
              v88[0] = v14;
              goto LABEL_25;
            }
          }
          if ( (unsigned __int8)sub_11F7C0((char *)v39, &v91, 1u) )
          {
            v40 = v91;
            if ( *(_DWORD *)v86.m128i_i64[0] == 13 )
              v40 = -(__int64)v91;
            goto LABEL_74;
          }
          if ( *(_BYTE *)v39 == 10 )
          {
            v66 = *(_QWORD *)(v39 + 8);
            if ( *(_BYTE *)v66 == 6 && *(_DWORD *)v86.m128i_i64[0] != 13 )
            {
              v40 = *(_QWORD *)(v66 + 8);
LABEL_74:
              v14 = v21 + v40;
              v13 = a1[2].m128i_i64[1];
              v88[0] = v21 + v40;
              goto LABEL_25;
            }
          }
          v21 = *(_QWORD *)(a1[2].m128i_i64[1] + 720);
          if ( v21 == -1 )
            goto LABEL_100;
          if ( *(_BYTE *)(v86.m128i_i64[0] + 32) != 10 )
            goto LABEL_34;
          v52 = *(_QWORD *)(v86.m128i_i64[0] + 40);
LABEL_90:
          if ( *(_BYTE *)v52 != 6 )
            goto LABEL_34;
          v18 = v86.m128i_i64[0] + 48;
          if ( (unsigned __int8)sub_11F7C0((char *)(v86.m128i_i64[0] + 48), &v91, 1u) )
          {
            v53 = v91;
            if ( *(_DWORD *)v86.m128i_i64[0] == 12 )
              v53 = -(__int64)v91;
            if ( v21 == v53 )
            {
              v54 = *(_QWORD *)(*(_QWORD *)(v86.m128i_i64[0] + 40) + 8LL) - v21;
LABEL_96:
              sub_120450(
                v86.m128i_i64[0] + 32,
                a1[2].m128i_i64[1],
                v54,
                *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 84LL),
                *(_QWORD *)(v86.m128i_i64[0] + 24),
                0);
LABEL_28:
              sub_11C7E0(v18);
              v19 = 4;
              v20 = *(_DWORD *)(v86.m128i_i64[0] + 68);
              if ( *(_DWORD *)(v86.m128i_i64[0] + 36) != v20 )
                v19 = (*(_DWORD *)(v86.m128i_i64[0] + 36) >= v20) + 9;
              *(_DWORD *)v86.m128i_i64[0] = v19;
              ++a1[3].m128i_i32[0];
              return 0;
            }
          }
LABEL_100:
          if ( *(_BYTE *)(v86.m128i_i64[0] + 32) == 10 )
          {
            v55 = *(_QWORD *)(v86.m128i_i64[0] + 40);
            if ( *(_BYTE *)v55 == 6 )
            {
              v56 = *(_QWORD *)(v55 + 8);
              if ( (unsigned __int8)is_mapped() )
              {
                v18 = v86.m128i_i64[0] + 48;
                if ( (unsigned __int8)sub_11F7C0((char *)(v86.m128i_i64[0] + 48), &v91, 1u) )
                {
                  if ( *(_DWORD *)v86.m128i_i64[0] == 12 )
                    v91 = -(__int64)v91;
                  v57 = get_flags_ex() & 0x600;
                  not_tail = v56;
                  if ( v57 == 512 )
                    not_tail = prev_not_tail();
                  if ( v91 == not_tail )
                  {
                    v54 = v56 - not_tail;
                    goto LABEL_96;
                  }
                }
              }
            }
          }
LABEL_34:
          if ( !(unsigned __int8)sub_339F20(v88, v86.m128i_i64[0]) )
            return 0;
          v14 = v88[0];
          v13 = a1[2].m128i_i64[1];
          goto LABEL_25;
        }
        v51 = v86.m128i_i64[0];
      }
      if ( *(_BYTE *)(v51 + 48) != 10 )
        goto LABEL_90;
      v59 = *(_QWORD *)(v86.m128i_i64[0] + 56);
      if ( *(_BYTE *)v59 != 6 || v21 != *(_QWORD *)(v59 + 8) )
        goto LABEL_90;
    }
    else
    {
      if ( *(_BYTE *)(v86.m128i_i64[0] + 48) != 10 )
        goto LABEL_34;
      v38 = *(_QWORD *)(v86.m128i_i64[0] + 56);
      if ( *(_BYTE *)v38 != 6 || v21 != *(_QWORD *)(v38 + 8) )
        goto LABEL_34;
    }
    v39 = v86.m128i_i64[0] + 32;
    goto LABEL_69;
  }
  if ( v3 != 56 )
  {
    if ( v3 != 57 )
      return 0;
    v5 = *(_BYTE *)(v86.m128i_i64[0] + 48);
    if ( v5 != 6 )
    {
      v6 = a1[1].m128i_i64[0];
      if ( (*(_BYTE *)(v6 + 26) & 2) != 0
        && v5 == 1
        && *(_DWORD *)(a1[2].m128i_i64[1] + 656) == *(_DWORD *)(v86.m128i_i64[0] + 56) )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( (*(_BYTE *)(v7 + 24) & 2) != 0 )
          {
            v8 = *(_QWORD *)(v7 + 48);
            if ( v8 )
            {
              if ( *(_DWORD *)v8 == 55 && *(_BYTE *)(v8 + 32) == 7 )
              {
                v9 = sub_684C0(a1->m128i_i64[1] + 1448, *(_DWORD *)(v6 + 72));
                if ( v9 )
                {
                  if ( *(_DWORD *)(v8 + 40) == v9[2] )
                  {
                    v10 = a1[1].m128i_i64[0];
                    sub_11CFE0(v86.m128i_i64[0]);
                    v11 = *(_DWORD *)(v10 + 24);
                    BYTE1(v11) &= ~2u;
                    LOBYTE(v11) = v11 | 0x80;
                    *(_DWORD *)(v10 + 24) = v11;
                    ++a1[3].m128i_i32[0];
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    }
    v29 = *(_QWORD *)(v86.m128i_i64[0] + 56);
    goto LABEL_49;
  }
  v28 = *(_BYTE *)(v86.m128i_i64[0] + 32);
  if ( v28 != 11 )
    goto LABEL_47;
  if ( *(_BYTE *)(v86.m128i_i64[0] + 64) == 8 )
  {
    v41 = *(_QWORD *)(v86.m128i_i64[0] + 72);
    v42 = *(_DWORD *)(v41 + 284);
    if ( v42 == 29 )
    {
      v42 = 34;
    }
    else if ( v42 != 30 )
    {
      goto LABEL_54;
    }
    v43 = a1[1].m128i_i64[0];
    v44 = a1[1].m128i_i64[1];
    v88[1] = 0;
    v90 = 0;
    v84 = v43;
    v88[0] = 0xFFFFFFFF00000000LL;
    v89 = 0xFFFFFFFF00000000LL;
    v45 = *(_QWORD *)(v41 + 24);
    if ( *(_BYTE *)(v45 + 160) == 4 )
    {
      v91 = 0xFFFFFFFF00000000LL;
      v92 = nullptr;
      v46 = *(int **)(v45 + 168);
      v47 = *v46;
      if ( *v46 == 34 )
      {
        v64 = (unsigned __int64 *)(v46 + 8);
        v81 = (unsigned __int64 *)(v46 + 12);
      }
      else if ( v47 == 37 )
      {
        v64 = (unsigned __int64 *)(v46 + 12);
        v81 = (unsigned __int64 *)(v46 + 8);
      }
      else
      {
        if ( v47 != 32 )
        {
LABEL_81:
          sub_11C7E0((__int64)&v91);
LABEL_82:
          sub_11C7E0((__int64)&v89);
          sub_11C7E0((__int64)v88);
          v28 = *(_BYTE *)(v86.m128i_i64[0] + 32);
LABEL_47:
          if ( v28 == 6 )
          {
            v29 = *(_QWORD *)(v86.m128i_i64[0] + 40);
LABEL_49:
            v88[0] = v29;
            v30 = sub_40E900(v29, 0);
            if ( v30 )
            {
              v31 = v86.m128i_i64[0];
              v32 = *(_QWORD *)(v86.m128i_i64[0] + 24);
              v86 = _mm_loadu_si128(a1 + 1);
              sub_40D710(&v91, *(_QWORD *)(v86.m128i_i64[0] + 64), v32);
              v94 = v31;
              v93 = _mm_load_si128(&v86);
              v91 = (unsigned __int64)&off_4E64D8;
              if ( !(unsigned int)sub_40F630(&v91, v30) )
                ++a1[3].m128i_i32[0];
              v94 = 0;
              v91 = (unsigned __int64)&off_4E64D8;
              v93 = 0;
              sub_40D800(&v91);
              return 0;
            }
            if ( !(unsigned __int8)sub_3F2350(a1[2].m128i_i64[1], v86.m128i_i64[0]) )
              return 0;
LABEL_57:
            ++a1[3].m128i_i32[0];
            return 0;
          }
          goto LABEL_54;
        }
        v75 = v41;
        v77 = v44;
        v78 = *(_QWORD *)(v45 + 168);
        v82 = (unsigned __int8 *)(v46 + 12);
        if ( (unsigned __int8)sub_11F7C0((char *)v46 + 48, &v87, 0) && !v87 )
        {
          sub_124BC0((__int64)&v91, v82);
          v41 = v75;
          v81 = &v91;
          v64 = (unsigned __int64 *)(v78 + 32);
          v44 = v77;
          v92[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
          v45 = *(_QWORD *)(v75 + 24);
        }
        else
        {
          if ( !(unsigned __int8)sub_11F7C0((char *)v82, &v87, 1u) || v87 != -1 )
            goto LABEL_81;
          sub_124BC0((__int64)&v91, v82);
          v83 = v92;
          v73 = sub_32AEF0(-2, SHIDWORD(v91), 0);
          v41 = v75;
          v44 = v77;
          v83[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v73, (__m128i)(unsigned __int64)v73);
          v64 = &v91;
          v81 = (unsigned __int64 *)(v78 + 32);
          v45 = *(_QWORD *)(v75 + 24);
        }
      }
      if ( *((_DWORD *)v64 + 1) != *(_DWORD *)(v45 + 4) )
        goto LABEL_81;
      v79 = v41;
      v74 = v44;
      v76 = (__int64)v64;
      if ( !(unsigned __int8)sub_156C80(v84, (__int64)v64, v45)
        || !(unsigned __int8)sub_156C80(v84, (__int64)v81, *(_QWORD *)(v79 + 24) + 80LL) )
      {
        goto LABEL_81;
      }
      sub_B0F60(v84, v74, (__int64)v88, v74, v76, v74, *(_QWORD *)(v79 + 24), 0);
      sub_B0F60(v84, v74, (__int64)&v89, v74, (__int64)v81, v74, *(_QWORD *)(v79 + 24) + 80LL, 0);
      sub_11C7E0((__int64)&v91);
    }
    else
    {
      v80 = v41;
      v60 = sub_11F7C0((char *)(v45 + 160), &v91, 0);
      v61 = *(unsigned __int8 **)(v80 + 24);
      if ( v60 && v91 == 1 )
      {
        sub_124BC0((__int64)v88, v61);
        sub_124BC0((__int64)&v89, (unsigned __int8 *)(*(_QWORD *)(v80 + 24) + 80LL));
      }
      else if ( sub_1255A0(v61, (__int64)(v61 + 80), 0) )
      {
        if ( v42 == 34 )
          sub_124BC0((__int64)v88, (unsigned __int8 *)(*(_QWORD *)(v80 + 24) + 160LL));
        else
          sub_120450(
            (__int64)v88,
            *(_QWORD *)(*(_QWORD *)(v84 + 64) + 1504LL),
            0,
            1,
            *(_QWORD *)(v86.m128i_i64[0] + 24),
            0);
        v42 = 4;
      }
      else
      {
        if ( !(unsigned __int8)sub_11F7C0((char *)(*(_QWORD *)(v80 + 24) + 80LL), &v91, 0) || v91 )
          goto LABEL_82;
        sub_124BC0((__int64)v88, *(unsigned __int8 **)(v80 + 24));
        v67 = *(_DWORD *)(*(_QWORD *)(v80 + 24) + 4LL);
        LOBYTE(v89) = 4;
        v85 = v67;
        v68 = j__qalloc_or_throw();
        v69 = *(_QWORD *)(v86.m128i_i64[0] + 24);
        *(_QWORD *)(v68 + 40) = 0;
        *(_QWORD *)(v68 + 56) = 0;
        *(_QWORD *)(v68 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v68 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v68 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v68 + 72) = 0;
        sub_330C90(v68, v69);
        v90 = v68;
        *(_DWORD *)v68 = 9;
        *(_BYTE *)(v90 + 32) = 4;
        v70 = j__qalloc_or_throw();
        v71 = *(_QWORD *)(v86.m128i_i64[0] + 24);
        *(_QWORD *)(v70 + 72) = 0;
        *(_QWORD *)(v70 + 40) = 0;
        *(_QWORD *)(v70 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v70 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v70 + 56) = 0;
        *(_QWORD *)(v70 + 64) = 0xFFFFFFFF00000000LL;
        sub_330C90(v70, v71);
        *(_QWORD *)(v90 + 40) = v70;
        *(_DWORD *)v70 = 6;
        sub_11C450((char *)(*(_QWORD *)(v90 + 40) + 32LL), (char *)(*(_QWORD *)(v80 + 24) + 160LL));
        v72 = v90;
        *(_DWORD *)(*(_QWORD *)(v90 + 40) + 68LL) = 1;
        *(_DWORD *)(v72 + 36) = 1;
        *(_DWORD *)(v72 + 68) = v85;
        HIDWORD(v89) = v85;
      }
    }
    v62 = v86.m128i_i64[0];
    *(_DWORD *)v86.m128i_i64[0] = v42;
    v63 = v62;
    sub_11C450((char *)(v62 + 32), (char *)v88);
    if ( (_BYTE)v89 )
      sub_11C450((char *)(v63 + 48), (char *)&v89);
    else
      sub_11C7E0(v86.m128i_i64[0] + 48);
    sub_11C7E0(v86.m128i_i64[0] + 64);
    *(_DWORD *)(v86.m128i_i64[0] + 68) = 1;
    sub_11C7E0((__int64)&v89);
    sub_11C7E0((__int64)v88);
    ++a1[3].m128i_i32[0];
    return 0;
  }
LABEL_54:
  v33 = &unk_42E300;
  if ( *(_DWORD *)(a1[2].m128i_i64[1] + 80) == 8 )
    v33 = &unk_42E340;
  if ( (unsigned __int8)sub_40B260(a1[1].m128i_i64[0], v86.m128i_i64[0], a1[1].m128i_i64[1] == v86.m128i_i64[0], v33, 7) )
    goto LABEL_57;
  return 0;
}

