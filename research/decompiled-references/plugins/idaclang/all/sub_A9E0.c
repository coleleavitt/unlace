__int64 __fastcall sub_A9E0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 (*v8)(void); // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v8 = *(__int64 (**)(void))(a1 + 288);
  if ( v8 )
    return v8();
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_AA10(0, a2, v10, v11, v12, v13, a7, a8);
}
