__int64 __fastcall sub_EF200(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)(*(_BYTE *)v1 - 43) <= 1u )
    v1 = sub_EF200(*(_QWORD *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)(*(_BYTE *)v2 - 43) <= 1u )
    v2 = sub_EF200(*(_QWORD *)(a1 + 16));
  if ( (*(_DWORD *)(v2 + 4) & 0x10000001) == 0x10000000 || (*(_DWORD *)(v1 + 4) & 0x20000001) == 0x20000000 )
  {
    if ( *(_BYTE *)a1 != 44 )
      return v2;
    return v1;
  }
  else if ( (*(_DWORD *)(v1 + 4) & 0x10000001) == 0x10000000 || (*(_DWORD *)(v2 + 4) & 0x20000001) == 0x20000000 )
  {
    if ( *(_BYTE *)a1 == 44 )
      return v2;
    return v1;
  }
  else
  {
    return a1;
  }
}
