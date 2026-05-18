unsigned __int64 __fastcall sub_136B80(__int64 *a1, const char **a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r9
  __int64 v7; // rbx
  __int64 v8; // r12
  __m128i *v9; // r13
  __int64 *v10; // r15
  __int64 *v11; // rbx
  char v13[4]; // [rsp+10h] [rbp-68h] BYREF
  int v14; // [rsp+14h] [rbp-64h]
  __int64 v15; // [rsp+18h] [rbp-60h]
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v5 = a4;
  v7 = -32768;
  v8 = *a1;
  v18 = __readfsqword(0x28u);
  if ( a3 )
    v7 = (int)sub_CFB20(v8, a3);
  v9 = nullptr;
  if ( v5 )
    v9 = sub_DD6E0(v8, v5, 0, nullptr);
  v10 = sub_E5750(a1, nullptr, 0, nullptr);
  if ( v10 )
  {
    v10[3] = (__int64)sub_DC720(v8, *a2);
    v10[2] = (__int64)sub_DC720(v8, *(const char **)(*(_QWORD *)(v8 + 32) + 32 * v7));
  }
  v13[0] = 12;
  v14 = a5;
  v11 = sub_DF550((__int64)a1, nullptr, v10, (__int64)v9, 0, 0, 0, 0x20000, 0);
  v17 = 0;
  v15 = 0;
  v16 = 0;
  sub_11F190(a1, v11, v13);
  if ( v11 )
    sub_D75C0(v8, v11, 1);
  return __readfsqword(0x28u) ^ v18;
}
