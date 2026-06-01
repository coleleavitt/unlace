__int64 __fastcall sub_1D1F50(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v13; // [rsp+8h] [rbp-60h]

  v10 = a7;
  v13 = *(_QWORD *)(a1 + 40);
  sub_32BD30(*(_QWORD *)(a1 + 16), v13, *(unsigned __int16 *)(a1 + 50));
  v11 = j__qalloc_or_throw();
  *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v11 + 72) = 0;
  sub_32B920(v11, v13);
  if ( a7 == -1 )
  {
    *(_DWORD *)(v11 + 4) |= 0x10u;
    v10 = 0;
  }
  if ( (unsigned __int8)sub_9E9F0(*(_QWORD *)(a1 + 16), v11, a2, a3, a4, a5, a6, v10) )
    return sub_B0F90(*(_QWORD **)(a1 + 16), v11);
  if ( v11 )
  {
    sub_118BA0(v11 + 64);
    sub_118BA0(v11 + 48);
    sub_118BA0(v11 + 32);
    j__qfree();
  }
  return 0;
}

