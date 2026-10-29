__int64 __fastcall sub_25960(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // r13
  char v11; // bl
  __int64 v12; // rbp
  void *v13; // rsi
  size_t v14; // rdx
  bool v15; // zf
  int v17; // eax
  int v18; // r14d
  char v19; // r13
  char v20; // al
  int v21; // ebx
  _DWORD *v22; // r15
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rdx
  char *v31; // rcx
  int v32; // eax
  int v33; // r11d
  unsigned int v34; // eax
  __int64 v35; // rax
  int v36; // esi
  int v37; // edx
  __int64 v38; // rdx
  char *v39; // rsi
  _DWORD *v40; // r14
  __int64 v41; // rax
  unsigned int v42; // r9d
  char *v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rbx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  int v50; // eax
  unsigned __int16 v51; // ax
  int v52; // [rsp+4h] [rbp-37Ch]
  int v53; // [rsp+10h] [rbp-370h]
  unsigned __int8 v54; // [rsp+17h] [rbp-369h]
  int v56; // [rsp+30h] [rbp-350h]
  int v57; // [rsp+34h] [rbp-34Ch]
  int v58; // [rsp+44h] [rbp-33Ch] BYREF
  __int64 v59; // [rsp+48h] [rbp-338h] BYREF
  __m128i v60; // [rsp+50h] [rbp-330h]
  __int64 v61; // [rsp+68h] [rbp-318h] BYREF
  __int128 v62; // [rsp+70h] [rbp-310h]
  _QWORD v63[3]; // [rsp+88h] [rbp-2F8h] BYREF
  char v64; // [rsp+A0h] [rbp-2E0h]
  void *v65; // [rsp+A8h] [rbp-2D8h]
  __int128 v66; // [rsp+B0h] [rbp-2D0h]
  __int64 v67; // [rsp+C0h] [rbp-2C0h]
  __int128 v68; // [rsp+C8h] [rbp-2B8h]
  __int64 (__fastcall **v69)(); // [rsp+D8h] [rbp-2A8h] BYREF
  void *src; // [rsp+E0h] [rbp-2A0h] BYREF
  __int128 v71; // [rsp+E8h] [rbp-298h]
  unsigned __int16 v72; // [rsp+FEh] [rbp-282h]
  int v73; // [rsp+120h] [rbp-260h]
  unsigned __int16 v74; // [rsp+124h] [rbp-25Ch]
  unsigned __int16 v75; // [rsp+126h] [rbp-25Ah]
  unsigned int v76; // [rsp+12Ch] [rbp-254h]
  int v77; // [rsp+130h] [rbp-250h]
  unsigned __int16 v78; // [rsp+134h] [rbp-24Ch]
  unsigned int v79; // [rsp+158h] [rbp-228h]
  int v80; // [rsp+15Ch] [rbp-224h]
  unsigned int v81; // [rsp+170h] [rbp-210h]
  __int16 v82; // [rsp+17Ch] [rbp-204h]
  __int64 v83; // [rsp+328h] [rbp-58h]
  unsigned __int64 v84; // [rsp+340h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  v69 = off_C74C8;
  src = nullptr;
  v71 = 0;
  v54 = sub_1AD90((__int64)&v69, a2, 1, 1);
  if ( !v54 )
    goto LABEL_34;
  v3 = v74;
  if ( v74 == 512 )
  {
    v57 = 31;
    goto LABEL_44;
  }
  if ( v74 <= 0x200u )
  {
    if ( v74 > 0x1C4u )
    {
      v57 = (unsigned __int16)(v74 - 496) < 3u ? 15 : -1;
    }
    else if ( v74 > 0x1A1u )
    {
      LOWORD(v3) = v74 - 418;
      switch ( v3 )
      {
        case 0LL:
        case 1LL:
        case 2LL:
        case 4LL:
        case 6LL:
          v57 = 18;
          break;
        case 30LL:
        case 32LL:
        case 34LL:
          goto LABEL_111;
        default:
LABEL_60:
          v57 = -1;
          break;
      }
    }
    else
    {
      LOWORD(v3) = v74 - 332;
      switch ( v3 )
      {
        case 0LL:
        case 1LL:
        case 2LL:
          goto LABEL_110;
        case 22LL:
        case 23LL:
        case 26LL:
        case 28LL:
        case 29LL:
          goto LABEL_108;
        case 56LL:
          v57 = 24;
          break;
        default:
          goto LABEL_60;
      }
    }
    goto LABEL_44;
  }
  if ( v74 == 2560 )
  {
LABEL_111:
    v57 = 13;
    goto LABEL_44;
  }
  if ( v74 > 0xA00u )
  {
    if ( v74 == 0x8664 )
    {
LABEL_110:
      v57 = 0;
    }
    else
    {
      v57 = 37;
      if ( v74 != 0x9041 )
      {
        v17 = 57;
        if ( v74 != 3772 )
          v17 = -1;
        v57 = v17;
      }
    }
    goto LABEL_44;
  }
  if ( v74 == 870 )
  {
LABEL_108:
    v57 = 12;
    goto LABEL_44;
  }
  if ( v74 <= 0x366u )
  {
    if ( v74 != 614 )
    {
      v57 = 8 * (v74 == 616) - 1;
      goto LABEL_44;
    }
    goto LABEL_108;
  }
  if ( v74 == 1126 )
    goto LABEL_108;
  v50 = 27;
  if ( v74 != 1312 )
    v50 = -1;
  v57 = v50;
LABEL_44:
  v59 = 0;
  v60 = 0;
  if ( v76 )
  {
    v44 = v76 + (unsigned __int64)(unsigned int)(18 * v77);
    if ( v44 == qlseek(a2, v44, 0) && qlread(a2, v63, 4) == 4 && LODWORD(v63[0]) > 4 )
    {
      qlseek(a2, -4, 1);
      v45 = qlseek(a2, 0, 1);
      v46 = qlsize(a2) - v45;
      if ( ((v46 | v45) & 0x8000000000000000LL) == 0LL && v46 >= LODWORD(v63[0]) )
      {
        v47 = qalloc((unsigned int)(LODWORD(v63[0]) + 1));
        v48 = v47;
        if ( v47 )
        {
          v49 = qlread(a2, v47, LODWORD(v63[0]));
          if ( v49 == LODWORD(v63[0]) )
          {
            *(_BYTE *)(v48 + v49) = 0;
            if ( v59 )
            {
              v60.m128i_i64[0] = 0;
              qfree(v59);
            }
            v59 = v48;
            v60 = _mm_unpacklo_epi64(
                    (__m128i)(unsigned int)(LODWORD(v63[0]) + 1),
                    (__m128i)(unsigned int)(LODWORD(v63[0]) + 1));
          }
          else
          {
            qfree(v48);
          }
        }
      }
    }
  }
  v63[1] = a2;
  v63[0] = off_C74F0;
  v63[2] = &v59;
  v64 = 0;
  v65 = nullptr;
  v67 = 0;
  v66 = 0;
  v68 = 0;
  if ( v73 == 23126 )
    v18 = v83 + 40;
  else
    v18 = v78 + (_DWORD)v83 + 24;
  v62 = 0;
  v58 = v75;
  v61 = 0;
  *(_QWORD *)&v71 = 0;
  v19 = v79 <= 0xFFF && v80 == v79;
  qlseek(a2, v18, 0);
  v20 = sub_24F80(a2, &v58, 0x28u, v18, -1);
  v52 = v58;
  if ( !v20 && (unsigned int)sub_172B0() != 1 )
    sub_179E0(0, "AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s");
  v21 = 0;
  if ( v52 > 0 )
  {
    while ( 1 )
    {
      v24 = v62;
      v25 = v61;
      v26 = v62 + 1;
      if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
      {
        v27 = qvector_reserve(&v61, v61, v62 + 1, 40);
        v24 = v62;
        v61 = v27;
        v25 = v27;
        v26 = v62 + 1;
      }
      *(_QWORD *)&v62 = v26;
      v22 = (_DWORD *)(v25 + 40 * v24);
      if ( qlread(a2, v22, 40) != 40 )
        goto LABEL_20;
      if ( v22[3] == v22[5] )
      {
        ++v21;
        v19 &= v22[4] >= v22[2];
        if ( v21 == v52 )
        {
LABEL_63:
          v28 = 512;
          if ( v19 )
            v28 = v80;
          if ( (unsigned __int16)(v82 - 10) <= 3u || v73 == 23126 )
            v28 = 1;
          v29 = 0;
          v4 = 0;
          v53 = -v28;
          do
          {
            v38 = v71;
            v39 = (char *)src;
            v40 = (_DWORD *)(v29 + v61);
            v41 = v71 + 1;
            v42 = *(_DWORD *)(v29 + v61 + 20) & v53;
            if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
            {
              v56 = *(_DWORD *)(v29 + v61 + 20) & v53;
              v43 = (char *)qvector_reserve(&src, src, v71 + 1, 32);
              v38 = v71;
              src = v43;
              v39 = v43;
              v42 = v56;
              v41 = v71 + 1;
            }
            *(_QWORD *)&v71 = v41;
            v30 = 32 * v38;
            v31 = &v39[v30];
            *(_QWORD *)&v39[v30] = (unsigned int)v40[3];
            v32 = v79;
            if ( !v79 )
              v32 = 1;
            v33 = v40[2];
            if ( !v33 )
              v33 = v40[4];
            v34 = (v32 + v33 - 1) & -v32;
            if ( v34 > v40[4] )
              v34 = v40[4];
            *(_QWORD *)&v39[v30 + 24] = v34;
            v35 = v40[3] + v34;
            if ( (unsigned __int16)(v82 - 10) > 3u )
            {
              if ( v79 == 4096 || !v80 )
              {
                v37 = -512;
                v36 = 511;
              }
              else
              {
                v36 = v80 - 1;
                v37 = -v80;
              }
              v35 = v37 & (unsigned int)(v36 + v35);
            }
            *((_QWORD *)v31 + 1) = v35;
            *((_QWORD *)v31 + 2) = v42;
            if ( v73 == 23126 )
              *((_QWORD *)v31 + 2) = v42 + (__int64)(40 - v72);
            sub_16760((__int64)v63, (__int64)v40, v42, (int)v31, v23, v42);
            if ( v4 < v40[3] + v40[2] )
              v4 = v40[3] + v40[2];
            v29 += 40;
          }
          while ( 40LL * v52 != v29 );
          goto LABEL_9;
        }
      }
      else
      {
        ++v21;
        v19 = 0;
        if ( v21 == v52 )
          goto LABEL_63;
      }
    }
  }
  v51 = v82 - 10;
  if ( v19 )
  {
    if ( v51 <= 3u )
    {
      if ( v73 == 23126 )
        v81 = 0;
      goto LABEL_12;
    }
    if ( v73 != 23126 )
    {
LABEL_12:
      v5 = qlsize(a2);
      v6 = v81;
      if ( (unsigned __int16)(v82 - 10) > 3u )
      {
        if ( v79 == 4096 || !v80 )
        {
          v8 = -512;
          v7 = 511;
        }
        else
        {
          v7 = v80 - 1;
          v8 = -v80;
        }
        v6 = v8 & (v7 + v81);
      }
      v9 = v71;
      v10 = src;
      if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
      {
        src = (void *)qvector_reserve(&src, src, v71 + 1, 32);
        v9 = v71;
        v10 = src;
      }
      memmove(v10 + 4, v10, 32 * v9);
      *v10 = 0;
      v10[1] = v6;
      v10[2] = 0;
      *(_QWORD *)&v71 = v71 + 1;
      v10[3] = v5;
      goto LABEL_20;
    }
    v4 = 0;
LABEL_115:
    v81 = v4;
    goto LABEL_10;
  }
  if ( v51 > 3u )
  {
    v4 = 0;
    if ( v73 != 23126 )
      goto LABEL_10;
  }
  else
  {
    v4 = 0;
  }
LABEL_9:
  if ( v73 == 23126 )
    goto LABEL_115;
LABEL_10:
  if ( !v52 || v19 )
    goto LABEL_12;
LABEL_20:
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  v11 = v64;
  if ( (unsigned __int64)v68 > 1 )
    qstrncpy(a1 + 1034, v67, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v12 = v66;
  v13 = v65;
  v14 = (int)v66;
  *(_DWORD *)(a1 + 4) = v57;
  if ( v14 > 0x400 )
  {
    *(_WORD *)(a1 + 8) = 1024;
    memmove((void *)(a1 + 10), v13, 0x400u);
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 1) = v11;
  }
  else
  {
    *(_WORD *)(a1 + 8) = v12;
    memmove((void *)(a1 + 10), v13, v14);
    v15 = v64 == 0;
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 1) = v11;
    if ( v15 && !v12 )
      v54 = (unsigned __int64)v68 > 1;
  }
  v63[0] = off_C74F0;
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( v59 )
  {
    v60.m128i_i64[0] = 0;
    qfree(v59);
  }
LABEL_34:
  v69 = off_C74C8;
  if ( src )
  {
    *(_QWORD *)&v71 = 0;
    qfree(src);
  }
  return v54;
}
