__int64 __fastcall sub_3E500(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v4; // r14
  __int64 *v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 *v20; // r12
  int v21; // ebx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r15
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rdx
  __m128d v32; // xmm0
  __int64 v33; // r12
  int v34; // ebx
  __int64 v35; // rdx
  int v36; // eax
  __m128i v37; // xmm0
  __int64 v38; // r12
  int v39; // ebx
  __int64 v40; // rdx
  int v41; // edx
  __int64 v42; // [rsp+8h] [rbp-40h]

  result = a2 - (_QWORD)a1;
  v4 = (__int64 *)a2;
  v42 = a3;
  if ( a2 - (__int64)a1 > 128 )
  {
    if ( a3 )
    {
      do
      {
        --v42;
        v6 = &a1->m128i_i64[1];
        v7 = &a1->m128i_i64[result >> 4];
        v8 = *v7;
        v9 = sub_FE30(a1->m128i_i64[1], a2, a3);
        v11 = sub_FE30(v8, a2, v10);
        v13 = *(v4 - 1);
        if ( v9 >= v11 )
        {
          v30 = sub_FE30(a1->m128i_i64[1], a2, v12);
          if ( v30 < (int)sub_FE30(v13, a2, v31) )
          {
            v32 = (__m128d)_mm_loadu_si128(a1);
            v19 = a1->m128i_i64[1];
            *(__m128d *)a1 = _mm_shuffle_pd(v32, v32, 1);
            goto LABEL_7;
          }
          v38 = *(v4 - 1);
          v39 = sub_FE30(*v7, a2, v18);
          v41 = sub_FE30(v38, a2, v40);
          v17 = a1->m128i_i64[0];
          if ( v39 < v41 )
          {
            v18 = *(v4 - 1);
            a1->m128i_i64[0] = v18;
            *(v4 - 1) = v17;
            v19 = a1->m128i_i64[0];
            goto LABEL_7;
          }
        }
        else
        {
          v14 = sub_FE30(*v7, a2, v12);
          if ( v14 >= (int)sub_FE30(v13, a2, v15) )
          {
            v33 = *(v4 - 1);
            v34 = sub_FE30(a1->m128i_i64[1], a2, v16);
            v36 = sub_FE30(v33, a2, v35);
            v37 = _mm_loadl_epi64(a1);
            if ( v34 >= v36 )
            {
              v19 = a1->m128i_i64[1];
              *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, v37);
            }
            else
            {
              a1->m128i_i64[0] = *(v4 - 1);
              *(v4 - 1) = v37.m128i_i64[0];
              v19 = a1->m128i_i64[0];
            }
            goto LABEL_7;
          }
          v17 = a1->m128i_i64[0];
        }
        v18 = *v7;
        a1->m128i_i64[0] = *v7;
        *v7 = v17;
        v19 = a1->m128i_i64[0];
LABEL_7:
        v20 = v4;
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = sub_FE30(*v6, a2, v18);
            v23 = sub_FE30(v19, a2, v22);
            v24 = a1->m128i_i64[0];
            v19 = a1->m128i_i64[0];
            if ( v21 >= v23 )
              break;
            ++v6;
          }
          for ( --v20; ; --v20 )
          {
            v25 = *v20;
            v26 = sub_FE30(v24, a2, v18);
            if ( v26 >= (int)sub_FE30(v25, a2, v27) )
              break;
            v24 = a1->m128i_i64[0];
          }
          if ( v6 >= v20 )
            break;
          v28 = *v6;
          v18 = *v20;
          *v6++ = *v20;
          *v20 = v28;
          v19 = a1->m128i_i64[0];
        }
        a2 = (__int64)v4;
        sub_3E500(v6, v4, v42);
        result = (char *)v6 - (char *)a1;
        if ( (char *)v6 - (char *)a1 <= 128 )
          return result;
        v4 = v6;
      }
      while ( v42 );
    }
    sub_3E430(a1->m128i_i64, (__int64)v4, (unsigned __int64)v4);
    for ( result = (char *)v4 - (char *)a1;
          (char *)v4 - (char *)a1 > 8;
          result = sub_3E280((__int64)a1, 0, ((char *)v4 - (char *)a1) >> 3, v29) )
    {
      v29 = *--v4;
      *v4 = a1->m128i_i64[0];
    }
  }
  return result;
}
