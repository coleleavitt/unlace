__int64 __fastcall sub_275B20(__m128i *a1, unsigned __int8 a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 tinfo_size; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r14d
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  _BOOL4 v46; // r12d
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // r11
  int v50; // edx
  bool v51; // al
  __int64 v52; // rcx
  const __m128i *v53; // r9
  char tinfo_property; // r13
  bool v55; // r15
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  const __m128i *v59; // [rsp+0h] [rbp-80h]
  int v60; // [rsp+8h] [rbp-78h]
  unsigned __int64 v61; // [rsp+8h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-70h]
  __int64 v63; // [rsp+18h] [rbp-68h]
  __int64 v64; // [rsp+18h] [rbp-68h]
  __int64 v65; // [rsp+18h] [rbp-68h]
  __int64 v66; // [rsp+20h] [rbp-60h]
  __int64 v67; // [rsp+20h] [rbp-60h]
  __m128i *v68; // [rsp+20h] [rbp-60h]
  char v69; // [rsp+20h] [rbp-60h]
  int v70; // [rsp+28h] [rbp-58h]
  __int64 v72; // [rsp+38h] [rbp-48h] BYREF
  __int64 v73[8]; // [rsp+40h] [rbp-40h] BYREF

  v73[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL);
  ++*(_DWORD *)(v3 + 896);
  v4 = a1[2].m128i_i64[1];
  v5 = sub_26BEA0((__int64)a1, v4, *(double *)a3.m128_u64);
  if ( !v5 )
    return 0;
  v8 = v5;
  v9 = j__qalloc_or_throw(64, v4, v6, v7);
  *(_QWORD *)v9 = -1;
  v10 = v9;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  sub_25AFF0(v9, v8, *(double *)a3.m128_u64);
  v11 = (__int64 *)a1[3].m128i_i64[0];
  if ( v11 )
  {
    v12 = a1[2].m128i_i64[0];
    v13 = *(_DWORD *)(v12 + 8);
    if ( v13 == 36 || (v14 = 1, v13 == 7) )
      v14 = -1;
    if ( !(unsigned __int8)sub_26B8E0((__int64)a1, v11, *(_QWORD *)v12, v14, 0, *(double *)a3.m128_u64) )
    {
      if ( v10 )
      {
        sub_255630(v10, *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v10);
      }
      return 0;
    }
  }
  sub_275A30((__int64)a1, *(double *)a3.m128_u64);
  v16 = sub_271E40(a1, v10, *(double *)a3.m128_u64);
  if ( !v16 )
  {
    v16 = v10;
    if ( *(_DWORD *)(v10 + 8) != 52 )
      goto LABEL_11;
LABEL_46:
    sub_26C3E0(&v72, (__int64)a1);
    v48 = *(_QWORD *)(v16 + 24);
    v66 = a1[5].m128i_i64[1];
    v63 = a1[6].m128i_i64[0];
    v62 = a1->m128i_i64[0];
    v49 = sub_26B3D0(v48);
    if ( v49 != -1 )
    {
      if ( a1[4].m128i_i64[0] )
      {
        v50 = *(_QWORD *)(a1[3].m128i_i64[1] + 24);
        v51 = v50 != 0;
      }
      else
      {
        v51 = 0;
        v50 = 0;
      }
      v52 = v66 - v63;
      if ( v66 != v63 || v51 )
        goto LABEL_54;
      if ( (_BYTE)v72 )
      {
        v60 = v50;
        v64 = v49;
        v67 = v52;
        if ( (get_tinfo_property() & 0x3F) != 1 )
        {
          v52 = v67;
          v49 = v64;
          v50 = v60;
LABEL_54:
          v53 = (const __m128i *)(v48 + 24);
          if ( *(_DWORD *)(v48 + 8) != 65 )
            v53 = nullptr;
          v59 = v53;
          v70 = v50;
          v61 = v49;
          v65 = v52;
          v68 = *(__m128i **)(v62 + 808);
          v73[0] = 0;
          copy_tinfo_t();
          sub_27E790(v68, v61, v70, v65, v73, v59, 0);
          clear_tinfo_t();
        }
      }
    }
    clear_tinfo_t();
    goto LABEL_11;
  }
  if ( v10 )
  {
    sub_255630(v10, *(double *)a3.m128_u64);
    clear_tinfo_t();
    j__qfree(v10);
  }
  if ( !(unsigned __int8)sub_323900(a1[1].m128i_i64[1], a1[2].m128i_i64[0]) && !a1[27].m128i_i32[2] )
    v16 = sub_247510(*(_QWORD *)(a1->m128i_i64[0] + 112), v16, v17, v15, *(double *)a3.m128_u64);
  if ( *(_DWORD *)(v16 + 8) == 52 )
    goto LABEL_46;
LABEL_11:
  if ( !a1[28].m128i_i8[1] )
    v16 = (__int64)sub_273A40(a1, v16);
  v18 = sub_26E0C0(a1, v16, a2, v15, a3);
  v19 = a1[27].m128i_i32[1];
  v20 = v18;
  if ( get_tinfo_size() < v19 )
  {
    if ( *(_DWORD *)(a1[1].m128i_i64[1] + 8) != 48
      || (tinfo_property = get_tinfo_property(), ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9)) )
    {
      if ( v20 )
      {
        sub_255630(v20, *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v20);
      }
      v21 = a1[2].m128i_i64[0];
      v73[0] = 0;
      v22 = *(_QWORD *)(v21 + 48);
      tinfo_size = get_tinfo_size();
      v25 = a1[27].m128i_i32[1];
      v26 = a1[27].m128i_i32[1];
      if ( v25 == tinfo_size )
      {
        v22 = a1[2].m128i_i64[0] + 48;
        copy_tinfo_t();
        v26 = a1[27].m128i_i32[1];
      }
      v27 = j__qalloc_or_throw(64, v22, v25, v24);
      v28 = a1[2].m128i_i64[0];
      *(_QWORD *)(v27 + 12) = -1;
      v29 = v27;
      *(_QWORD *)v27 = -1;
      *(_DWORD *)(v27 + 8) = 0;
      *(_QWORD *)(v27 + 48) = 0;
      *(_DWORD *)(v27 + 56) = 0;
      sub_25AFF0(v27, v28, *(double *)a3.m128_u64);
      v30 = sub_2476A0(a1->m128i_i64[0], a1[8].m128i_i64[0], v29, 0, v73, v26, *(double *)a3.m128_u64, 1);
      a1[28].m128i_i8[3] = 0;
      a1[28].m128i_i8[5] = 1;
      v20 = v30;
      clear_tinfo_t();
    }
  }
  v31 = v20;
  if ( sub_26F940((__int64)a1, v20, 0) )
    goto LABEL_28;
  v34 = a1[27].m128i_i32[1];
  if ( !(_DWORD)v34 )
    goto LABEL_42;
  sub_26FC00(&v72, a1, v34);
  if ( !(_BYTE)v72 )
  {
LABEL_41:
    clear_tinfo_t();
LABEL_42:
    if ( v20 )
    {
      sub_255630(v20, *(double *)a3.m128_u64);
      clear_tinfo_t();
      j__qfree(v20);
    }
    return 0;
  }
  sub_32C540(v73, *(_QWORD *)(a1->m128i_i64[0] + 112), &v72);
  copy_tinfo_t();
  clear_tinfo_t();
  v35 = *(_DWORD *)(v20 + 8);
  if ( v35 != 48 )
    goto LABEL_24;
  v73[0] = 0;
  v73[0] = get_tinfo_property();
  v69 = get_tinfo_property();
  clear_tinfo_t();
  if ( (v69 & 0xF) != 0xB )
  {
    if ( a1[27].m128i_i32[1] != get_tinfo_size() )
      goto LABEL_41;
    v55 = (get_tinfo_property() & 0xF) == 9;
    if ( v55 != ((get_tinfo_property() & 0xF) == 9) )
      goto LABEL_41;
    sub_255850((__int64 *)v20, *(_QWORD *)(v20 + 24), *(double *)a3.m128_u64);
    v35 = *(_DWORD *)(v20 + 8);
LABEL_24:
    v36 = (unsigned int)(v35 - 51);
    if ( (unsigned int)v36 > 0xE )
      goto LABEL_41;
    v37 = 25473;
    if ( !_bittest64(&v37, v36) && (v35 != 57 || !get_tinfo_property()) )
      goto LABEL_41;
    v38 = sub_247510(*(_QWORD *)(a1->m128i_i64[0] + 112), v20, v36, v37, *(double *)a3.m128_u64);
    v20 = sub_244E70(v38, (__int64)&v72, v39, v40);
    goto LABEL_27;
  }
  copy_tinfo_t();
LABEL_27:
  v41 = get_tinfo_property();
  v31 = v20;
  v42 = sub_244320(
          *(_QWORD *)(a1->m128i_i64[0] + 112),
          v20,
          a1[27].m128i_u32[1],
          (v41 & 0xF) == 9,
          *(double *)a3.m128_u64);
  a1[27].m128i_i32[2] = 1;
  v20 = v42;
  clear_tinfo_t();
LABEL_28:
  if ( a2 && !a1[28].m128i_i8[5] && !a1[27].m128i_i32[2] )
  {
    v44 = j__qalloc_or_throw(64, v31, v32, v33);
    *(_QWORD *)v44 = -1;
    v45 = v44;
    *(_DWORD *)(v44 + 8) = 0;
    *(_QWORD *)(v44 + 12) = -1;
    *(_QWORD *)(v44 + 48) = 0;
    *(_DWORD *)(v44 + 56) = 0;
    sub_25AFF0(v44, v20, *(double *)a3.m128_u64);
    v46 = (get_tinfo_property() & 0xF) == 9;
    v47 = sub_244320(*(_QWORD *)(a1->m128i_i64[0] + 112), v20, a1[27].m128i_u32[1], v46, *(double *)a3.m128_u64);
    a1[27].m128i_i32[2] = 1;
    v20 = v47;
    if ( sub_26F940((__int64)a1, v47, 1) )
    {
      if ( v45 )
      {
        sub_255630(v45, *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v45);
      }
    }
    else
    {
      if ( v20 )
      {
        sub_255630(v20, *(double *)a3.m128_u64);
        clear_tinfo_t();
        j__qfree(v20);
      }
      sub_32C2C0(v73, *(_QWORD *)(a1->m128i_i64[0] + 112), a1[27].m128i_i32[1], v46);
      v58 = sub_244E70(v45, (__int64)v73, v56, v57);
      v20 = sub_244320(*(_QWORD *)(a1->m128i_i64[0] + 112), v58, a1[27].m128i_u32[1], v46, *(double *)a3.m128_u64);
      clear_tinfo_t();
    }
  }
  *(_QWORD *)v20 = a1[8].m128i_i64[0];
  return v20;
}

