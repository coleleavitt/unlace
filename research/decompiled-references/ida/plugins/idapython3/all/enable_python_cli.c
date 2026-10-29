__int64 __fastcall enable_python_cli(
        char a1,
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
  if ( a1 )
    return callui(85, &unk_23980, 1, callui, a5, a6, a7, a8, a9, a10);
  else
    return callui(85, &unk_23980, 0, callui, a5, a6, a7, a8, a9, a10);
}

