void __fastcall sub_D0D80(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rsi

  v2 = *(_DWORD *)(a2 + 48);
  if ( (v2 & 0x4400) != 0 )
  {
    if ( (v2 & 0x400) != 0 && (*(_BYTE *)(a2 + 28) & 1) != 0 )
    {
      sub_C91C0(*(_QWORD *)(a2 + 32), a2);
      *(_BYTE *)(a2 + 28) &= ~1u;
      *(_QWORD *)(a2 + 32) = 0;
    }
    else if ( (v2 & 0x4000) != 0 )
    {
      v4 = *(_QWORD *)(a2 + 32);
      if ( v4 )
      {
        if ( *(_QWORD *)(v4 + 32) )
        {
          sub_C9250(a1, *(_QWORD **)(v4 + 32));
          v4 = *(_QWORD *)(a2 + 32);
        }
        sub_C9250(a1, (_QWORD *)v4);
        *(_QWORD *)(a2 + 32) = 0;
      }
    }
  }
}
