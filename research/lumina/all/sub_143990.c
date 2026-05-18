__int64 __fastcall sub_143990(__m128i *a1, __int64 **a2, double a3)
{
  __int64 v3; // rax
  __int32 v4; // r14d
  int v5; // ebx
  __int64 v6; // rbp
  __int64 result; // rax

  v3 = a1[2].m128i_i64[0];
  v4 = a1[2].m128i_i32[3];
  a1[6].m128i_i8[4] = *(_BYTE *)(*(_QWORD *)(v3 + 24) + 113LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 24) + 114LL) & 1) != 0 || (result = sub_143450(a1, 0, a2, 0, a3), !(_DWORD)result) )
  {
    v5 = a1[2].m128i_i32[2] - 1;
    v6 = 32LL * v5;
    if ( v5 > 0 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1[2].m128i_i64[0] + v6 + 24) + 114LL) & 1) == 0 )
        {
          result = sub_143450(a1, v5, a2, 0, a3);
          if ( (_DWORD)result )
            break;
        }
        v6 -= 32;
        if ( !--v5 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      result = 0;
      if ( (v4 & 1) == 0 )
        a1[2].m128i_i32[3] &= ~1u;
    }
  }
  return result;
}
