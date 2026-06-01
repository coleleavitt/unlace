__int64 __fastcall sub_BDA00(__int64 a1, unsigned int *a2, __m128i a3)
{
  int v3; // edx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-78h] BYREF
  char v6; // [rsp+28h] [rbp-50h]
  __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-30h]
  unsigned __int64 v11; // [rsp+58h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v5[0] = &off_4DC158;
  v7 = a1;
  v8 = a1 + 64;
  memset(&v5[1], 0, 32);
  v6 = 0;
  v9 = a1 + 16;
  v10 = 0;
  v3 = sub_11E900(a2, (__int64)v5);
  result = 0;
  if ( !v3 )
  {
    sub_15BC70(a2, *(unsigned __int64 **)(*(_QWORD *)(a1 + 320) + 1504LL), 0, 0, nullptr, nullptr, a3, 0);
    return 1;
  }
  return result;
}

