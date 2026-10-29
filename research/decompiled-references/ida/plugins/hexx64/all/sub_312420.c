__int64 __fastcall sub_312420(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rax
  double v6; // xmm0_8
  unsigned int v7; // eax
  __m128 v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // r15d
  unsigned int v14; // r13d
  __int64 v15; // rbp
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i *v30; // rbp
  __m128i *i; // rbx
  __int64 v32; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 (__fastcall *v38)(__int64, int); // rax
  unsigned int v39; // r13d
  __int64 v40; // r15
  __int64 (__fastcall *v41)(__int64, int, int); // rax
  unsigned int v42; // ebp
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __m128i *v46; // rcx
  __int64 *v47; // rdx
  unsigned int v48; // eax
  _QWORD *v49; // rdi
  _QWORD *v50; // rdi
  __m128i v51; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+18h] [rbp-D0h]
  unsigned __int64 **v53; // [rsp+20h] [rbp-C8h]
  __int64 *v54; // [rsp+28h] [rbp-C0h]
  __m128i *v55; // [rsp+30h] [rbp-B8h]
  __int64 *v56; // [rsp+38h] [rbp-B0h]
  __int64 v57; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-98h]
  int v60; // [rsp+58h] [rbp-90h]
  __int64 v61; // [rsp+60h] [rbp-88h] BYREF
  __int64 v62; // [rsp+68h] [rbp-80h] BYREF
  __int64 v63; // [rsp+70h] [rbp-78h]
  int v64; // [rsp+78h] [rbp-70h]
  __m128i v65; // [rsp+80h] [rbp-68h] BYREF
  __int64 v66; // [rsp+90h] [rbp-58h]
  __int64 v67[3]; // [rsp+98h] [rbp-50h] BYREF

  v5 = *a1;
  v67[2] = __readfsqword(0x28u);
  v55 = &v65;
  v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v65, (__m128i)(unsigned __int64)&v65);
  v6 = (*(double (__fastcall **)(__int64 *))(v5 + 80))(a1);
  sub_1E44B0(a2, v7, a2 + 40, v6);
  v8 = (__m128)_mm_load_si128(&v51);
  v66 = 0;
  v67[0] = 0;
  v67[1] = 0;
  v65 = (__m128i)v8;
  sub_310F30(a1, &v65, 1);
  v54 = v67;
  v53 = (unsigned __int64 **)&v62;
LABEL_2:
  if ( v66 )
  {
    while ( 1 )
    {
      v9 = v65.m128i_i64[0];
      v10 = *(_QWORD *)v65.m128i_i64[0];
      v11 = *(_DWORD *)(v65.m128i_i64[0] + 16);
      **(_QWORD **)(v65.m128i_i64[0] + 8) = *(_QWORD *)v65.m128i_i64[0];
      *(_QWORD *)(v10 + 8) = *(_QWORD *)(v9 + 8);
      qfree(v9);
      --v66;
      sub_64340(v54, v11, *(double *)v8.m128_u64);
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) == v11 )
        goto LABEL_2;
      v12 = *(_QWORD *)(a2 + 8);
      v52 = a2 + 16;
      v57 = v12;
      v56 = &v58;
      sub_1E4290((unsigned __int64 **)&v58, a2 + 16);
      LOBYTE(v60) = *(_BYTE *)(a2 + 32);
      v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v11);
      v14 = 0;
      if ( v13 > 0 )
      {
        while ( 1 )
        {
          v15 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v11, v14);
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v15, v11) )
            goto LABEL_20;
          v61 = *(_QWORD *)(a2 + 8);
          sub_1E4290(v53, v52);
          v16 = *(_BYTE *)(a2 + 32);
          v51.m128i_i64[0] = (__int64)&v61;
          LOBYTE(v64) = v16;
          sub_1EAA70(a2, (__int64)&v61, v15, v11, v8, a4);
          if ( *(_DWORD *)(a2 + 72) != 1 )
            sub_1E1B80(*(double *)v8.m128_u64);
          sub_1E97D0((__int64)&v57, v51.m128i_i64[0]);
          v17 = v62;
          if ( !v62 )
            goto LABEL_20;
          v18 = *(_QWORD *)v62;
          if ( v63 )
            break;
          *(_QWORD *)v62 = *(_QWORD *)v62 & 3LL | v62 & 0xFFFFFFFFFFFFFFFCLL;
          v34 = v62;
          v35 = (__m128i)(unsigned __int64)v62;
          *(_QWORD *)v62 &= ~1uLL;
          v8 = (__m128)_mm_unpacklo_epi64(v35, v35);
          *(__m128 *)(v34 + 8) = v8;
          *(_QWORD *)v62 |= 2uLL;
LABEL_18:
          if ( v62 )
            qfree(v62);
LABEL_20:
          if ( v13 == ++v14 )
            goto LABEL_21;
        }
        v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_17;
        v20 = *(_QWORD **)(v19 + 8);
        if ( (*(_BYTE *)v20 & 2) != 0 )
        {
          v21 = *(_QWORD **)(v19 + 16);
          if ( (*(_BYTE *)v21 & 2) != 0 )
            goto LABEL_33;
        }
        else
        {
          v51.m128i_i64[0] = v18 & 0xFFFFFFFFFFFFFFFCLL;
          sub_30F8B0(v20);
          v19 = v51.m128i_i64[0];
          v21 = *(_QWORD **)(v51.m128i_i64[0] + 16);
          if ( (*(_BYTE *)v21 & 2) != 0 )
          {
            if ( (*(_BYTE *)v51.m128i_i64[0] & 2) != 0 )
              goto LABEL_14;
LABEL_33:
            v51.m128i_i64[0] = v19;
            sub_312B80(v19 + 40);
            v19 = v51.m128i_i64[0];
            *(_QWORD *)v51.m128i_i64[0] |= 2uLL;
LABEL_14:
            if ( v18 > 3 )
              qfree(v19);
            v17 = v62;
            v18 = *(_QWORD *)v62;
LABEL_17:
            *(_QWORD *)v17 = v18 & 3 | v17 & 0xFFFFFFFFFFFFFFFCLL;
            v22 = v62;
            v23 = (__m128i)(unsigned __int64)v62;
            *(_QWORD *)v62 &= ~1uLL;
            v8 = (__m128)_mm_unpacklo_epi64(v23, v23);
            *(__m128 *)(v22 + 8) = v8;
            *(_QWORD *)v62 |= 2uLL;
            v63 = 0;
            goto LABEL_18;
          }
        }
        v51.m128i_i64[0] = v19;
        sub_30F8B0(v21);
        v19 = v51.m128i_i64[0];
        if ( (*(_BYTE *)v51.m128i_i64[0] & 2) == 0 )
          goto LABEL_33;
        goto LABEL_14;
      }
LABEL_21:
      v24 = sub_1E0150(a2, v11, *(double *)v8.m128_u64);
      if ( !sub_1E0CA0(v24, (__int64)&v57) )
      {
        sub_1E8FB0(a2, v11, (__int64)&v57, *(double *)v8.m128_u64);
        v38 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
        v51.m128i_i32[0] = v38 == sub_65090 ? sub_65090((__int64)a1, v11) : v38((__int64)a1, v11);
        if ( v51.m128i_i32[0] > 0 )
        {
          v39 = 0;
          do
          {
            v40 = *a1;
            v41 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
            if ( v41 == sub_650D0 )
            {
              v42 = sub_650D0((__int64)a1, v11, v39);
            }
            else
            {
              v48 = v41((__int64)a1, v11, v39);
              v40 = *a1;
              v42 = v48;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v40 + 152))(a1, v11, v42)
              && (unsigned __int8)sub_64190(v54, v42, *(double *)v8.m128_u64) )
            {
              v45 = qalloc_or_throw(24, v42, v43, v44);
              v46 = v55;
              *(_DWORD *)(v45 + 16) = v42;
              *(_QWORD *)v45 = v46;
              v47 = (__int64 *)v65.m128i_i64[1];
              *(_QWORD *)(v45 + 8) = v65.m128i_i64[1];
              *v47 = v45;
              v65.m128i_i64[1] = v45;
              ++v66;
            }
            ++v39;
          }
          while ( v51.m128i_i32[0] != v39 );
        }
      }
      v25 = v58;
      if ( !v58 )
        goto LABEL_2;
      v26 = *(_QWORD *)v58;
      if ( !v59 )
      {
        *(_QWORD *)v58 = *(_QWORD *)v58 & 3LL | v58 & 0xFFFFFFFFFFFFFFFCLL;
        v36 = v58;
        v37 = (__m128i)(unsigned __int64)v58;
        *(_QWORD *)v58 &= ~1uLL;
        v8 = (__m128)_mm_unpacklo_epi64(v37, v37);
        *(__m128 *)(v36 + 8) = v8;
        *(_QWORD *)v58 |= 2uLL;
        goto LABEL_26;
      }
      v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
LABEL_25:
      *(_QWORD *)v25 = v26 & 3 | v25 & 0xFFFFFFFFFFFFFFFCLL;
      v28 = v58;
      v29 = (__m128i)(unsigned __int64)v58;
      *(_QWORD *)v58 &= ~1uLL;
      v8 = (__m128)_mm_unpacklo_epi64(v29, v29);
      *(__m128 *)(v28 + 8) = v8;
      *(_QWORD *)v58 |= 2uLL;
      v59 = 0;
LABEL_26:
      if ( !v58 )
        goto LABEL_2;
      qfree(v58);
      if ( !v66 )
        goto LABEL_28;
    }
    v49 = *(_QWORD **)(v27 + 8);
    if ( (*(_BYTE *)v49 & 2) != 0 )
    {
      v50 = *(_QWORD **)(v27 + 16);
      if ( (*(_BYTE *)v50 & 2) != 0 )
        goto LABEL_56;
    }
    else
    {
      sub_30F8B0(v49);
      v50 = *(_QWORD **)(v27 + 16);
      if ( (*(_BYTE *)v50 & 2) != 0 )
        goto LABEL_51;
    }
    sub_30F8B0(v50);
LABEL_51:
    if ( (*(_BYTE *)v27 & 2) != 0 )
    {
LABEL_52:
      if ( v26 > 3 )
        qfree(v26 & 0xFFFFFFFFFFFFFFFCLL);
      v25 = v58;
      v26 = *(_QWORD *)v58;
      goto LABEL_25;
    }
LABEL_56:
    sub_312B80(v27 + 40);
    *(_QWORD *)v27 |= 2uLL;
    goto LABEL_52;
  }
LABEL_28:
  qfree(v67[0]);
  v30 = v55;
  for ( i = (__m128i *)v65.m128i_i64[0]; i != v30; --v66 )
  {
    v32 = (__int64)i;
    i = (__m128i *)i->m128i_i64[0];
    **(_QWORD **)(v32 + 8) = i;
    i->m128i_i64[1] = *(_QWORD *)(v32 + 8);
    qfree(v32);
  }
  return 1;
}

