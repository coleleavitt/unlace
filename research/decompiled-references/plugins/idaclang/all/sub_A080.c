__int64 __fastcall sub_A080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(__int64); // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v8 = *(__int64 (__fastcall **)(__int64))(a1 + 48);
  if ( v8 )
    return v8(a2);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_A0B0(0, a2, v10, v11, v12, v13, a7, a8);
}
