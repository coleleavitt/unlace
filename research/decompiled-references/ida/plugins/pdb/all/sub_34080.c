__int64 __fastcall sub_34080(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v1 = a1[61];
  *a1 = &off_AA348;
  a1[13] = off_AA378;
  while ( v1 )
  {
    v3 = (_QWORD *)v1;
    sub_272C0(*(_QWORD **)(v1 + 24));
    v4 = *(_QWORD *)(v1 + 40);
    v1 = *(_QWORD *)(v1 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x40u);
  }
  v5 = a1[65];
  a1[62] = a1 + 60;
  a1[63] = a1 + 60;
  a1[61] = 0;
  a1[64] = 0;
  callui(1098);
  sub_33F40((__int64)a1);
  clr_module_data((unsigned int)dword_B3730, v5);
  v6 = a1[61];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_272C0(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 40);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[6] = 0;
      qfree(v8);
    }
    operator delete(v7, 0x40u);
  }
  v9 = a1[53];
  if ( v9 )
  {
    a1[54] = 0;
    qfree(v9);
  }
  v10 = a1[50];
  if ( v10 )
  {
    a1[51] = 0;
    qfree(v10);
  }
  v11 = a1[15];
  if ( v11 )
  {
    a1[16] = 0;
    qfree(v11);
  }
  a1[13] = &off_B2C10;
  return remove_event_listener(a1 + 13);
}

