__int64 __fastcall sub_9A220(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  char *v6; // r8
  char v7[2]; // [rsp+2h] [rbp-56h] BYREF
  char v8[4]; // [rsp+4h] [rbp-54h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __m128i v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (*((_BYTE *)a1 + 213) & 0x10) == 0 )
  {
    v10 = 0;
    if ( sub_945B0(a1, &v10, 18) && (v4 = sub_872B0((__int64)a1, &v10), (unsigned int)sub_87340((__int64)a1, v4) == 3) )
    {
      v12 = 0;
      v11 = 0;
      sub_96D10((__int64)a1, (__int64)&v11, v10.m128i_i64);
      v5 = sub_9A0A0((__int64)a1);
      a1[17] = v11 + v5;
    }
    else
    {
      v2 = *a1;
      v11 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, char *, __int64 *))(a1[32] + 152))(
             *(_QWORD *)(v2 + 24),
             &v9,
             v7,
             v8,
             &v11) )
      {
        v6 = sub_81C40((__int64)a1);
        sub_95A30(v11, (__int64)"die.cpp", 235, (__int64)"Cannot retrieve _hipc for DIE %s", v6);
      }
      v3 = *(_QWORD *)(*a1 + 16);
      a1[17] = *(_QWORD *)(v3 + 176) + sub_99D50(a1, v9) - *(_QWORD *)(v3 + 184);
    }
    *((_DWORD *)a1 + 53) |= 0x1000u;
    sub_84A10(&v10);
  }
  return a1[17];
}
