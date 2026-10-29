int *__fastcall sub_21B430(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int *result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  int *i; // r13
  int *v10; // r15
  int *v11; // rbx
  char v12; // al
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  int *v16; // r15
  char v17; // al
  int v18; // esi
  int v19; // eax
  __int64 j; // rbx
  int v21; // ecx
  char v22; // dl
  unsigned int v23; // eax
  char v24; // dl

  result = (int *)((char *)a2 - a1);
  if ( (__int64)a2 - a1 > 64 )
  {
    v5 = (__int64)result >> 3;
    v6 = a3;
    v7 = ((__int64)a2 - a1) >> 2;
    for ( i = a2; v6; v7 = ((__int64)v11 - a1) >> 2 )
    {
      v10 = (int *)(a1 + 4 * v5);
      --v6;
      v11 = (int *)(a1 + 4);
      v12 = sub_215E80(a4, *(_DWORD *)(a1 + 4), *v10);
      v13 = *(i - 1);
      if ( v12 )
      {
        if ( !sub_215E80(a4, *v10, v13) )
        {
          v22 = sub_215E80(a4, *(_DWORD *)(a1 + 4), *(i - 1));
          v23 = *(_DWORD *)a1;
          if ( !v22 )
          {
            v15 = *(_DWORD *)(a1 + 4);
            *(_QWORD *)a1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v23)).m128i_u64[0];
            goto LABEL_6;
          }
LABEL_25:
          *(_DWORD *)a1 = *(i - 1);
          *(i - 1) = v23;
          v15 = *(_DWORD *)a1;
          goto LABEL_6;
        }
        v14 = *(_DWORD *)a1;
        *(_DWORD *)a1 = *v10;
        *v10 = v14;
        v15 = *(_DWORD *)a1;
      }
      else
      {
        if ( !sub_215E80(a4, *(_DWORD *)(a1 + 4), v13) )
        {
          v24 = sub_215E80(a4, *v10, *(i - 1));
          v23 = *(_DWORD *)a1;
          if ( !v24 )
          {
            *(_DWORD *)a1 = *v10;
            *v10 = v23;
            v15 = *(_DWORD *)a1;
            goto LABEL_6;
          }
          goto LABEL_25;
        }
        v15 = *(_DWORD *)(a1 + 4);
        *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
      }
LABEL_6:
      v16 = i;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = sub_215E80(a4, *v11, v15);
          v18 = *(_DWORD *)a1;
          v15 = *(_DWORD *)a1;
          if ( !v17 )
            break;
          ++v11;
        }
        for ( --v16; sub_215E80(a4, v18, *v16); --v16 )
          v18 = *(_DWORD *)a1;
        if ( v11 >= v16 )
          break;
        v19 = *v11++;
        *(v11 - 1) = *v16;
        *v16 = v19;
        v15 = *(_DWORD *)a1;
      }
      sub_21B430(v11, i, v6, a4);
      result = (int *)((char *)v11 - a1);
      if ( (__int64)v11 - a1 <= 64 )
        return result;
      i = v11;
      v5 = (__int64)result >> 3;
    }
    for ( j = v5 - 1; ; --j )
    {
      sub_21B290(a1, j, v7, *(_DWORD *)(a1 + 4 * j), a4);
      if ( !j )
        break;
    }
    for ( result = (int *)((char *)i - a1); (__int64)i - a1 > 4; result = sub_21B290(
                                                                            a1,
                                                                            0,
                                                                            ((__int64)i - a1) >> 2,
                                                                            v21,
                                                                            a4) )
    {
      v21 = *--i;
      *i = *(_DWORD *)a1;
    }
  }
  return result;
}

