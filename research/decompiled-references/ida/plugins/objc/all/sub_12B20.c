__int64 __fastcall sub_12B20(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, unsigned __int64 *, _QWORD), __int64 a3)
{
  unsigned __int64 *first_seg; // rbx
  unsigned int v5; // eax
  __int64 result; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // [rsp+8h] [rbp-70h]
  __m128i *v9; // [rsp+10h] [rbp-68h]

  first_seg = (unsigned __int64 *)get_first_seg();
  if ( first_seg )
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)(a3 + 8) )
        goto LABEL_3;
      v9 = 0;
      v7 = *first_seg;
      if ( *first_seg < first_seg[1] )
      {
        v8 = first_seg[1];
        v9 = (__m128i *)qvector_reserve();
        *v9 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v8);
      }
      if ( (unsigned __int8)rangeset_t_contains() )
      {
        if ( v9 )
          qfree();
LABEL_3:
        v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a1 + 360LL))(a1, first_seg);
        if ( v5 )
        {
          result = (**a2)(a2, first_seg, v5);
          if ( (_DWORD)result )
            return result;
        }
LABEL_5:
        first_seg = (unsigned __int64 *)get_next_seg();
        if ( !first_seg )
          return 0;
      }
      else
      {
        if ( !v9 )
          goto LABEL_5;
        qfree();
        first_seg = (unsigned __int64 *)get_next_seg();
        if ( !first_seg )
          return 0;
      }
    }
  }
  return 0;
}
