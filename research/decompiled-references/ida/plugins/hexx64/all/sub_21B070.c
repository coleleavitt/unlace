int *__fastcall sub_21B070(__int64 a1, int *a2, __int64 a3, _QWORD *a4, double a5)
{
  int *result; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  int *i; // r13
  int *v11; // r15
  int *v12; // rbx
  char v13; // al
  int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  int *v17; // r15
  char v18; // al
  int v19; // esi
  int v20; // eax
  __int64 j; // rbx
  int v22; // ecx
  char v23; // dl
  unsigned int v24; // eax
  char v25; // dl

  result = (int *)((char *)a2 - a1);
  if ( (__int64)a2 - a1 > 64 )
  {
    v6 = (__int64)result >> 3;
    v7 = a3;
    v8 = ((__int64)a2 - a1) >> 2;
    for ( i = a2; v7; v8 = ((__int64)v12 - a1) >> 2 )
    {
      v11 = (int *)(a1 + 4 * v6);
      --v7;
      v12 = (int *)(a1 + 4);
      v13 = sub_215AC0(a4, *(_DWORD *)(a1 + 4), *v11, a5);
      v14 = *(i - 1);
      if ( v13 )
      {
        if ( !sub_215AC0(a4, *v11, v14, a5) )
        {
          v23 = sub_215AC0(a4, *(_DWORD *)(a1 + 4), *(i - 1), a5);
          v24 = *(_DWORD *)a1;
          if ( !v23 )
          {
            v16 = *(_DWORD *)(a1 + 4);
            *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(v24)).m128i_u64[0];
            *(double *)a1 = a5;
            goto LABEL_6;
          }
LABEL_25:
          *(_DWORD *)a1 = *(i - 1);
          *(i - 1) = v24;
          v16 = *(_DWORD *)a1;
          goto LABEL_6;
        }
        v15 = *(_DWORD *)a1;
        *(_DWORD *)a1 = *v11;
        *v11 = v15;
        v16 = *(_DWORD *)a1;
      }
      else
      {
        if ( !sub_215AC0(a4, *(_DWORD *)(a1 + 4), v14, a5) )
        {
          v25 = sub_215AC0(a4, *v11, *(i - 1), a5);
          v24 = *(_DWORD *)a1;
          if ( !v25 )
          {
            *(_DWORD *)a1 = *v11;
            *v11 = v24;
            v16 = *(_DWORD *)a1;
            goto LABEL_6;
          }
          goto LABEL_25;
        }
        v16 = *(_DWORD *)(a1 + 4);
        *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
      }
LABEL_6:
      v17 = i;
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = sub_215AC0(a4, *v12, v16, a5);
          v19 = *(_DWORD *)a1;
          v16 = *(_DWORD *)a1;
          if ( !v18 )
            break;
          ++v12;
        }
        for ( --v17; sub_215AC0(a4, v19, *v17, a5); --v17 )
          v19 = *(_DWORD *)a1;
        if ( v12 >= v17 )
          break;
        v20 = *v12++;
        *(v12 - 1) = *v17;
        *v17 = v20;
        v16 = *(_DWORD *)a1;
      }
      sub_21B070((__int64)v12, i, v7, a4);
      result = (int *)((char *)v12 - a1);
      if ( (__int64)v12 - a1 <= 64 )
        return result;
      i = v12;
      v6 = (__int64)result >> 3;
    }
    for ( j = v6 - 1; ; --j )
    {
      sub_21AED0(a1, j, v8, *(_DWORD *)(a1 + 4 * j), a4, a5);
      if ( !j )
        break;
    }
    for ( result = (int *)((char *)i - a1);
          (__int64)i - a1 > 4;
          result = sub_21AED0(a1, 0, ((__int64)i - a1) >> 2, v22, a4, a5) )
    {
      v22 = *--i;
      *i = *(_DWORD *)a1;
    }
  }
  return result;
}

