unsigned __int64 __fastcall sub_439A0(__m128i *src, __m128i *a2, __int64 (__fastcall *a3)(__m128i *, __m128i *))
{
  __m128i *v3; // rbp
  char i; // al
  __m128i v6; // xmm0
  __m128i *j; // rbx
  __int64 v8; // rax
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __m128i v11; // [rsp+10h] [rbp-68h]
  __m128i v12; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    v3 = src + 1;
    if ( a2 != &src[1] )
    {
      for ( i = a3(v3, src); ; i = a3(v3, src) )
      {
        v6 = _mm_loadu_si128(v3);
        if ( i )
        {
          if ( (char *)v3 - (char *)src <= 16 )
          {
            if ( (char *)v3 - (char *)src == 16 )
            {
              v3->m128i_i64[0] = src->m128i_i64[0];
              v3->m128i_i32[2] = src->m128i_i32[2];
            }
          }
          else
          {
            v10 = v6;
            memmove(&src[1], src, (char *)v3 - (char *)src);
            v6 = _mm_load_si128(&v10);
          }
          v11 = v6;
          ++v3;
          src->m128i_i64[0] = v6.m128i_i64[0];
          src->m128i_i32[2] = v11.m128i_i32[2];
          if ( a2 == v3 )
            return v13 - __readfsqword(0x28u);
        }
        else
        {
          v12 = v6;
          for ( j = v3 - 1; (unsigned __int8)a3(&v12, j); j[2].m128i_i32[2] = j[1].m128i_i32[2] )
          {
            v8 = j->m128i_i64[0];
            --j;
            j[2].m128i_i64[0] = v8;
          }
          ++v3;
          j[1].m128i_i64[0] = v12.m128i_i64[0];
          j[1].m128i_i32[2] = v12.m128i_i32[2];
          if ( a2 == v3 )
            return v13 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}

