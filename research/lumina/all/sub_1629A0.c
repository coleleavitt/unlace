__int64 __fastcall sub_1629A0(__int64 **a1, __m128i *a2, __int64 a3, __int64 a4, int a5, int a6, double a7)
{
  __int32 v10; // r12d
  unsigned int v11; // ebp
  char *v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // r13
  __int64 *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int *v23; // rax
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // r14
  unsigned __int8 *v29; // r9
  unsigned int v30; // ebp
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 *v43; // rdi
  __int64 i; // rcx
  __int64 v45; // rax
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 *v49; // rax
  int v50; // [rsp+0h] [rbp-E8h]
  __int64 v51; // [rsp+0h] [rbp-E8h]
  __int32 v52; // [rsp+Ch] [rbp-DCh]
  __int64 v53; // [rsp+10h] [rbp-D8h]
  __int64 v54; // [rsp+18h] [rbp-D0h]
  __int32 v55; // [rsp+20h] [rbp-C8h]
  int v56; // [rsp+20h] [rbp-C8h]
  __int64 v57; // [rsp+28h] [rbp-C0h]
  unsigned __int8 *v58; // [rsp+28h] [rbp-C0h]
  __int64 v59; // [rsp+30h] [rbp-B8h]
  __int64 v60; // [rsp+38h] [rbp-B0h]
  __int64 v61; // [rsp+40h] [rbp-A8h]
  __int8 v62; // [rsp+4Bh] [rbp-9Dh]
  unsigned int v63; // [rsp+4Ch] [rbp-9Ch]
  int v64; // [rsp+5Ch] [rbp-8Ch] BYREF
  __int64 v65; // [rsp+60h] [rbp-88h] BYREF
  __int64 v66; // [rsp+68h] [rbp-80h]
  int v67; // [rsp+78h] [rbp-70h]
  __int64 v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+88h] [rbp-60h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( !a2[6].m128i_i8[5] )
  {
    v11 = 1;
    sub_DC7E0(a1, (__int64)a2, "cannot VACUUM from within a transaction");
    return v11;
  }
  if ( a2[13].m128i_i32[0] > 1 )
  {
    v11 = 1;
    sub_DC7E0(a1, (__int64)a2, "cannot VACUUM - SQL statements in progress");
    return v11;
  }
  v10 = a2[4].m128i_i32[3];
  if ( !a4 )
  {
    v13 = "";
LABEL_10:
    v57 = 32LL * (int)a3;
    v53 = a2[7].m128i_i64[1];
    v14 = a2[8].m128i_i64[0];
    v52 = a2[2].m128i_i32[3];
    v51 = a2[3].m128i_i64[0];
    a2[2].m128i_i32[3] = v52 | 6;
    v15 = (__int64 *)(a2[2].m128i_i64[0] + v57);
    v54 = v14;
    LOBYTE(v14) = a2[6].m128i_i8[14];
    a2[6].m128i_i8[14] = 0;
    v62 = v14;
    a2[3].m128i_i64[0] = v51 & 0xFFFFFFFEEFFFADFELL | 0x201;
    v16 = v15[1];
    v17 = (__int64 *)a1;
    v59 = *v15;
    v60 = *(_QWORD *)(**(_QWORD **)(v16 + 8) + 16LL);
    v55 = a2[2].m128i_i32[2];
    v11 = sub_1628A0((__int64)a2, a1, "ATTACH %Q AS vacuum_db", v13);
    a2[4].m128i_i32[3] = v10;
    if ( v11 )
    {
      a2[12].m128i_i8[4] = 0;
      a2[2].m128i_i32[3] = v52;
      a2[3].m128i_i64[0] = v51;
      a2[7].m128i_i64[1] = v53;
      a2[8].m128i_i64[0] = v54;
      a2[6].m128i_i8[14] = v62;
      sub_D3060(v16, 0xFFFFFFFFLL, 0, 1);
      a2[6].m128i_i8[5] = 1;
LABEL_18:
      sub_D8BB0(a2, 0xFFFFFFFFLL);
      return v11;
    }
    v18 = a2[2].m128i_i64[0] + 32LL * v55;
    v61 = *(_QWORD *)(v18 + 8);
    if ( a4 )
    {
      v19 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(v18 + 8) + 8LL) + 72LL);
      v65 = 0;
      if ( *(_QWORD *)v19 )
      {
        v17 = &v65;
        if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, &v65) || v65 > 0 )
        {
          v11 = 1;
          sub_DC7E0(a1, (__int64)a2, "output file already exists");
          goto LABEL_16;
        }
      }
      a2[2].m128i_i32[3] |= 8u;
      v63 = sub_CC900(v16, (__int64)v17);
      sub_CCE00(v61, *(unsigned int *)(*(_QWORD *)(a2[2].m128i_i64[0] + v57 + 24) + 116LL));
      v21 = sub_CCE90(v16, 0, v20);
      sub_CCE90(v61, v21, v22);
      sub_CCF50(v61, 33);
      v11 = sub_162780((__int64)a2, a1, (__int64)"BEGIN", a7);
      if ( !v11 )
      {
LABEL_22:
        v11 = sub_110580(v16, v11, 0);
        if ( !v11 )
        {
          v23 = *(unsigned int **)(v16 + 8);
          if ( *(_BYTE *)(*(_QWORD *)v23 + 9LL) == 5 && !a4 )
          {
            a2[7].m128i_i32[1] = 0;
            v23 = *(unsigned int **)(v16 + 8);
          }
          if ( (unsigned int)sub_D3060(v61, v23[13], v63, 0)
            || (v60 & 0xFF000000FFLL) == 0 && (unsigned int)sub_D3060(v61, a2[7].m128i_u32[1], v63, 0)
            || a2[6].m128i_i8[7] )
          {
            v11 = 7;
          }
          else
          {
            v25 = a2[6].m128i_i8[10];
            v26 = (unsigned int)v25;
            if ( v25 < 0 )
              v26 = (unsigned int)sub_214D2(v16);
            sub_CD030(v61, v26, v24);
            a2[12].m128i_i8[4] = v55;
            v11 = sub_1628A0(
                    (__int64)a2,
                    a1,
                    "SELECT sql FROM \"%w\".sqlite_schema WHERE type='table'AND name<>'sqlite_sequence' AND coalesce(rootpage,1)>0",
                    v59);
            if ( !v11 )
            {
              v11 = sub_1628A0((__int64)a2, a1, "SELECT sql FROM \"%w\".sqlite_schema WHERE type='index'", v59);
              if ( !v11 )
              {
                a2[12].m128i_i8[4] = 0;
                v27 = sub_1628A0(
                        (__int64)a2,
                        a1,
                        "SELECT'INSERT INTO vacuum_db.'||quote(name)||' SELECT*FROM\"%w\".'||quote(name)FROM vacuum_db.sq"
                        "lite_schema WHERE type='table'AND coalesce(rootpage,1)>0",
                        v59);
                a2[2].m128i_i32[3] &= ~4u;
                v11 = v27;
                if ( !v27 )
                {
                  v11 = sub_1628A0(
                          (__int64)a2,
                          a1,
                          "INSERT INTO vacuum_db.sqlite_schema SELECT*FROM \"%w\".sqlite_schema WHERE type IN('view','tri"
                          "gger') OR(type='table'AND rootpage=0)",
                          v59);
                  if ( !v11 )
                  {
                    v28 = 0;
                    v29 = (unsigned __int8 *)&unk_1BAAD8;
                    do
                    {
                      v30 = v29[v28];
                      v58 = v29;
                      sub_D5B70(v16, v29[v28], &v64);
                      v31 = sub_110EB0(v61, v30, v64 + (unsigned int)byte_1BAAD9[v28]);
                      if ( v31 )
                      {
                        v11 = v31;
                        goto LABEL_16;
                      }
                      v28 += 2;
                      v29 = v58;
                    }
                    while ( v28 != 10 );
                    if ( a4 )
                    {
                      v11 = sub_119A70(v61, v30);
                    }
                    else
                    {
                      if ( *(_BYTE *)(v16 + 17) )
                        sub_CC740(v16);
                      if ( *(_BYTE *)(v61 + 17) )
                        sub_CC740(v61);
                      v38 = *(_QWORD *)(**(_QWORD **)(v16 + 8) + 72LL);
                      if ( !*(_QWORD *)v38
                        || (v39 = *(_QWORD *)(v61 + 8),
                            v40 = *(int *)(v39 + 52),
                            v32 = *(unsigned int *)(v39 + 64),
                            v65 = v32 * v40,
                            !*(_QWORD *)v38)
                        || (v41 = 11,
                            v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64, unsigned __int8 *))(*(_QWORD *)v38 + 80LL))(
                                    v38,
                                    11,
                                    &v65,
                                    v33,
                                    v34,
                                    v29),
                            (v11 = v42) == 0)
                        || v42 == 12 )
                      {
                        v43 = &v65;
                        for ( i = 18; i; --i )
                        {
                          *(_DWORD *)v43 = 0;
                          v43 = (__int64 *)((char *)v43 + 4);
                        }
                        v41 = 0x7FFFFFFF;
                        v45 = *(_QWORD *)v61;
                        v69 = v61;
                        v66 = v16;
                        v67 = 1;
                        v68 = v45;
                        sub_119AF0((__int64)&v65, 0x7FFFFFFF, v32);
                        v11 = sub_11CEB0((__int64)&v65);
                        if ( v11 )
                        {
                          v49 = *(__int64 **)(v66 + 8);
                          if ( !*(_BYTE *)(*v49 + 16) )
                            sub_CBBE0(*v49);
                        }
                        else
                        {
                          *(_WORD *)(*(_QWORD *)(v16 + 8) + 40LL) &= ~2u;
                        }
                      }
                      if ( *(_BYTE *)(v61 + 17) )
                      {
                        v56 = *(_DWORD *)(v61 + 20);
                        *(_DWORD *)(v61 + 20) = v56 - 1;
                        if ( v56 == 1 )
                          sub_CC7D0(v61, v41, v32);
                      }
                      if ( *(_BYTE *)(v16 + 17) )
                      {
                        if ( (*(_DWORD *)(v16 + 20))-- == 1 )
                          sub_CC7D0(v16, v41, v32);
                      }
                      if ( !v11 )
                      {
                        v11 = sub_119A70(v61, v41);
                        if ( !v11 )
                        {
                          v47 = sub_214D2(v61);
                          sub_CD030(v16, v47, v48);
                          v11 = sub_D3060(v16, *(unsigned int *)(*(_QWORD *)(v61 + 8) + 52LL), v63, 1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v63 = sub_CC900(v16, (__int64)a1);
      sub_CCE00(v61, *(unsigned int *)(*(_QWORD *)(a2[2].m128i_i64[0] + v57 + 24) + 116LL));
      v36 = sub_CCE90(v16, 0, v35);
      sub_CCE90(v61, v36, v37);
      sub_CCF50(v61, 33);
      v11 = sub_162780((__int64)a2, a1, (__int64)"BEGIN", a7);
      if ( !v11 )
      {
        v11 = 2;
        goto LABEL_22;
      }
    }
LABEL_16:
    a2[12].m128i_i8[4] = 0;
    a2[2].m128i_i32[3] = v52;
    a2[3].m128i_i64[0] = v51;
    a2[7].m128i_i64[1] = v53;
    a2[8].m128i_i64[0] = v54;
    a2[6].m128i_i8[14] = v62;
    sub_D3060(v16, 0xFFFFFFFFLL, 0, 1);
    a2[6].m128i_i8[5] = 1;
    if ( v18 )
    {
      sub_11C990(*(_QWORD *)(v18 + 8));
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 24) = 0;
    }
    goto LABEL_18;
  }
  if ( byte_1BAD40[*(_WORD *)(a4 + 20) & 0x3F] == 3 )
  {
    v50 = a3;
    v13 = (char *)sub_D9DB0(a4, 1u, a7, a3, (int)byte_1BAD40, a5, a6);
    LODWORD(a3) = v50;
    a2[4].m128i_i32[3] = a2[4].m128i_i32[3] & 0xFFFFFFF8 | 6;
    goto LABEL_10;
  }
  v11 = 1;
  sub_DC7E0(a1, (__int64)a2, "non-text filename");
  return v11;
}
