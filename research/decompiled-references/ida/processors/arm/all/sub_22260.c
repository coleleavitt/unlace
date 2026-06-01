__int64 __fastcall sub_22260(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdx
  _QWORD *v5; // rax

  if ( *(_QWORD *)a2 == -1 )
    return 0;
  v2 = 1;
  if ( (*(_BYTE *)(a2 + 18) & 0x30) != 0 )
    return v2;
  v4 = *(_QWORD *)(a1 + 504);
  if ( v4 != -1 )
  {
    LOBYTE(v2) = *(_QWORD *)a2 == v4;
    return v2;
  }
  v5 = (_QWORD *)getseg();
  if ( !v5 || *(_QWORD *)a2 != *v5 )
    return 0;
  if ( get_segm_name() <= 0 )
    return 0;
  else
    LOBYTE(v2) = stristr() != 0;
  return v2;
}
