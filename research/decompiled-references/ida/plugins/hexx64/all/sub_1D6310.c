__int64 __fastcall sub_1D6310(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        int a8)
{
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // [rsp+8h] [rbp-60h]

  v11 = a8;
  v16 = *(_QWORD *)(a1 + 40);
  sub_330D80(*(_QWORD *)(a1 + 16), v16, *(unsigned __int16 *)(a1 + 50));
  v14 = j__qalloc_or_throw(80, v16, v12, v13);
  *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 56) = 0;
  *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v14 + 72) = 0;
  sub_330970(v14, v16);
  if ( a8 == -1 )
  {
    *(_DWORD *)(v14 + 4) |= 0x10u;
    v11 = 0;
  }
  if ( (unsigned __int8)sub_A2BF0(*(_QWORD *)(a1 + 16), v14, a2, a3, a4, a5, a7, a6, v11) )
    return sub_B5190(*(_QWORD **)(a1 + 16), v14, a7);
  if ( v14 )
  {
    sub_11CDA0(v14 + 64);
    sub_11CDA0(v14 + 48);
    sub_11CDA0(v14 + 32);
    j__qfree(v14);
  }
  return 0;
}

