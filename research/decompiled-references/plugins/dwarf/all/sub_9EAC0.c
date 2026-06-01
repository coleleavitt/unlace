bool __fastcall sub_9EAC0(__int64 a1, int a2)
{
  __int64 v3; // rax
  bool result; // al
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // bl
  char *v9; // r8
  int v10; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  char v12; // [rsp+18h] [rbp-40h]
  __m128i v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 212) & 1) == 0 )
  {
    v3 = *(_QWORD *)a1;
    v13.m128i_i64[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *))(*(_QWORD *)(a1 + 256) + 56LL))(
           *(_QWORD *)(v3 + 24),
           a1 + 8,
           &v13) )
    {
      v9 = sub_81C40(a1);
      sub_95A30(v13.m128i_i64[0], (__int64)"die.cpp", 139, (__int64)"Cannot retrieve tag for DIE %s", v9);
    }
    *(_DWORD *)(a1 + 212) |= 1u;
  }
  result = *(_WORD *)(a1 + 8) == 36
        && (v5 = *(_QWORD *)a1,
            v13.m128i_i64[0] = 0,
            v12 = 0,
            v6 = *(_QWORD *)(v5 + 24),
            v7 = *(_QWORD *)(a1 + 256),
            v11 = 0,
            v10 = 0,
            !(*(unsigned int (__fastcall **)(__int64, __int64, int *, __m128i *))(v7 + 112))(v6, 62, &v10, &v13))
        && v10
        && (v13 = 0,
            sub_95870((__int64 *)a1, &v13, 0x3Eu),
            v8 = sub_96D10(a1, (__int64)&v11, v13.m128i_i64),
            sub_84A10(&v13),
            v8)
        && v11 == a2;
  return result;
}
