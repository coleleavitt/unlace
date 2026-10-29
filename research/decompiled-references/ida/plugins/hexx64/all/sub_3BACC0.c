__int64 __fastcall sub_3BACC0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128i a6, double a7)
{
  __int64 result; // rax
  int v8; // eax
  double v9; // xmm0_8
  char v10; // al
  char v11; // dl
  unsigned int v12; // [rsp+Ch] [rbp-44h]
  __int64 v13; // [rsp+18h] [rbp-38h] BYREF
  unsigned int *v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+28h] [rbp-28h]
  unsigned __int64 v16; // [rsp+38h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  if ( a2 )
    return (unsigned __int8)sub_3AFB70(a2, a4, a5, a6, a7);
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 == 10 )
  {
    v15 = 0;
    v14 = nullptr;
    v13 = 0;
    v9 = ((double (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, __int64 *, unsigned int **))callui)(
           204,
           1,
           1,
           -1,
           1,
           a3,
           &v13,
           &v14);
    v11 = v10;
    result = 0;
    if ( v11 )
      result = (unsigned __int8)sub_3AFFA0(*(_QWORD *)(a1 + 16), v13, &v14, v9, a5, a6, a7);
    if ( v14 )
    {
      v12 = result;
      *(_QWORD *)&v15 = 0;
      qfree((__int64)v14);
      return v12;
    }
  }
  else if ( v8 == 58 )
  {
    return (unsigned __int8)sub_3AFC60(*(_QWORD *)(a1 + 16), *(_QWORD *)(a3 + 208), a4, a5, a6, a7);
  }
  else
  {
    return 0;
  }
  return result;
}

