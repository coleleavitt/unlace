__int64 __fastcall sub_177890(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r12

  if ( !a1 )
    return sub_18FA40(1532);
  sub_176520(a1);
  *(_BYTE *)a1 = 5;
  v3 = operator new(0x38u);
  v4 = 0;
  v5 = v3;
  if ( a2 )
    v4 = *(unsigned int *)(a2 + 52);
  sub_186A20(v3, v4);
  *(_QWORD *)(a1 + 8) = v5;
  return 0;
}
