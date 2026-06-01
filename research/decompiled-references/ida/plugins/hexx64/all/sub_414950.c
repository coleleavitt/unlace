_QWORD *__fastcall sub_414950(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        char a6,
        double a7,
        __m128 a8)
{
  int v9; // r12d
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d

  v9 = a2;
  v10 = (_QWORD *)j__qalloc_or_throw(80, a2, (__int64)a3, (__int64)a4);
  v11 = a1[8];
  v12 = (__int64)v10;
  v13 = (unsigned __int8 *)(v10 + 4);
  v14 = (unsigned __int8 *)(v10 + 6);
  v10[5] = 0;
  v10[4] = 0xFFFFFFFF00000000LL;
  v10[6] = 0xFFFFFFFF00000000LL;
  v10[7] = 0;
  v10[8] = 0xFFFFFFFF00000000LL;
  v10[9] = 0;
  sub_330970((__int64)v10, v11);
  *(_DWORD *)v12 = v9;
  sub_125180(v13, a3);
  sub_125180(v14, a4);
  sub_125180((unsigned __int8 *)(v12 + 64), a5);
  if ( a6 || v9 > 62 )
    *(_DWORD *)(v12 + 4) |= 0x10u;
  sub_A3160(a1[23], (_QWORD *)v12, a1[24], a7);
  a1[24] = v12;
  sub_414640(a1, (_DWORD *)v12, v15, v16, v17, v18, a7, a8);
  return (_QWORD *)v12;
}

