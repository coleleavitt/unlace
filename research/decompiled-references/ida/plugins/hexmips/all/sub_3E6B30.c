__int64 __fastcall sub_3E6B30(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rax

  v3 = sub_79440(a1, (_QWORD *)a2);
  if ( !(_BYTE)v3 )
    return v3;
  if ( sub_CBD70() != 1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC07u, a3);
    BUG();
  }
  if ( *(_DWORD *)(a2 + 48) > 4u )
    v5 = sub_78CC0((_QWORD *)a2);
  else
    v5 = -sub_78CC0((_QWORD *)a2);
  *(_QWORD *)(a1 + 120) = v5;
  *(_DWORD *)(a1 + 128) = sub_78B20((_QWORD *)a2);
  return v3;
}

