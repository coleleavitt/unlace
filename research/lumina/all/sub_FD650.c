__int64 __fastcall sub_FD650(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rbx
  __int64 v7; // r9
  __int64 result; // rax
  __int32 v9; // edx

  v6 = *(__m128i **)a1;
  sub_E0AC0(*(__m128i **)a1, a2, a3, a4, a5, a6);
  sub_E0AA0((__int64)v6, *(unsigned __int8 *)(a1 + 40));
  result = v6[1].m128i_u16[2];
  if ( (result & 0x12) != 0 )
  {
    v9 = v6[1].m128i_i32[0];
    if ( (result & 0x400) != 0 )
      v9 += v6->m128i_i32[0];
    result = v6[1].m128i_i64[1];
    if ( *(_DWORD *)(result + 136) < v9 )
    {
      *(_DWORD *)(a1 + 36) = 18;
      return sub_F11D0(*(_QWORD *)a1, "string or blob too big", -1, 1, nullptr, v7);
    }
  }
  return result;
}
