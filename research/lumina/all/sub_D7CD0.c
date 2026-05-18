void __fastcall sub_D7CD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r13
  __int16 v5; // ax
  _QWORD *v6; // rbp

  v1 = *(int *)(a1 + 20);
  if ( (int)v1 > 0 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v3 = ***(_QWORD ***)a1;
    v4 = v2 + 56 * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(56 * v1 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL);
    while ( 1 )
    {
      v5 = *(_WORD *)(v2 + 18);
      if ( (v5 & 1) != 0 && *(_QWORD *)v2 )
      {
        sub_D7720(v3, *(_QWORD *)v2);
        v5 = *(_WORD *)(v2 + 18);
      }
      if ( (v5 & 0x30) != 0 )
      {
        v6 = *(_QWORD **)(v2 + 32);
        sub_D7CD0(v6);
        if ( v6 )
          sub_C9250(v3, v6);
      }
      if ( v4 == v2 )
        break;
      v2 += 56;
    }
  }
}
