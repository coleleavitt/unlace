__int64 __fastcall sub_3F0E0(
        __int64 a1,
        _QWORD *a2,
        __int32 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  char v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int32 v17; // r13d
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // eax
  __int8 v22; // r15
  _QWORD *v23; // rax
  _QWORD *v24; // r11
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  _BOOL8 v35; // rdi
  __m128i v36; // xmm0
  _QWORD *v38; // rdx
  _QWORD *v39; // r11
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v47; // [rsp+4h] [rbp-B0h]
  __int8 v48; // [rsp+Eh] [rbp-A6h]
  char v49; // [rsp+Fh] [rbp-A5h]
  int v50; // [rsp+10h] [rbp-A4h]
  _QWORD *v51; // [rsp+14h] [rbp-A0h]
  _QWORD *v52; // [rsp+14h] [rbp-A0h]
  __int64 v53; // [rsp+14h] [rbp-A0h]
  unsigned __int64 v54; // [rsp+1Ch] [rbp-98h]
  __int64 v55; // [rsp+2Ch] [rbp-88h] BYREF
  __m128i v56; // [rsp+34h] [rbp-80h] BYREF
  char v57; // [rsp+44h] [rbp-70h]
  __m128i v58; // [rsp+4Ch] [rbp-68h] BYREF
  __m128i v59; // [rsp+5Ch] [rbp-58h] BYREF
  __int64 v60; // [rsp+6Ch] [rbp-48h]
  unsigned __int64 v61; // [rsp+74h] [rbp-40h]

  v11 = a2[1];
  v12 = *a2;
  v61 = __readfsqword(0x28u);
  v58 = 0;
  v60 = 0;
  v59 = 0;
  sub_744C0(&v55, v12, v11);
  if ( v57 )
    goto LABEL_28;
  v14 = v55;
  v15 = (unsigned int)v55 >> 2;
  a2[1] += v56.m128i_i64[0];
  v16 = v11 - v15;
  v48 = v14 & 3;
  if ( a4 < v11 - v15 && a5[5] )
  {
    v38 = (_QWORD *)a5[2];
    if ( !v38 )
      goto LABEL_27;
    v39 = a5 + 1;
    do
    {
      if ( v38[4] >= v16 )
      {
        v39 = v38;
        v38 = (_QWORD *)v38[2];
      }
      else
      {
        v38 = (_QWORD *)v38[3];
      }
    }
    while ( v38 );
    if ( a5 + 1 == v39 || v16 < v39[4] )
    {
LABEL_27:
      sub_19A90(
        (__int64)&v55,
        (__int64)"eh4_unwind_map_entry_t(map start: %a, current: %a, state: %d): malformed next offset %a",
        0.0,
        a7,
        a4,
        a8);
      goto LABEL_28;
    }
    v17 = *((_DWORD *)v39 + 10);
  }
  else
  {
    v17 = -1;
  }
  if ( (unsigned __int8)(v48 - 1) > 1u )
  {
    if ( v48 == 3 )
    {
      sub_74310(&v55, *a2);
      v18 = v55;
      if ( v57 )
        goto LABEL_29;
      a2[1] += 4LL;
      v22 = 1;
      v47 = v18;
      v49 = 0;
      v50 = 0;
    }
    else
    {
      v49 = 0;
      v22 = 0;
      v50 = 0;
      v47 = 0;
    }
    goto LABEL_8;
  }
  sub_74310(&v55, *a2);
  v18 = v55;
  if ( !v57 )
  {
    v47 = v55;
    v19 = *a2;
    v20 = a2[1] + 4LL;
    a2[1] = v20;
    sub_744C0(&v55, v19, v20);
    if ( v57 )
    {
LABEL_28:
      v18 = v55;
      goto LABEL_29;
    }
    v21 = v55;
    v49 = 1;
    v22 = 1;
    a2[1] += v56.m128i_i64[0];
    v50 = v21;
LABEL_8:
    v23 = (_QWORD *)a5[2];
    v24 = a5 + 1;
    if ( v23 )
    {
      do
      {
        while ( 1 )
        {
          v25 = v23[2];
          v26 = v23[3];
          if ( v23[4] < v11 )
            break;
          v24 = v23;
          v23 = (_QWORD *)v23[2];
          if ( !v25 )
            goto LABEL_13;
        }
        v23 = (_QWORD *)v23[3];
      }
      while ( v26 );
LABEL_13:
      v52 = a5 + 1;
      if ( v24 != a5 + 1 )
      {
        if ( v11 >= v24[4] )
        {
LABEL_42:
          v58.m128i_i32[2] = v17;
          v59.m128i_i8[8] = v22;
          *((_DWORD *)v24 + 10) = a3;
          v58.m128i_i32[1] = a3;
          v58.m128i_i8[0] = v48;
          v40 = _mm_load_si128(&v58);
          v59.m128i_i64[0] = v47;
          *(__m128i *)a1 = v40;
          v41 = _mm_load_si128(&v59);
          LODWORD(v60) = v50;
          *(_BYTE *)(a1 + 40) = 0;
          BYTE4(v60) = v49;
          v42 = v60;
          *(__m128i *)(a1 + 16) = v41;
          *(_QWORD *)(a1 + 32) = v42;
          return a1;
        }
        v54 = (unsigned __int64)v24;
        v27 = operator new(0x30u);
        v24 = (_QWORD *)v54;
        v29 = (__int64)(a5 + 1);
        *(_QWORD *)(v27 + 32) = v11;
        v30 = (_QWORD *)v27;
        *(_DWORD *)(v27 + 40) = 0;
        v31 = *(_QWORD *)(v54 + 32);
        if ( v11 >= v31 )
        {
          if ( v31 >= v11 )
            goto LABEL_45;
          if ( v54 != a5[4] )
          {
            v43 = std::_Rb_tree_increment(v54);
            v29 = (__int64)(a5 + 1);
            v32 = v43;
            if ( v11 >= *(_QWORD *)(v43 + 32) )
            {
LABEL_55:
              v53 = v29;
              v45 = sub_3CEC0((__int64)a5, v11, v32, v29, v34);
              v29 = v53;
              v24 = v45;
              goto LABEL_20;
            }
            v24 = (_QWORD *)v54;
            if ( *(_QWORD *)(v54 + 24) )
            {
              v24 = (_QWORD *)v43;
              goto LABEL_20;
            }
          }
          v32 = (unsigned __int64)v24;
          if ( v24 )
            goto LABEL_24;
          goto LABEL_45;
        }
        v32 = v54;
        if ( v54 == a5[3] )
          goto LABEL_20;
        v33 = std::_Rb_tree_decrement(v54, v31, v54, v52, v28);
        v29 = (__int64)(a5 + 1);
        v32 = v33;
        if ( *(_QWORD *)(v33 + 32) >= v11 )
          goto LABEL_55;
        v24 = nullptr;
        if ( *(_QWORD *)(v33 + 24) )
        {
          v24 = (_QWORD *)v54;
          v32 = v54;
        }
LABEL_20:
        if ( v32 )
        {
          if ( v29 == v32 || v24 )
          {
            v35 = 1;
            goto LABEL_41;
          }
          v31 = *(_QWORD *)(v32 + 32);
LABEL_24:
          v35 = v11 < v31;
LABEL_41:
          std::_Rb_tree_insert_and_rebalance(v35, v30, v32, v29);
          ++a5[5];
          v24 = v30;
          goto LABEL_42;
        }
LABEL_45:
        if ( v30 )
        {
          v51 = v24;
          operator delete(v30, 0x30u);
          v24 = v51;
        }
        goto LABEL_42;
      }
    }
    else
    {
      v52 = a5 + 1;
    }
    v44 = operator new(0x30u);
    *(_QWORD *)(v44 + 32) = v11;
    v30 = (_QWORD *)v44;
    *(_DWORD *)(v44 + 40) = 0;
    v29 = (__int64)v52;
    if ( !a5[5] )
      goto LABEL_55;
    v32 = a5[4];
    v24 = nullptr;
    if ( *(_QWORD *)(v32 + 32) >= v11 )
      goto LABEL_55;
    goto LABEL_20;
  }
LABEL_29:
  *(_QWORD *)a1 = v18;
  v36 = _mm_loadu_si128(&v56);
  *(_BYTE *)(a1 + 40) = 1;
  *(__m128i *)(a1 + 8) = v36;
  return a1;
}
