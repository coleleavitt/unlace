__int64 __fastcall sub_240460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax

  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 6) > 1 )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v7 + 8) != 61 )
    return 0;
  if ( sub_250E30(*(_QWORD *)(v7 + 24), v7 + 48, a3, a4, a5) != 1 )
    return 0;
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 51);
  if ( (unsigned int)v8 > 0xE )
    return 0;
  v9 = 25473;
  LOBYTE(v5) = _bittest64(&v9, v8);
  if ( !(_BYTE)v5
    || (*(_BYTE *)(a1 + 56) & 1) == 0 && (get_tinfo_property() & 0xF) == 0xA && (unsigned int)get_tinfo_property() != 1 )
  {
    return 0;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    sub_250A30(*(_QWORD *)(a1 + 32));
    clear_tinfo_t();
    j__qfree();
  }
  v10 = 56;
  if ( *(_DWORD *)(a1 + 8) == 6 )
    v10 = 55;
  *(_DWORD *)(a1 + 8) = v10;
  return v5;
}

