unsigned __int64 __fastcall sub_160650(__int64 a1, double a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v9; // rbx
  __m128i *v10; // r15
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned __int8 *v15; // r14
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int8 *v20; // r13
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  unsigned __int64 v25; // r8
  bool v26; // zf
  __int64 v27; // rax
  const __m128i *v28; // rsi
  __m128i v29; // xmm0
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  _QWORD *v36; // rsi
  _QWORD *v37; // rbp
  __int64 v39; // rax
  __int64 v40; // r15
  int v41; // r11d
  char v42; // dl
  __int64 i; // r8
  __int64 v44; // r9
  _QWORD *v45; // r10
  _QWORD *v46; // rdx
  int v47; // r11d
  unsigned __int8 *v48; // rcx
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 v52; // rsi
  __int64 *v53; // r15
  __int64 v54; // r8
  __int64 j; // r8
  __int64 v56; // r9
  _QWORD *v57; // r10
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  _QWORD *v65; // rsi
  unsigned __int8 *v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  __int64 v73; // rdx
  unsigned __int8 **v74; // rax
  _QWORD *v75; // rdx
  _QWORD *v76; // rdx
  _QWORD *v77; // rcx
  __int64 v78; // [rsp-8h] [rbp-2C0h]
  const char *v79; // [rsp+8h] [rbp-2B0h]
  __m128i v80; // [rsp+10h] [rbp-2A8h] BYREF
  __m128i *v81; // [rsp+20h] [rbp-298h]
  __int64 v82; // [rsp+28h] [rbp-290h]
  __m128i v83; // [rsp+30h] [rbp-288h] BYREF
  unsigned __int64 v84; // [rsp+40h] [rbp-278h]
  _QWORD *v85; // [rsp+48h] [rbp-270h]
  __int128 v86; // [rsp+50h] [rbp-268h] BYREF
  __int128 v87; // [rsp+60h] [rbp-258h]
  _QWORD v88[2]; // [rsp+70h] [rbp-248h] BYREF
  __int64 (__fastcall *v89)(_QWORD *, __int64); // [rsp+80h] [rbp-238h]
  __m128i v90; // [rsp+88h] [rbp-230h]
  __int128 *v91; // [rsp+98h] [rbp-220h]
  __int64 v92; // [rsp+A0h] [rbp-218h] BYREF
  __m128i v93; // [rsp+A8h] [rbp-210h]
  __m128i v94; // [rsp+B8h] [rbp-200h]
  __m128i v95; // [rsp+C8h] [rbp-1F0h]
  char v96[8]; // [rsp+E0h] [rbp-1D8h] BYREF
  __int64 v97; // [rsp+E8h] [rbp-1D0h]
  unsigned int v98; // [rsp+F8h] [rbp-1C0h]
  unsigned int v99; // [rsp+110h] [rbp-1A8h]
  __int64 v100; // [rsp+230h] [rbp-88h]
  __int64 *v101; // [rsp+238h] [rbp-80h]
  __int64 *v102; // [rsp+240h] [rbp-78h]
  _QWORD *v103; // [rsp+270h] [rbp-48h]
  unsigned __int64 v104; // [rsp+278h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v10 = (__m128i *)sub_D9DB0(*(_QWORD *)a4, 1u, a2, a4, a5, a6, a7);
  v15 = (unsigned __int8 *)sub_D9DB0(*(_QWORD *)(a4 + 24), 1u, a2, v11, v12, v13, v14);
  v20 = (unsigned __int8 *)sub_D9DB0(*(_QWORD *)(a4 + 32), 1u, a2, v16, v17, v18, v19);
  v79 = (const char *)sub_D9DB0(*(_QWORD *)(a4 + 40), 1u, a2, v21, v22, v23, v24);
  v25 = sub_CD0F0(*(char ***)(a4 + 48));
  if ( v20 == nullptr || v15 == nullptr || !v79 )
    return __readfsqword(0x28u) ^ v104;
  v26 = *(_BYTE *)(v9 + 111) == 0;
  v27 = *(_QWORD *)(v9 + 496);
  *(_QWORD *)(v9 + 496) = 0;
  v82 = v27;
  if ( v26 )
  {
    v80.m128i_i64[0] = v25;
    sub_CC760(v9);
    v25 = v80.m128i_i64[0];
  }
  v84 = v25;
  v81 = (__m128i *)&v86;
  v86 = 0;
  v87 = 0;
  v80 = 0;
  v28 = v10;
  v85 = v88;
  *(_QWORD *)&v87 = sub_CA640(v9, v20, v10);
  v88[1] = sub_C46E0;
  v88[0] = v96;
  v29 = _mm_load_si128(&v80);
  v89 = sub_DE430;
  v80.m128i_i64[0] = (__int64)v96;
  v90 = v29;
  v91 = &v86;
  v83 = v29;
  v30 = sub_15FC20((__int64)v96, (unsigned __int8 *)v10, v9, v15, v84);
  if ( v30 )
    goto LABEL_6;
  v39 = *(_QWORD *)(v9 + 48);
  v40 = v100;
  v41 = v39 & 0x4000000;
  if ( v100 )
  {
    v42 = *(_BYTE *)(v100 + 63);
    v29 = _mm_load_si128(&v83);
    if ( v42 == 2 )
    {
      if ( !v41 )
      {
        v58 = *(_QWORD *)(v100 + 64);
        v59 = v80.m128i_i64[0];
        v93 = v29;
        v94 = v29;
        v95 = v29;
        v92 = v80.m128i_i64[0];
        *(_DWORD *)(v58 + 4) &= ~0x200000u;
        v28 = *(const __m128i **)(v40 + 64);
        sub_CFDC0(v59, (__int64)v28, (__int64)&v92);
        v31 = v99;
        if ( v99 )
        {
          v30 = v98;
          if ( v98 )
            goto LABEL_6;
        }
        else
        {
          v65 = *(_QWORD **)(v40 + 64);
          if ( v65 && v89 )
            sub_CDAF0((__int64)v85, v65);
        }
      }
    }
    else
    {
      if ( (!v41 || (v39 & 0x4000) != 0) && v42 != 1 )
      {
        for ( i = *(_QWORD *)(v100 + 72); i; i = *(_QWORD *)(i + 8) )
        {
          if ( *(_QWORD *)(i + 16) )
          {
            if ( !(unsigned int)sub_CA2B0(*(_BYTE **)(i + 16), v20) )
            {
              v46 = v103;
              if ( v103 )
              {
                if ( v44 == *v103 )
                {
                  v67 = v103;
                  v68 = v45;
LABEL_73:
                  *v68 = v67[3];
                  v60 = v86;
                  ++DWORD2(v86);
                  *(_QWORD *)&v86 = v67;
                  v67[3] = v60;
                }
                else
                {
                  while ( 1 )
                  {
                    v67 = (_QWORD *)v46[3];
                    if ( !v67 )
                      break;
                    if ( v44 == *v67 )
                    {
                      v68 = v46 + 3;
                      goto LABEL_73;
                    }
                    v46 = (_QWORD *)v46[3];
                  }
                }
              }
            }
          }
        }
      }
      if ( *(_QWORD *)v40 && !(unsigned int)sub_CA2B0(v20, *(unsigned __int8 **)v40) )
      {
        *(_QWORD *)&v87 = v40;
        if ( !v47 )
          sub_CDDC0((__int64)v85, *(int **)(v40 + 32));
        v48 = *(unsigned __int8 **)v40;
        if ( *(_QWORD *)v40 )
        {
          v49 = v103;
          if ( v103 )
          {
            if ( v48 == (unsigned __int8 *)*v103 )
            {
              v74 = (unsigned __int8 **)v103;
              v75 = (_QWORD *)(v80.m128i_i64[0] + 400);
LABEL_85:
              *v75 = v74[3];
              v66 = (unsigned __int8 *)v86;
              ++DWORD2(v86);
              *(_QWORD *)&v86 = v74;
              v74[3] = v66;
            }
            else
            {
              while ( 1 )
              {
                v74 = (unsigned __int8 **)v49[3];
                if ( !v74 )
                  break;
                if ( *v74 == v48 )
                {
                  v75 = v49 + 3;
                  goto LABEL_85;
                }
                v49 = (_QWORD *)v49[3];
              }
            }
          }
        }
      }
    }
    goto LABEL_41;
  }
  if ( v101 )
  {
    v50 = *v101;
    if ( *v101 )
    {
      v51 = v103;
      if ( v103 )
      {
        if ( v50 == *v103 )
        {
          v69 = v103;
          v70 = (_QWORD *)(v80.m128i_i64[0] + 400);
LABEL_80:
          *v70 = v69[3];
          v64 = v86;
          ++DWORD2(v86);
          *(_QWORD *)&v86 = v69;
          v69[3] = v64;
        }
        else
        {
          while ( 1 )
          {
            v69 = (_QWORD *)v51[3];
            if ( !v69 )
              break;
            if ( v50 == *v69 )
            {
              v70 = v51 + 3;
              goto LABEL_80;
            }
            v51 = (_QWORD *)v51[3];
          }
        }
      }
    }
    if ( !v41 )
    {
      v52 = v101[9];
      if ( v52 )
        sub_CDCD0((__int64)v85, v52);
    }
    goto LABEL_41;
  }
  v53 = v102;
  if ( !v102[1] )
    goto LABEL_76;
  v28 = (const __m128i *)v20;
  if ( (unsigned int)sub_CA2B0((_BYTE *)v102[1], v20) )
    goto LABEL_76;
  if ( *(_QWORD *)(v87 + 96) == v53[6] )
  {
    v62 = v103;
    if ( v103 )
    {
      if ( v54 == *v103 )
      {
        v61 = (_QWORD *)(v80.m128i_i64[0] + 400);
LABEL_75:
        *v61 = v62[3];
        v63 = v86;
        ++DWORD2(v86);
        *(_QWORD *)&v86 = v62;
        v62[3] = v63;
      }
      else
      {
        while ( 1 )
        {
          v76 = (_QWORD *)v62[3];
          if ( !v76 )
            break;
          if ( v54 == *v76 )
          {
            v61 = v62 + 3;
            v62 = (_QWORD *)v62[3];
            goto LABEL_75;
          }
          v62 = (_QWORD *)v62[3];
        }
      }
    }
LABEL_76:
    if ( v41 )
      goto LABEL_41;
    goto LABEL_62;
  }
  if ( v41 )
    goto LABEL_41;
LABEL_62:
  v30 = sub_145C50(v80.m128i_i64[0]);
  if ( v30 )
  {
LABEL_6:
    if ( v30 == 1 && (*(_QWORD *)(v9 + 48) & 0x10000001LL) == 1 )
    {
      v28 = *(const __m128i **)(a4 + 24);
      sub_FD650(a1, v28, 1, v31, v32, v33);
    }
    else if ( v97 )
    {
      v28 = (const __m128i *)(a1 + 36);
      sub_F6E80(
        (__int64 *)a1,
        (_DWORD *)(a1 + 36),
        "",
        *(_QWORD *)(a4 + 8),
        *(_QWORD *)(a4 + 16),
        (__int64 *)v80.m128i_i64[0],
        *(double *)v29.m128i_i64,
        (_QWORD *)(v80.m128i_i64[0] + 8));
      v34 = v78;
    }
    else
    {
      v34 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 36) = v30;
      if ( (*(_BYTE *)(v34 + 20) & 1) != 0 )
      {
        v28 = (const __m128i *)v30;
        sub_F4FB0(a1, v30);
      }
    }
    goto LABEL_10;
  }
  sub_CF140((__int64)v85, v53[3], v53 + 7);
  for ( j = v53[7]; j; j = *(_QWORD *)(j + 80) )
  {
    if ( *(_QWORD *)(j + 24) )
    {
      if ( !(unsigned int)sub_CA2B0(*(_BYTE **)(j + 24), v20) )
      {
        v71 = v103;
        if ( v103 )
        {
          if ( v56 == *v103 )
          {
            v77 = v57;
LABEL_93:
            *v77 = v71[3];
            v73 = v86;
            ++DWORD2(v86);
            *(_QWORD *)&v86 = v71;
            v71[3] = v73;
          }
          else
          {
            while ( 1 )
            {
              v72 = (_QWORD *)v71[3];
              if ( !v72 )
                break;
              if ( v56 == *v72 )
              {
                v77 = v71 + 3;
                v71 = (_QWORD *)v71[3];
                goto LABEL_93;
              }
              v71 = (_QWORD *)v71[3];
            }
          }
        }
      }
    }
  }
LABEL_41:
  v28 = v81;
  v30 = sub_F5720(a1, v81->m128i_i64, (const char *)v15, v79, 1);
  if ( v30 )
    goto LABEL_6;
LABEL_10:
  sub_11EA20(v80.m128i_i64[0], (__int64)v28, v34, v31, v32, v33);
  v36 = (_QWORD *)v86;
  if ( (_QWORD)v86 )
  {
    do
    {
      v37 = (_QWORD *)v36[3];
      sub_C9250(v9, v36);
      v36 = v37;
    }
    while ( v37 );
  }
  if ( !*(_BYTE *)(v9 + 111) )
    sub_CC7E0(v9, (__int64)v36, v35);
  *(_QWORD *)(v9 + 496) = v82;
  return __readfsqword(0x28u) ^ v104;
}
