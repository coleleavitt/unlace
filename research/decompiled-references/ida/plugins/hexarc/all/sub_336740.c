__int64 __fastcall sub_336740(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a1 + 120);
  if ( v4 )
  {
    while ( v4[1] != a2 || v4[2] != a3 )
    {
      v4 = (_QWORD *)*v4;
      if ( !v4 )
        goto LABEL_7;
    }
    return 0;
  }
  else
  {
LABEL_7:
    v6 = (_QWORD *)operator new(0x18u);
    v7 = *(_QWORD *)(a1 + 120);
    v6[1] = a2;
    *v6 = v7;
    v6[2] = a3;
    *(_QWORD *)(a1 + 120) = v6;
    return 1;
  }
}

