unsigned __int64 __fastcall sub_96BC0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 i; // rbx
  __int64 v8; // [rsp+0h] [rbp-80h] BYREF
  __int64 v9; // [rsp+8h] [rbp-78h] BYREF
  _BYTE v10[8]; // [rsp+10h] [rbp-70h] BYREF
  _BYTE v11[8]; // [rsp+18h] [rbp-68h] BYREF
  __m128i v12; // [rsp+20h] [rbp-60h] BYREF
  __m128i v13; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  if ( sub_945B0(a1, &v12, a2) )
  {
    v13 = 0;
    sub_95870(a1, &v13, a2);
    v4 = sub_96A10((__int64)a1, &v13);
    sub_84A10(&v13);
    v5 = *a1;
    v13.m128i_i64[0] = 0;
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *, __int64 *, __int64 *, _BYTE *, __m128i *))(a1[32] + 512))(
            *(_QWORD *)(*(_QWORD *)(v5 + 16) + 160LL),
            v4,
            *(_QWORD *)(v5 + 24),
            v11,
            &v8,
            &v9,
            v10,
            &v13) )
    {
      if ( v9 > 0 )
      {
        for ( i = 0; i < v9; ++i )
        {
          if ( !(unsigned __int8)sub_87410(a3, (__int64)a1, v8 + 24 * i, 0.0) )
            break;
        }
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1[32] + 520))(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 160LL), v8);
    }
  }
  sub_84A10(&v12);
  return v14 - __readfsqword(0x28u);
}
