__int64 __fastcall sub_30BB0(__m128i *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]

  result = sub_27D00(a1, a2, a3, a4, 1);
  if ( a4 && (int)result >= 0 && (unsigned __int64)(int)result < a1[1].m128i_i64[0] )
  {
    v6 = result;
    sub_309E0(a1, (int)result);
    return v6;
  }
  return result;
}

