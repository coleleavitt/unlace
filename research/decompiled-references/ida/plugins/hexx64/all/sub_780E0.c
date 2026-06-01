__int64 __fastcall sub_780E0(_QWORD *a1, __m128i *a2, const __m128i *a3, __m128 a4)
{
  const __m128i *v4; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 (__fastcall *v18)(__int64, int); // rax
  int v19; // eax
  __int64 (__fastcall *v20)(__int64, int, int); // rax
  signed int v21; // r13d
  __int64 (__fastcall *v22)(__int64, int); // rax
  int v23; // esi
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 i; // r13
  __int64 (__fastcall *v33)(__int64, int, int); // rax
  int v34; // ebx
  int v35; // r8d
  int v36; // eax
  signed int v37; // r13d
  int v38; // esi
  __int64 (__fastcall *v39)(__int64, int); // rax
  _QWORD *v40; // r12
  __int64 v41; // rbp
  int v42; // edx
  int v43; // eax
  __int64 (__fastcall *v44)(__int64, int, int); // rax
  unsigned int v45; // edx
  signed int v46; // eax
  int v47; // eax
  signed int v49; // [rsp+8h] [rbp-60h]
  const __m128i *v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  int v53; // [rsp+10h] [rbp-58h]
  unsigned __int8 v54; // [rsp+17h] [rbp-51h]
  __int64 v55; // [rsp+18h] [rbp-50h]
  __int64 v56; // [rsp+20h] [rbp-48h]

  v4 = a3;
  v6 = a3[14].m128i_i64[0];
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_QWORD *)v6;
  if ( !a3[14].m128i_i64[1] )
  {
    *(_QWORD *)v6 = *(_QWORD *)v6 & 3LL | v6 & 0xFFFFFFFFFFFFFFFCLL;
    v8 = a3[14].m128i_i64[0];
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
    *(__m128 *)(v8 + 8) = a4;
    *(_QWORD *)a3[14].m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a3[14].m128i_i64[0] |= 2uLL;
    goto LABEL_14;
  }
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
  v10 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v10 & 2) == 0 )
  {
    v11 = (__int64 *)v9[1];
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v12 = (__int64 *)v9[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_65;
    }
    else
    {
      sub_6BC80(v11);
      v12 = (__int64 *)v9[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
        goto LABEL_8;
    }
    sub_6BC80(v12);
LABEL_8:
    v10 = *v9;
    if ( (*v9 & 2) != 0 )
    {
LABEL_9:
      if ( v7 > 3 )
        qfree(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v6 = v4[14].m128i_i64[0];
      v7 = *(_QWORD *)v6;
      goto LABEL_12;
    }
LABEL_65:
    *v9 = v10 | 2;
    goto LABEL_9;
  }
LABEL_12:
  *(_QWORD *)v6 = v7 & 3 | v6 & 0xFFFFFFFFFFFFFFFCLL;
  v13 = v4[14].m128i_i64[0];
  a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
  *(__m128 *)(v13 + 8) = a4;
  *(_QWORD *)v4[14].m128i_i64[0] &= ~1uLL;
  *(_QWORD *)v4[14].m128i_i64[0] |= 2uLL;
LABEL_13:
  v4[14].m128i_i64[1] = 0;
LABEL_14:
  v54 = 0;
  v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 160LL))(a1, 0);
  v15 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
  if ( v15 != sub_65040 )
    goto LABEL_38;
LABEL_15:
  if ( v14 != *((_DWORD *)a1 + 14) )
  {
    do
    {
      v16 = (int)v14;
      *(_DWORD *)(v4[17].m128i_i64[1] + 4LL * (int)v14) &= ~4u;
      v17 = *a1;
      if ( (*(_BYTE *)(v4[17].m128i_i64[1] + 4LL * (int)v14) & 2) == 0 )
        goto LABEL_36;
      v18 = *(__int64 (__fastcall **)(__int64, int))(v17 + 96);
      if ( v18 == sub_65090 )
      {
        if ( !a1[7] )
          goto LABEL_19;
        v19 = *(_DWORD *)(a1[6] + 24LL * (int)v14 + 8);
      }
      else
      {
        v19 = v18((__int64)a1, v14);
        v16 = (int)v14;
      }
      if ( v19 <= 0 )
      {
LABEL_19:
        if ( !under_debugger )
          sub_383060(0xC4F3u, *(double *)a4.m128_u64);
        BUG();
      }
      v17 = *a1;
      v20 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v20 == sub_650D0 )
      {
        v21 = **(_DWORD **)(a1[6] + 24 * v16);
      }
      else
      {
        v51 = v16;
        v46 = v20((__int64)a1, v14, 0);
        v17 = *a1;
        v16 = v51;
        v21 = v46;
      }
      if ( v21 == v14 )
        goto LABEL_36;
      v22 = *(__int64 (__fastcall **)(__int64, int))(v17 + 104);
      if ( v22 == sub_650B0 )
      {
        if ( !a1[10] )
          goto LABEL_36;
        v23 = *(_DWORD *)(a1[9] + 24 * v16 + 8);
      }
      else
      {
        v52 = v16;
        v47 = v22((__int64)a1, v14);
        v17 = *a1;
        v16 = v52;
        v23 = v47;
      }
      if ( v23 )
      {
        v24 = (_DWORD *)v4[12].m128i_i64[1];
        v25 = &v24[2 * v4[13].m128i_i64[0]];
        if ( v24 == v25 )
          goto LABEL_40;
        while ( v14 != *v24 || v21 != v24[1] )
        {
          v24 += 2;
          if ( v25 == v24 )
            goto LABEL_40;
        }
        if ( v24 == v25 )
        {
LABEL_40:
          if ( v23 > 0 )
          {
            v27 = 3 * v16;
            v28 = 0;
            v49 = v21;
            v29 = v23;
            v53 = v23;
            v30 = 8 * v27;
            v31 = v14;
            for ( i = 0; i != v29; ++i )
            {
              v33 = *(__int64 (__fastcall **)(__int64, int, int))(v17 + 120);
              v34 = i;
              v35 = i;
              if ( v33 == sub_650F0 )
              {
                v36 = *(_DWORD *)(*(_QWORD *)(a1[9] + v30) + 4 * i);
              }
              else
              {
                v56 = v30;
                v55 = v29;
                v36 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64, _QWORD))v33)(
                        a1,
                        v31,
                        (unsigned int)i,
                        v28,
                        (unsigned int)i);
                v17 = *a1;
                v35 = i;
                v30 = v56;
                v29 = v55;
                v31 = (unsigned int)v31;
              }
              if ( (unsigned __int64)v36 < v4[18].m128i_i64[0] && (*(_BYTE *)(v4[17].m128i_i64[1] + 4LL * v36) & 1) != 0 )
              {
                v14 = v31;
                v37 = v49;
                v38 = v53;
                goto LABEL_47;
              }
            }
            v42 = v34;
            v37 = v49;
            v14 = v31;
            v38 = v53;
            v35 = v42 + 1;
LABEL_47:
            if ( v38 == v35 )
            {
              v39 = *(__int64 (__fastcall **)(__int64, int))(v17 + 104);
              v50 = v4;
              v40 = a1;
              v41 = v30;
              if ( v39 == sub_650B0 )
              {
LABEL_49:
                if ( v40[10] )
                {
                  v43 = *(_DWORD *)(v40[9] + v41 + 8);
                  goto LABEL_54;
                }
              }
              else
              {
                while ( 1 )
                {
                  v43 = v39((__int64)v40, v14);
LABEL_54:
                  if ( !v43 )
                    break;
                  v44 = *(__int64 (__fastcall **)(__int64, int, int))(*v40 + 120LL);
                  if ( v44 == sub_650F0 )
                    v45 = **(_DWORD **)(v40[9] + v41);
                  else
                    v45 = v44((__int64)v40, v14, 0);
                  sub_72C20((__int64)v40, a2, v45, v14, v45, v37);
                  v39 = *(__int64 (__fastcall **)(__int64, int))(*v40 + 104LL);
                  if ( v39 == sub_650B0 )
                    goto LABEL_49;
                }
              }
              a1 = v40;
              v4 = v50;
              sub_6D320((__int64)a1, v14, v37);
              sub_77D00(v50, v14, v37);
              v54 = 1;
              v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 160LL))(a1, v14 + 1);
              goto LABEL_37;
            }
          }
        }
      }
LABEL_36:
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v17 + 160))(a1, v14 + 1);
LABEL_37:
      v15 = *(__int64 (__fastcall **)(__int64))(*a1 + 56LL);
      if ( v15 == sub_65040 )
        goto LABEL_15;
LABEL_38:
      ;
    }
    while ( v14 != (unsigned int)v15((__int64)a1) );
  }
  return v54;
}

