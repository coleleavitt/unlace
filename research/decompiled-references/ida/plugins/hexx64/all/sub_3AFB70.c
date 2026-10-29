__int64 __fastcall sub_3AFB70(__int64 a1, double a2, double a3, __m128i a4, double a5)
{
  unsigned int v5; // ebp
  _QWORD v7[2]; // [rsp+0h] [rbp-58h] BYREF
  char v8; // [rsp+10h] [rbp-48h]
  int v9; // [rsp+14h] [rbp-44h]
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  v7[0] = 0;
  v7[1] = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v5 = sub_3AD5A0(a1, (__int64)v7, &v10, 0.0);
  if ( (_BYTE)v5 )
    v5 = sub_3AF790(
           *(_QWORD *)(a1 + 128),
           v10,
           (__int64)v7,
           1u,
           **(_QWORD **)(a1 + 32),
           (__int64 *)(a1 + 44),
           0.0,
           a3,
           a4,
           a5);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  clear_tinfo_t();
  return v5;
}

