void __fastcall sub_F2600(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = *(_QWORD *)(a1 + 16);
  v4 = sub_F2500(a1, a2, a3);
  if ( v4 )
    sub_D04B0(v3, (__int64)v4, 0xFFFFFFF8, v5, v6, v7);
}
