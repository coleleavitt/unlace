unsigned __int64 __fastcall sub_95990(__int64 *a1, unsigned int a2)
{
  int v2; // eax
  unsigned __int64 v3; // r12
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  sub_95870(a1, &v5, a2);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(a1[32] + 48))(*(_QWORD *)(*a1 + 24));
  v3 = sub_94EA0(*(_QWORD **)(*a1 + 16), *(_QWORD *)(*a1 + 24), v5.m128i_i64, v2 != 0);
  sub_84A10(&v5);
  return v3;
}
