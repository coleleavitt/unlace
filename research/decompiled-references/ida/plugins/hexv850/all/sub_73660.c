__int64 __fastcall sub_73660(_QWORD *a1, __m128i *a2, const __m128i *a3)
{
  const __m128i *v3; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 (__fastcall *v15)(__int64, int); // rax
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, int, int); // rax
  signed int v18; // r13d
  __int64 (__fastcall *v19)(__int64, int); // rax
  int v20; // esi
  _DWORD *v21; // rax
  _DWORD *v22; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 i; // r13
  __int64 (__fastcall *v30)(__int64, int, int); // rax
  int v31; // ebx
  int v32; // r8d
  int v33; // eax
  signed int v34; // r13d
  int v35; // esi
  __int64 (__fastcall *v36)(__int64, int); // rax
  _QWORD *v37; // r12
  __int64 v38; // rbp
  int v39; // edx
  int v40; // eax
  __int64 (__fastcall *v41)(__int64, int, int); // rax
  unsigned int v42; // edx
  signed int v43; // eax
  int v44; // eax
  signed int v46; // [rsp+8h] [rbp-60h]
  const __m128i *v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  int v50; // [rsp+10h] [rbp-58h]
  unsigned __int8 v51; // [rsp+17h] [rbp-51h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v5 = a3[14].m128i_u64[0];
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_QWORD *)v5;
  if ( !a3[14].m128i_i64[1] )
  {
    *(_QWORD *)v5 = *(_QWORD *)v5 & 3LL | v5 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a3[14].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                              (__m128i)a3[14].m128i_u64[0],
                                              (__m128i)a3[14].m128i_u64[0]);
    *(_QWORD *)a3[14].m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a3[14].m128i_i64[0] |= 2uLL;
    goto LABEL_14;
  }
  v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
  v8 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v8 & 2) == 0 )
  {
    v9 = (__int64 *)v7[1];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_65;
    }
    else
    {
      sub_67200(v9);
      v10 = (__int64 *)v7[2];
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_8;
    }
    sub_67200(v10);
LABEL_8:
    v8 = *v7;
    if ( (*v7 & 2) != 0 )
    {
LABEL_9:
      if ( v6 > 3 )
        qfree();
      v5 = v3[14].m128i_u64[0];
      v6 = *(_QWORD *)v5;
      goto LABEL_12;
    }
LABEL_65:
    *v7 = v8 | 2;
    goto LABEL_9;
  }
LABEL_12:
  *(_QWORD *)v5 = v6 & 3 | v5 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v3[14].m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v3[14].m128i_u64[0], (__m128i)v3[14].m128i_u64[0]);
  *(_QWORD *)v3[14].m128i_i64[0] &= ~1uLL;
  *(_QWORD *)v3[14].m128i_i64[0] |= 2uLL;
LABEL_13:
  v3[14].m128i_i64[1] = 0;
LABEL_14:
  v51 = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 160LL))(a1, 0);
  v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v12 != sub_605C0 )
    goto LABEL_38;
LABEL_15:
  if ( v11 != *((_DWORD *)a1 + 14) )
  {
    do
    {
      v13 = (int)v11;
      *(_DWORD *)(v3[17].m128i_i64[1] + 4LL * (int)v11) &= ~4u;
      v14 = *a1;
      if ( (*(_BYTE *)(v3[17].m128i_i64[1] + 4LL * (int)v11) & 2) == 0 )
        goto LABEL_36;
      v15 = *(__int64 (__fastcall **)(__int64, int))(v14 + 96);
      if ( v15 == sub_60610 )
      {
        if ( !a1[7] )
          goto LABEL_19;
        v16 = *(_DWORD *)(a1[6] + 24LL * (int)v11 + 8);
      }
      else
      {
        v16 = v15((__int64)a1, v11);
        v13 = (int)v11;
      }
      if ( v16 <= 0 )
      {
LABEL_19:
        if ( !under_debugger )
          sub_37CFE0(50419);
        BUG();
      }
      v14 = *a1;
      v17 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v17 == sub_60650 )
      {
        v18 = **(_DWORD **)(a1[6] + 24 * v13);
      }
      else
      {
        v48 = v13;
        v43 = v17((__int64)a1, v11, 0);
        v14 = *a1;
        v13 = v48;
        v18 = v43;
      }
      if ( v18 == v11 )
        goto LABEL_36;
      v19 = *(__int64 (__fastcall **)(__int64, int))(v14 + 104);
      if ( v19 == sub_60630 )
      {
        if ( !a1[10] )
          goto LABEL_36;
        v20 = *(_DWORD *)(a1[9] + 24 * v13 + 8);
      }
      else
      {
        v49 = v13;
        v44 = v19((__int64)a1, v11);
        v14 = *a1;
        v13 = v49;
        v20 = v44;
      }
      if ( v20 )
      {
        v21 = (_DWORD *)v3[12].m128i_i64[1];
        v22 = &v21[2 * v3[13].m128i_i64[0]];
        if ( v21 == v22 )
          goto LABEL_40;
        while ( v11 != *v21 || v18 != v21[1] )
        {
          v21 += 2;
          if ( v22 == v21 )
            goto LABEL_40;
        }
        if ( v21 == v22 )
        {
LABEL_40:
          if ( v20 > 0 )
          {
            v24 = 3 * v13;
            v25 = 0;
            v46 = v18;
            v26 = v20;
            v50 = v20;
            v27 = 8 * v24;
            v28 = v11;
            for ( i = 0; i != v26; ++i )
            {
              v30 = *(__int64 (__fastcall **)(__int64, int, int))(v14 + 120);
              v31 = i;
              v32 = i;
              if ( v30 == sub_60670 )
              {
                v33 = *(_DWORD *)(*(_QWORD *)(a1[9] + v27) + 4 * i);
              }
              else
              {
                v53 = v27;
                v52 = v26;
                v33 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64, _QWORD))v30)(
                        a1,
                        v28,
                        (unsigned int)i,
                        v25,
                        (unsigned int)i);
                v14 = *a1;
                v32 = i;
                v27 = v53;
                v26 = v52;
                v28 = (unsigned int)v28;
              }
              if ( (unsigned __int64)v33 < v3[18].m128i_i64[0] && (*(_BYTE *)(v3[17].m128i_i64[1] + 4LL * v33) & 1) != 0 )
              {
                v11 = v28;
                v34 = v46;
                v35 = v50;
                goto LABEL_47;
              }
            }
            v39 = v31;
            v34 = v46;
            v11 = v28;
            v35 = v50;
            v32 = v39 + 1;
LABEL_47:
            if ( v35 == v32 )
            {
              v36 = *(__int64 (__fastcall **)(__int64, int))(v14 + 104);
              v47 = v3;
              v37 = a1;
              v38 = v27;
              if ( v36 == sub_60630 )
              {
LABEL_49:
                if ( v37[10] )
                {
                  v40 = *(_DWORD *)(v37[9] + v38 + 8);
                  goto LABEL_54;
                }
              }
              else
              {
                while ( 1 )
                {
                  v40 = v36((__int64)v37, v11);
LABEL_54:
                  if ( !v40 )
                    break;
                  v41 = *(__int64 (__fastcall **)(__int64, int, int))(*v37 + 120LL);
                  if ( v41 == sub_60670 )
                    v42 = **(_DWORD **)(v37[9] + v38);
                  else
                    v42 = v41((__int64)v37, v11, 0);
                  sub_6E1A0((__int64)v37, a2, v42, v11, v42, v34);
                  v36 = *(__int64 (__fastcall **)(__int64, int))(*v37 + 104LL);
                  if ( v36 == sub_60630 )
                    goto LABEL_49;
                }
              }
              a1 = v37;
              v3 = v47;
              sub_688A0((__int64)a1, v11, v34);
              sub_73280(v47, v11, v34);
              v51 = 1;
              v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 160LL))(a1, v11 + 1);
              goto LABEL_37;
            }
          }
        }
      }
LABEL_36:
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v14 + 160))(a1, v11 + 1);
LABEL_37:
      v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
      if ( v12 == sub_605C0 )
        goto LABEL_15;
LABEL_38:
      ;
    }
    while ( v11 != (unsigned int)v12((__int64)a1) );
  }
  return v51;
}

