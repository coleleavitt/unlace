__int64 __fastcall sub_170090(__m128i *a1, _BYTE *a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  bool v8; // zf
  unsigned __int64 *v9; // r13
  __int64 v12; // r15
  int v13; // eax
  int v14; // edx
  __int64 v15; // r15
  int v16; // eax
  signed int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  unsigned __int8 v22; // r8
  int v23; // r8d
  int v24; // r9d
  int v25; // r9d
  unsigned __int8 v26; // r8
  __m128i *v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rdi
  _QWORD *i; // r10
  unsigned __int8 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // r12
  __int32 v36; // eax
  __int32 v37; // eax
  unsigned __int8 v38; // r8
  __int32 v39; // eax
  int v40; // eax
  int v41; // eax
  unsigned __int8 v42; // r8
  _QWORD *v43; // rax
  _QWORD *v44; // [rsp+0h] [rbp-190h]
  _QWORD *v45; // [rsp+0h] [rbp-190h]
  __int64 v46; // [rsp+8h] [rbp-188h]
  __int64 v47; // [rsp+8h] [rbp-188h]
  _QWORD *v48; // [rsp+8h] [rbp-188h]
  unsigned __int64 v49; // [rsp+10h] [rbp-180h]
  unsigned __int8 *v50; // [rsp+28h] [rbp-168h]
  __int64 v51; // [rsp+38h] [rbp-158h]
  int v52; // [rsp+40h] [rbp-150h]
  __int64 v53; // [rsp+40h] [rbp-150h]
  unsigned __int8 *v54; // [rsp+48h] [rbp-148h]
  unsigned __int8 v55; // [rsp+5Fh] [rbp-131h]
  unsigned __int8 v56; // [rsp+5Fh] [rbp-131h]
  __int64 v57; // [rsp+60h] [rbp-130h]
  unsigned __int8 v59; // [rsp+68h] [rbp-128h]
  unsigned __int8 v60; // [rsp+68h] [rbp-128h]
  unsigned __int8 v61; // [rsp+68h] [rbp-128h]
  unsigned __int8 v62; // [rsp+68h] [rbp-128h]
  __int64 v63; // [rsp+78h] [rbp-118h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-110h] BYREF
  _QWORD *v65; // [rsp+90h] [rbp-100h] BYREF
  __int64 v66; // [rsp+98h] [rbp-F8h]
  __int64 v67[2]; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-D8h]
  __int64 v70[2]; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-B0h] BYREF
  __int128 v72; // [rsp+E8h] [rbp-A8h]
  unsigned int v73[8]; // [rsp+100h] [rbp-90h] BYREF
  _QWORD v74[2]; // [rsp+120h] [rbp-70h] BYREF
  _QWORD v75[12]; // [rsp+130h] [rbp-60h] BYREF

  v8 = *(_DWORD *)(a4 + 376) == 1;
  v75[5] = __readfsqword(0x28u);
  v9 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  if ( v8 && *(_DWORD *)(a3 + 72) == **(_DWORD **)(a4 + 368) )
  {
    v57 = sub_1229A0(*(_QWORD *)(a4 + 48));
    if ( !v57 || *(_DWORD *)v57 != 4 && (*(_DWORD *)v57 != 67 || *(_DWORD *)(v57 + 36) != *(_DWORD *)(v57 + 68)) )
      return 0;
    v12 = a4;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 376) != 1 || *(_DWORD *)(a4 + 72) != **(_DWORD **)(a3 + 368) )
      return 0;
    v57 = 0;
    v12 = a3;
  }
  v13 = sub_330DE0(v12);
  v14 = v13;
  if ( v13 > 0 )
  {
    if ( **(_DWORD **)(v12 + 56) == 55 )
      v14 = v13 - 1;
    if ( v14 == 1 )
    {
      v15 = v57 ? sub_1229D0(*(_QWORD *)(a1[3].m128i_i64[1] + 16)) : sub_1229A0(*(_QWORD *)(a3 + 48));
      if ( v15 )
      {
        if ( *(_DWORD *)v15 == 12 )
        {
          v55 = sub_11FD80((char *)(v15 + 48), &v63, 0);
          if ( v55 )
          {
            if ( (v63 & (v63 + 1)) == 0 )
            {
              v16 = log2ceil();
              v17 = *(_DWORD *)(v15 + 36);
              v52 = v16;
              v64[0] = 0xFFFFFFFF00000000LL;
              v64[1] = 0;
              v54 = sub_167B10(v9, (__int64)a2, v17, (unsigned __int8 *)v64, a5, a6);
              if ( v54 )
              {
                v18 = a1[3].m128i_i64[1];
                v19 = v15 + 32;
                if ( v57 )
                {
                  if ( !(unsigned __int8)sub_12EA80((__int64)v9, a1, v15, v19, v18, (__int64)v54, a5, a6, 0) )
                    goto LABEL_25;
                  if ( !sub_125B60((unsigned __int8 *)(v57 + 32), v15 + 32, 0, *(double *)a5.m128i_i64) )
                    goto LABEL_25;
                  v50 = (unsigned __int8 *)(v15 + 64);
                  if ( !sub_125B60((unsigned __int8 *)(v57 + 64), v15 + 64, 0, *(double *)a5.m128i_i64) )
                    goto LABEL_25;
                  v51 = a3;
                }
                else
                {
                  if ( !(unsigned __int8)sub_12EA80((__int64)v9, a1, v18, v19, v18, (__int64)v54, a5, a6, 0) )
                    goto LABEL_25;
                  v50 = (unsigned __int8 *)(v15 + 64);
                  v51 = a4;
                  if ( !(unsigned __int8)sub_12EA80(
                                           (__int64)v9,
                                           a1,
                                           a1[3].m128i_i64[1],
                                           v15 + 64,
                                           a1[3].m128i_i64[1],
                                           (__int64)v54,
                                           a5,
                                           a6,
                                           0) )
                    goto LABEL_25;
                }
                if ( sub_330DE0(v51) && *(_DWORD *)(v51 + 352) == 2 )
                {
                  v67[0] = 0;
                  v67[1] = 0;
                  v68 = 0;
                  v69 = 0;
                  sub_127FE0((__int64)a1, v67, (__int64)(a2 + 32), 0, v20, v21, 0.0, a6);
                  sub_127FE0((__int64)a1, v67, (__int64)v50, 0, v23, v24, 0.0, a6);
                  v74[1] = 0;
                  v74[0] = 0xFFFFFFFF00000000LL;
                  v75[0] = 0xFFFFFFFF00000000LL;
                  v75[2] = 0xFFFFFFFF00000000LL;
                  v75[3] = 0;
                  v75[1] = 0;
                  sub_330970((__int64)v73, -1);
                  v73[0] = 24;
                  sub_125180((unsigned __int8 *)v74, v50);
                  v49 = v52;
                  sub_120A10((__int64)v75, v9, v52, 1, -1, 0);
                  sub_133810(&v65, a1, v67, *(_QWORD *)(v51 + 48), 0, a1[3].m128i_i64[1], 0.0, a6, v73);
                  v26 = 0;
                  if ( v66 )
                  {
                    v70[0] = 0;
                    v70[1] = 0;
                    v71 = 0;
                    v72 = 0;
                    sub_127FE0((__int64)a1, v70, (__int64)v50, 0, 0, v25, 0.0, a6);
                    sub_64700(v70, v67);
                    sub_3180C0(&v71, (__int64)&v68, v27, v28);
                    if ( v57 && (!(unsigned __int8)sub_64880(v70) || (_QWORD)v72) )
                    {
                      v29 = *(__int64 **)(a1[4].m128i_i64[0] + 784);
                      if ( !v29 || sub_17C4E0(v29, (__int64)v70, *(_DWORD *)(v51 + 72), 0xFFFFFFFF, 0, 0, 2u, 1u) )
                        goto LABEL_71;
                    }
                    i = v65;
                    if ( v65 && v66 )
                      i = (_QWORD *)v65[1];
                    v31 = 0;
                    v53 = 1LL << v52;
                    while ( i != v65 )
                    {
                      v32 = i[3];
                      if ( (unsigned int)(*(_DWORD *)v32 - 23) <= 1 )
                      {
                        *(_DWORD *)v32 = 16;
                        if ( v57 )
                        {
                          if ( !v31 )
                          {
                            v44 = i;
                            v46 = v32;
                            sub_120220((__int64)a1, a2, (__int64)v54, 0, 0.0);
                            i = v44;
                            v32 = v46;
                          }
                          v45 = i;
                          v47 = v32;
                          sub_125180((unsigned __int8 *)(v32 + 32), v54);
                          i = v45;
                          v32 = v47;
                        }
                        v33 = 0;
                        if ( v49 <= 0x3F )
                          v33 = v53;
                        v48 = i;
                        sub_120A10(v32 + 48, v9, v33, *(_DWORD *)(v32 + 36), -1, 0);
                        v31 = v55;
                        i = v48;
                      }
                      if ( (*i & 2) == 0 )
                      {
                        v34 = (_QWORD *)i[2];
                        if ( (*(_BYTE *)v34 & 2) != 0 )
                        {
                          v43 = i;
                          for ( i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL);
                                (*i & 2) == 0 && (_QWORD *)i[2] == v43;
                                i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) )
                          {
                            v43 = i;
                          }
                        }
                        else
                        {
                          do
                          {
                            i = v34;
                            v34 = (_QWORD *)v34[1];
                          }
                          while ( (*(_BYTE *)v34 & 2) == 0 );
                        }
                      }
                    }
                    v56 = v31;
                    if ( !v31 )
                    {
LABEL_71:
                      v42 = 0;
                    }
                    else
                    {
                      v35 = sub_167E70(a1[4].m128i_i64[0], *(_DWORD *)(a1[3].m128i_i64[1] + 72), 0.0);
                      sub_11D5A0(a1[3].m128i_i64[1]);
                      v36 = a1[1].m128i_i32[2];
                      BYTE1(v36) &= ~2u;
                      LOBYTE(v36) = v36 | 0x80;
                      a1[1].m128i_i32[2] = v36;
                      sub_11D5A0(v15);
                      v37 = a1[1].m128i_i32[2];
                      v38 = v56;
                      BYTE1(v37) &= ~2u;
                      LOBYTE(v37) = v37 | 0x80;
                      a1[1].m128i_i32[2] = v37;
                      if ( v57 )
                      {
                        sub_11D5A0(v57);
                        v39 = a1[1].m128i_i32[2];
                        v38 = v56;
                        BYTE1(v39) &= ~2u;
                        LOBYTE(v39) = v39 | 0x80;
                        a1[1].m128i_i32[2] = v39;
                        v40 = *(_DWORD *)(a3 + 24);
                        BYTE1(v40) &= ~2u;
                        LOBYTE(v40) = v40 | 0x80;
                        *(_DWORD *)(a3 + 24) = v40;
                        v41 = *(_DWORD *)(a4 + 24);
                        BYTE1(v41) &= ~2u;
                        LOBYTE(v41) = v41 | 0x80;
                        *(_DWORD *)(a4 + 24) = v41;
                      }
                      v60 = v38;
                      sub_112550((__int64)a1, a3, v35);
                      sub_A2520(v51, "SDIV_POWER2");
                      v42 = v60;
                    }
                    v61 = v42;
                    sub_93B40(v70);
                    v26 = v61;
                  }
                  v62 = v26;
                  sub_133690((__int64 *)&v65);
                  sub_7CCD0((__int64)v73);
                  sub_93B40(v67);
                  v22 = v62;
                  goto LABEL_26;
                }
              }
LABEL_25:
              v22 = 0;
LABEL_26:
              v59 = v22;
              sub_11CDA0((__int64)v64);
              return v59;
            }
          }
        }
      }
    }
  }
  return 0;
}

