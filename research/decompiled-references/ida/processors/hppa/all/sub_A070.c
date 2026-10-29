__int64 __fastcall sub_A070(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 sreg; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int16 v7; // si
  __int64 v8; // rbp
  __int64 result; // rax
  char v10; // dl

  if ( *(_QWORD *)(a1 + 160) == -1 )
    return -1;
  sreg = get_sreg();
  if ( sreg == -1 )
    return -1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v6 = v5 & (*(_QWORD *)(a1 + 160) + sreg);
  if ( v6 == -1 )
    return -1;
  v7 = *(_WORD *)(a3 + 6);
  v8 = *(_QWORD *)(a3 + 16);
  if ( v7 == 27 )
    return v5 & (v8 + v6);
  v10 = sub_9E00();
  result = -1;
  if ( v10 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v8;
  return result;
}

