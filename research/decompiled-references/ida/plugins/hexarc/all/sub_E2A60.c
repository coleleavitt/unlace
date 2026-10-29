__int64 __fastcall sub_E2A60(__int64 *a1)
{
  unsigned int tinfo_details; // ebx
  char tinfo_property; // al
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r9
  int v13; // eax
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r15
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // r15
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  unsigned __int64 *v23; // rax
  __m128i v24; // xmm0
  int tinfo_size; // r12d
  int v26; // eax
  unsigned __int64 *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // [rsp+18h] [rbp-110h] BYREF
  unsigned __int64 *v30; // [rsp+20h] [rbp-108h] BYREF
  __int64 v31; // [rsp+28h] [rbp-100h]
  int v32; // [rsp+30h] [rbp-F8h]
  __int64 v33; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-E0h]
  int v35; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+68h] [rbp-C0h]
  int v38; // [rsp+78h] [rbp-B0h]
  __int64 v39; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+88h] [rbp-A0h]
  __int64 v41; // [rsp+98h] [rbp-90h]
  __int64 v42; // [rsp+A0h] [rbp-88h]
  __int64 v43; // [rsp+A8h] [rbp-80h]
  __int128 v44; // [rsp+B0h] [rbp-78h]
  __int64 v45; // [rsp+C0h] [rbp-68h]
  __int128 v46; // [rsp+C8h] [rbp-60h]
  char v47; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v47 = 16;
  v40 = 0;
  v44 = 0;
  v46 = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details
    || (int)v40 < 0
    || (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) == 0)
    || (tinfo_property & 0xFu) > 8 )
  {
    tinfo_details = 0;
    goto LABEL_5;
  }
  v9 = a1[1];
  v10 = *a1;
  v33 = 0;
  v11 = *(_QWORD *)(v9 + 784);
  v12 = *(unsigned int *)(v10 + 72);
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v30 = nullptr;
  v31 = 0;
  v32 = -1;
  v34 = 0;
  v37 = 0;
  sub_10A2E0(v11, &v33, &v36, 64, &v30, v12);
  v13 = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504) + 80LL);
  a1[42] = (v13 - 1 + a1[41] + *((_QWORD *)&v44 + 1)) & -v13;
  sub_D97B0((__int64)a1, &v30);
  sub_DFA20(&v29, (__int64)a1, (__int64)&v39, 0);
  if ( (_BYTE)v29
    && ((tinfo_size = get_tinfo_size(), v26 = get_tinfo_size(), tinfo_size < v26)
     || tinfo_size == v26 && (get_tinfo_property() & 0xF) == 9) )
  {
    copy_tinfo_t();
    create_tinfo();
  }
  else
  {
    tinfo_details = 0;
  }
  clear_tinfo_t();
  v14 = v30;
  if ( v30 )
  {
    v15 = *v30;
    if ( !v31 )
    {
      *v30 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL | *v30 & 3;
      v27 = v30;
      v28 = (__m128i)(unsigned __int64)v30;
      *v30 &= ~1uLL;
      *(__m128i *)(v27 + 1) = _mm_unpacklo_epi64(v28, v28);
      *v30 |= 2u;
LABEL_42:
      if ( v30 )
        qfree();
      goto LABEL_44;
    }
    v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_41:
      *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | v15 & 3;
      v23 = v30;
      v24 = (__m128i)(unsigned __int64)v30;
      *v30 &= ~1uLL;
      *(__m128i *)(v23 + 1) = _mm_unpacklo_epi64(v24, v24);
      *v30 |= 2u;
      v31 = 0;
      goto LABEL_42;
    }
    v17 = *(_QWORD *)(v16 + 8);
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
      v20 = *(_QWORD *)(v16 + 16);
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_51;
      goto LABEL_31;
    }
    v18 = *(__int64 **)(v17 + 8);
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = *(__int64 **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
LABEL_59:
        if ( *(_QWORD *)(v17 + 24) )
        {
          *(_QWORD *)(v17 + 32) = 0;
          qfree();
        }
        *(_QWORD *)v17 |= 2uLL;
LABEL_28:
        if ( v17 )
          qfree();
        v20 = *(_QWORD *)(v16 + 16);
        if ( (*(_BYTE *)v20 & 2) != 0 )
        {
LABEL_37:
          if ( (*(_BYTE *)v16 & 2) != 0 )
          {
LABEL_38:
            if ( v15 > 3 )
              qfree();
            v14 = v30;
            v15 = *v30;
            goto LABEL_41;
          }
LABEL_51:
          if ( *(_QWORD *)(v16 + 24) )
          {
            *(_QWORD *)(v16 + 32) = 0;
            qfree();
          }
          *(_QWORD *)v16 |= 2uLL;
          goto LABEL_38;
        }
LABEL_31:
        v21 = *(__int64 **)(v20 + 8);
        if ( (*(_BYTE *)v21 & 2) != 0 )
        {
          v22 = *(__int64 **)(v20 + 16);
          if ( (*(_BYTE *)v22 & 2) != 0 )
            goto LABEL_55;
        }
        else
        {
          sub_DD770(v21);
          v22 = *(__int64 **)(v20 + 16);
          if ( (*(_BYTE *)v22 & 2) != 0 )
            goto LABEL_34;
        }
        sub_DD770(v22);
LABEL_34:
        if ( (*(_BYTE *)v20 & 2) != 0 )
        {
LABEL_35:
          if ( v20 )
            qfree();
          goto LABEL_37;
        }
LABEL_55:
        if ( *(_QWORD *)(v20 + 24) )
        {
          *(_QWORD *)(v20 + 32) = 0;
          qfree();
        }
        *(_QWORD *)v20 |= 2uLL;
        goto LABEL_35;
      }
    }
    else
    {
      sub_DD770(v18);
      v19 = *(__int64 **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_27;
    }
    sub_DD770(v19);
LABEL_27:
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_28;
    goto LABEL_59;
  }
LABEL_44:
  sub_60700(&v36);
  sub_60700(&v33);
LABEL_5:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v4 = v39;
  if ( v39 )
  {
    v5 = v40;
    if ( (_QWORD)v40 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 80 * v6);
        clear_tinfo_t();
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[2] )
        {
          v7[3] = 0;
          qfree();
        }
        ++v6;
        cleanup_argloc();
        v4 = v39;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  return tinfo_details;
}

