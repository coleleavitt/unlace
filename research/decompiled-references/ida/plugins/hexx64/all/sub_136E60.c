__int64 __fastcall sub_136E60(__int64 a1, __int64 a2, char a3, double a4)
{
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbx

  v6 = *(_DWORD *)(a2 + 36);
  v7 = *(unsigned int *)(a2 + 40);
  sub_63E80((__int64 *)(*(_QWORD *)(a1 + 64) + 296LL), v7, v6, a4);
  v10 = sub_D21A0(*(_QWORD *)(a1 + 64), v7, v8, v9, a4);
  v13 = (__int64)v10;
  if ( a3 )
  {
    v14 = j__qalloc_or_throw(80, v7, v11, v12);
    *(_OWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 72) = 0;
    sub_1253A0(v14, a2);
    sub_A3160(v13, (_QWORD *)v14, 0, 0.0);
  }
  else
  {
    if ( (__m128i *)a1 != v10 || *(_QWORD *)(a2 + 16) )
    {
      sub_A33C0(a1, a2);
      sub_A3160(v13, (_QWORD *)a2, 0, a4);
    }
    v14 = a2;
  }
  return sub_11CA10((char *)(v14 + 32), (char *)(v14 + 64));
}

