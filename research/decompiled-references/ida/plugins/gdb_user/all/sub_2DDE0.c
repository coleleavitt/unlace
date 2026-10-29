void __fastcall sub_2DDE0(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rsi
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = *(_QWORD **)(a1 + 1416);
  v4 = *a2;
  if ( !v3 )
    goto LABEL_8;
  v2 = a1;
  v5 = (_QWORD *)(a1 + 1408);
  do
  {
    while ( 1 )
    {
      v6 = v3[2];
      v7 = v3[3];
      if ( v3[4] >= v4 )
        break;
      v3 = (_QWORD *)v3[3];
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = v3;
    v3 = (_QWORD *)v3[2];
  }
  while ( v6 );
LABEL_6:
  if ( v5 == (_QWORD *)(a1 + 1408) || v4 < v5[4] )
  {
LABEL_8:
    if ( under_debugger )
      BUG();
    interr();
  }
  *(_BYTE *)(v2 + 1600) = 1;
  set_debug_event_code();
  sub_1A9A0();
}

