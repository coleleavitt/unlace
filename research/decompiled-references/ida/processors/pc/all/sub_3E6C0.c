__int64 __fastcall sub_3E6C0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r15
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm0
  unsigned __int64 v15; // xmm1_8
  __m128i v17; // kr00_16
  __int16 word; // ax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int dword; // eax
  int v23; // eax
  __m128i v24; // xmm0
  char v25; // r15
  _QWORD *v26; // r13
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  char v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rbp
  void *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  char v36; // al
  void *v37; // [rsp+0h] [rbp-1C8h]
  void *v38; // [rsp+0h] [rbp-1C8h]
  _QWORD *v39; // [rsp+0h] [rbp-1C8h]
  __m128i v40; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v41; // [rsp+8h] [rbp-1C0h]
  __int64 v42; // [rsp+18h] [rbp-1B0h]
  __int64 v43; // [rsp+20h] [rbp-1A8h]
  __int64 v44; // [rsp+20h] [rbp-1A8h]
  __int64 v45; // [rsp+20h] [rbp-1A8h]
  _QWORD v46[4]; // [rsp+30h] [rbp-198h] BYREF
  __m128i v47; // [rsp+50h] [rbp-178h] BYREF
  __int64 v48; // [rsp+60h] [rbp-168h]
  _QWORD v49[3]; // [rsp+70h] [rbp-158h] BYREF
  char v50; // [rsp+88h] [rbp-140h]
  _QWORD v51[3]; // [rsp+90h] [rbp-138h] BYREF
  char v52; // [rsp+A8h] [rbp-120h]
  __m128i v53; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-108h]
  char v55; // [rsp+C8h] [rbp-100h]
  __int64 v56; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-F0h]
  __int64 v58; // [rsp+E0h] [rbp-E8h]
  char v59; // [rsp+E8h] [rbp-E0h]
  unsigned __int64 v60; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-D0h]
  __int64 v62; // [rsp+100h] [rbp-C8h]
  char v63; // [rsp+108h] [rbp-C0h]
  __int64 v64; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+118h] [rbp-B0h]
  __int64 v66; // [rsp+120h] [rbp-A8h]
  char v67; // [rsp+128h] [rbp-A0h]
  __int64 v68; // [rsp+130h] [rbp-98h] BYREF
  __int64 v69; // [rsp+138h] [rbp-90h]
  __int64 v70; // [rsp+140h] [rbp-88h]
  char v71; // [rsp+148h] [rbp-80h]
  __int64 v72; // [rsp+150h] [rbp-78h] BYREF
  __int128 v73; // [rsp+158h] [rbp-70h]
  __m128i v74[2]; // [rsp+168h] [rbp-60h] BYREF
  unsigned __int64 v75; // [rsp+188h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( !a3 )
  {
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  *a3 = 0;
  v8 = a4;
  v9 = (_QWORD *)a2[2];
  v10 = a2 + 1;
  while ( v9 )
  {
    while ( 1 )
    {
      a4 = v9[2];
      if ( v8 >= v9[4] )
        break;
      v10 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !a4 )
        goto LABEL_6;
    }
    v9 = (_QWORD *)v9[3];
  }
LABEL_6:
  if ( (_QWORD *)a2[3] != v10 )
  {
    v11 = std::_Rb_tree_decrement();
    if ( a2 + 1 != (_QWORD *)v11 )
    {
      a4 = *(_QWORD *)(v11 + 88);
      if ( v8 >= a4 )
      {
        a4 += *(_QWORD *)(v11 + 96);
        if ( v8 < a4 )
        {
          *a3 = v11 + 40;
          *(_BYTE *)a1 = 1;
          *(_BYTE *)(a1 + 24) = 0;
          return a1;
        }
      }
    }
  }
  v73 = 0;
  v72 = 0;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                           1064,
                           &v72,
                           &callui,
                           a4,
                           a5,
                           a6) )
    goto LABEL_14;
  while ( 1 )
  {
    v14 = _mm_loadu_si128(v74);
    v15 = _mm_add_epi64(_mm_srli_si128(v14, 8), v14).m128i_u64[0];
    if ( v8 >= v14.m128i_i64[0] && v8 < v15 )
      break;
    if ( !(unsigned __int8)callui(1065, &v72, &callui, v15, v12, v13, v37, v40.m128i_i64[0], v40.m128i_i64[1], v42) )
      goto LABEL_14;
  }
  v17 = v74[0];
  invalidate_dbgmem_contents();
  word = get_word();
  if ( word != 23117 && word != 19802 )
  {
    sub_3C7B0((__int64)&v64);
    v19 = v64;
    v20 = v65;
    v21 = v66;
LABEL_24:
    *(_QWORD *)a1 = v19;
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 16) = v21;
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_15;
  }
  v38 = (void *)(v17.m128i_i64[0] + v17.m128i_i64[1]);
  sub_3CDD0((__int64)&v53, v17.m128i_i64[0], 60, v17.m128i_u64[0], v17.m128i_i64[0] + v17.m128i_i64[1]);
  v19 = v53.m128i_i64[0];
  if ( v55 )
  {
    v20 = v53.m128i_i64[1];
    v48 = v54;
LABEL_27:
    v21 = v48;
    goto LABEL_24;
  }
  dword = get_dword();
  sub_3CDD0((__int64)v51, v17.m128i_i64[0], dword, v17.m128i_u64[0], v17.m128i_u64[1]);
  v19 = v51[0];
  if ( v52 )
  {
    v20 = v51[1];
    v48 = v51[2];
    goto LABEL_27;
  }
  if ( v51[0] < v17.m128i_i64[0]
    || v51[0] >= (unsigned __int64)v38
    || (v43 = v51[0], invalidate_dbgmem_contents(), v23 = get_dword(), v23 != 17744) && v23 != 20549 )
  {
    sub_3C7B0((__int64)&v68);
    v19 = v68;
    v20 = v69;
    v21 = v70;
    goto LABEL_24;
  }
  sub_3CDD0((__int64)v49, v43, 4, v17.m128i_u64[0], v17.m128i_u64[1]);
  if ( v50 )
  {
    v20 = v49[1];
    v19 = v49[0];
    v48 = v49[2];
    goto LABEL_27;
  }
  if ( (unsigned __int16)get_word() == 0x8664 )
  {
    sub_3CDD0((__int64)&v68, v43, 136, v17.m128i_u64[0], v17.m128i_u64[1]);
    v19 = v68;
    if ( v71 )
    {
      v20 = v69;
      v48 = v70;
      goto LABEL_27;
    }
    sub_3CDD0((__int64)&v64, v68, 24, v17.m128i_u64[0], v17.m128i_u64[1]);
    v19 = v64;
    if ( v67 )
    {
      v20 = v65;
      v48 = v66;
      goto LABEL_27;
    }
    if ( (unsigned __int64)(v64 + 7) < v17.m128i_i64[0] || v64 + 7 >= (unsigned __int64)v38 )
    {
      sub_3C7B0((__int64)&v60);
      v20 = v61;
      v19 = v60;
      v48 = v62;
      goto LABEL_27;
    }
    v44 = (unsigned int)get_dword();
    v34 = get_dword();
    v35 = v44;
    v45 = v34;
    if ( v35 && v34 )
    {
      sub_3CDD0((__int64)&v60, v17.m128i_i64[0], v35, v17.m128i_u64[0], v17.m128i_u64[1]);
      v19 = v60;
      v40.m128i_i64[0] = v60;
      if ( v63 )
      {
        v20 = v61;
        v48 = v62;
        goto LABEL_27;
      }
      if ( v60 < v17.m128i_i64[0] || v60 >= (unsigned __int64)v38 )
      {
        sub_3C7B0((__int64)&v56);
        v20 = v57;
        v19 = v56;
        v48 = v58;
        goto LABEL_27;
      }
      sub_3CDD0((__int64)&v56, v60, v45, v17.m128i_u64[0], v17.m128i_u64[1]);
      v19 = v56;
      if ( v59 )
      {
        v20 = v57;
        v48 = v58;
        goto LABEL_27;
      }
      if ( v56 - 1 >= (unsigned __int64)v38 || (unsigned __int64)(v56 - 1) < v17.m128i_i64[0] )
      {
        sub_3C7B0((__int64)v46);
        v20 = v46[1];
        v19 = v46[0];
        v48 = v46[2];
        goto LABEL_27;
      }
      v40.m128i_i64[1] = v45;
      v36 = 1;
    }
    else
    {
      v36 = 0;
    }
    LOBYTE(v48) = v36;
  }
  else
  {
    LOBYTE(v48) = 0;
  }
  v47 = v40;
  v24 = _mm_load_si128(&v47);
  v54 = v48;
  v25 = v48;
  v53 = v24;
  if ( !(_BYTE)v48 )
  {
LABEL_14:
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
    goto LABEL_15;
  }
  invalidate_dbgmem_contents();
  v39 = (_QWORD *)operator new(0xE0u);
  v39[4] = v74[0].m128i_i64[0];
  sub_3E360((__int64)(v39 + 5), (__int64)&v72, &v53, (__int64)(a2 + 6));
  v26 = (_QWORD *)a2[2];
  v27 = v39[4];
  if ( v26 )
  {
    while ( 1 )
    {
      v28 = v26[4];
      v29 = 0;
      v30 = (_QWORD *)v26[3];
      if ( v27 < v28 )
      {
        v30 = (_QWORD *)v26[2];
        v29 = v25;
      }
      if ( !v30 )
        break;
      v26 = v30;
    }
    if ( !v29 )
      goto LABEL_47;
  }
  else
  {
    v26 = a2 + 1;
  }
  if ( v26 == (_QWORD *)a2[3] )
    goto LABEL_57;
  v41 = v39[4];
  v33 = std::_Rb_tree_decrement();
  v27 = v41;
  v28 = *(_QWORD *)(v33 + 32);
  v26 = (_QWORD *)v33;
LABEL_47:
  if ( v28 >= v27 )
  {
    if ( v39 )
    {
      v31 = v39[19];
      v39[15] = off_16C2E0;
      while ( v31 )
      {
        sub_3BC40(*(_QWORD **)(v31 + 24));
        v32 = (void *)v31;
        v31 = *(_QWORD *)(v31 + 16);
        operator delete(v32, 0x30u);
      }
      if ( v39[8] )
      {
        v39[9] = 0;
        qfree();
      }
      if ( v39[5] )
      {
        v39[6] = 0;
        qfree();
      }
      operator delete(v39, 0xE0u);
    }
    goto LABEL_56;
  }
LABEL_57:
  v26 = v39;
  std::_Rb_tree_insert_and_rebalance();
  ++a2[5];
LABEL_56:
  *a3 = v26 + 5;
  *(_BYTE *)a1 = 1;
  *(_BYTE *)(a1 + 24) = 0;
LABEL_15:
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  return a1;
}
