void __fastcall sub_15BC60(__m128i *a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  char v13; // r8
  const char *v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int8 *v18; // r11
  _QWORD *i; // rax
  int v20; // eax
  char v21; // al
  __int64 *v22; // rax
  unsigned __int8 *v23; // rax
  __int64 *v24; // r13
  unsigned __int8 *v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  unsigned int v30; // r12d
  unsigned int j; // edi
  __int64 v32; // rax
  unsigned int v33; // r13d
  unsigned int v34; // edx
  __int64 v35; // rsi
  int v36; // edx
  unsigned __int8 *v37; // r12
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rbp
  __int64 v44; // rsi
  unsigned __int8 *v45; // r12
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __m128i *v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r10d
  __int64 *v52; // rax
  int v53; // r10d
  int v55; // [rsp+Ch] [rbp-5Ch]
  __int64 v56; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v57; // [rsp+18h] [rbp-50h]
  __int64 v58; // [rsp+18h] [rbp-50h]
  __int64 *v59; // [rsp+20h] [rbp-48h]
  __int64 *v60; // [rsp+20h] [rbp-48h]
  __int64 *v61; // [rsp+28h] [rbp-40h]
  unsigned int v62; // [rsp+28h] [rbp-40h]
  int v63; // [rsp+28h] [rbp-40h]

  v6 = a1->m128i_i64[0];
  if ( !*(_BYTE *)(a1->m128i_i64[0] + 103) && !(unsigned int)sub_143A40((__int64 **)a1, a5) )
  {
    v9 = a2 + 8;
    if ( a4 )
    {
      ++*(_BYTE *)(v6 + 107);
      v10 = sub_144470(a1->m128i_i64, a3, v9, a5);
      --*(_BYTE *)(v6 + 107);
      v11 = v10;
      if ( !v10 )
      {
        sub_11C8A0((__int64)a1, *(_BYTE **)(a2 + 16));
        sub_E23E0((__int64)a1);
        goto LABEL_2;
      }
    }
    else
    {
      v11 = sub_144470(a1->m128i_i64, a3, v9, a5);
      if ( !v11 )
        goto LABEL_2;
    }
    v12 = *(_QWORD *)(v11 + 96);
    if ( v12 )
    {
      v55 = sub_CFB20(v6, v12);
      if ( v13 == 1 && (unsigned int)sub_136CC0((__int64)a1, v11) )
        goto LABEL_2;
      v14 = "sqlite_master";
      v56 = 32LL * v55;
      if ( v55 == 1 )
        v14 = "sqlite_temp_master";
    }
    else
    {
      if ( *(_BYTE *)(v11 + 63) == 1 && (unsigned int)sub_136CC0((__int64)a1, v11) )
        goto LABEL_2;
      v56 = -1048576;
      v55 = -32768;
      v14 = "sqlite_master";
    }
    v15 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + v56);
    if ( !(unsigned int)sub_E4020((__int64)a1, 9, (__int64)v14, 0, v15) )
    {
      if ( a3 )
      {
        v16 = 0;
        v17 = 2 * (unsigned int)(v55 != 1) + 15;
      }
      else if ( *(_BYTE *)(v11 + 63) == 1 )
      {
        for ( i = *(_QWORD **)(v11 + 80); i; i = (_QWORD *)i[5] )
        {
          if ( v6 == *i )
            break;
        }
        v17 = 30;
        v16 = *(_QWORD *)(i[1] + 8LL);
      }
      else
      {
        v16 = 0;
        v17 = 2 * (unsigned int)(v55 == 1) + 11;
      }
      if ( !(unsigned int)sub_E4020((__int64)a1, v17, *(_QWORD *)v11, v16, v15)
        && !(unsigned int)sub_E4020((__int64)a1, 9, *(_QWORD *)v11, 0, v15) )
      {
        v18 = *(unsigned __int8 **)v11;
        if ( !*(_QWORD *)v11 || (unsigned int)sub_CA590(*(unsigned __int8 **)v11, "sqlite_", 7) )
        {
          v20 = *(_DWORD *)(v11 + 48);
          if ( (v20 & 0x1000) != 0
            && (*(_BYTE *)(v6 + 51) & 0x10) != 0
            && !*(_QWORD *)(v6 + 560)
            && !*(_DWORD *)(v6 + 220)
            && (*(int *)(v6 + 532) <= 0 || *(_QWORD *)(v6 + 568))
            || (v20 & 0x8000) != 0 )
          {
            goto LABEL_21;
          }
        }
        else if ( v18 == (unsigned __int8 *)-7LL
               || (v57 = v18 + 7, (unsigned int)sub_CA590(v18 + 7, (unsigned __int8 *)"stat", 4))
               && (unsigned int)sub_CA590(v57, "parameters", 10) )
        {
LABEL_21:
          sub_DBD10((__int64)a1, "table %s may not be dropped", (const char *)v18);
          goto LABEL_2;
        }
        v21 = *(_BYTE *)(v11 + 63);
        if ( a3 )
        {
          if ( v21 != 2 )
          {
            sub_DBD10((__int64)a1, "use DROP TABLE to delete table %s", (const char *)v18);
            goto LABEL_2;
          }
          if ( a1[1].m128i_i64[0] || sub_E2050(a1->m128i_i64) )
          {
            sub_11C930((__int64)a1, 1, v55);
            v58 = a1->m128i_i64[0];
            goto LABEL_52;
          }
        }
        else
        {
          if ( v21 == 2 )
          {
            sub_DBD10((__int64)a1, "use DROP VIEW to delete view %s", (const char *)v18);
            goto LABEL_2;
          }
          if ( a1[1].m128i_i64[0] || sub_E2050(a1->m128i_i64) )
          {
            sub_11C930((__int64)a1, 1, v55);
            sub_15B9F0(a1, v55, (__int64)"tbl", *(_QWORD *)v11);
            v58 = a1->m128i_i64[0];
            if ( (*(_BYTE *)(a1->m128i_i64[0] + 49) & 0x40) != 0 && !*(_BYTE *)(v11 + 63) )
            {
              v59 = (__int64 *)a1[1].m128i_i64[0];
              if ( !v59 )
                v59 = sub_E2050(a1->m128i_i64);
              if ( sub_C2AB0(*(_QWORD *)(v11 + 96) + 80LL, *(unsigned __int8 **)v11, nullptr)[2] )
              {
                a1[13].m128i_i8[7] = 1;
                v22 = sub_DDB50(v58, (int *)a2, 0);
                sub_14EFA0((__int64)a1, v22, 0);
                a1[13].m128i_i8[7] = 0;
                if ( (*(_BYTE *)(v58 + 50) & 8) != 0 )
                {
LABEL_51:
                  v58 = a1->m128i_i64[0];
                  goto LABEL_52;
                }
                v53 = 0;
              }
              else
              {
                v50 = *(_QWORD *)(v11 + 72);
                if ( !v50 )
                  goto LABEL_51;
                if ( !*(_BYTE *)(v50 + 44) && (*(_BYTE *)(v58 + 50) & 8) == 0 )
                {
                  do
                  {
                    v50 = *(_QWORD *)(v50 + 8);
                    if ( !v50 )
                      goto LABEL_51;
                  }
                  while ( !*(_BYTE *)(v50 + 44) );
                }
                v51 = a1[4].m128i_i32[1] - 1;
                a1[4].m128i_i32[1] = v51;
                v62 = v51;
                sub_E1710((__int64)v59, 48, 1u, v51, 0);
                a1[13].m128i_i8[7] = 1;
                v52 = sub_DDB50(v58, (int *)a2, 0);
                sub_14EFA0((__int64)a1, v52, 0);
                a1[13].m128i_i8[7] = 0;
                v53 = v62;
                if ( (*(_BYTE *)(v58 + 50) & 8) != 0 )
                {
LABEL_105:
                  if ( v53 )
                    sub_E0BB0((__int64)v59, v53);
                  goto LABEL_51;
                }
              }
              v63 = v53;
              sub_E1710((__int64)v59, 48, 0, *((_DWORD *)v59 + 36) + 2, 0);
              sub_E2080(a1->m128i_i64, 0x313u, 2u, 0, -1, 4u);
              v53 = v63;
              goto LABEL_105;
            }
LABEL_52:
            v61 = (__int64 *)(*(_QWORD *)(v58 + 32) + v56);
            v60 = (__int64 *)a1[1].m128i_i64[0];
            if ( !v60 )
              v60 = sub_E2050(a1->m128i_i64);
            sub_11C930((__int64)a1, 1, v55);
            if ( *(_BYTE *)(v11 + 63) == 1 )
              sub_E1710((__int64)v60, 170, 0, 0, 0);
            v23 = sub_CFF50(a1->m128i_i64[0], (unsigned __int8 **)v11);
            if ( v23 )
            {
              v24 = (__int64 *)v23;
              do
              {
                sub_15BAC0(a1, v24);
                v24 = (__int64 *)v24[8];
              }
              while ( v24 );
            }
            v25 = *(unsigned __int8 **)v11;
            v26 = *v61;
            if ( (*(_BYTE *)(v11 + 48) & 8) != 0 )
            {
              sub_15B750(a1, "DELETE FROM %Q.sqlite_sequence WHERE name=%Q", v26, v25);
              v25 = *(unsigned __int8 **)v11;
              v26 = *v61;
            }
            sub_15B750(a1, "DELETE FROM %Q.sqlite_master WHERE tbl_name=%Q and type!='trigger'", v26, v25);
            if ( a3 )
            {
LABEL_81:
              if ( *(_BYTE *)(v11 + 63) != 1 )
              {
LABEL_82:
                v37 = *(unsigned __int8 **)v11;
                v38 = sub_E1710((__int64)v60, 151, v55, 0, 0);
                sub_DCC50((__int64)v60, v38, (__int64)v37, 0, v39, v40);
                sub_E2460(a1->m128i_i64[0], a1[1].m128i_i64[0], v55);
                v41 = *(_QWORD *)(v58 + 32);
                v42 = *(_QWORD *)(v41 + v56 + 24);
                if ( (*(_BYTE *)(v42 + 114) & 2) != 0 )
                {
                  v43 = *(_QWORD **)(v42 + 16);
                  if ( v43 )
                  {
                    do
                    {
                      v44 = v43[2];
                      if ( *(_BYTE *)(v44 + 63) == 2 )
                        sub_D78A0(v58, v44);
                      v43 = (_QWORD *)*v43;
                    }
                    while ( v43 );
                    v41 = *(_QWORD *)(v58 + 32);
                  }
                  *(_WORD *)(*(_QWORD *)(v41 + v56 + 24) + 114LL) &= ~2u;
                }
                goto LABEL_2;
              }
            }
            else if ( *(_BYTE *)(v11 + 63) != 1 )
            {
              v30 = *(_DWORD *)(v11 + 40);
              for ( j = 0; ; j = v33 )
              {
                v32 = *(_QWORD *)(v11 + 16);
                if ( v30 >= j && j )
                {
                  if ( !v32 )
                    goto LABEL_81;
                  v33 = 0;
                }
                else
                {
                  v33 = v30;
                  if ( !v32 )
                    goto LABEL_72;
                }
                do
                {
                  v34 = *(_DWORD *)(v32 + 88);
                  LOBYTE(v27) = j == 0 || j > v34;
                  if ( (_BYTE)v27 && v33 < v34 )
                    v33 = *(_DWORD *)(v32 + 88);
                  v32 = *(_QWORD *)(v32 + 40);
                }
                while ( v32 );
LABEL_72:
                if ( !v33 )
                  goto LABEL_81;
                v35 = *(_QWORD *)(v11 + 96);
                v36 = -32768;
                if ( v35 )
                  v36 = sub_CFB20(a1->m128i_i64[0], v35);
                sub_24922((__int64)a1, v33, v36, v27, v28, v29);
              }
            }
            v45 = *(unsigned __int8 **)v11;
            v46 = sub_E1710((__int64)v60, 172, v55, 0, 0);
            sub_DCC50((__int64)v60, v46, (__int64)v45, 0, v47, v48);
            v49 = (__m128i *)a1[10].m128i_i64[0];
            if ( !v49 )
              v49 = a1;
            v49[2].m128i_i8[1] = 1;
            goto LABEL_82;
          }
        }
      }
    }
  }
LABEL_2:
  sub_D8260(v6, (_QWORD *)a2);
}
