__int64 __fastcall sub_A29B0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        char a6,
        __m128i a7)
{
  __int64 v9; // rbx
  char *v10; // r14

  v9 = j__qalloc_or_throw(80, (__int64)a2, a3, a4);
  v10 = (char *)(v9 + 32);
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 72) = 0;
  sub_330970(v9, a3);
  *(_DWORD *)v9 = 12;
  sub_125180(v9 + 32, (unsigned __int8 *)a4);
  sub_125180(v9 + 48, a5);
  *(_DWORD *)(v9 + 68) = *(_DWORD *)(a4 + 4);
  sub_15BC70((unsigned int *)v9, a2, 0, 0, nullptr, nullptr, a7, 1u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
  if ( *(_DWORD *)v9 == 4 && a6 )
  {
    sub_11CA10((char *)a1, v10);
    if ( v9 )
    {
      sub_11CDA0(v9 + 64);
      sub_11CDA0(v9 + 48);
      sub_11CDA0((__int64)v10);
      j__qfree(v9);
    }
  }
  else
  {
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a4 + 4);
  }
  return a1;
}

