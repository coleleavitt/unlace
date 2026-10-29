__int64 __fastcall sub_283210(__int64 a1, __int64 a2, int a3, int a4, __m128 a5)
{
  __int8 v6; // r15
  __int64 v7; // rsi
  int tinfo_size; // r13d
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // eax
  _UNKNOWN **v12; // rdx
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r13d
  __int64 v22; // r12
  int v23; // edi
  int v24; // eax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rdi
  int v28; // edx
  __int64 v29; // rdi
  char v30; // r12
  __m128i v33; // [rsp+20h] [rbp-B8h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-A8h]
  int v35; // [rsp+38h] [rbp-A0h]
  int v36; // [rsp+3Ch] [rbp-9Ch]
  __int64 v37; // [rsp+40h] [rbp-98h] BYREF
  __int64 v38; // [rsp+48h] [rbp-90h] BYREF
  __int64 v39; // [rsp+50h] [rbp-88h]
  __int64 v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h] BYREF
  __int64 v42; // [rsp+68h] [rbp-70h]
  __int128 v43; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+80h] [rbp-58h]
  int v45; // [rsp+88h] [rbp-50h]
  __int16 v46; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v35 = a4;
  v47 = __readfsqword(0x28u);
  v37 = 0;
  copy_tinfo_t();
  v38 = 0;
  copy_tinfo_t();
  v41 = 0;
  v42 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    a5.m128_u64[0] = 0;
    v40 = 0;
    v43 = 0;
    v39 = 0;
    copy_tinfo_t();
    v44 = 0;
    copy_tinfo_t();
    v45 = 0;
    v46 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v43 = v41;
    v41 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 9 )
    {
      v33.m128i_i8[0] = (get_tinfo_property() & 0x2F) == 13;
      goto LABEL_4;
    }
  }
  v33.m128i_i8[0] = 1;
LABEL_4:
  v41 = 0;
  v42 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    a5.m128_u64[0] = 0;
    v40 = 0;
    v43 = 0;
    v39 = 0;
    copy_tinfo_t();
    v44 = 0;
    copy_tinfo_t();
    v45 = 0;
    v46 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    *(_QWORD *)&v43 = v41;
    v41 = 0;
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 9 )
    {
      v6 = (get_tinfo_property() & 0x2F) == 13;
      goto LABEL_7;
    }
  }
  v6 = 1;
LABEL_7:
  v7 = v38;
  tinfo_size = get_tinfo_size();
  v10 = get_tinfo_size();
  v11 = *(_DWORD *)(a1 + 8);
  if ( v11 > 0x45 || (v12 = &off_4E0320 + 2 * (int)v11, (*((_BYTE *)v12 + 11) & 8) == 0) )
  {
    sub_242920(&v41, a2, (__int64)&v37, (__int64)&v38, 0);
    v7 = 3;
    v33.m128i_i8[8] = *(_BYTE *)(a2 + 130);
    if ( a3 != (unsigned int)get_tinfo_property() )
    {
      if ( tinfo_size > v10 )
      {
LABEL_11:
        v13 = 0;
        clear_tinfo_t();
        v33.m128i_i8[0] = 1;
        v14 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( tinfo_size < v10 )
        goto LABEL_28;
      if ( a3 == 1 )
      {
        v6 = 1;
        v13 = 0;
        clear_tinfo_t();
        v33.m128i_i8[0] = 1;
        v14 = *(_DWORD *)(a1 + 8);
        goto LABEL_12;
      }
      if ( (_BYTE)v37 && ((v37 & 0xE) != 0 || (v37 & 0x30) == 0) )
      {
        v36 = v10;
        *(_QWORD *)&v43 = 0;
        v7 = 2;
        *(_QWORD *)&v43 = get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 && (_BYTE)v38 && ((v38 & 0xE) != 0 || (v38 & 0x30) == 0) )
        {
          *(_QWORD *)&v43 = 0;
          v7 = 2;
          *(_QWORD *)&v43 = get_tinfo_property();
          tinfo_property = get_tinfo_property();
          clear_tinfo_t();
          if ( (tinfo_property & 0x3F) != 0x30 )
          {
            v7 = 3;
            LODWORD(tinfo_property) = v36;
            if ( (unsigned int)get_tinfo_property() == 1 || v33.m128i_u8[8] > tinfo_size )
            {
              v7 = 3;
              if ( (unsigned int)get_tinfo_property() == 1 || v33.m128i_u8[8] > v10 )
              {
                v27 = *(_QWORD *)(a1 + 24);
                if ( *(_DWORD *)(v27 + 8) == 61 )
                {
                  if ( tinfo_size >= v33.m128i_u8[8] )
                    goto LABEL_11;
                  v33.m128i_i64[1] = *(_QWORD *)(a1 + 24);
                  if ( sub_281A60(v27, *(double *)a5.m128_u64) < 0 )
                  {
                    v29 = v33.m128i_i64[1];
                    goto LABEL_55;
                  }
                }
                else
                {
                  v7 = 3;
                  if ( (unsigned int)get_tinfo_property() == 2 )
                  {
                    v29 = *(_QWORD *)(a1 + 24);
                    if ( tinfo_size >= v33.m128i_u8[8] )
                      goto LABEL_11;
                    if ( *(_DWORD *)(v29 + 8) != 61 )
                      goto LABEL_55;
                    v28 = tinfo_size;
                    v30 = 1;
                  }
                  else
                  {
                    v28 = tinfo_property;
                    if ( v10 >= v33.m128i_u8[8] )
                      goto LABEL_28;
                    v29 = *(_QWORD *)(a1 + 32);
                    v30 = 0;
                    if ( *(_DWORD *)(v29 + 8) != 61 )
                    {
LABEL_50:
                      v7 = a2;
                      *(_QWORD *)&v43 = 39;
                      v13 = sub_246B40(v29, a2, &v43, *(double *)a5.m128_u64);
                      clear_tinfo_t();
                      goto LABEL_32;
                    }
                  }
                  v36 = v33.m128i_u8[8];
                  LODWORD(tinfo_property) = v28;
                  v33.m128i_i64[1] = v29;
                  if ( sub_281A60(v29, *(double *)a5.m128_u64) < 0 )
                  {
                    if ( v36 > (int)tinfo_property )
                    {
                      v29 = v33.m128i_i64[1];
                      if ( !v30 )
                        goto LABEL_50;
LABEL_55:
                      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 2) <= 0xD )
                        goto LABEL_11;
                      goto LABEL_50;
                    }
                    if ( v30 )
                      goto LABEL_11;
LABEL_28:
                    v13 = 0;
                    clear_tinfo_t();
                    if ( !v33.m128i_i8[0] )
                      goto LABEL_29;
                    v14 = *(_DWORD *)(a1 + 8);
                    v6 = v33.m128i_i8[0];
                    goto LABEL_12;
                  }
                }
              }
            }
          }
        }
      }
    }
    v13 = 0;
LABEL_32:
    clear_tinfo_t();
    if ( !v33.m128i_i8[0] )
      goto LABEL_25;
    v14 = *(_DWORD *)(a1 + 8);
LABEL_12:
    if ( (unsigned int)(v14 - 2) <= 0xD )
      goto LABEL_13;
LABEL_24:
    v13 |= sub_281A80(*(_QWORD *)(a1 + 24), a2, a3, v33.m128i_i8[0], *(double *)a5.m128_u64);
    goto LABEL_25;
  }
  v33.m128i_i8[0] = 0;
  v13 = 0;
  if ( v11 - 2 > 0xD )
    goto LABEL_24;
LABEL_13:
  v15 = j__qalloc_or_throw(64, v7, (__int64)v12, v9);
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v15 = -1;
  *(_DWORD *)(v15 + 8) = 0;
  v17 = v15;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  sub_25AFF0(v15, v16, *(double *)a5.m128_u64);
  v20 = sub_281A80(*(_QWORD *)(a1 + 24), a2, a3, 0, *(double *)a5.m128_u64);
  if ( (_BYTE)v20 )
  {
    v22 = j__qalloc_or_throw(64, a2, v18, v19);
    v23 = *(_DWORD *)(a1 + 8);
    v33 = *(__m128i *)(a1 + 24);
    v24 = sub_244FD0(v23);
    v25 = _mm_loadl_epi64(&v33);
    *(_QWORD *)(v22 + 12) = -1;
    v26 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    *(_DWORD *)(v22 + 8) = v24;
    *(_QWORD *)v22 = -1;
    *(_QWORD *)(v22 + 40) = 0;
    a5 = (__m128)_mm_unpacklo_epi64(v25, v26);
    *(_QWORD *)(v22 + 48) = 0;
    *(_DWORD *)(v22 + 56) = 0;
    *(__m128 *)(v22 + 24) = a5;
    *(_QWORD *)(a1 + 32) = v22;
    sub_2441C0(v22, *(_QWORD *)(a2 + 112), 0, *(double *)a5.m128_u64);
    sub_281F10(*(_QWORD *)(a1 + 32), a2, (unsigned __int8)v35, a1, a5);
    *(_QWORD *)(a1 + 24) = v17;
    v13 = v20;
    *(_DWORD *)(a1 + 8) = 2;
  }
  else if ( v17 )
  {
    sub_255630(v17, *(double *)a5.m128_u64);
    clear_tinfo_t();
    j__qfree(v17);
  }
LABEL_25:
  if ( v6 )
LABEL_29:
    v13 |= sub_281A80(*(_QWORD *)(a1 + 32), a2, a3, 1, *(double *)a5.m128_u64);
  clear_tinfo_t();
  clear_tinfo_t();
  return v13;
}

