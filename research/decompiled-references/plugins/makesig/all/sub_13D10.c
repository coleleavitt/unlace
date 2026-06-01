void __fastcall sub_13D10(unsigned int *a1, char *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  char *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned int *v11; // rbp
  char *v12; // rbx
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rsi
  char *v16; // rbp
  __int64 v17; // r13
  __int64 v18; // r12
  int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 i; // rbx
  unsigned int *v23; // rbx
  unsigned int v24; // ecx
  bool v25; // sf
  unsigned int *v26; // rax
  __int64 v28; // [rsp+18h] [rbp-60h]
  char *v29; // [rsp+18h] [rbp-60h]
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  unsigned int v33; // [rsp+34h] [rbp-44h]
  unsigned int v34; // [rsp+38h] [rbp-40h]
  unsigned int v35; // [rsp+3Ch] [rbp-3Ch]

  v4 = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 64 )
  {
    v5 = a3;
    v6 = a2;
    v7 = v4 >> 2;
    v8 = v4 >> 3;
    if ( a3 )
    {
      while ( 1 )
      {
        v9 = v5 - 1;
        v11 = &a1[v8];
        v12 = (char *)(a1 + 1);
        v13 = *v11;
        v34 = a1[1];
        v10 = v34;
        v30 = *a4;
        v32 = *a4 + 208LL * v34;
        v28 = *a4 + 208LL * *v11;
        v14 = sub_86D0(v32, v28);
        v33 = *a1;
        v35 = *((_DWORD *)v6 - 1);
        v15 = v30 + 208LL * v35;
        if ( v14 >= 0 )
          break;
        if ( sub_86D0(v28, v15) >= 0 )
        {
          if ( sub_86D0(v32, v15) >= 0 )
          {
LABEL_26:
            *(_QWORD *)a1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v33)).m128i_u64[0];
            goto LABEL_6;
          }
          v26 = a1;
          goto LABEL_24;
        }
        *a1 = v13;
        *v11 = v33;
        v10 = *a1;
LABEL_6:
        v29 = v6;
        v16 = v6;
        v31 = v9;
        while ( 1 )
        {
          v17 = *a4;
          v18 = *a4 + 208 * v10;
          while ( 1 )
          {
            v19 = *(_DWORD *)v12;
            if ( sub_86D0(v17 + 208LL * *(unsigned int *)v12, v18) >= 0 )
              break;
            v12 += 4;
          }
          do
          {
            v20 = *((unsigned int *)v16 - 1);
            v16 -= 4;
            v21 = v20;
          }
          while ( sub_86D0(v18, v17 + 208 * v20) < 0 );
          if ( v12 >= v16 )
            break;
          *(_DWORD *)v12 = v21;
          v12 += 4;
          *(_DWORD *)v16 = v19;
          v10 = *a1;
        }
        v5 = v31;
        sub_13D10(v12, v29, v31, a4);
        if ( v12 - (char *)a1 <= 64 )
          return;
        v6 = v12;
        v8 = (v12 - (char *)a1) >> 3;
        v7 = (v12 - (char *)a1) >> 2;
        if ( !v31 )
          goto LABEL_15;
      }
      if ( sub_86D0(v32, v15) < 0 )
        goto LABEL_26;
      v25 = sub_86D0(v28, v15) < 0;
      v26 = a1;
      if ( !v25 )
      {
        *a1 = v13;
        *v11 = v33;
        v10 = *a1;
        goto LABEL_6;
      }
LABEL_24:
      *v26 = v35;
      *((_DWORD *)v6 - 1) = v33;
      v10 = *v26;
      goto LABEL_6;
    }
LABEL_15:
    for ( i = v8 - 1; ; --i )
    {
      sub_13B10((__int64)a1, i, v7, a1[i], a4);
      if ( !i )
        break;
    }
    if ( v6 - (char *)a1 > 4 )
    {
      v23 = (unsigned int *)v6;
      do
      {
        v24 = *--v23;
        *v23 = *a1;
        sub_13B10((__int64)a1, 0, v23 - a1, v24, a4);
      }
      while ( (char *)v23 - (char *)a1 > 4 );
    }
  }
}
