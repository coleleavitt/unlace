__int64 __fastcall sub_25EB0(__int64 a1, unsigned int a2, __int64 a3, double a4, double a5, double a6, __m128 a7)
{
  int v7; // ecx
  unsigned int v8; // ebp
  int v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  __int128 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v7 = *(_DWORD *)(a1 + 784);
  v13 = __readfsqword(0x28u);
  v11 = a3;
  v10 = -2;
  v12 = 0;
  v8 = sub_251E0(a1, a2, (__int64)&v10, v7, 0.0, a5, a6, a7);
  if ( (_BYTE)v8 && *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120) == 13 )
    sub_25A00(a1, a2, (__int64)&v10, 0.0, a5, a6, a7);
  if ( v10 >= -1 && v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v8;
}

