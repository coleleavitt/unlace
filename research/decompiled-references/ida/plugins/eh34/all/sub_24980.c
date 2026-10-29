__int64 __fastcall sub_24980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __m128 v6; // xmm0
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  int *v15; // rdx
  unsigned __int64 *v16; // rax
  const char *v17; // r13
  unsigned __int16 v18; // ax
  unsigned __int8 *v19; // rbx
  __m128i v20; // xmm0
  unsigned __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  char v28; // al
  unsigned int v29; // r9d
  __int64 v30; // r14
  unsigned __int64 *v31; // r8
  unsigned __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  unsigned __int64 *v35; // rbx
  unsigned __int64 v36; // r13
  _QWORD *v37; // r15
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-F8h]
  unsigned __int8 v43; // [rsp+0h] [rbp-F8h]
  char v44; // [rsp+0h] [rbp-F8h]
  __m128i v48; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-C8h]
  __int128 v50; // [rsp+38h] [rbp-C0h]
  __int64 v51; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-88h] BYREF
  const char *v54; // [rsp+78h] [rbp-80h]
  __int32 v55; // [rsp+80h] [rbp-78h]
  __m128i v56; // [rsp+90h] [rbp-68h] BYREF
  char v57; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-40h]

  v6.m128_u64[0] = 0;
  v8 = (__int64 *)a2;
  v9 = (__int64)&v51;
  v58 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a2 + 32);
  v49 = 0;
  v11 = *(_QWORD *)(v10 + 16);
  v50 = 0;
  sub_241A0((__int64)&v51, (_QWORD *)a2, a4);
  v12 = v51;
  v42 = v51 + 32 * v52;
  if ( v51 == v42 )
  {
LABEL_28:
    if ( v42 )
    {
      v52 = 0;
      v9 = v42;
      qfree();
    }
    if ( !(_QWORD)v50 || (v25 = 0, *(int *)(v8[2] + 96) <= 0) )
    {
LABEL_31:
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_32;
    }
    while ( 1 )
    {
      v26 = v8[3];
      hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v9, (const char *)a2);
      a2 = v26;
      v9 = 213;
      v28 = hexdsp(213, v26, (unsigned int)v25);
      v30 = v8[2];
      if ( !v28 )
        goto LABEL_37;
      a2 = v50;
      v31 = (unsigned __int64 *)(*(_QWORD *)(v30 + 72) + (v25 << 6));
      if ( !(_QWORD)v50 )
        goto LABEL_37;
      v9 = v49;
      v32 = *v31;
      v33 = 0;
      v34 = 0;
      while ( 1 )
      {
        v35 = (unsigned __int64 *)(v49 + 16 * v34);
        if ( v32 < v35[1] )
        {
          v36 = *v35;
          LOBYTE(v29) = v32 < *v35 && *v35 < v31[1];
          if ( (_BYTE)v29 )
            break;
        }
        v34 = ++v33;
        if ( v33 >= (unsigned __int64)v50 )
          goto LABEL_37;
      }
      v37 = (_QWORD *)a5[2];
      v38 = a5 + 1;
      if ( !v37 )
        break;
      while ( 1 )
      {
        v39 = v37[4];
        v9 = v37[2];
        a2 = 0;
        v40 = (_QWORD *)v37[3];
        if ( v36 < v39 )
        {
          v40 = (_QWORD *)v37[2];
          a2 = v29;
        }
        if ( !v40 )
          break;
        v37 = v40;
      }
      if ( (_BYTE)a2 )
        goto LABEL_55;
LABEL_51:
      if ( v39 < v36 )
        goto LABEL_52;
LABEL_37:
      if ( *(_DWORD *)(v30 + 96) <= (int)++v25 )
        goto LABEL_31;
    }
    v37 = a5 + 1;
LABEL_55:
    if ( v37 == (_QWORD *)a5[3] )
    {
LABEL_52:
      if ( v37 != v38 )
        LOBYTE(v29) = v36 < v37[4];
      v43 = v29;
      a2 = operator new(0x28u);
      v9 = v43;
      *(_QWORD *)(a2 + 32) = *v35;
      std::_Rb_tree_insert_and_rebalance();
      ++a5[5];
      v30 = v8[2];
      goto LABEL_37;
    }
    v9 = (__int64)v37;
    v44 = v29;
    v41 = std::_Rb_tree_decrement();
    v38 = a5 + 1;
    LOBYTE(v29) = v44;
    v39 = *(_QWORD *)(v41 + 32);
    goto LABEL_51;
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v9 = v8[4];
    a2 = v13;
    if ( sub_263B0(v9) )
    {
      if ( !*(_QWORD *)(a3 + 16) || (sub_6EC40((__int64)&v53, v13, a3, *v8), v13 = v53, !v55) )
      {
        v23 = v50;
        v21 = v49;
        v22 = (__m128i)_mm_loadh_ps((const double *)(v12 + 24));
        v56 = v22;
        v14 = v50 + 1;
        if ( (unsigned __int64)&v56 < v49 || (unsigned __int64)&v56 >= v49 + 16LL * *((_QWORD *)&v50 + 1) )
        {
          if ( *((_QWORD *)&v50 + 1) < v14 )
          {
            v49 = qvector_reserve();
            v21 = v49;
            v23 = v50;
          }
          *(__m128i *)(v21 + 16 * v23) = _mm_load_si128(&v56);
        }
        else
        {
          if ( *((_QWORD *)&v50 + 1) < v14 )
          {
            v48 = v22;
            v49 = qvector_reserve();
            v21 = v49;
            v22 = _mm_load_si128(&v48);
            v23 = v50;
          }
          *(__m128i *)(v21 + 16 * v23) = v22;
        }
        *(_QWORD *)&v50 = v50 + 1;
        v53 = v13;
        sub_24580((__int64)&v56, v8, &v53, v12);
        if ( v57 )
          goto LABEL_25;
        v9 = a6;
        a2 = (__int64)&v56;
        v6 = _mm_loadh_ps((const double *)(v12 + 24));
        v56 = (__m128i)v6;
        rangeset_t_add();
        goto LABEL_9;
      }
      v15 = *(int **)(*(_QWORD *)v12 + 40LL);
      a2 = (__int64)&v15[*(_QWORD *)(*(_QWORD *)v12 + 48LL)];
      if ( v15 != (int *)a2 )
      {
        v9 = *(_QWORD *)(v8[2] + 72);
        do
        {
          v16 = (unsigned __int64 *)(v9 + ((__int64)*v15 << 6));
          if ( *v16 >= v11 && v11 + *(unsigned __int8 *)(a3 + 2) >= v16[1] )
            goto LABEL_9;
          ++v15;
        }
        while ( (int *)a2 != v15 );
      }
      v17 = v54;
      v9 = v8[4];
      v48.m128i_i32[0] = v55;
      a2 = (__int64)v54;
      v18 = sub_26550(v9, (unsigned __int64)v54, (unsigned int)v15);
      if ( HIBYTE(v18) )
      {
        if ( (_BYTE)v18 )
          break;
      }
    }
LABEL_9:
    v12 += 32;
    if ( v42 == v12 )
    {
      v42 = v51;
      goto LABEL_28;
    }
  }
  v19 = (unsigned __int8 *)v8[1];
  sub_6EA40(v48.m128i_u32[0]);
  sub_64B50((__int64)&v56, v19, (__int64)"get_epilog_split_eas(%a): %s", *(double *)v6.m128_u64, v17);
LABEL_25:
  *(_QWORD *)a1 = v56.m128i_i64[0];
  v20 = _mm_loadu_si128((const __m128i *)&v56.m128i_u64[1]);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v20;
  if ( v51 )
  {
    v52 = 0;
    qfree();
  }
LABEL_32:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  return a1;
}

