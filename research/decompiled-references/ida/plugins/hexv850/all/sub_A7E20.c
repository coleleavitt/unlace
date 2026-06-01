__int64 __fastcall sub_A7E20(__int64 a1, _QWORD *a2, __int64 a3, char a4, _BYTE *a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  int v11; // eax
  __int64 *v12; // rdx
  char v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // r14
  unsigned int v16; // r15d
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  int v20; // r9d
  char v21; // al
  _QWORD *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // rcx
  void *v27; // r15
  __m128i v28; // xmm0
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rsi
  _QWORD *v37; // r15
  char v38; // al
  __int64 v39; // rdx
  _QWORD *v40; // r15
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  _QWORD *v45; // r14
  __int64 v46; // rax
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  int v53; // r13d
  _QWORD *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r15
  __int64 v57; // r13
  __int64 n; // [rsp+8h] [rbp-1C8h]
  __int64 v59; // [rsp+10h] [rbp-1C0h]
  char v60; // [rsp+28h] [rbp-1A8h]
  char v61; // [rsp+38h] [rbp-198h]
  __int64 v62; // [rsp+38h] [rbp-198h]
  __int64 v63; // [rsp+40h] [rbp-190h]
  int v64; // [rsp+48h] [rbp-188h]
  __int64 v65; // [rsp+48h] [rbp-188h]
  __int64 v68; // [rsp+58h] [rbp-178h]
  _QWORD *v69; // [rsp+58h] [rbp-178h]
  __int64 v70; // [rsp+58h] [rbp-178h]
  __m128i v71; // [rsp+60h] [rbp-170h] BYREF
  __int64 v72; // [rsp+70h] [rbp-160h]
  __int64 v73; // [rsp+78h] [rbp-158h]
  __int64 v74; // [rsp+88h] [rbp-148h] BYREF
  _BYTE v75[4]; // [rsp+90h] [rbp-140h] BYREF
  unsigned int v76; // [rsp+94h] [rbp-13Ch]
  _BYTE v77[4]; // [rsp+A0h] [rbp-130h] BYREF
  int v78; // [rsp+A4h] [rbp-12Ch]
  _BYTE v79[16]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-110h]
  __int128 v81; // [rsp+C8h] [rbp-108h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-E0h] BYREF
  __int128 v84; // [rsp+F8h] [rbp-D8h]
  _QWORD v85[6]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v86[2]; // [rsp+140h] [rbp-90h] BYREF
  void *src; // [rsp+150h] [rbp-80h] BYREF
  __m128i v88; // [rsp+158h] [rbp-78h]
  __int64 v89; // [rsp+170h] [rbp-60h] BYREF
  __int64 v90; // [rsp+178h] [rbp-58h]
  void *v91; // [rsp+180h] [rbp-50h] BYREF
  __m128i v92; // [rsp+188h] [rbp-48h] BYREF
  unsigned __int64 v93; // [rsp+198h] [rbp-38h]

  v6 = a3;
  v7 = *(_DWORD *)a2;
  v73 = (__int64)a2;
  v93 = __readfsqword(0x28u);
  v64 = *(_DWORD *)(a3 + 68);
  v72 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v7 <= 0xE )
  {
    if ( v7 > 1 )
    {
      switch ( v7 )
      {
        case 2u:
        case 3u:
        case 5u:
        case 6u:
        case 7u:
        case 0xCu:
        case 0xDu:
        case 0xEu:
          goto LABEL_4;
        case 4u:
          if ( *(_BYTE *)(a3 + 32) == 2 && *(_BYTE *)(v73 + 32) == 2 && v64 <= 7 )
          {
            sub_152630(a1, *(_QWORD *)(v73 + 8), v73 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1);
            v34 = 0;
            if ( (unsigned __int64)(8 * v64) <= 0x3F )
              v34 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL) << (8 * (unsigned __int8)v64);
            v35 = v73;
            *(__m128i *)(*(_QWORD *)(v73 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                           (__m128i)(*(_QWORD *)(*(_QWORD *)(v73 + 40) + 16LL) | v34),
                                                           (__m128i)(*(_QWORD *)(*(_QWORD *)(v73 + 40) + 16LL) | v34));
            *(_DWORD *)(v35 + 4) &= ~0x80u;
            *(_DWORD *)(v35 + 36) *= 2;
            sub_1189E0(v6);
            return 1;
          }
          v8 = a3 + 32;
          v37 = (_QWORD *)(v73 + 32);
          v71.m128i_i64[0] = (__int64)&v89;
          if ( (unsigned __int8)sub_12C000(a1, v73, v73 + 32, a3, a3 + 32, 0) )
          {
            v45 = (_QWORD *)(v73 + 64);
            sub_11EE80(&v89, v73 + 64);
            if ( (unsigned __int8)sub_12CB70(v72, a1, v73, v73 + 64, (unsigned int)(2 * *(_DWORD *)(v73 + 68)), 0, 0) )
            {
              v16 = sub_12E260(a1, v73, (_DWORD)v37, v6, (int)v6 + 32, 8);
              if ( (_BYTE)v16 )
              {
                sub_125F90(v45, v72, *(unsigned int *)(v73 + 68), 2);
                sub_9C6C0(v72, v73, *(_DWORD *)(v6 + 4));
                sub_1189E0(v6);
              }
              else
              {
                sub_1205C0(v45);
              }
              sub_1181E0(v71.m128i_i64[0]);
              return v16;
            }
            sub_1181E0(v71.m128i_i64[0]);
          }
          if ( *(_DWORD *)(v73 + 68) != 4 )
            goto LABEL_13;
          v38 = *(_BYTE *)(v73 + 32);
          if ( v38 != 4 )
          {
            if ( (a4 & 0xA) != 2 )
              goto LABEL_13;
LABEL_96:
            if ( v38 == 2 )
              goto LABEL_13;
            goto LABEL_97;
          }
          v46 = *(_QWORD *)(v73 + 40);
          if ( *(_BYTE *)(v46 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v46 + 72) + 284LL) == 12 && *(_BYTE *)(v6 + 32) == 4 )
          {
            v48 = *(_QWORD *)(v6 + 40);
            if ( *(_BYTE *)(v48 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v48 + 72) + 284LL) == 12 )
            {
              if ( (unsigned __int8)sub_12CB70(v72, a1, v73, v73 + 64, 8, 0, 1) )
              {
                v56 = v73;
                v57 = *(_QWORD *)(v73 + 40);
                sub_152650(
                  a1,
                  v6,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 72LL) + 24LL),
                  v73,
                  *(_QWORD *)(*(_QWORD *)(v57 + 72) + 24LL),
                  0);
                v89 = 37;
                copy_tinfo_t();
                clear_tinfo_t();
                v89 = 37;
                copy_tinfo_t();
                clear_tinfo_t();
                *(_DWORD *)(v57 + 68) = 8;
                sub_1188E0(v57 + 32, "_byteswap_uint64");
                v36 = (_QWORD *)v56;
                *(_DWORD *)(v56 + 36) *= 2;
LABEL_91:
                sub_9C6C0(v72, (__int64)v36, *(_DWORD *)(v6 + 4));
                sub_1189E0(v6);
                return 1;
              }
              if ( (a4 & 0xA) != 2 || *(_DWORD *)(v73 + 68) != 4 )
                goto LABEL_13;
              v38 = *(_BYTE *)(v73 + 32);
              goto LABEL_96;
            }
          }
          if ( (a4 & 0xA) != 2 )
            goto LABEL_13;
LABEL_97:
          if ( (unsigned __int8)sub_120FA0(v37, v6 + 32, 0) )
            goto LABEL_13;
          if ( v73 )
          {
            if ( (unsigned __int8)sub_11D680(v6, *(_QWORD *)(v73 + 8), 0) )
            {
              v63 = v6;
              v39 = v73;
            }
            else
            {
              v39 = v6;
              v63 = v73;
            }
          }
          else
          {
            v63 = 0;
            v39 = v6;
          }
          v86[0] = 0;
          v86[1] = 0;
          src = nullptr;
          v89 = 0;
          v90 = 0;
          v91 = nullptr;
          v88 = 0;
          v92 = 0;
          sub_123420(a1, v86, v39 + 64, 0);
          sub_11F2E0(a1, v71.m128i_i64[0], v63 + 32, 1, 4294901760LL);
          if ( !(unsigned __int8)sub_5FD00(v86, v71.m128i_i64[0]) && !(unsigned __int8)sub_312BB0(&src, &v91) )
          {
            sub_152630(a1, v73, v37, v6, v6 + 32, 0);
            sub_152630(a1, *(_QWORD *)(v73 + 8), v73 + 64, *(_QWORD *)(v6 + 8), v6 + 64, 1);
            sub_9C6C0(v72, v73, *(_DWORD *)(v6 + 4));
            sub_1189E0(v6);
            if ( v91 )
            {
              v92.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            if ( src )
            {
              v88.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            return 1;
          }
          if ( v91 )
          {
            v92.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( src )
          {
            v88.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          break;
        case 8u:
        case 9u:
          goto LABEL_76;
        case 0xAu:
          v8 = a3 + 32;
          v71.m128i_i64[0] = (__int64)&v89;
          if ( !(unsigned __int8)sub_12B630(a1, a3, a3 + 32, v73, v73 + 32)
            || v6
            && (unsigned __int8)sub_11D680(v73, *(_QWORD *)(v6 + 8), 0)
            && (unsigned __int8)sub_A5020(a1, v73, v6, v73) )
          {
            goto LABEL_13;
          }
          if ( !(unsigned __int8)sub_12CB70(v72, a1, v73, v73 + 64, (unsigned int)(2 * *(_DWORD *)(v73 + 68)), 0, 1) )
            goto LABEL_113;
          if ( *(_DWORD *)(v73 + 36) == *(_DWORD *)(v73 + 68) )
            v7 = 4;
          v36 = (_QWORD *)v73;
          *(_DWORD *)v73 = v7;
          *((_DWORD *)v36 + 1) = 0;
          goto LABEL_91;
        default:
          goto LABEL_69;
      }
      goto LABEL_13;
    }
LABEL_69:
    v8 = v6 + 32;
    goto LABEL_16;
  }
  if ( v7 - 15 > 0x2D )
    goto LABEL_69;
  if ( ((1LL << v7) & 0x1300000001C78000LL) != 0 )
  {
LABEL_76:
    v8 = a3 + 32;
    v71.m128i_i64[0] = (__int64)&v89;
    goto LABEL_13;
  }
  if ( ((1LL << v7) & 0x180000) != 0 )
  {
    if ( *(_DWORD *)(v73 + 36) == 8 && sub_117CE0(v73, 0) )
      goto LABEL_69;
  }
  else if ( v7 != 21 )
  {
    goto LABEL_69;
  }
  v18 = (_QWORD *)(v73 + 48);
  v19 = (_QWORD *)(v73 + 32);
  if ( (unsigned __int8)sub_128370(*(_QWORD *)(a1 + 64), (int)v73 + 32, (int)v73 + 48, 0, 0, a6) )
  {
LABEL_4:
    v8 = v6 + 32;
    goto LABEL_5;
  }
  v8 = v6 + 32;
  v61 = sub_128370(*(_QWORD *)(a1 + 64), (_DWORD)v18, (_DWORD)v19, 0, 0, v20);
  if ( !v61 )
  {
    sub_11EE80(v82, v19);
    sub_11EE80(v85, v18);
    v21 = sub_12E260(a1, v73, (_DWORD)v19, v6, (int)v6 + 32, 4);
    v22 = (_QWORD *)(v73 + 48);
    if ( !v21 )
    {
      if ( !(unsigned __int8)sub_12E260(a1, v73, (_DWORD)v18, v6, (int)v6 + 32, 4) )
      {
LABEL_143:
        sub_1181E0(v85);
        sub_1181E0(v82);
        goto LABEL_5;
      }
      v22 = (_QWORD *)(v73 + 32);
    }
    if ( *(_DWORD *)v73 == 20
      && ((v71.m128i_i64[0] = (__int64)v22, v47 = sub_11B1C0(v6 + 32, &v89, 0), v22 = (_QWORD *)v71.m128i_i64[0], !v47)
       || v89) )
    {
      v60 = 1;
      if ( (a4 & 2) == 0 )
      {
        sub_117E50(v19, v82);
        sub_117E50(v18, v85);
        goto LABEL_143;
      }
    }
    else
    {
      v60 = 0;
    }
    v23 = *(_QWORD *)(v6 + 8);
    v71.m128i_i64[0] = (__int64)v22;
    sub_152630(a1, *(_QWORD *)(v73 + 8), v73 + 64, v23, v6 + 64, 1);
    sub_125F90(v71.m128i_i64[0], v72, *(unsigned int *)(v71.m128i_i64[0] + 4), 2);
    v24 = v71.m128i_i64[0];
    if ( v60 )
    {
      v25 = *(_QWORD *)(v73 + 24);
      v26 = *(unsigned int *)(v71.m128i_i64[0] + 4);
      v90 = 0;
      v89 = 0xFFFFFFFF00000000LL;
      v71.m128i_i64[0] = (__int64)&v89;
      v68 = v24;
      sub_11BE50(&v89, v72, -1, v26, v25, 0);
      sub_152630(a1, v73, v68, v73, &v89, 0);
      sub_1181E0(&v89);
    }
    else
    {
      sub_11BC20(v71.m128i_i64[0], v72, 9, *(_QWORD *)(v73 + 24), *(unsigned int *)(v73 + 68));
    }
    if ( v6 && (unsigned __int8)sub_11D680(v73, *(_QWORD *)(v6 + 8), 0) )
    {
      sub_11FAC0(v86, a1, v73, 1);
      v71.m128i_i64[0] = (__int64)&v89;
      sub_122E60(&v89, a1, v6, 0);
      if ( !(unsigned __int8)sub_5FD00(&v89, v86) )
        v61 = sub_312BB0(&v91, &src) ^ 1;
      if ( v91 )
      {
        v92.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( src )
      {
        v88.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
    }
    else
    {
      v61 = 1;
    }
    sub_9C6C0(v72, v73, *(_DWORD *)(v6 + 4));
    sub_1570B0(v73, v72, 0, 0, 0, 0, 0);
    if ( v61 )
      sub_1189E0(v6);
    sub_1181E0(v85);
    sub_1181E0(v82);
    return 1;
  }
LABEL_5:
  v74 = v6;
  v9 = (_DWORD *)sub_124880(a1, v8, &v74, 0);
  v10 = v9;
  if ( !v9 )
  {
LABEL_113:
    v71.m128i_i64[0] = (__int64)&v89;
    goto LABEL_13;
  }
  v11 = *v9;
  if ( v11 == 11 && *((_BYTE *)v10 + 32) == 4 )
  {
    v10 = *((_DWORD **)v10 + 5);
    v11 = *v10;
  }
  else if ( v74 != v6 )
  {
    v90 = 0;
    v12 = (__int64 *)(v10 + 16);
    v89 = 0xFFFFFFFF00000000LL;
    if ( v10[17] > 2 * *(_DWORD *)(v6 + 36) )
    {
      v71.m128i_i64[0] = (__int64)&v89;
      sub_1205C0(&v89);
      v44 = sub_1226F0(&v89, v72, (unsigned int)(2 * *(_DWORD *)(v6 + 36)), 0);
      v12 = &v89;
      if ( !v44 )
      {
        sub_1181E0(v71.m128i_i64[0]);
        return 0;
      }
    }
    else
    {
      v71.m128i_i64[0] = (__int64)&v89;
    }
    v13 = sub_125340(v8, v72, v12);
    sub_1181E0(v71.m128i_i64[0]);
    if ( !v13 )
      return 0;
    v11 = *v10;
  }
  v71.m128i_i64[0] = (__int64)&v89;
  if ( *(_DWORD *)v73 == v11 )
  {
    if ( (unsigned __int8)sub_12D600(a1, v73, v73 + 32, v74, v10 + 8) )
    {
      v16 = sub_12D600(a1, v73, v73 + 48, v74, v10 + 12);
      if ( (_BYTE)v16 )
      {
        sub_11EE80(v75, v73 + 64);
        sub_152630(a1, *(_QWORD *)(v73 + 8), v75, *(_QWORD *)(v6 + 8), v6 + 64, 5);
        sub_11EE80(v77, v10 + 8);
        sub_11EE80(v79, v10 + 12);
        if ( v76 != v78
          && (!(unsigned __int8)sub_1226F0(v77, v72, v76, 0) || !(unsigned __int8)sub_1226F0(v79, v72, v76, 0)) )
        {
          sub_1181E0(v79);
          sub_1181E0(v77);
          sub_1181E0(v75);
          goto LABEL_113;
        }
        v80 = 0;
        v82[0] = 0;
        v82[1] = 0;
        v83 = 0;
        v81 = 0;
        v84 = 0;
        if ( v74 != v6 )
        {
          sub_123420(a1, v82, v75, 0);
          sub_11FAC0(v85, a1, v10, 1);
          while ( 1 )
          {
            if ( (_QWORD)v81 )
              v49 = *(_QWORD *)(*(_QWORD *)(v80 + 8 * v81 - 8) + 8LL);
            else
              v49 = v74;
            v50 = sub_A4EE0(a1, v85, v49, v6, 1u);
            if ( !v50 )
            {
              sub_8EF80((__int64)v85);
              goto LABEL_182;
            }
            v70 = v50;
            if ( (unsigned __int8)sub_11B9E0(v50, v72, 0) )
              break;
            sub_122E60(v86, a1, v70, 1);
            v65 = *(_QWORD *)(v6 + 8);
            v62 = *(_QWORD *)(v70 + 8);
            v71.m128i_i64[0] = (__int64)&v89;
            sub_5F580(&v89, (__int64)v86);
            v91 = nullptr;
            v92 = 0;
            if ( v88.m128i_i64[0] )
            {
              v59 = v88.m128i_i64[0];
              n = 16 * v88.m128i_i64[0];
              v91 = (void *)qalloc_or_throw();
              v92.m128i_i64[1] = v59;
              memcpy(v91, src, n);
              v92.m128i_i64[0] = v59;
            }
            v71.m128i_i64[0] = sub_A51D0(a1, (__int64 *)v71.m128i_i64[0], v62, v65, 1u);
            if ( v91 )
            {
              v92.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            if ( v71.m128i_i64[0] )
            {
              sub_8EF80((__int64)v86);
              break;
            }
            v51 = v81;
            v52 = v80;
            if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
            {
              v80 = qvector_reserve();
              v52 = v80;
              v51 = v81;
            }
            *(_QWORD *)(v52 + 8 * v51) = v70;
            *(_QWORD *)&v81 = v81 + 1;
            if ( src )
            {
              v88.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
          }
          if ( v85[2] )
          {
            v85[3] = 0;
            qfree();
          }
          qfree();
          goto LABEL_186;
        }
LABEL_182:
        if ( v73 && (unsigned __int8)sub_11D680(v6, *(_QWORD *)(v73 + 8), 0) )
        {
          v71.m128i_i64[0] = (__int64)&v89;
          sub_122E60(&v89, a1, v73, 1);
          if ( sub_A51D0(a1, &v89, *(_QWORD *)(v73 + 8), v6, 0) )
          {
            sub_8EF80((__int64)&v89);
LABEL_186:
            v16 = 0;
LABEL_187:
            if ( v83 )
            {
              *(_QWORD *)&v84 = 0;
              qfree();
            }
            qfree();
            if ( v80 )
            {
              *(_QWORD *)&v81 = 0;
              qfree();
            }
            sub_1181E0(v79);
            sub_1181E0(v77);
            sub_1181E0(v75);
            return v16;
          }
          sub_8EF80((__int64)&v89);
        }
        sub_125F90(v75, v72, v76, 2);
        *(_DWORD *)v6 = *v10;
        sub_117E50(v8, v77);
        sub_117E50(v6 + 48, v79);
        sub_117E50(v6 + 64, v75);
        sub_1189E0(v73);
        if ( (_QWORD)v81 )
        {
          v53 = 0;
          v73 = 0;
          v71.m128i_i64[0] = (__int64)&v89;
          do
          {
            v72 = 8 * v73;
            sub_122E60(v71.m128i_i64[0], a1, *(_QWORD *)(v80 + 8 * v73), 1);
            if ( (unsigned __int8)sub_5FDA0(v71.m128i_i64[0], v82) && (unsigned __int8)sub_312680(&v83, &v91) )
            {
              sub_1189E0(*(_QWORD *)(v80 + 8 * v73));
            }
            else
            {
              v54 = (_QWORD *)j__qalloc_or_throw();
              v73 = (__int64)v54;
              v55 = *(_QWORD *)(*(_QWORD *)(v80 + v72) + 24LL);
              v54[4] = 0xFFFFFFFF00000000LL;
              v54[5] = 0;
              v54[6] = 0xFFFFFFFF00000000LL;
              v54[7] = 0;
              v54[8] = 0xFFFFFFFF00000000LL;
              v54[9] = 0;
              sub_32ADE0(v54, v55);
              sub_118CD0(v73, *(_QWORD *)(v80 + v72));
              sub_9E5A0(a1, (_QWORD *)v73, v6);
            }
            if ( v91 )
            {
              v92.m128i_i64[0] = 0;
              qfree();
            }
            ++v53;
            qfree();
            v73 = v53;
          }
          while ( v53 < (unsigned __int64)v81 );
        }
        goto LABEL_187;
      }
    }
  }
LABEL_13:
  if ( (unsigned __int8)sub_11B1C0(v8, v71.m128i_i64[0], 0) && !v89 )
  {
    if ( *a5 != 5 )
    {
      sub_11EE80(v85, a5);
      if ( (unsigned __int8)sub_12CC70(v85, v72, 0) )
      {
        if ( !v6 || !(unsigned __int8)sub_11D680(v73, *(_QWORD *)(v6 + 8), 0) )
        {
LABEL_56:
          *(_DWORD *)v6 = 9;
          sub_1205C0(v8);
          sub_117E50(v6 + 64, v85);
          v31 = v72;
          sub_125F90(v6 + 64, v72, *(unsigned int *)(v6 + 68), 2);
          sub_9C6C0(v31, v6, *(_DWORD *)(v73 + 4));
          sub_1181E0(v85);
          return 1;
        }
        sub_122E60(v86, a1, v73, 1);
        if ( !(unsigned __int8)sub_5FFE0(v86, *(_DWORD *)(v6 + 72), v64) )
        {
          sub_11FAC0(v71.m128i_i64[0], a1, v73, 1);
          sub_5FE50(v86, (__int64 *)v71.m128i_i64[0]);
          v27 = v91;
          v91 = nullptr;
          v28 = _mm_loadu_si128(&v92);
          v92 = 0;
          if ( src )
          {
            v71 = v28;
            v88.m128i_i64[0] = 0;
            qfree();
            src = v27;
            v88 = _mm_load_si128(&v71);
            if ( v91 )
            {
              v92.m128i_i64[0] = 0;
              qfree();
            }
          }
          else
          {
            src = v27;
            v88 = v28;
          }
          qfree();
          if ( !(unsigned __int8)sub_5FFE0(v86, *(_DWORD *)(v6 + 72), v64) && !sub_A4EE0(a1, v86, v6, v73, 1u) )
          {
            v29 = v73;
            *(_DWORD *)v6 = *(_DWORD *)v73;
            sub_1205C0(v8);
            sub_1205C0(v6 + 48);
            sub_1205C0(v6 + 64);
            sub_1181E0(v29 + 48);
            if ( src )
            {
              v88.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            v30 = v73;
            v73 = v6;
            v8 = v30 + 32;
            v6 = v30;
            goto LABEL_56;
          }
        }
        if ( src )
        {
          v88.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
      }
      sub_1181E0(v85);
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_126CD0(v73, v72, 9, v6 + 64, (unsigned int)(2 * *(_DWORD *)(v73 + 68))) )
    {
      sub_9C6C0(v72, v73, *(_DWORD *)(v6 + 4));
      sub_1189E0(v6);
      return 1;
    }
    return 0;
  }
  if ( *(_BYTE *)(v6 + 32) == 2
    && (a4 & 0xA) == 2
    && *(_DWORD *)v73 == 9
    && (unsigned __int8)sub_12CB70(v72, a1, v73, v73 + 64, (unsigned int)(2 * *(_DWORD *)(v73 + 68)), 0, 1) )
  {
    v40 = (_QWORD *)v73;
    v41 = v72;
    *(_DWORD *)v73 = 19;
    sub_11BC20(v40 + 4, v41, 9, v40[3], (unsigned int)(2 * v64));
    v42 = sub_325150(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0) << (8
                                                                                                * (unsigned __int8)v64);
    v43 = 0;
    if ( (unsigned __int64)(8 * v64) < 0x40 )
      v43 = v42;
    sub_11BE50(v40 + 6, v41, v43, (unsigned int)(2 * v64), *(_QWORD *)(v6 + 24), 0);
    sub_9C6C0(v41, (__int64)v40, *(_DWORD *)(v6 + 4));
    sub_1189E0(v6);
    return 1;
  }
LABEL_16:
  v86[0] = v6;
  v14 = sub_124880(a1, v8, v86, 0);
  v15 = (_QWORD *)v14;
  if ( !v14 )
    return 0;
  if ( !(unsigned __int8)sub_120FA0(v14 + 64, v8, 0) )
    return 0;
  if ( *(_DWORD *)v15 != 11 )
    return 0;
  v16 = sub_12D7B0(a1, v73, v73, v86[0], v15, 0);
  if ( !(_BYTE)v16 )
    return 0;
  v71.m128i_i64[0] = (__int64)&v89;
  sub_11FAC0(&v89, a1, v15, 1);
  LOBYTE(v72) = 0;
  v32 = v15;
  while ( 1 )
  {
    v33 = (_QWORD *)sub_A4EE0(a1, v71.m128i_i64[0], (__int64)v32, v73, 1u);
    if ( !v33 )
      break;
    if ( v33 == (_QWORD *)v73 )
    {
      v32 = (_QWORD *)v73;
    }
    else
    {
      if ( v15 != v33 )
      {
        v16 = 0;
        goto LABEL_64;
      }
      v32 = (_QWORD *)v15[1];
      LOBYTE(v72) = v16;
      if ( !v32 )
        break;
    }
  }
  sub_1205C0(v8);
  v69 = (_QWORD *)(v73 + 64);
  sub_117E50(v6 + 64, v73 + 64);
  sub_152630(a1, *(_QWORD *)(v6 + 8), v6 + 64, *(_QWORD *)(v73 + 8), v69, 1);
  sub_1189E0(v73);
  if ( (_BYTE)v72 )
    sub_1189E0(v15);
LABEL_64:
  if ( v91 )
  {
    v92.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v16;
}

