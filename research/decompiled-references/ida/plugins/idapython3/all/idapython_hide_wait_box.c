__int64 __fastcall idapython_hide_wait_box(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  time_t *v11; // rbx

  if ( (_QWORD)xmmword_245E8 )
  {
    *(_QWORD *)&xmmword_245E8 = xmmword_245E8 - 1;
    if ( (_QWORD)xmmword_24608 )
    {
      v11 = (time_t *)(qword_24600 + 8 * xmmword_24608 - 8);
      *v11 = time(nullptr);
    }
  }
  return callui(24, 10, 0, &callui, callui, a6, a7, a8, a9, a10);
}

