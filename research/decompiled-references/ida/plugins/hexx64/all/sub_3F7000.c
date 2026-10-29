__int64 __fastcall sub_3F7000(__int64 a1)
{
  int v1; // eax
  const char *v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx

  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 176LL) |= 0x40u;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 604LL) & 8) == 0 )
    return 0;
  v1 = *(_DWORD *)(a1 + 888);
  if ( (v1 & 4) != 0 )
    return 1;
  if ( (v1 & 8) != 0 )
    return 0;
  if ( sub_CFF70() <= 0 )
  {
    *(_DWORD *)(a1 + 888) |= 8u;
    return 0;
  }
  v4 = sub_329CC0();
  v5 = *(_DWORD *)(a1 + 888);
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 888) = v5 | 4;
    if ( (v5 & 1) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 832);
      v7 = *(_QWORD *)(v6 + 3792);
      if ( !v7 )
      {
        v10 = (_QWORD *)operator new(0x18u);
        v11 = *(_QWORD *)(a1 + 800);
        *v10 = off_4E99C8;
        v10[1] = v11;
        v10[2] = *(_QWORD *)(v11 + 112);
        *(_QWORD *)(*(_QWORD *)(a1 + 832) + 3792LL) = v10;
        v6 = *(_QWORD *)(a1 + 832);
        v7 = *(_QWORD *)(v6 + 3792);
      }
      sub_1516D0(v6, v7);
      *(_DWORD *)(a1 + 888) |= 1u;
    }
    return 1;
  }
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 888) = v5 | 8;
  sub_3311F0(v9, v8, 0x25u);
  return 0;
}

