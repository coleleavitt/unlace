__int64 __fastcall sub_48DD0(unsigned __int64 a1, const __m128i *a2)
{
  int v2; // eax

  v2 = a2[1].m128i_i32[2] & 0xFFFF00;
  if ( v2 == 6569984 )
  {
    sub_47FB0(a1, a2);
    return 1;
  }
  if ( v2 == 116480 )
  {
    sub_46DB0(a1, (__int64)a2);
    return 1;
  }
  if ( byte_7FBE9 )
    sub_11340((__int64)"JDWP Error: unknown event (%d, %d)", a2[1].m128i_i8[9], a2[1].m128i_i8[9]);
  return 0;
}

