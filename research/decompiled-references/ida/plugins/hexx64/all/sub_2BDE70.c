__int64 __fastcall sub_2BDE70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v10; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 == 3 )
  {
    sub_6B870((__int64 *)a1);
    return a1;
  }
  if ( v4 > 3 )
  {
    if ( v4 == 4 )
    {
      sub_2B1980((__int64 *)a1, "ulv_flags: ", 0xBu);
      if ( (*(_BYTE *)(a3 + 88) & 1) != 0 )
        sub_FAAD0((__int64 *)a1);
      return a1;
    }
    goto LABEL_29;
  }
  if ( v4 == 1 )
  {
    sub_2BDDC0(*(_DWORD **)(*(_QWORD *)(a2 + 24) + 112LL), (__int64 *)a1, a2);
    sub_2B1980((__int64 *)a1, " => ", 4u);
    sub_2BDDC0(*(_DWORD **)(*(_QWORD *)(a2 + 24) + 112LL), (__int64 *)a1, a3);
    return a1;
  }
  if ( v4 != 2 )
  {
LABEL_29:
    if ( !under_debugger )
      sub_383060(0xCD6Du, 0.0);
    BUG();
  }
  sub_2BDDC0(*(_DWORD **)(*(_QWORD *)(a2 + 24) + 112LL), (__int64 *)a1, a2);
  sub_2B1980((__int64 *)a1, ":", 1u);
  v5 = *(_DWORD *)(a3 + 88);
  if ( (v5 & 1) != 0 )
  {
    sub_FAAD0((__int64 *)a1);
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 2) != 0 )
  {
    sub_FAAD0((__int64 *)a1);
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 4) != 0 )
  {
    sub_FAAD0((__int64 *)a1);
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 8) != 0 )
  {
    sub_FAAD0((__int64 *)a1);
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 0x10) != 0 )
  {
    sub_FAAD0((__int64 *)a1);
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 0x20) != 0 )
    sub_FAAD0((__int64 *)a1);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)a1;
  v8 = v6 - 1;
  if ( v6 - 1 <= 1 )
  {
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v7);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    return a1;
  }
  if ( *(_QWORD *)(a1 + 16) < v8 )
  {
    v10 = qvector_reserve(a1, v7, v6 - 1, 1);
    *(_QWORD *)a1 = v10;
    v7 = v10;
  }
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(v7 + v6 - 2) = 0;
  return a1;
}

