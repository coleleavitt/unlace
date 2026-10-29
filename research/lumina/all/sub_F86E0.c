void __fastcall sub_F86E0(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax

  if ( !a1 )
    return;
  v4 = *(_QWORD *)(a1 + 112);
  if ( !v4 )
    goto LABEL_5;
  if ( !(unsigned int)sub_F8600(0, v4, (__int64)a2, 0, a3) )
  {
    v4 = *(_QWORD *)(a1 + 112);
LABEL_5:
    a2[8] = v4;
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      *(_QWORD *)(v5 + 56) = a2 + 8;
    *(_QWORD *)(a1 + 112) = a2;
    a2[7] = a1 + 112;
    return;
  }
  if ( (unsigned int)sub_F8530(a2[2], *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL), 0xFFFFFFFF, a3) )
    *(_DWORD *)(a1 + 4) |= 0x2000000u;
}
