__int64 __fastcall sub_19F50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  char v5; // al
  __int64 v7; // rax

  v3 = a3;
  if ( !a3 )
  {
    v3 = getseg(a2);
    if ( !v3 )
      goto LABEL_15;
  }
  if ( *(_QWORD *)(a1 + 33157) != *(_QWORD *)v3 )
  {
    if ( *(int *)(a1 + 33380) > 0 )
      *(_DWORD *)(a1 + 33380) = 0;
    v4 = *(_QWORD *)(v3 + 32);
    if ( v4 )
    {
      if ( netnode_supval(*(_QWORD *)(a1 + 33320), v4, a1 + 33141, 124, 83) != 124 )
        sub_E6A0();
      if ( *(_QWORD *)(v3 + 32) + *(unsigned __int16 *)(a1 + 33147) )
        goto LABEL_15;
      v7 = *(_QWORD *)(a1 + 33165);
      if ( *(_BYTE *)(v3 + 184) != 9 )
        v7 = *(_QWORD *)(a1 + 33157);
      if ( *(_QWORD *)v3 != v7 )
LABEL_15:
        sub_E6C0(1);
    }
    else
    {
      v5 = *(_BYTE *)(v3 + 184);
      if ( v5 != 4 && v5 != 1 )
        goto LABEL_15;
      *(_QWORD *)(a1 + 33157) = *(_QWORD *)v3;
    }
  }
  return v3;
}

