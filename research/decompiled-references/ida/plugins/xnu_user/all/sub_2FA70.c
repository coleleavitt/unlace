__int64 __fastcall sub_2FA70(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax

  *(_WORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 8;
  sub_2B290(*(void ***)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 80);
  result = a1 + 40;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 40;
  *(_QWORD *)(a1 + 64) = a1 + 40;
  *(_QWORD *)(a1 + 72) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 96) = 0;
  }
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = 9 * i;
        sub_2F9D0((_QWORD *)(v4 + 8 * v7));
        v4 = *(_QWORD *)(a1 + 104);
      }
    }
    *(_QWORD *)(a1 + 112) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  return result;
}

