__int64 __fastcall sub_28020(__m128i *a1, double a2)
{
  __int64 result; // rax

  sub_2ECE0(&a1[106].m128i_u64[1]);
  a1[107].m128i_i32[2] = *(_DWORD *)(qword_9AD30 + 144LL * a1[73].m128i_i32[2] + 120);
  sub_2FCD0(&a1[106].m128i_u64[1], &a1[119]);
  result = sub_27700(a1, a2);
  if ( !(_BYTE)result )
    return sub_258C0((__int64)a1, a2);
  return result;
}

