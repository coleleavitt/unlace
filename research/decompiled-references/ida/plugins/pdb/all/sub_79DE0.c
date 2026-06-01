__int64 __fastcall sub_79DE0(__int64 a1, double a2, double a3, double a4)
{
  unsigned int v5; // ebp
  int v7; // r12d
  int v8; // r12d
  _QWORD *v9; // rdi
  __int64 v10; // rax

  sub_244A0();
  v5 = sub_797E0(a1);
  if ( !(_BYTE)v5 )
    return v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 536LL) = *(_QWORD *)(a1 + 120);
  *(_BYTE *)(*(_QWORD *)(a1 + 144) + 856LL) = 0;
  v7 = *(_DWORD *)(a1 + 136);
  if ( !(unsigned __int8)sub_5ADD0(*(_QWORD *)(a1 + 144)) )
    goto LABEL_12;
  v8 = v7 & 0x12;
  sub_5BB80(*(_QWORD *)(a1 + 144));
  if ( (unsigned __int8)sub_5AAF0(*(_QWORD *)(a1 + 144)) )
  {
    if ( v8 == 2 )
    {
      v9 = *(_QWORD **)(a1 + 144);
      if ( v9[1] == *v9 )
      {
        sub_585C0(v9);
        v9 = *(_QWORD **)(a1 + 144);
      }
      goto LABEL_8;
    }
  }
  else
  {
    sub_244A0();
    if ( v8 == 2 )
      goto LABEL_12;
  }
  if ( !(unsigned __int8)sub_5C720(*(_QWORD **)(a1 + 144), a2, a3, a4) )
  {
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v9 = *(_QWORD **)(a1 + 144);
LABEL_8:
  if ( !(unsigned __int8)sub_72150(v9) )
  {
    sub_244A0();
    goto LABEL_12;
  }
  v5 = sub_57600(*(_QWORD *)(a1 + 144));
  if ( !(_BYTE)v5 )
  {
    sub_244A0();
    LOBYTE(v5) = v8 != 2;
  }
LABEL_13:
  v10 = *(_QWORD *)(a1 + 144);
  if ( !*(_BYTE *)(v10 + 856) )
    return v5;
  *(_BYTE *)(v10 + 856) = 0;
  callui(24);
  return v5;
}

