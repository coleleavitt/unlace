__int64 __fastcall sub_3FB270(__int64 a1, int a2, int a3, char a4, __m128i a5, __m128 a6, __m128 a7)
{
  char v9; // al
  unsigned __int8 v10; // bl
  unsigned int v11; // ebx
  _DWORD v13[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v9 = sub_3FA390(a1, a1 + 40LL * a2 + 64);
  if ( v9 == 17 )
    v9 = 16;
  v10 = v9;
  v13[0] = 1;
  v13[2] = a3;
  v13[1] = get_dtype_size();
  v11 = sub_3FAED0(a1, nullptr, a2, (__int64)v13, v10, a4, a5, a6, a7);
  sub_11CDA0((__int64)v13);
  return v11;
}

