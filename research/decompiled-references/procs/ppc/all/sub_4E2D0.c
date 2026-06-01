__int64 __fastcall sub_4E2D0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17)
{
  __int64 result; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d

  result = *(unsigned int *)(a1 + 288);
  if ( !(_DWORD)result )
  {
    sub_4B0A0(a1);
    return sub_4E2F0(a1, a2, v18, v19, v20, v21, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  }
  return result;
}
