__int64 __fastcall sub_3440(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = getinf(3);
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 72) = (v2 & 4) != 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(unsigned int *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v5;
  if ( (unsigned int)v6 <= 6 )
  {
    v7 = 84;
    if ( _bittest64(&v7, v6) )
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 48) + v5;
  }
  return sub_3380(0x7D4u, a1 + 8, 112);
}

