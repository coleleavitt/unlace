void __fastcall sub_D7720(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD *v4; // rsi
  _QWORD *v5; // rsi

  v3 = *(_DWORD *)(a2 + 4);
  if ( (v3 & 0x804000) == 0 )
  {
    if ( *(_QWORD *)(a2 + 16) && *(_BYTE *)a2 != 0xB2 )
      sub_D7720(a1);
    if ( *(_QWORD *)(a2 + 24) )
    {
      sub_D7720(a1);
      v3 = *(_DWORD *)(a2 + 4);
    }
    else
    {
      v3 = *(_DWORD *)(a2 + 4);
      v4 = *(_QWORD **)(a2 + 32);
      if ( (v3 & 0x800) != 0 )
      {
        if ( v4 )
        {
          sub_D75C0(a1, v4, 1);
          v3 = *(_DWORD *)(a2 + 4);
        }
      }
      else
      {
        sub_D7880(a1, v4);
        v3 = *(_DWORD *)(a2 + 4);
        if ( (v3 & 0x1000000) != 0 )
        {
          sub_D7AF0(a1);
          v3 = *(_DWORD *)(a2 + 4);
        }
      }
    }
  }
  if ( (v3 & 0x10000) != 0 )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
    {
      sub_C9250(a1, v5);
      v3 = *(_DWORD *)(a2 + 4);
    }
  }
  if ( (v3 & 0x8000000) == 0 )
    sub_C9250(a1, (_QWORD *)a2);
}
