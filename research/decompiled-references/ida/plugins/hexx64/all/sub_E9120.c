__int64 __fastcall sub_E9120(__int64 *a1)
{
  unsigned int tinfo_details; // ebx
  char tinfo_property; // al
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  _QWORD *v14; // rdi
  int v15; // r9d
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r13
  __int64 v20; // r15
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // r15
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm0
  int tinfo_size; // r12d
  int v29; // eax
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // [rsp+18h] [rbp-110h] BYREF
  __int64 v36; // [rsp+20h] [rbp-108h] BYREF
  __int64 v37; // [rsp+28h] [rbp-100h]
  int v38; // [rsp+30h] [rbp-F8h]
  __int64 v39; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+48h] [rbp-E0h]
  int v41; // [rsp+58h] [rbp-D0h]
  __int64 v42; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+68h] [rbp-C0h]
  int v44; // [rsp+78h] [rbp-B0h]
  __int64 v45; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+88h] [rbp-A0h]
  __int64 v47; // [rsp+98h] [rbp-90h]
  __int64 v48; // [rsp+A0h] [rbp-88h]
  __int64 v49; // [rsp+A8h] [rbp-80h]
  __int128 v50; // [rsp+B0h] [rbp-78h]
  __int64 v51; // [rsp+C0h] [rbp-68h]
  __int128 v52; // [rsp+C8h] [rbp-60h]
  char v53; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v54; // [rsp+E8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 16;
  v46 = 0;
  v50 = 0;
  v52 = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details
    || (int)v46 < 0
    || (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) == 0)
    || (tinfo_property & 0xFu) > 8 )
  {
    tinfo_details = 0;
    goto LABEL_5;
  }
  v11 = a1[1];
  v12 = *a1;
  v13.m128i_i64[0] = 0;
  v39 = 0;
  v14 = *(_QWORD **)(v11 + 784);
  v15 = *(_DWORD *)(v12 + 72);
  v41 = 0;
  v42 = 0;
  v44 = 0;
  v36 = 0;
  v37 = 0;
  v38 = -1;
  v40 = 0;
  v43 = 0;
  sub_1109A0(v14, &v39, &v42, 64, (unsigned __int64 **)&v36, v15);
  v16 = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504) + 80LL);
  a1[42] = (v16 - 1 + a1[41] + *((_QWORD *)&v50 + 1)) & -v16;
  sub_DFE70((__int64)a1, (unsigned __int64 *)&v36);
  sub_E60E0(&v35, (__int64)a1, (__int64)&v45, 0, 0.0);
  if ( (_BYTE)v35
    && ((tinfo_size = get_tinfo_size(), v29 = get_tinfo_size(), tinfo_size < v29)
     || tinfo_size == v29 && (get_tinfo_property() & 0xF) == 9) )
  {
    copy_tinfo_t();
    create_tinfo();
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t();
  v17 = v36;
  if ( v36 )
  {
    v18 = *(_QWORD *)v36;
    if ( !v37 )
    {
      *(_QWORD *)v36 = v36 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v36 & 3LL;
      v30 = v36;
      v31 = (__m128i)(unsigned __int64)v36;
      *(_QWORD *)v36 &= ~1uLL;
      v13 = _mm_unpacklo_epi64(v31, v31);
      *(__m128i *)(v30 + 8) = v13;
      *(_QWORD *)v36 |= 2uLL;
LABEL_42:
      if ( v36 )
        qfree(v36);
      goto LABEL_44;
    }
    v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_41:
      *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | v18 & 3;
      v26 = v36;
      v27 = (__m128i)(unsigned __int64)v36;
      *(_QWORD *)v36 &= ~1uLL;
      v13 = _mm_unpacklo_epi64(v27, v27);
      *(__m128i *)(v26 + 8) = v13;
      *(_QWORD *)v36 |= 2uLL;
      v37 = 0;
      goto LABEL_42;
    }
    v20 = *(_QWORD *)(v19 + 8);
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      v23 = *(_QWORD *)(v19 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_51;
      goto LABEL_31;
    }
    v21 = *(__int64 **)(v20 + 8);
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = *(__int64 **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
LABEL_59:
        v34 = *(_QWORD *)(v20 + 24);
        if ( v34 )
        {
          *(_QWORD *)(v20 + 32) = 0;
          qfree(v34);
        }
        *(_QWORD *)v20 |= 2uLL;
LABEL_28:
        if ( v20 )
          qfree(v20);
        v23 = *(_QWORD *)(v19 + 16);
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
LABEL_37:
          if ( (*(_BYTE *)v19 & 2) != 0 )
          {
LABEL_38:
            if ( v18 > 3 )
              qfree(v18 & 0xFFFFFFFFFFFFFFFCLL);
            v17 = v36;
            v18 = *(_QWORD *)v36;
            goto LABEL_41;
          }
LABEL_51:
          v32 = *(_QWORD *)(v19 + 24);
          if ( v32 )
          {
            *(_QWORD *)(v19 + 32) = 0;
            qfree(v32);
          }
          *(_QWORD *)v19 |= 2uLL;
          goto LABEL_38;
        }
LABEL_31:
        v24 = *(__int64 **)(v23 + 8);
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
          v25 = *(__int64 **)(v23 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
            goto LABEL_55;
        }
        else
        {
          sub_E3E30(v24);
          v25 = *(__int64 **)(v23 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
            goto LABEL_34;
        }
        sub_E3E30(v25);
LABEL_34:
        if ( (*(_BYTE *)v23 & 2) != 0 )
        {
LABEL_35:
          if ( v23 )
            qfree(v23);
          goto LABEL_37;
        }
LABEL_55:
        v33 = *(_QWORD *)(v23 + 24);
        if ( v33 )
        {
          *(_QWORD *)(v23 + 32) = 0;
          qfree(v33);
        }
        *(_QWORD *)v23 |= 2uLL;
        goto LABEL_35;
      }
    }
    else
    {
      sub_E3E30(v21);
      v22 = *(__int64 **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_27;
    }
    sub_E3E30(v22);
LABEL_27:
    if ( (*(_BYTE *)v20 & 2) != 0 )
      goto LABEL_28;
    goto LABEL_59;
  }
LABEL_44:
  sub_66C80((__int64)&v42, *(double *)v13.m128i_i64);
  sub_66C80((__int64)&v39, *(double *)v13.m128i_i64);
LABEL_5:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v4 = v45;
  if ( v45 )
  {
    v5 = v46;
    if ( (_QWORD)v46 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 80 * v6);
        clear_tinfo_t();
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc();
        v4 = v45;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v46 = 0;
    qfree(v4);
  }
  return tinfo_details;
}

