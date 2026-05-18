__int64 __fastcall sub_C9790(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // ebp
  __m128i *v11; // rdi
  __int64 v12; // rdi

  v7 = (__int64 *)a2;
  v8 = *(_QWORD *)(a2->m128i_i64[0] + 24);
  if ( v8 )
    xmmword_241500(v8);
  if ( *(__int16 *)(a1 + 32) > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v10;
      a2 = (const __m128i *)(v9 + *(_QWORD *)(a1 + 128));
      v11 = (__m128i *)(v9 + v7[16]);
      v9 += 56;
      sub_C9730(v11, a2, a3, a4, a5, a6);
    }
    while ( *(__int16 *)(a1 + 32) > v10 );
  }
  v12 = *(_QWORD *)(*v7 + 24);
  if ( v12 )
    xmmword_241510(v12, a2, a3);
  return 0;
}
