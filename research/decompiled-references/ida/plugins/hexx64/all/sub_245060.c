__int64 __fastcall sub_245060(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  int v7; // eax

  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 6) > 1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  if ( sub_255A30(*(__int64 **)(v3 + 24)) != 1 )
    return 0;
  v4 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 51);
  if ( (unsigned int)v4 > 0xE )
    return 0;
  v5 = 25473;
  LOBYTE(v1) = _bittest64(&v5, v4);
  if ( !(_BYTE)v1
    || (*(_BYTE *)(a1 + 56) & 1) == 0 && (get_tinfo_property() & 0xF) == 0xA && (unsigned int)get_tinfo_property() != 1 )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    sub_255630(*(_QWORD *)(a1 + 32));
    clear_tinfo_t();
    j__qfree(v6);
  }
  v7 = 56;
  if ( *(_DWORD *)(a1 + 8) == 6 )
    v7 = 55;
  *(_DWORD *)(a1 + 8) = v7;
  return v1;
}

