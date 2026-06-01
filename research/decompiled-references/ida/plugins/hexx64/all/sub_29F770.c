__int64 __fastcall sub_29F770(__int64 a1, unsigned int *a2, double a3)
{
  __int64 v3; // rax
  unsigned __int64 **v4; // rax
  unsigned int *v5; // rsi
  unsigned __int64 **v6; // r12
  __m128i *v8; // rax
  unsigned __int64 **v9; // rax

  if ( (unsigned int *)a1 != a2 )
  {
    sub_29EC30(a1, a3);
    v3 = *a2;
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 4) = a2[1];
    switch ( v3 )
    {
      case 0LL:
        return a1;
      case 1LL:
        copy_tinfo_t();
        return a1;
      case 2LL:
      case 4LL:
        v4 = (unsigned __int64 **)operator new(0x10u);
        v5 = *((unsigned int **)a2 + 1);
        *(_DWORD *)v4 = 0;
        v6 = v4;
        sub_29F770((__int64)v4, v5);
        goto LABEL_4;
      case 3LL:
        v9 = (unsigned __int64 **)qalloc();
        v6 = v9;
        if ( !v9 )
          sub_4D462();
        sub_29F560(v9, *((_QWORD *)a2 + 1));
LABEL_4:
        *(_QWORD *)(a1 + 8) = v6;
        return a1;
      case 5LL:
        *(_DWORD *)(a1 + 8) = a2[2];
        return a1;
      case 6LL:
      case 7LL:
        *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
        return a1;
      case 8LL:
        v8 = (__m128i *)operator new(0x10u);
        *v8 = _mm_loadu_si128((const __m128i *)*((_QWORD *)a2 + 1));
        *(_QWORD *)(a1 + 8) = v8;
        return a1;
      default:
        if ( !under_debugger )
          sub_383060(0xC522u, a3);
        BUG();
    }
  }
  return a1;
}

