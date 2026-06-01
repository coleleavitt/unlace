unsigned __int64 __fastcall sub_10B640(__m128i *a1, _QWORD *a2, __int64 a3, char a4, double a5)
{
  __int64 v7; // rax
  __int8 v8; // dl
  char v10; // al
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (a4 & 2) != 0 )
  {
    v10 = *(_BYTE *)(a3 + 8);
    if ( v10 == 1 )
      goto LABEL_7;
    if ( v10 != 5 )
      sub_101D30(a5);
    if ( (unsigned __int8)sub_1026C0(a2, *(_QWORD *)a3, 1u) )
      goto LABEL_7;
  }
  if ( (a4 & 4) != 0 && *(_BYTE *)(a3 + 8) == 5 )
  {
LABEL_7:
    v11.m128i_i64[0] = a3;
    sub_10B0E0(a1, a3, (const __m128i **)&v11);
  }
  v7 = *(int *)(a3 + 12);
  if ( (_DWORD)v7 != -1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v11.m128i_i64[0] = *(_QWORD *)a3 + v7;
    v11.m128i_i8[8] = v8;
    sub_10B360(a1, a2, &v11, a4, a5);
  }
  return v12 - __readfsqword(0x28u);
}

