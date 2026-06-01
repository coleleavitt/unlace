__int64 __fastcall sub_25E60(__int64 a1, __int64 a2)
{
  bool v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax

  v2 = 1;
  if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
    v2 = (getinf() & 0x1006) == 4098;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v4 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
  if ( v3 != v4 )
  {
    v5 = v4 & v3;
    if ( v4 != -1 )
      v4 = v5;
  }
  v6 = sub_24FC0();
  if ( v6 )
  {
    switch ( v6 )
    {
      case 2:
        return !v2 ? -4LL : -16LL;
      case 3:
        return (-(__int64)!v2 & 0xFFFFFFFFFFFFFFF4LL) + 16;
      case 1:
        return 4LL * !v2;
    }
  }
  else
  {
    sub_25D70(a1, v4);
  }
  return 0;
}

