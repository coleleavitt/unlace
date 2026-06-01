__int64 __fastcall sub_288A00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v5; // r14

  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 49 )
    return 0;
  v5 = *(_QWORD *)(v2 + 24);
  v3 = sub_298080(v5 + 48);
  if ( !(_BYTE)v3 )
    return 0;
  *(_QWORD *)(a2[3] + 24) = 0;
  if ( a2[3] )
  {
    sub_250A30(a2[3]);
    clear_tinfo_t();
    j__qfree();
  }
  sub_250C50(a2, v5);
  sub_23F5C0((__int64)a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( !(unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    return v3;
  *(_DWORD *)(a1 + 8) |= 8u;
  return v3;
}

