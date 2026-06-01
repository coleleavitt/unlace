__int64 __fastcall sub_16C650(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  __int64 v7; // r13
  __int64 v10; // r15
  int v11; // eax
  int v12; // edx
  __int64 v13; // r15
  int v14; // eax
  signed int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // r8
  __int64 v20; // rdi
  _QWORD *i; // r10
  unsigned __int8 v22; // r8
  _DWORD *v23; // r9
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r12
  __int32 v27; // eax
  __int32 v28; // eax
  unsigned __int8 v29; // r8
  __int32 v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned __int8 v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // [rsp+0h] [rbp-190h]
  _QWORD *v36; // [rsp+0h] [rbp-190h]
  _DWORD *v37; // [rsp+8h] [rbp-188h]
  _DWORD *v38; // [rsp+8h] [rbp-188h]
  _QWORD *v39; // [rsp+8h] [rbp-188h]
  unsigned __int64 v40; // [rsp+10h] [rbp-180h]
  unsigned __int8 *v41; // [rsp+28h] [rbp-168h]
  __int64 v42; // [rsp+38h] [rbp-158h]
  int v43; // [rsp+40h] [rbp-150h]
  __int64 v44; // [rsp+40h] [rbp-150h]
  unsigned __int8 *v45; // [rsp+48h] [rbp-148h]
  unsigned __int8 v46; // [rsp+5Fh] [rbp-131h]
  unsigned __int8 v47; // [rsp+5Fh] [rbp-131h]
  __int64 v48; // [rsp+60h] [rbp-130h]
  unsigned __int8 v50; // [rsp+68h] [rbp-128h]
  unsigned __int8 v51; // [rsp+68h] [rbp-128h]
  unsigned __int8 v52; // [rsp+68h] [rbp-128h]
  unsigned __int8 v53; // [rsp+68h] [rbp-128h]
  __int64 v54; // [rsp+78h] [rbp-118h] BYREF
  _QWORD v55[2]; // [rsp+80h] [rbp-110h] BYREF
  _QWORD *v56; // [rsp+90h] [rbp-100h] BYREF
  __int64 v57; // [rsp+98h] [rbp-F8h]
  __int64 v58[2]; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-D8h]
  __int64 v61[2]; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+E8h] [rbp-A8h]
  unsigned int v64[8]; // [rsp+100h] [rbp-90h] BYREF
  _QWORD v65[2]; // [rsp+120h] [rbp-70h] BYREF
  _QWORD v66[12]; // [rsp+130h] [rbp-60h] BYREF

  v6 = *(_DWORD *)(a4 + 376) == 1;
  v66[5] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( v6 && *(_DWORD *)(a3 + 72) == **(_DWORD **)(a4 + 368) )
  {
    v48 = sub_11EF60(*(_QWORD *)(a4 + 48));
    if ( !v48 || *(_DWORD *)v48 != 4 && (*(_DWORD *)v48 != 67 || *(_DWORD *)(v48 + 36) != *(_DWORD *)(v48 + 68)) )
      return 0;
    v10 = a4;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 376) != 1 || *(_DWORD *)(a4 + 72) != **(_DWORD **)(a3 + 368) )
      return 0;
    v48 = 0;
    v10 = a3;
  }
  v11 = sub_32C980(v10);
  v12 = v11;
  if ( v11 > 0 )
  {
    if ( **(_DWORD **)(v10 + 56) == 55 )
      v12 = v11 - 1;
    if ( v12 == 1 )
    {
      v13 = v48 ? sub_11EF90(*(_QWORD *)(a1[3].m128i_i64[1] + 16)) : sub_11EF60(*(_QWORD *)(a3 + 48));
      if ( v13 )
      {
        if ( *(_DWORD *)v13 == 12 )
        {
          v46 = sub_11C340((char *)(v13 + 48), &v54, 0);
          if ( v46 )
          {
            if ( (v54 & (v54 + 1)) == 0 )
            {
              v14 = log2ceil();
              v15 = *(_DWORD *)(v13 + 36);
              v43 = v14;
              v55[0] = 0xFFFFFFFF00000000LL;
              v55[1] = 0;
              v45 = (unsigned __int8 *)sub_1640D0(v7, a2, v15, (unsigned __int64)v55);
              if ( v45 )
              {
                v16 = a1[3].m128i_i64[1];
                v17 = v13 + 32;
                if ( v48 )
                {
                  if ( !(unsigned __int8)sub_12B040(v7, a1, v13, v17, v16, (__int64)v45, 0) )
                    goto LABEL_25;
                  if ( !sub_122120((unsigned __int8 *)(v48 + 32), v13 + 32, 0) )
                    goto LABEL_25;
                  v41 = (unsigned __int8 *)(v13 + 64);
                  if ( !sub_122120((unsigned __int8 *)(v48 + 64), v13 + 64, 0) )
                    goto LABEL_25;
                  v42 = a3;
                }
                else
                {
                  if ( !(unsigned __int8)sub_12B040(v7, a1, v16, v17, v16, (__int64)v45, 0) )
                    goto LABEL_25;
                  v41 = (unsigned __int8 *)(v13 + 64);
                  v42 = a4;
                  if ( !(unsigned __int8)sub_12B040(
                                           v7,
                                           a1,
                                           a1[3].m128i_i64[1],
                                           v13 + 64,
                                           a1[3].m128i_i64[1],
                                           (__int64)v45,
                                           0) )
                    goto LABEL_25;
                }
                if ( sub_32C980(v42) && *(_DWORD *)(v42 + 352) == 2 )
                {
                  v58[0] = 0;
                  v58[1] = 0;
                  v59 = 0;
                  v60 = 0;
                  sub_1245A0((__int64)a1, v58, a2 + 32, 0);
                  sub_1245A0((__int64)a1, v58, (__int64)v41, 0);
                  v65[1] = 0;
                  v65[0] = 0xFFFFFFFF00000000LL;
                  v66[0] = 0xFFFFFFFF00000000LL;
                  v66[2] = 0xFFFFFFFF00000000LL;
                  v66[3] = 0;
                  v66[1] = 0;
                  sub_32C520(v64, -1);
                  v64[0] = 24;
                  sub_121740((__int64)v65, v41);
                  v40 = v43;
                  sub_11CFD0((__int64)v66, v7, v43, 1, -1, 0);
                  sub_12FDD0(&v56, a1, v58, *(_QWORD *)(v42 + 48), 0, a1[3].m128i_i64[1], v64);
                  v19 = 0;
                  if ( v57 )
                  {
                    v61[0] = 0;
                    v61[1] = 0;
                    v62 = 0;
                    v63 = 0;
                    sub_1245A0((__int64)a1, v61, (__int64)v41, 0);
                    sub_60CC0(v61, v58);
                    sub_313F40(&v62, &v59);
                    if ( v48 && (!(unsigned __int8)sub_60E40(v61) || (_QWORD)v63) )
                    {
                      v20 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
                      if ( !v20
                        || (unsigned __int8)sub_178AA0(v20, (unsigned int)v61, *(_DWORD *)(v42 + 72), -1, 0, 0, 2, 1) )
                      {
                        goto LABEL_71;
                      }
                    }
                    i = v56;
                    if ( v56 && v57 )
                      i = (_QWORD *)v56[1];
                    v22 = 0;
                    v44 = 1LL << v43;
                    while ( i != v56 )
                    {
                      v23 = (_DWORD *)i[3];
                      if ( (unsigned int)(*v23 - 23) <= 1 )
                      {
                        *v23 = 16;
                        if ( v48 )
                        {
                          if ( !v22 )
                          {
                            v35 = i;
                            v37 = v23;
                            sub_11C7E0((__int64)a1, a2, (__int64)v45, 0);
                            i = v35;
                            v23 = v37;
                          }
                          v36 = i;
                          v38 = v23;
                          sub_121740((__int64)(v23 + 8), v45);
                          i = v36;
                          v23 = v38;
                        }
                        v24 = 0;
                        if ( v40 <= 0x3F )
                          v24 = v44;
                        v39 = i;
                        sub_11CFD0((__int64)(v23 + 12), v7, v24, v23[9], -1, 0);
                        v22 = v46;
                        i = v39;
                      }
                      if ( (*i & 2) == 0 )
                      {
                        v25 = (_QWORD *)i[2];
                        if ( (*(_BYTE *)v25 & 2) != 0 )
                        {
                          v34 = i;
                          for ( i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL);
                                (*i & 2) == 0 && (_QWORD *)i[2] == v34;
                                i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) )
                          {
                            v34 = i;
                          }
                        }
                        else
                        {
                          do
                          {
                            i = v25;
                            v25 = (_QWORD *)v25[1];
                          }
                          while ( (*(_BYTE *)v25 & 2) == 0 );
                        }
                      }
                    }
                    v47 = v22;
                    if ( !v22 )
                    {
LABEL_71:
                      v33 = 0;
                    }
                    else
                    {
                      v26 = sub_164430(a1[4].m128i_i64[0], *(_DWORD *)(a1[3].m128i_i64[1] + 72));
                      sub_119B60(a1[3].m128i_i64[1]);
                      v27 = a1[1].m128i_i32[2];
                      BYTE1(v27) &= ~2u;
                      LOBYTE(v27) = v27 | 0x80;
                      a1[1].m128i_i32[2] = v27;
                      sub_119B60(v13);
                      v28 = a1[1].m128i_i32[2];
                      v29 = v47;
                      BYTE1(v28) &= ~2u;
                      LOBYTE(v28) = v28 | 0x80;
                      a1[1].m128i_i32[2] = v28;
                      if ( v48 )
                      {
                        sub_119B60(v48);
                        v30 = a1[1].m128i_i32[2];
                        v29 = v47;
                        BYTE1(v30) &= ~2u;
                        LOBYTE(v30) = v30 | 0x80;
                        a1[1].m128i_i32[2] = v30;
                        v31 = *(_DWORD *)(a3 + 24);
                        BYTE1(v31) &= ~2u;
                        LOBYTE(v31) = v31 | 0x80;
                        *(_DWORD *)(a3 + 24) = v31;
                        v32 = *(_DWORD *)(a4 + 24);
                        BYTE1(v32) &= ~2u;
                        LOBYTE(v32) = v32 | 0x80;
                        *(_DWORD *)(a4 + 24) = v32;
                      }
                      v51 = v29;
                      sub_10EB10((__int64)a1, a3, v26);
                      sub_9EAE0(v42, (__int64)"SDIV_POWER2");
                      v33 = v51;
                    }
                    v52 = v33;
                    sub_90100((__int64)v61);
                    v19 = v52;
                  }
                  v53 = v19;
                  sub_12FC50((__int64 *)&v56);
                  sub_79290((__int64)v64);
                  sub_90100((__int64)v58);
                  v18 = v53;
                  goto LABEL_26;
                }
              }
LABEL_25:
              v18 = 0;
LABEL_26:
              v50 = v18;
              sub_119360((__int64)v55);
              return v50;
            }
          }
        }
      }
    }
  }
  return 0;
}

