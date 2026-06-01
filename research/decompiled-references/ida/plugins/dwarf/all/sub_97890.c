__int64 __fastcall sub_97890(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]
  __m128i v5; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v6 = __readfsqword(0x28u);
  LODWORD(v3) = 0;
  v5.m128i_i64[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, __m128i *))(a1[32] + 112))(
         *(_QWORD *)(v1 + 24),
         76,
         &v3,
         &v5)
    || !(_DWORD)v3 )
  {
    return 0;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0;
  sub_95870(a1, &v5, 0x4Cu);
  sub_96D10((__int64)a1, (__int64)&v3, v5.m128i_i64);
  sub_84A10(&v5);
  return (unsigned int)v3;
}

