unsigned __int64 __fastcall sub_4D840(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        double a7,
        double a8,
        __int64 a9,
        int a10)
{
  __m128i v10; // xmm0
  __int128 *v13; // rax
  int v14; // ebp
  char i; // al
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rax
  unsigned __int64 *v21; // rdx
  __int64 *v22; // rdx
  unsigned __int64 *v23; // rdx
  __int64 *v28; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-A8h] BYREF
  char v30; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+88h] [rbp-58h] BYREF
  __int64 v32; // [rsp+98h] [rbp-48h]
  unsigned __int64 v33; // [rsp+A0h] [rbp-40h]

  v10.m128i_i64[0] = 0;
  v33 = __readfsqword(0x28u);
  v29 = a2;
  v13 = (__int128 *)&v30;
  do
  {
    *((_QWORD *)v13 + 2) = 0;
    v13 = (__int128 *)((char *)v13 + 24);
    *(__int128 *)((char *)v13 - 24) = 0;
  }
  while ( v13 != &v31 );
  v14 = 0;
  v32 = 0;
  v31 = 0;
  for ( i = sub_3D5F0((__int64)a3, &v28); ; i = sub_3D5F0((__int64)a3, &v28) )
  {
    v18 = v31;
    if ( !i )
      break;
    v19 = v28;
    a3[5].m128i_i64[0] = *v28;
    v20 = v19[1];
    a3[6].m128i_i64[0] = 0;
    a3[5].m128i_i64[1] = v20;
    if ( v18 == 3 )
    {
      v14 += sub_42620(&v29) + 1;
      if ( !(_QWORD)v31 )
      {
        if ( !under_debugger )
        {
          interr(20131);
LABEL_16:
          if ( !under_debugger )
            interr(20130);
        }
        BUG();
      }
      *(_QWORD *)&v31 = v31 - 1;
      v21 = (unsigned __int64 *)(&v29 + 3 * *((_QWORD *)&v31 + 1) + 1);
      *((_QWORD *)&v31 + 1) = *((_QWORD *)&v31 + 1)
                            + 1LL
                            - ((*((_QWORD *)&v31 + 1) + 1LL) / 3uLL
                             + (((0xAAAAAAAAAAAAAAABLL
                                * (unsigned __int128)(unsigned __int64)(*((_QWORD *)&v31 + 1) + 1LL)) >> 64)
                              & 0xFFFFFFFFFFFFFFFELL));
      sub_4C590(a1, a2, v21, a4, v14, a6, *(double *)v10.m128i_i64, a8, a10, a5, a9);
      v18 = v31;
      if ( (_QWORD)v31 == 3 )
        goto LABEL_16;
      v16 = v32;
      v10 = _mm_loadu_si128(a3 + 5);
      v22 = &v29 + 3 * v32;
      v22[3] = a3[6].m128i_i64[0];
      *(__m128i *)(v22 + 1) = v10;
    }
    else
    {
      v16 = v32;
      v10 = _mm_loadu_si128(a3 + 5);
      v17 = &v29 + 3 * v32;
      v17[3] = 0;
      *(__m128i *)(v17 + 1) = v10;
    }
    *(_QWORD *)&v31 = v18 + 1;
    v32 = v16
        + 1
        - ((v16 + 1) / 3uLL
         + (((0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v16 + 1)) >> 64) & 0xFFFFFFFFFFFFFFFELL));
  }
  for ( ; (_QWORD)v31; v18 = v31 )
  {
    ++v14;
    *(_QWORD *)&v31 = v18 - 1;
    v23 = (unsigned __int64 *)(&v29 + 3 * *((_QWORD *)&v31 + 1) + 1);
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&v31 + 1)
                          + 1LL
                          - ((*((_QWORD *)&v31 + 1) + 1LL) / 3uLL
                           + ((((unsigned __int64)(*((_QWORD *)&v31 + 1) + 1LL) * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64)
                            & 0xFFFFFFFFFFFFFFFELL));
    sub_4C590(a1, a2, v23, a4, v14, a6, *(double *)v10.m128i_i64, a8, a10, a5, a9);
  }
  return v33 - __readfsqword(0x28u);
}
