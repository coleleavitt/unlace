__int64 __fastcall sub_10B9C0(__int64 a1, __int64 a2, double a3)
{
  int v3; // ebp
  __m128i *v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rax
  __int8 v7; // dl
  char v9; // al
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(__m128i **)(a1 + 8);
  v11 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 16);
  if ( (v3 & 2) != 0 )
  {
    v9 = *(_BYTE *)(a2 + 8);
    if ( v9 == 1 )
      goto LABEL_7;
    if ( v9 != 5 )
      sub_101D30(a3);
    if ( (unsigned __int8)sub_1026C0(*(_QWORD **)(a1 + 16), *(_QWORD *)a2, 1u) )
      goto LABEL_7;
  }
  if ( (v3 & 4) != 0 && *(_BYTE *)(a2 + 8) == 5 )
  {
LABEL_7:
    v10.m128i_i64[0] = a2;
    sub_10B0E0(v4, a2, (const __m128i **)&v10);
  }
  v6 = *(int *)(a2 + 12);
  if ( (_DWORD)v6 != -1 )
  {
    v7 = *(_BYTE *)(a2 + 8);
    v10.m128i_i64[0] = *(_QWORD *)a2 + v6;
    v10.m128i_i8[8] = v7;
    sub_10B360(v4, v5, &v10, v3, a3);
  }
  return 0;
}

