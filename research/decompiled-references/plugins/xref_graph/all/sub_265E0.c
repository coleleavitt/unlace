unsigned __int64 __fastcall sub_265E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rax
  _DWORD *v14; // rdx
  void **v15; // rbx
  __int64 v16; // rcx
  void **i; // rax
  __int64 *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // r14
  int *v23; // rbx
  __int64 *v24; // r15
  __int64 v25; // rbp
  __int64 *v26; // r14
  __int64 v27; // rdi
  __m128i v28; // xmm1
  _QWORD *v29; // rbx
  int **v30; // r15
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int *v34; // rax
  char *v35; // rdx
  char *v36; // rbx
  char *j; // rbp
  void *v38; // rbp
  __int64 v39; // rbx
  void *v40; // rdi
  char *v42; // rcx
  size_t v43; // rdx
  char *v44; // rax
  char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  _QWORD *v53; // [rsp+0h] [rbp-F0h]
  __int64 *v54; // [rsp+0h] [rbp-F0h]
  __m128i v55; // [rsp+8h] [rbp-E8h] BYREF
  void **v56; // [rsp+18h] [rbp-D8h]
  void **v57; // [rsp+20h] [rbp-D0h]
  char *v58; // [rsp+28h] [rbp-C8h]
  __int64 v59; // [rsp+30h] [rbp-C0h]
  void *v60; // [rsp+40h] [rbp-B0h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-98h]
  void *v63[2]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v64; // [rsp+78h] [rbp-78h]
  _QWORD v65[2]; // [rsp+88h] [rbp-68h] BYREF
  __m128i v66; // [rsp+98h] [rbp-58h]
  unsigned __int64 v67; // [rsp+B0h] [rbp-40h]

  v6 = *(void **)(a1 + 72);
  v67 = __readfsqword(0x28u);
  v60 = v6;
  v55 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4BC68), (__m128i)(unsigned __int64)sub_278C0);
  if ( !v6 || (_InterlockedAdd((volatile signed __int32 *)v6, 1u), (v8 = *(_QWORD *)(a1 + 72)) == 0) )
  {
    v64 = 0;
    v57 = v63;
    *(_OWORD *)v63 = 0;
LABEL_5:
    sub_22F70((__int64)v57, 0, 0, 0, a5, a6);
    v13 = (int *)v63[0];
    goto LABEL_6;
  }
  v64 = 0;
  *(_OWORD *)v63 = 0;
  v9 = *(_QWORD *)(v8 + 48);
  v57 = v63;
  sub_21850(v63, v9, a3, a4, a5, a6);
  sub_23350(*(_QWORD *)(v8 + 32), v8 + 16, (int **)v63, v10, v11, v12);
  v13 = (int *)v63[0];
  if ( !v63[0] || *(int *)v63[0] > 1 )
    goto LABEL_5;
LABEL_6:
  v14 = v63[1];
  v15 = (void **)v63[1];
  if ( !v13 || *v13 > 1 )
  {
    sub_22F70((__int64)v57, 0, 0, 0, a5, a6);
    v14 = v63[1];
  }
  v16 = (__int64)&v14[2 * v64];
  for ( i = v15; i != (void **)v16; v14[8] = 0 )
    v14 = *i++;
  if ( v63[0] && !_InterlockedSub((volatile signed __int32 *)v63[0], 1u) )
  {
    free(v63[0]);
    v18 = *(__int64 **)(a1 + 64);
    if ( v18 )
      goto LABEL_14;
LABEL_74:
    v23 = nullptr;
    v25 = 0;
    v56 = ptr;
    goto LABEL_18;
  }
  v18 = *(__int64 **)(a1 + 64);
  if ( !v18 )
    goto LABEL_74;
LABEL_14:
  v19 = v18[6];
  v62 = 0;
  v56 = ptr;
  *(_OWORD *)ptr = 0;
  sub_21990(ptr, v19, (__int64)v14, v16, a5, a6);
  v22 = (__int64 *)v18[4];
  v23 = (int *)ptr[0];
  v24 = (__int64 *)ptr[1];
  v25 = v62;
  v53 = v18 + 2;
  if ( v18 + 2 != v22 )
  {
    do
    {
      v47 = v22[4];
      if ( v23 )
      {
        if ( *v23 > 1 )
          goto LABEL_56;
LABEL_66:
        v52 = ((unsigned __int64)v23 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *((_QWORD *)v23 + 1) - ((__int64)((__int64)v24 - v52) >> 3) == v25 )
        {
          if ( !v25 && (__int64 *)v52 != v24 )
          {
            *(v24 - 1) = v47;
            v25 = 1;
            --v24;
            goto LABEL_53;
          }
          goto LABEL_56;
        }
        v24[v25++] = v47;
        goto LABEL_53;
      }
LABEL_60:
      ptr[0] = v23;
      ptr[1] = v24;
      v62 = v25;
      sub_23580((__int64)v56, 0, 1, 0, a5, a6);
      v24 = (__int64 *)ptr[1];
      v49 = v62;
      v23 = (int *)ptr[0];
      v50 = (__int64 *)((char *)ptr[1] + 8 * v25);
      if ( v25 < v62 )
      {
        v59 = v62;
        v58 = (char *)ptr[1] + 8 * v25;
        memmove(v50 + 1, v50, 8 * (v62 - v25));
        v49 = v59;
        v50 = (__int64 *)v58;
      }
      *v50 = v47;
      v25 = v49 + 1;
      if ( v23 )
      {
LABEL_53:
        while ( *v23 <= 1 )
        {
          v46 = std::_Rb_tree_increment(v22);
          v22 = (__int64 *)v46;
          if ( v53 == (_QWORD *)v46 )
            goto LABEL_15;
          v47 = *(_QWORD *)(v46 + 32);
          if ( *v23 <= 1 )
            goto LABEL_66;
LABEL_56:
          if ( *v23 > 1 )
            goto LABEL_60;
          v48 = (__int64)((__int64)v24 - (((unsigned __int64)v23 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
          if ( *((_QWORD *)v23 + 1) - v25 - v48 > 0 )
          {
            v45 = (char *)&v24[v25];
          }
          else
          {
            if ( (__int64)((__int64)v24 - (((unsigned __int64)v23 + 31) & 0xFFFFFFFFFFFFFFF0LL)) <= 0
              || 3 * v25 >= 2LL * *((_QWORD *)v23 + 1) )
            {
              goto LABEL_60;
            }
            v42 = (char *)&v24[-v48];
            v43 = 8 * v25;
            if ( v25 && v42 != (char *)v24 && v24 && v42 )
            {
              v58 = (char *)(8 * v25);
              v44 = (char *)memmove(v42, v24, v43);
              v43 = 8 * v25;
              v42 = v44;
            }
            v45 = &v42[v43];
            v24 = (__int64 *)v42;
          }
          *(_QWORD *)v45 = v47;
          ++v25;
        }
      }
      ptr[0] = v23;
      ptr[1] = v24;
      v62 = v25;
      sub_23580((__int64)v56, 0, 0, 0, a5, a6);
      v23 = (int *)ptr[0];
      v24 = (__int64 *)ptr[1];
      v51 = std::_Rb_tree_increment(v22);
      v25 = v62;
      v22 = (__int64 *)v51;
    }
    while ( v53 != (_QWORD *)v51 );
  }
LABEL_15:
  if ( v23 && *v23 <= 1 )
    goto LABEL_70;
  v18 = v24;
LABEL_18:
  ptr[0] = v23;
  ptr[1] = v18;
  v62 = v25;
  sub_23580((__int64)v56, 0, 0, 0, a5, a6);
  v23 = (int *)ptr[0];
  v24 = (__int64 *)ptr[1];
  v25 = v62;
  if ( !ptr[0] )
    goto LABEL_19;
LABEL_70:
  if ( *v23 > 1 )
  {
LABEL_19:
    ptr[0] = v23;
    ptr[1] = v24;
    v62 = v25;
    sub_23580((__int64)v56, 0, 0, 0, a5, a6);
    v23 = (int *)ptr[0];
    v58 = (char *)ptr[1];
    v54 = (__int64 *)((char *)ptr[1] + 8 * v62);
    if ( v54 == v24 )
      goto LABEL_24;
    goto LABEL_20;
  }
  v58 = (char *)v24;
  v54 = &v24[v25];
  if ( v54 != v24 )
  {
LABEL_20:
    v26 = v24;
    do
    {
      v27 = *v26;
      v28 = _mm_load_si128(&v55);
      v65[0] = a1;
      v65[1] = &v60;
      v66 = v28;
      sub_1AA10(v27, (__int64)v65);
      if ( v66.m128i_i64[0] )
        ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v66.m128i_i64[0])(v65, v65, 3);
      ++v26;
    }
    while ( v54 != v26 );
LABEL_24:
    if ( !v23 )
      goto LABEL_27;
  }
  if ( !_InterlockedSub(v23, 1u) )
    free(v23);
LABEL_27:
  v29 = v60;
  v64 = 0;
  *(_OWORD *)v63 = 0;
  if ( !v60
    || (v30 = (int **)v57,
        sub_21850(v57, *((_QWORD *)v60 + 6), v20, v21, a5, a6),
        sub_23350(v29[4], (__int64)(v29 + 2), v30, v31, v32, v33),
        (v34 = (int *)v63[0]) == nullptr)
    || *(int *)v63[0] > 1 )
  {
    sub_22F70((__int64)v57, 0, 0, 0, a5, a6);
    v34 = (int *)v63[0];
  }
  v35 = (char *)v63[1];
  v36 = (char *)v63[1];
  if ( !v34 || *v34 > 1 )
  {
    sub_22F70((__int64)v57, 0, 0, 0, a5, a6);
    v35 = (char *)v63[1];
  }
  for ( j = &v35[8 * v64]; j != v36; v36 += 8 )
    sub_264C0(a1, *(_QWORD **)v36);
  if ( v63[0] && !_InterlockedSub((volatile signed __int32 *)v63[0], 1u) )
    free(v63[0]);
  sub_20A10(a1);
  if ( v60 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v60, 1u) )
    {
      v38 = v60;
      if ( v60 )
      {
        v39 = *((_QWORD *)v60 + 3);
        while ( v39 )
        {
          sub_1F160(*(_QWORD **)(v39 + 24));
          v40 = (void *)v39;
          v39 = *(_QWORD *)(v39 + 16);
          operator delete(v40, 0x38u);
        }
        operator delete(v38, 0x38u);
      }
    }
  }
  return v67 - __readfsqword(0x28u);
}
