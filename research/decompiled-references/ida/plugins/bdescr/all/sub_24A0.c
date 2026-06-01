__int64 sub_24A0()
{
  __int64 v0; // rbx
  char v2; // al
  __int64 v3; // rdx

  if ( *(_DWORD *)(get_ph() + 4) )
    return 0;
  if ( (getinf() & 6) != 2 )
    return 0;
  if ( (unsigned int)getinf() - 11 > 1 )
    return 0;
  v2 = getinf();
  v3 = -261;
  if ( _bittest64(&v3, v2 & 0xF) )
    return 0;
  v0 = qalloc_or_throw();
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_QWORD *)v0 = off_6B98;
  *(_QWORD *)(v0 + 96) = 0;
  *(_DWORD *)(v0 + 104) = 0x10000;
  *(_WORD *)(v0 + 108) = 2;
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  return v0;
}

