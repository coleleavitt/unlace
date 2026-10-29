__int64 __fastcall sub_B64F0(char *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned int *v10; // rbp
  char *v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rdi
  int v14; // r13d
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rdi
  int v19; // r13d
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // r15d
  unsigned int *v23; // r13
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ebp
  __int64 v28; // rdi
  int v29; // ebp
  __int64 v30; // rdi
  unsigned int v31; // r15d
  __int64 v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rdi
  int v35; // r13d
  __int64 v36; // rdi
  __int64 i; // rbp
  unsigned int v38; // ecx
  unsigned int v39; // r15d
  __int64 v40; // rax
  int v41; // r13d
  __int64 v42; // rdi
  int v43; // eax
  unsigned int v44; // edx
  unsigned int v45; // r13d
  __int64 v46; // rax
  int v47; // ebp
  __int64 v48; // rdi
  int v49; // eax
  unsigned int *v50; // [rsp+0h] [rbp-48h]

  result = (char *)a2 - a1;
  v50 = a2;
  if ( (char *)a2 - a1 <= 64 )
    return result;
  while ( 2 )
  {
    v7 = result;
    v8 = result >> 3;
    v9 = v7 >> 2;
    if ( !a3 )
    {
      for ( i = v8 - 1; ; --i )
      {
        sub_B4DC0((__int64)a1, i, v9, *(_DWORD *)&a1[4 * i], a4);
        if ( !i )
          break;
      }
      for ( result = (char *)v50 - a1;
            (char *)v50 - a1 > 4;
            result = sub_B4DC0((__int64)a1, 0, ((char *)v50 - a1) >> 2, v38, a4) )
      {
        v38 = *--v50;
        *v50 = *(_DWORD *)a1;
      }
      return result;
    }
    v10 = (unsigned int *)&a1[4 * v8];
    v11 = a1 + 4;
    --a3;
    v12 = *v10;
    v13 = sub_32CA00(a4, *((unsigned int *)a1 + 1));
    if ( v13 != *(_QWORD *)(a4 + 56) || (v14 = 1000, *(_DWORD *)(a4 + 76) != 4) )
      v14 = sub_171800(v13);
    v15 = sub_32CA00(a4, v12);
    if ( v15 != *(_QWORD *)(a4 + 56) || (v16 = 1000, *(_DWORD *)(a4 + 76) != 4) )
      v16 = sub_171800(v15);
    v17 = *(v50 - 1);
    if ( v16 <= v14 )
    {
      v34 = sub_32CA00(a4, *((unsigned int *)a1 + 1));
      if ( v34 != *(_QWORD *)(a4 + 56) || (v35 = 1000, *(_DWORD *)(a4 + 76) != 4) )
        v35 = sub_171800(v34);
      v36 = sub_32CA00(a4, v17);
      if ( v36 == *(_QWORD *)(a4 + 56) && *(_DWORD *)(a4 + 76) == 4 )
      {
        if ( v35 >= 1000 )
          goto LABEL_54;
      }
      else if ( (int)sub_171800(v36) <= v35 )
      {
LABEL_54:
        v39 = *(v50 - 1);
        v40 = sub_32CA00(a4, *v10);
        if ( v40 != *(_QWORD *)(a4 + 56) || (v41 = 1000, *(_DWORD *)(a4 + 76) != 4) )
          v41 = sub_171800(v40);
        v42 = sub_32CA00(a4, v39);
        if ( v42 != *(_QWORD *)(a4 + 56) || (v43 = 1000, *(_DWORD *)(a4 + 76) != 4) )
          v43 = sub_171800(v42);
        v44 = *(_DWORD *)a1;
        if ( v43 <= v41 )
        {
          *(_DWORD *)a1 = *v10;
          *v10 = v44;
          v22 = *(_DWORD *)a1;
          goto LABEL_13;
        }
LABEL_59:
        *(_DWORD *)a1 = *(v50 - 1);
        *(v50 - 1) = v44;
        v22 = *(_DWORD *)a1;
        goto LABEL_13;
      }
      v22 = *((_DWORD *)a1 + 1);
      *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
      goto LABEL_13;
    }
    v18 = sub_32CA00(a4, *v10);
    if ( v18 != *(_QWORD *)(a4 + 56) || (v19 = 1000, *(_DWORD *)(a4 + 76) != 4) )
      v19 = sub_171800(v18);
    v20 = sub_32CA00(a4, v17);
    if ( v20 == *(_QWORD *)(a4 + 56) && *(_DWORD *)(a4 + 76) == 4 )
    {
      if ( v19 >= 1000 )
        goto LABEL_66;
    }
    else if ( (int)sub_171800(v20) <= v19 )
    {
LABEL_66:
      v45 = *(v50 - 1);
      v46 = sub_32CA00(a4, *((unsigned int *)a1 + 1));
      if ( v46 != *(_QWORD *)(a4 + 56) || (v47 = 1000, *(_DWORD *)(a4 + 76) != 4) )
        v47 = sub_171800(v46);
      v48 = sub_32CA00(a4, v45);
      if ( v48 != *(_QWORD *)(a4 + 56) || (v49 = 1000, *(_DWORD *)(a4 + 76) != 4) )
        v49 = sub_171800(v48);
      v44 = *(_DWORD *)a1;
      if ( v49 <= v47 )
      {
        v22 = *((_DWORD *)a1 + 1);
        *(_QWORD *)a1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v44)).m128i_u64[0];
        goto LABEL_13;
      }
      goto LABEL_59;
    }
    v21 = *(_DWORD *)a1;
    *(_DWORD *)a1 = *v10;
    *v10 = v21;
    v22 = *(_DWORD *)a1;
LABEL_13:
    v23 = v50;
    while ( 1 )
    {
LABEL_16:
      v26 = sub_32CA00(a4, *(unsigned int *)v11);
      if ( v26 != *(_QWORD *)(a4 + 56) || (v27 = 1000, *(_DWORD *)(a4 + 76) != 4) )
        v27 = sub_171800(v26);
      v28 = sub_32CA00(a4, v22);
      if ( v28 == *(_QWORD *)(a4 + 56) && *(_DWORD *)(a4 + 76) == 4 )
        break;
      v24 = sub_171800(v28);
      v25 = *(unsigned int *)a1;
      v22 = *(_DWORD *)a1;
      if ( v24 <= v27 )
        goto LABEL_21;
LABEL_15:
      v11 += 4;
    }
    v25 = *(unsigned int *)a1;
    v22 = *(_DWORD *)a1;
    if ( v27 < 1000 )
      goto LABEL_15;
LABEL_21:
    --v23;
    while ( 2 )
    {
      v31 = *v23;
      v32 = sub_32CA00(a4, v25);
      if ( v32 != *(_QWORD *)(a4 + 56) || (v29 = 1000, *(_DWORD *)(a4 + 76) != 4) )
        v29 = sub_171800(v32);
      v30 = sub_32CA00(a4, v31);
      if ( v30 != *(_QWORD *)(a4 + 56) || *(_DWORD *)(a4 + 76) != 4 )
      {
        if ( (int)sub_171800(v30) <= v29 )
          break;
        goto LABEL_25;
      }
      if ( v29 < 1000 )
      {
LABEL_25:
        v25 = *(unsigned int *)a1;
        --v23;
        continue;
      }
      break;
    }
    if ( v11 < (char *)v23 )
    {
      v33 = *(_DWORD *)v11;
      v11 += 4;
      *((_DWORD *)v11 - 1) = *v23;
      *v23 = v33;
      v22 = *(_DWORD *)a1;
      goto LABEL_16;
    }
    sub_B64F0(v11, v50, a3, a4);
    result = v11 - a1;
    if ( v11 - a1 > 64 )
    {
      v50 = (unsigned int *)v11;
      continue;
    }
    return result;
  }
}

