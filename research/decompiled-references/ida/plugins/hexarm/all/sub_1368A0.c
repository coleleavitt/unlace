__int64 __fastcall sub_1368A0(__int64 a1, __int64 a2, char a3)
{
  __m128i *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx

  sub_63880((__int64 *)(*(_QWORD *)(a1 + 64) + 296LL), *(_DWORD *)(a2 + 40), *(_DWORD *)(a2 + 36));
  v4 = sub_D1BE0(*(_QWORD *)(a1 + 64));
  v5 = (__int64)v4;
  if ( a3 )
  {
    v6 = j__qalloc_or_throw();
    *(_OWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v6 + 72) = 0;
    sub_124DE0(v6, a2);
    sub_A2BA0(v5, (_QWORD *)v6, 0);
  }
  else
  {
    if ( (__m128i *)a1 != v4 || *(_QWORD *)(a2 + 16) )
    {
      sub_A2E00(a1, a2);
      sub_A2BA0(v5, (_QWORD *)a2, 0);
    }
    v6 = a2;
  }
  return sub_11C450((char *)(v6 + 32), (char *)(v6 + 64));
}

