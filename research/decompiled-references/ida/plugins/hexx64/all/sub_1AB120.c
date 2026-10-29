__int64 __fastcall sub_1AB120(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  bool v7; // zf
  _DWORD *v9; // r12
  __int64 v10; // r12
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // r12
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // r15
  bool v22; // al
  __int64 v23; // rdi
  const __m128i *v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // r14
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // r14
  __int64 *v31; // r15
  int v32; // eax
  __int64 v33; // rsi
  __m128i v34; // rax
  __int64 *v35; // r15
  __int64 v36; // r13
  __int64 v37; // rcx
  int v38; // r14d
  __int64 v39; // rsi
  unsigned __int64 v40; // r13
  __int64 v41; // r12
  __int64 *v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v51; // r15
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-88h]
  int v57; // [rsp+0h] [rbp-88h]
  __int64 *v58; // [rsp+0h] [rbp-88h]
  __int64 v59; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v60; // [rsp+0h] [rbp-88h]
  __int64 v61; // [rsp+0h] [rbp-88h]
  __int64 v62; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v63; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v64; // [rsp+8h] [rbp-80h]
  __int64 *i; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+10h] [rbp-78h]
  int v67; // [rsp+10h] [rbp-78h]
  __int64 v68; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v69; // [rsp+28h] [rbp-60h] BYREF
  __m128i v70; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-40h]

  v7 = *(_BYTE *)a2 == 10;
  v71 = __readfsqword(0x28u);
  if ( !v7 || (v12 = *(_QWORD *)(a2 + 8), *(_BYTE *)v12 != 5) )
  {
    v9 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v9 == 4 )
    {
      v30 = (__int64 *)a1[4].m128i_i64[0];
      v63 = (unsigned __int8 *)(v9 + 16);
      v31 = &v30[a1[4].m128i_i64[1]];
      if ( v30 != v31 )
      {
        do
        {
          v33 = *v30;
          if ( v9[17] == -1 || *(_DWORD *)(v33 + 4) == -1 )
          {
            sub_123A40((__int64)&v70, (unsigned __int8 *)v33, a3, a4);
            v70.m128i_i32[1] = v9[17];
            v57 = sub_11DA40(v63, (unsigned __int8 *)&v70, a5);
            sub_11CDA0((__int64)&v70);
            v32 = v57;
          }
          else
          {
            v32 = sub_11DA40(v63, (unsigned __int8 *)v33, a5);
          }
          if ( !v32 )
            break;
          ++v30;
        }
        while ( v31 != v30 );
        v34 = a1[4];
        v35 = (__int64 *)v34.m128i_i64[0];
        v58 = (__int64 *)(v34.m128i_i64[0] + 8 * v34.m128i_i64[1]);
        if ( v30 != v58 )
        {
          v36 = a1[2].m128i_i64[0];
          v64 = (unsigned __int8 *)(v36 + 32);
          v37 = v34.m128i_i64[0] + 8 * v34.m128i_i64[1];
          if ( (__int64 *)v34.m128i_i64[0] == v58 )
            goto LABEL_46;
          do
          {
            v39 = *v35;
            if ( *(_DWORD *)(v36 + 36) == -1 || *(_DWORD *)(v39 + 4) == -1 )
            {
              sub_123A40((__int64)&v70, (unsigned __int8 *)v39, v34.m128i_i64[1], v37);
              v70.m128i_i32[1] = *(_DWORD *)(v36 + 36);
              v38 = sub_11DA40(v64, (unsigned __int8 *)&v70, a5);
              sub_11CDA0((__int64)&v70);
            }
            else
            {
              v38 = sub_11DA40(v64, (unsigned __int8 *)v39, a5);
            }
            if ( !v38 )
              break;
            ++v35;
          }
          while ( v35 != v58 );
          v34 = a1[4];
          if ( v35 == (__int64 *)(v34.m128i_i64[0] + 8 * v34.m128i_i64[1]) )
          {
LABEL_46:
            v40 = a1[5].m128i_u64[0];
            v41 = v34.m128i_i64[0];
            if ( v40 < v34.m128i_i64[1] + 1 )
            {
              v44 = qvector_reserve((__int64)a1[4].m128i_i64, 0, v34.m128i_i64[1] + 1, 8);
              v45 = a1[5].m128i_i64[0];
              v46 = (__int64 *)a1[4].m128i_i64[0];
              a1[5].m128i_i64[0] = v40;
              v41 = v44;
              v47 = a1[4].m128i_i64[1] - 1;
              if ( v47 >= 0 )
              {
                v48 = v41;
                do
                {
                  v49 = *v46;
                  v48 += 8;
                  ++v46;
                  *(_QWORD *)(v48 - 8) = v49;
                }
                while ( v47-- != 0 );
                v46 = (__int64 *)a1[4].m128i_i64[0];
              }
              qfree((__int64)v46);
              a1[4].m128i_i64[0] = v41;
              v34.m128i_i64[1] = a1[4].m128i_i64[1];
              a1[5].m128i_i64[0] = v45;
            }
            *(_QWORD *)(v41 + 8 * v34.m128i_i64[1]) = v64;
            ++a1[4].m128i_i64[1];
          }
        }
      }
    }
    v10 = *(int *)(a2 + 4);
    if ( (_DWORD)v10 != -1 && *(_BYTE *)a2 == 5 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( (int)v10 > 1 )
      {
        v70.m128i_i64[0] = v27 + 1;
        v70.m128i_i64[1] = (int)v10 - 1;
        sub_316BB0(a1[8].m128i_i64, &v70, a5, a6);
      }
      v28 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
      v29 = (v28 - 1 + v27 + v10) & -v28;
      if ( v29 > a1[10].m128i_i64[1] )
        a1[10].m128i_i64[1] = v29;
    }
    return 1;
  }
  v14 = a1[10].m128i_i64[0];
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
  if ( v14 > v15 )
    return 1;
  v16 = v15 - v14;
  if ( a1[11].m128i_i32[2] <= v15 - v14 )
    return 1;
  v17 = a1->m128i_i64[1];
  v18 = a4;
  v19 = *(int *)(*(_QWORD *)(v17 + 1504) + 80LL);
  v20 = *(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL);
  if ( !(v16 % v19) )
  {
LABEL_13:
    v23 = a1[5].m128i_i64[1];
    v24 = *(const __m128i **)v23;
    v25 = *(_QWORD *)v23 + 40LL * *(_QWORD *)(v23 + 8);
    if ( *(_QWORD *)v23 == v25 )
      goto LABEL_65;
    while ( v15 != v24[1].m128i_i64[1] )
    {
      v24 = (const __m128i *)((char *)v24 + 40);
      if ( v24 == (const __m128i *)v25 )
        goto LABEL_65;
    }
    if ( v24 == (const __m128i *)v25 )
    {
LABEL_65:
      v61 = v15;
      v24 = (const __m128i *)sub_1999C0((const __m128i **)v23, v15, a1[1].m128i_u64[0], a1[2].m128i_u64[0], a5);
      v15 = v61;
    }
    if ( v18 )
      v24[2].m128i_i8[0] = 1;
    v26 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v26 == 4 && (_DWORD *)a2 == v26 + 8 )
    {
      v51 = (__int64 *)a1[4].m128i_i64[0];
      v60 = (unsigned __int8 *)(v26 + 16);
      for ( i = &v51[a1[4].m128i_i64[1]]; i != v51; ++v51 )
      {
        v53 = *v51;
        if ( v26[17] == -1 || *(_DWORD *)(v53 + 4) == -1 )
        {
          v68 = v15;
          sub_123A40((__int64)&v70, (unsigned __int8 *)v53, v25, v19);
          v70.m128i_i32[1] = v26[17];
          v67 = sub_11DA40(v60, (unsigned __int8 *)&v70, a5);
          sub_11CDA0((__int64)&v70);
          v15 = v68;
          v52 = v67;
        }
        else
        {
          v66 = v15;
          v52 = sub_11DA40(v60, (unsigned __int8 *)v53, a5);
          v15 = v66;
        }
        if ( !v52 )
          break;
      }
      if ( v51 != (__int64 *)(a1[4].m128i_i64[0] + 8 * a1[4].m128i_i64[1]) )
        goto LABEL_22;
      v54 = a1[2].m128i_i64[0];
      v62 = v15;
      v70.m128i_i64[0] = (__int64)&v69;
      v69 = (unsigned __int8 *)(v54 + 64);
      v55 = sub_1AAD00(a1 + 3, &v69, &v70, v19, a5);
      v15 = v62;
      *(_QWORD *)(v55 + 32) = a2;
    }
    if ( a2 == a3 )
    {
LABEL_22:
      if ( a1[9].m128i_i64[1] < v15 )
        a1[9].m128i_i64[1] = v15;
    }
    return 1;
  }
  v21 = -(int)v19;
  if ( *(_BYTE *)(*(_QWORD *)(v17 + 1496) + 145LL) )
  {
    v56 = v15;
    v22 = sub_11CA80(v19 - v16 % *(int *)(*(_QWORD *)(v17 + 1504) + 80LL));
    v15 = v56;
    if ( v22 )
    {
      v15 = v21 & v56;
      goto LABEL_13;
    }
  }
  v42 = (__int64 *)a1[5].m128i_i64[1];
  v43 = *v42;
  if ( *v42 )
  {
    v42[1] = 0;
    v59 = v15;
    qfree(v43);
    *v42 = 0;
    v15 = v59;
    v42[2] = 0;
  }
  a1[10].m128i_i64[0] = v21 & (v15 + v20 - 1);
  return 0;
}

