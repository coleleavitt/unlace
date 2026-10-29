void __fastcall sub_1EC90(
        int a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      callui(201, a2, callui, a4, a5, a6, a7, a8, a9, a10);
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
