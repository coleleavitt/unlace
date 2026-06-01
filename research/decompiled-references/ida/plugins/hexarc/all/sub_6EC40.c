__int64 __fastcall sub_6EC40(
        __int64 *a1,
        _QWORD **a2,
        unsigned int a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        void (__fastcall ***a7)(_QWORD, _QWORD, _QWORD, __int64),
        __int64 *a8)
{
  char v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, int); // rax
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, int); // rax
  int v23; // eax
  __int64 (__fastcall *v24)(__int64, int, int); // rax
  int v25; // ecx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  unsigned __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rax
  _DWORD *v33; // rdx
  int v34; // r14d
  __int64 (__fastcall *v35)(__int64, int); // rax
  int v36; // eax
  __int64 (__fastcall *v37)(__int64, int, int); // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdi
  unsigned int *v41; // r14
  unsigned int v42; // r9d
  unsigned int v43; // r15d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // xmm0_8
  __int64 v50; // rax
  __int64 v51; // rax
  size_t v52; // r15
  _DWORD *v53; // rax
  _DWORD *v54; // rsi
  __int64 (__fastcall *v55)(__int64); // rax
  unsigned __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 *v59; // rcx
  __int64 *v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  int v63; // r14d
  __int64 (__fastcall *v64)(__int64, int); // rax
  int v65; // eax
  __int64 (__fastcall *v66)(__int64, int, int); // rax
  unsigned int v69; // [rsp+20h] [rbp-B0h]
  int v70; // [rsp+30h] [rbp-A0h]
  unsigned int v71; // [rsp+34h] [rbp-9Ch]
  int v72; // [rsp+38h] [rbp-98h]
  unsigned __int64 v73; // [rsp+38h] [rbp-98h]
  _DWORD *v74; // [rsp+40h] [rbp-90h] BYREF
  __int128 v75; // [rsp+48h] [rbp-88h]
  __int64 v76; // [rsp+60h] [rbp-70h] BYREF
  __int128 v77; // [rsp+68h] [rbp-68h]
  unsigned int *v78; // [rsp+80h] [rbp-50h] BYREF
  __int128 v79; // [rsp+88h] [rbp-48h]
  unsigned __int64 v80; // [rsp+98h] [rbp-38h]

  v80 = __readfsqword(0x28u);
  v12 = sub_6A0F0(a1, (__int64)a5, a3, a6);
  v13 = a6[1];
  if ( v12 )
  {
    v62 = 1;
    v63 = 1;
    if ( v13 > 1 )
    {
      do
      {
        (**a7)(a7, a3, *(unsigned int *)(*a6 + 4 * v62), 5);
        v62 = ++v63;
      }
      while ( (unsigned __int64)v63 < a6[1] );
    }
    return 5;
  }
  v74 = nullptr;
  v75 = 0;
  if ( v13 )
  {
    v52 = 4 * v13;
    v73 = v13;
    v53 = (_DWORD *)qalloc_or_throw();
    v54 = (_DWORD *)*a6;
    v74 = v53;
    *((_QWORD *)&v75 + 1) = v73;
    memcpy(v53, v54, v52);
    *(_QWORD *)&v75 = v73;
  }
  v72 = sub_6B6C0((__int64)a1, a8, a3, (__int64 *)&v74, -1);
  v14 = a6[1];
  v15 = (_DWORD *)*a6;
  v16 = *a6 + 4 * v14;
  if ( *a6 != v16 )
  {
    while ( v72 != *v15 )
    {
      if ( (_DWORD *)v16 == ++v15 )
        goto LABEL_11;
    }
    if ( (_DWORD *)v16 != v15 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v17 == sub_5EB10 )
      {
        if ( !a1[7] )
          goto LABEL_11;
        v65 = *(_DWORD *)(a1[6] + 24LL * v72 + 8);
      }
      else
      {
        v65 = v17((__int64)a1, v72);
      }
      if ( v65 == 1 )
      {
        v66 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
        if ( v66 == sub_5EB50 )
        {
          v14 = a6[1];
          v72 = **(_DWORD **)(a1[6] + 24LL * v72);
          goto LABEL_11;
        }
        v72 = v66((__int64)a1, v72, 0);
      }
      v14 = a6[1];
    }
  }
LABEL_11:
  if ( v14 <= 1 )
  {
    if ( !a4[1] )
      goto LABEL_59;
LABEL_74:
    v55 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v55 != sub_5EAC0 )
      v55((__int64)a1);
    v56 = a4[1] >> 1;
    if ( v56 )
    {
      v57 = 8 * a4[1] - 8;
      v58 = 0;
      do
      {
        v59 = (__int64 *)(*a4 + v57);
        v60 = (__int64 *)(*a4 + 8 * v58++);
        v57 -= 8;
        v61 = *v60;
        *v60 = *v59;
        *v59 = v61;
      }
      while ( v56 != v58 );
    }
    goto LABEL_59;
  }
  v18 = 1;
  v70 = 1;
  do
  {
    v19 = 0;
    v20 = *(int *)(*a6 + 4 * v18);
    v71 = v20;
    v21 = 24 * v20;
    while ( 1 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v22 == sub_5EB10 )
        break;
      if ( v19 >= (int)v22((__int64)a1, v71) )
        goto LABEL_36;
LABEL_18:
      v24 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      if ( v24 == sub_5EB50 )
        v25 = *(_DWORD *)(*(_QWORD *)(a1[6] + v21) + 4LL * v19);
      else
        v25 = v24((__int64)a1, v71, v19);
      if ( v25 == v72 )
        goto LABEL_27;
      v26 = (_DWORD *)*a6;
      v27 = *a6 + 4LL * a6[1];
      if ( *a6 != v27 )
      {
        while ( v25 != *v26 )
        {
          if ( (_DWORD *)v27 == ++v26 )
            goto LABEL_28;
        }
        if ( (_DWORD *)v27 != v26 )
        {
LABEL_26:
          v69 = v25;
          if ( sub_6A3F0(a1, a5, v71, v25, 0) )
          {
            v45 = a4[1];
            v46 = *a4;
            v47 = a4[2];
            v48 = v45 + 1;
            v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v71), _mm_cvtsi32_si128(v69)).m128i_u64[0];
            v78 = (unsigned int *)v49;
            if ( (unsigned __int64)&v78 < v46 || (unsigned __int64)&v78 >= v46 + 8 * v47 )
            {
              if ( v47 < v48 )
              {
                v50 = qvector_reserve();
                *a4 = v50;
                v46 = v50;
                v45 = a4[1];
              }
              *(_QWORD *)(v46 + 8 * v45) = v78;
            }
            else
            {
              if ( v47 < v48 )
              {
                v51 = qvector_reserve();
                *a4 = v51;
                v46 = v51;
                v45 = a4[1];
              }
              *(_QWORD *)(v46 + 8 * v45) = v49;
            }
            ++a4[1];
          }
          goto LABEL_27;
        }
      }
LABEL_28:
      v28 = v74;
      v29 = &v74[v75];
      if ( v74 == v29 )
        goto LABEL_26;
      while ( v25 != *v28 )
      {
        if ( v29 == ++v28 )
          goto LABEL_26;
      }
      if ( v29 == v28 )
        goto LABEL_26;
LABEL_27:
      ++v19;
    }
    v23 = 0;
    if ( a1[7] )
      v23 = *(_DWORD *)(a1[6] + v21 + 8);
    if ( v19 < v23 )
      goto LABEL_18;
LABEL_36:
    ++v70;
    v30 = a6[1];
    v18 = v70;
  }
  while ( v70 < v30 );
  if ( a4[1] )
    goto LABEL_74;
  if ( v30 <= 1 )
  {
LABEL_59:
    v43 = 0;
    goto LABEL_60;
  }
  v31 = 1;
  v32 = 1;
  while ( 1 )
  {
    v33 = (_DWORD *)*a6;
    v76 = 0;
    v77 = 0;
    v34 = v33[v32];
    v35 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
    if ( v35 == sub_5EB10 )
    {
      if ( !a1[7] || !*(_DWORD *)(a1[6] + 24LL * v34 + 8) )
        goto LABEL_58;
    }
    else
    {
      if ( !(unsigned int)v35((__int64)a1, v34) )
        goto LABEL_80;
      v64 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v64 != sub_5EB10 )
      {
        v36 = v64((__int64)a1, v34);
        goto LABEL_45;
      }
    }
    if ( !a1[7] )
      goto LABEL_49;
    v36 = *(_DWORD *)(a1[6] + 24LL * v34 + 8);
LABEL_45:
    if ( v36 == 1 )
    {
      v37 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      v38 = v37 == sub_5EB50 ? **(_DWORD **)(a1[6] + 24LL * v34) : v37((__int64)a1, v34, 0);
      if ( v38 == v72 )
      {
LABEL_80:
        if ( !v76 )
          goto LABEL_58;
        goto LABEL_57;
      }
    }
LABEL_49:
    sub_6B6C0((__int64)a1, a8, v34, &v76, v72);
    v78 = nullptr;
    v79 = 0;
    sub_69C20((__int64)a1, &v76, (__int64 *)&v78);
    v39 = v79;
    v40 = (__int64)v78;
    v41 = v78;
    if ( 8LL * (_QWORD)v79 )
      break;
LABEL_54:
    if ( v40 )
    {
      *(_QWORD *)&v79 = 0;
      qfree();
    }
    if ( !v76 )
      goto LABEL_58;
LABEL_57:
    *(_QWORD *)&v77 = 0;
    qfree();
LABEL_58:
    v32 = ++v31;
    if ( (unsigned __int64)v31 >= a6[1] )
      goto LABEL_59;
  }
  while ( 1 )
  {
    v42 = v41[1];
    if ( v42 != v72 )
      break;
LABEL_53:
    v41 += 2;
    if ( v41 == (unsigned int *)(v40 + 8 * v39) )
      goto LABEL_54;
  }
  v43 = sub_6EAE0(a1, a2, a5, (__int64)a6, *v41, v42, 0);
  v40 = (__int64)v78;
  if ( !v43 )
  {
    v39 = v79;
    goto LABEL_53;
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
LABEL_60:
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  return v43;
}

