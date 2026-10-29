__int64 __fastcall sub_3FC90(__int64 a1, __m128i *a2, double a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  void (__fastcall *hexdsp)(__int64, __m128i *, _QWORD *); // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-68h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int8 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  result = sub_3E760(a1, a2, a3, a4, a5, a6);
  if ( !(_BYTE)result )
  {
    v9 = 0;
    memset(&v8[1], 0, 32);
    v8[0] = off_4DBC0;
    v10 = a1;
    v11 = 0;
    hexdsp = (void (__fastcall *)(__int64, __m128i *, _QWORD *))get_hexdsp(a1, a2);
    hexdsp(341, a2, v8);
    return v11;
  }
  return result;
}

