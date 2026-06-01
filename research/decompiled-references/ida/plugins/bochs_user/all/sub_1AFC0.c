__int64 __fastcall sub_1AFC0(
        __m128i *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v8; // ebx

  v8 = sub_1A420(a1, a2, a3, a5, a6, a7, a8);
  if ( v8 == 1 && a1[582].m128i_i32[1] == 3 && !a1[67].m128i_i8[8] )
    a1[67].m128i_i8[8] = hook_event_listener();
  return v8;
}

