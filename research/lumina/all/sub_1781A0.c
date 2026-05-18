__int64 __fastcall sub_1781A0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int8 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v13 = __readfsqword(0x28u);
  v4 = sub_1770A0(a2, (unsigned __int8 *)(v3 + 32 * v2 - 32));
  result = 0;
  if ( !v4 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 24);
    v10[0] = 2;
    v11 = 0;
    v12 = 0;
    sub_176730(v10, (unsigned __int8 *)(v7 + 32 * v6 - 32));
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
    {
      v9 = v8 - 1;
      *(_QWORD *)(a1 + 32) = v9;
      sub_176520(*(_QWORD *)(a1 + 24) + 32 * v9);
    }
    sub_176520((__int64)v10);
    return 1;
  }
  return result;
}
