__int64 __fastcall sub_2C18A0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __m128i a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v9; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 *func; // rax
  __int64 v23; // rsi
  __int64 **v24; // r15
  __int64 *v25; // rdx
  __int64 *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 i; // r12
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 j; // r12
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 *v39; // rax
  __m128i *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 **v44; // r15
  __int64 v45; // rdx
  _QWORD *v46; // r14
  __int64 *v47; // rax
  __int64 **v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 **v52; // r15
  __int64 v53; // rdx
  _QWORD *v54; // r14
  __int64 *v55; // rax
  __int64 **v56; // rdi
  __int64 v57; // [rsp+8h] [rbp-90h]
  __int64 v58; // [rsp+8h] [rbp-90h]
  __int64 v59; // [rsp+10h] [rbp-88h]
  __int64 v60; // [rsp+10h] [rbp-88h]
  int v61; // [rsp+24h] [rbp-74h] BYREF
  __int64 *v62; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v63; // [rsp+30h] [rbp-68h] BYREF
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int128 v65; // [rsp+40h] [rbp-58h]
  unsigned __int64 v66; // [rsp+58h] [rbp-40h]

  v9 = a5;
  v66 = __readfsqword(0x28u);
  v13 = a1[8];
  v61 = -1;
  if ( !v13 )
  {
    v14 = a1[7];
    v15 = a1[9];
    v16 = a1 + 7;
    v62 = nullptr;
    if ( (unsigned __int64)&v62 < v14 || (unsigned __int64)&v62 >= v14 + 8 * v15 )
    {
      if ( v15 > 2 )
        goto LABEL_4;
      v41 = qvector_reserve((__int64)v16, 0, 3, 8);
      v42 = a1[9];
      v43 = a1[8];
      a1[9] = v15;
      v59 = v41;
      v44 = (__int64 **)a1[7];
      v45 = v43 - 1;
      if ( v45 >= 0 )
      {
        v46 = (_QWORD *)v41;
        do
        {
          v47 = *v44;
          *v46 = *v44;
          if ( v47 )
            ++*((_DWORD *)v47 + 26);
          v48 = v44;
          v57 = v45;
          ++v44;
          ++v46;
          sub_140140(v48);
          v45 = v57 - 1;
        }
        while ( v57 );
        v44 = (__int64 **)a1[7];
      }
      qfree((__int64)v44);
      v14 = v59;
      a1[9] = v42;
      v13 = a1[8];
      a1[7] = v59;
      if ( v13 <= 2 )
      {
LABEL_4:
        v17 = 8 * v13;
        while ( 1 )
        {
          *(_QWORD *)(v14 + v17) = 0;
          v17 += 8;
          if ( v17 == 24 )
            break;
          v14 = a1[7];
        }
      }
      a1[8] = 3;
    }
    else
    {
      v63 = nullptr;
      if ( v15 > 2 )
        goto LABEL_15;
      v49 = qvector_reserve((__int64)v16, 0, 3, 8);
      v50 = a1[9];
      v51 = a1[8];
      a1[9] = v15;
      v60 = v49;
      v52 = (__int64 **)a1[7];
      v53 = v51 - 1;
      if ( v53 >= 0 )
      {
        v54 = (_QWORD *)v49;
        do
        {
          v55 = *v52;
          *v54 = *v52;
          if ( v55 )
            ++*((_DWORD *)v55 + 26);
          v56 = v52;
          v58 = v53;
          ++v52;
          ++v54;
          sub_140140(v56);
          v53 = v58 - 1;
        }
        while ( v58 );
        v52 = (__int64 **)a1[7];
      }
      qfree((__int64)v52);
      v14 = v60;
      a1[9] = v50;
      v13 = a1[8];
      a1[7] = v60;
      if ( v13 <= 2 )
      {
LABEL_15:
        v21 = 8 * v13;
        while ( 1 )
        {
          *(_QWORD *)(v14 + v21) = 0;
          v21 += 8;
          if ( v21 == 24 )
            break;
          v14 = a1[7];
        }
      }
      a1[8] = 3;
      sub_140140(&v63);
    }
  }
  switch_dbctx();
  v18 = *(_QWORD *)(a1[7] + 8 * v9);
  if ( v18 )
  {
LABEL_9:
    if ( (a3 & 0x3F) == 0 )
    {
      v19 = a1[5] + (a3 >> 6);
      if ( v19 != -1 )
      {
        ++*(_DWORD *)(v18 + 104);
        v63 = (__int64 *)v18;
        sub_2C07C0(v18, v19, nullptr, &v61, a6);
        sub_140140(&v63);
      }
    }
    return v61;
  }
  func = (__int64 *)get_func();
  if ( !func )
  {
LABEL_46:
    v18 = *(_QWORD *)(a1[7] + 8 * v9);
    if ( !v18 )
      return v61;
    goto LABEL_9;
  }
  v23 = *(_QWORD *)(a4 + 112);
  a6 = 0;
  v63 = func;
  v64 = 0;
  v65 = 0;
  sub_14CDC0((__int64 *)&v62, v23, &v63, nullptr, 1, 0.0, a7, a8, a9);
  v24 = (__int64 **)(a1[7] + 8 * v9);
  v25 = *v24;
  if ( *v24 )
  {
    if ( (*((_DWORD *)v25 + 26))-- == 1 )
    {
      v27 = *v24;
      if ( *v24 )
      {
        sub_258970(*v24);
        v28 = v27[23];
        if ( v28 )
        {
          v29 = v27[24];
          if ( v29 )
          {
            for ( i = 0; i != v29; ++i )
            {
              v31 = (__int64 *)(v28 + 24 * i);
              v32 = *v31;
              if ( *v31 )
              {
                v31[1] = 0;
                qfree(v32);
                v28 = v27[23];
              }
            }
          }
          v27[24] = 0;
          qfree(v28);
        }
        v33 = v27[20];
        if ( v33 )
        {
          v27[21] = 0;
          qfree(v33);
        }
        v34 = v27[16];
        if ( v34 )
        {
          v35 = v27[17];
          if ( v35 )
          {
            for ( j = 0; j != v35; ++j )
            {
              v37 = (__int64 *)(v34 + 32 * j);
              v38 = *v37;
              if ( *v37 )
              {
                v37[1] = 0;
                qfree(v38);
                v34 = v27[16];
              }
            }
          }
          v27[17] = 0;
          qfree(v34);
        }
        sub_255050((__int64)(v27 + 2), 0.0);
        j__qfree((__int64)v27);
      }
    }
  }
  v39 = v62;
  *v24 = v62;
  if ( v39 )
    ++*((_DWORD *)v39 + 26);
  sub_140140(&v62);
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  v40 = *(__m128i **)(a1[7] + 8 * v9);
  if ( v40 )
  {
    sub_2581E0(v40);
    goto LABEL_46;
  }
  return v61;
}

