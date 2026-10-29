__int64 __fastcall sub_158080(const __m128i *a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  unsigned int v5; // r15d
  unsigned int v9; // eax
  char *v10; // rdi
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r14
  bool v14; // zf
  char v15; // dl
  int v16; // r9d
  unsigned __int8 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  int v21; // edx
  int v22; // ecx
  _DWORD *v23; // rax
  int v24; // r10d
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // r10d
  _DWORD *v28; // r14
  int v29; // eax
  char v30; // al
  __int64 v31; // r11
  __int64 v32; // r13
  int v33; // r14d
  char v34; // al
  __int64 v35; // r13
  char *v36; // r11
  char v37; // al
  __int128 v38; // rdi
  int v39; // r10d
  __int128 v40; // rdi
  __int64 v41; // rax
  char v42; // dl
  int v43; // r11d
  char *v44; // r14
  char v45; // al
  char *v46; // r14
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  __int128 v51; // rdi
  __int32 v52; // eax
  __int64 v53; // [rsp-10h] [rbp-150h]
  int v54; // [rsp+0h] [rbp-140h]
  int v55; // [rsp+0h] [rbp-140h]
  int v56; // [rsp+4h] [rbp-13Ch]
  int v57; // [rsp+4h] [rbp-13Ch]
  int v58; // [rsp+4h] [rbp-13Ch]
  int v59; // [rsp+4h] [rbp-13Ch]
  __int128 *v60; // [rsp+10h] [rbp-130h]
  __int64 v61; // [rsp+10h] [rbp-130h]
  int v62; // [rsp+20h] [rbp-120h]
  char *v63; // [rsp+20h] [rbp-120h]
  __int64 v64; // [rsp+20h] [rbp-120h]
  int v65; // [rsp+20h] [rbp-120h]
  char *v66; // [rsp+20h] [rbp-120h]
  __int64 *v67; // [rsp+28h] [rbp-118h]
  __int64 v68; // [rsp+28h] [rbp-118h]
  __int64 v69; // [rsp+28h] [rbp-118h]
  int v70; // [rsp+28h] [rbp-118h]
  unsigned __int64 *v71; // [rsp+30h] [rbp-110h]
  char *v72; // [rsp+38h] [rbp-108h]
  __int64 v73; // [rsp+38h] [rbp-108h]
  unsigned __int8 *v74; // [rsp+40h] [rbp-100h]
  int v75; // [rsp+40h] [rbp-100h]
  __int64 v77; // [rsp+68h] [rbp-D8h] BYREF
  unsigned int *v78; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+78h] [rbp-C8h]
  unsigned int *v80; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+88h] [rbp-B8h]
  __int64 v82[5]; // [rsp+90h] [rbp-B0h] BYREF
  char v83; // [rsp+B8h] [rbp-88h]
  __int64 v84; // [rsp+C0h] [rbp-80h]
  unsigned int *v85; // [rsp+C8h] [rbp-78h]
  __int128 v86; // [rsp+D0h] [rbp-70h] BYREF
  _QWORD v87[12]; // [rsp+E0h] [rbp-60h] BYREF

  v87[5] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 68) != 4 )
    return 0;
  v84 = a3;
  memset(&v82[1], 0, 32);
  v83 = 0;
  v82[0] = (__int64)&off_4DDCB0;
  v85 = nullptr;
  if ( !(unsigned int)sub_11E900((_BYTE *)a2, (__int64)v82) || !v85 )
    return 0;
  v9 = *v85;
  if ( *v85 > 0x21 )
  {
    if ( v9 - 43 > 1 )
      return 0;
  }
  else if ( v9 <= 0x1F )
  {
    return 0;
  }
  v10 = (char *)sub_11C8A0((__int64)v85, &v77);
  if ( v10 )
  {
    v5 = sub_11FD80(v10, v82, 0);
    if ( (_BYTE)v5 )
    {
      if ( !v82[0] && v77 && *(_BYTE *)v77 == 4 && *(_QWORD *)(v77 + 8) == a3 )
      {
        v12 = a1[30].m128i_i64[0];
        v13 = 0;
        v14 = *(_BYTE *)(a3 + 32) == 4;
        v79 = 0;
        v81 = 0;
        v15 = *(_BYTE *)(a3 + 48);
        v71 = *(unsigned __int64 **)(v12 + 112);
        v78 = (unsigned int *)0xFFFFFFFF00000000LL;
        v80 = (unsigned int *)0xFFFFFFFF00000000LL;
        if ( v14 && (v23 = *(_DWORD **)(a3 + 40), *v23 == 21) )
        {
          if ( v15 == 4 )
          {
            v13 = *(_QWORD *)(a3 + 56);
            if ( *(_DWORD *)v13 == 21 )
            {
              if ( v23 && v13 )
              {
                v24 = 0;
                v87[1] = v23 + 12;
                a4 = (__m128)-1LL;
                v87[2] = v13 + 32;
                v60 = &v86;
                v87[0] = v23 + 8;
                v87[3] = v13 + 48;
                v67 = v87;
                v86 = -1;
                do
                {
                  v62 = v24;
                  v25 = *v67;
                  v82[0] = a2;
                  v26 = sub_129440((__int64)a1, v25, (__int64)v82, 0, NAN, a5);
                  v27 = v62;
                  v28 = (_DWORD *)v26;
                  if ( v26 )
                  {
                    v29 = sub_129FA0(v26 + 64, v71, v25, (__m128i)-1LL);
                    v27 = v62;
                    if ( v29 == 2 )
                    {
                      v33 = v62 ^ 2;
                      v48 = *((_BYTE *)v60 + (v62 ^ 2));
                      if ( v48 == -1 )
                      {
                        v48 = sub_130BC0(a1, a2, v25, a2, v87[v33], 0, (__m128i)-1LL, a5);
                        v27 = v62;
                        *((_BYTE *)v60 + v33) = v48;
                      }
                      if ( v48 )
                        goto LABEL_68;
                      v33 = v27 ^ 3;
                      v49 = *((_BYTE *)v60 + (v27 ^ 3));
                      if ( v49 == -1 )
                      {
                        v59 = v27;
                        v49 = sub_130BC0(a1, a2, v25, a2, v87[v33], 0, (__m128i)-1LL, a5);
                        v27 = v59;
                        *((_BYTE *)v60 + v33) = v49;
                      }
                      if ( v49 )
                        goto LABEL_68;
                    }
                    else if ( v29 == 3
                           || *v28 == 11
                           || (v30 = sub_30D8F0((__int64)v71, (__int64)a1, v82[0], v28, 0, 0), v27 = v62, v30) )
                    {
                      v43 = v27 ^ 2;
                      v44 = (char *)&v87[-2] + 4 * (v27 ^ 2);
                      v64 = v27;
                      v45 = v44[v27];
                      if ( v45 == -1 )
                      {
                        v54 = v27;
                        v57 = v27 ^ 2;
                        v45 = sub_130BC0(a1, a2, v87[v43], a2, v25, 0, (__m128i)-1LL, a5);
                        v27 = v54;
                        v43 = v57;
                        v44[v64] = v45;
                      }
                      if ( v45 )
                        goto LABEL_82;
                      v43 = v27 ^ 3;
                      v46 = (char *)&v87[-2] + 4 * (v27 ^ 3);
                      v47 = v46[v64];
                      if ( v47 == -1 )
                      {
                        v55 = v27;
                        v58 = v27 ^ 3;
                        v47 = sub_130BC0(a1, a2, v87[v43], a2, v25, 0, (__m128i)-1LL, a5);
                        v27 = v55;
                        v43 = v58;
                        v46[v64] = v47;
                      }
                      if ( v47 )
                      {
LABEL_82:
                        v33 = v27;
                        v27 = v43;
                        goto LABEL_68;
                      }
                    }
                  }
                  v24 = v27 + 1;
                  ++v67;
                  v60 = (__int128 *)((char *)v60 + 4);
                }
                while ( v24 != 4 );
                v31 = 0;
LABEL_45:
                v27 = v31;
                v32 = 0;
                v72 = (char *)&v87[-2] + 4 * v31;
                while ( 1 )
                {
                  v33 = v32;
                  if ( (((unsigned __int8)v32 ^ (unsigned __int8)v27) & 2) != 0 )
                  {
                    v34 = v72[v32];
                    if ( v34 == -1 )
                    {
                      v65 = v27;
                      v69 = v31;
                      v34 = sub_130BC0(a1, a2, v87[v31], a2, v87[v32], 0, (__m128i)-1LL, a5);
                      v27 = v65;
                      v31 = v69;
                      v72[v32] = v34;
                    }
                    if ( v34 )
                    {
                      v41 = v27 ^ 1;
                      v68 = (int)(v32 ^ 1);
                      v42 = *((_BYTE *)&v87[-2] + 4 * v41 + v68);
                      v63 = (char *)&v87[-2] + 4 * v41;
                      if ( v42 == -1 )
                      {
                        v56 = v27;
                        v61 = v31;
                        v42 = sub_130BC0(a1, a2, v87[v41], a2, v87[v68], 0, (__m128i)-1LL, a5);
                        v27 = v56;
                        v31 = v61;
                        v63[v68] = v42;
                      }
                      if ( v42 )
                        break;
                    }
                  }
                  if ( ++v32 == 4 )
                  {
                    if ( ++v31 != 4 )
                      goto LABEL_45;
                    v73 = 0;
LABEL_53:
                    v35 = 0;
                    v27 = v73;
                    v36 = (char *)&v87[-2] + 4 * v73;
                    while ( 1 )
                    {
                      v33 = v35;
                      if ( (((unsigned __int8)v35 ^ (unsigned __int8)v27) & 2) != 0 )
                      {
                        v37 = v36[v35];
                        if ( v37 == -1 )
                        {
                          v66 = v36;
                          v70 = v27;
                          v37 = sub_130BC0(a1, a2, v87[v73], a2, v87[v35], 0, (__m128i)-1LL, a5);
                          v36 = v66;
                          v27 = v70;
                          v66[v35] = v37;
                        }
                        if ( v37 )
                          goto LABEL_68;
                      }
                      if ( ++v35 == 4 )
                      {
                        if ( ++v73 != 4 )
                          goto LABEL_53;
                        goto LABEL_57;
                      }
                    }
                  }
                }
LABEL_68:
                v75 = v27;
                sub_125180((unsigned __int8 *)&v78, (unsigned __int8 *)v87[v27]);
                *(_QWORD *)&v38 = a1;
                *((_QWORD *)&v38 + 1) = a2;
                sub_B1520(v38, (__int64)&v78, (_DWORD *)a2, (unsigned __int8 *)&v78, a2, NAN, v87[v33], 4);
                v39 = v75;
                if ( (_BYTE)v78 != 14 || (v50 = sub_157240((__int64)a1, v79, v79 + 16, (__m128)-1LL), v39 = v75, v50) )
                {
                  sub_125180((unsigned __int8 *)&v80, (unsigned __int8 *)v87[v39 ^ 1]);
                  *(_QWORD *)&v40 = a1;
                  *((_QWORD *)&v40 + 1) = a2;
                  sub_B1520(v40, (__int64)&v80, (_DWORD *)a2, (unsigned __int8 *)&v80, a2, NAN, v87[v33 ^ 1], 4);
                  if ( (_BYTE)v80 != 14 || (unsigned __int8)sub_157240((__int64)a1, v81, v81 + 16, (__m128)-1LL) )
                    goto LABEL_59;
                }
                goto LABEL_57;
              }
            }
            else
            {
              v13 = 0;
            }
          }
          v74 = (unsigned __int8 *)(a3 + 48);
          if ( v23 )
          {
            v13 = *(_QWORD *)(a3 + 40);
LABEL_19:
            v17 = (unsigned __int8 *)(v13 + 48);
            if ( (unsigned __int8)sub_12CF30(a1[4].m128i_i64[0], v13 + 32, v74, (__int64)&v78, 0, v11, (__m128i)a4) )
            {
              sub_125180((unsigned __int8 *)&v80, v17);
            }
            else
            {
              if ( !(unsigned __int8)sub_12CF30(
                                       a1[4].m128i_i64[0],
                                       (__int64)v17,
                                       v74,
                                       (__int64)&v78,
                                       0,
                                       v16,
                                       (__m128i)a4) )
                goto LABEL_57;
              sub_125180((unsigned __int8 *)&v80, (unsigned __int8 *)(v13 + 32));
            }
            v20 = *(_QWORD *)(a2 + 16);
            if ( !v20 || *(_DWORD *)v20 != 21 )
              goto LABEL_23;
            sub_123A40((__int64)v82, (unsigned __int8 *)&v78, v18, v19);
            if ( !(unsigned __int8)sub_127850((__int64)v82, v71, SHIDWORD(v78) / 2, 0, (__m128i)a4)
              || !sub_125B60((unsigned __int8 *)(v20 + 64), (__int64)v82, 0, *(double *)a4.m128_u64) )
            {
LABEL_62:
              sub_11CDA0((__int64)v82);
LABEL_23:
              v21 = HIDWORD(v78);
              if ( SHIDWORD(v80) >= SHIDWORD(v78) )
              {
LABEL_24:
                sub_12AB50(&v78, v71, v21, 2, (__m128i)a4);
                sub_12AB50(&v80, v71, SHIDWORD(v80), 2, (__m128i)a4);
                sub_11CA10((char *)(a3 + 32), (char *)&v78);
                sub_11CA10((char *)(a3 + 48), (char *)&v80);
                *(_DWORD *)a3 = 32;
                v22 = HIDWORD(v78);
                if ( *(_DWORD *)(a3 + 68) != HIDWORD(v78) )
                {
                  if ( !under_debugger )
                    sub_383060(0xC96Du, *(double *)a4.m128_u64);
                  BUG();
                }
                *(_DWORD *)(a3 + 68) = 1;
                sub_12B6F0(a3, v71, 9, v22, 1, (__m128i)a4);
                goto LABEL_26;
              }
              sub_1207E0((char *)&v80, v71, 9, *(_QWORD *)(a3 + 24), SHIDWORD(v78), (__m128i)a4);
LABEL_59:
              v21 = HIDWORD(v78);
              goto LABEL_24;
            }
            if ( sub_125B60((unsigned __int8 *)(v20 + 32), (__int64)v82, 0, *(double *)a4.m128_u64) )
            {
              v53 = v20 + 48;
            }
            else
            {
              if ( !sub_125B60((unsigned __int8 *)(v20 + 48), (__int64)v82, 0, *(double *)a4.m128_u64) )
                goto LABEL_95;
              v53 = v20 + 32;
            }
            *(_QWORD *)&v51 = a1;
            *((_QWORD *)&v51 + 1) = a2;
            sub_B1520(v51, (__int64)&v80, (_DWORD *)a2, (unsigned __int8 *)&v80, v20, *(double *)a4.m128_u64, v53, 4);
LABEL_95:
            if ( HIDWORD(v80) != HIDWORD(v78) )
              goto LABEL_62;
            if ( (_BYTE)v80 != 14 || (unsigned __int8)sub_157240((__int64)a1, v81, v81 + 16, a4) )
            {
              sub_11D5A0(v20);
              v52 = a1[1].m128i_i32[2];
              BYTE1(v52) &= ~2u;
              LOBYTE(v52) = v52 | 0x80;
              a1[1].m128i_i32[2] = v52;
              goto LABEL_62;
            }
            sub_11CDA0((__int64)v82);
LABEL_57:
            v5 = 0;
LABEL_26:
            sub_11CDA0((__int64)&v80);
            sub_11CDA0((__int64)&v78);
            return v5;
          }
        }
        else if ( v15 == 4 )
        {
          v13 = *(_QWORD *)(a3 + 56);
          if ( *(_DWORD *)v13 != 21 )
            v13 = 0;
        }
        v74 = (unsigned __int8 *)(a3 + 32);
        goto LABEL_19;
      }
    }
  }
  return 0;
}

