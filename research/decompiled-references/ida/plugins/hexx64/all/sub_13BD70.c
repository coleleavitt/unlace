__int64 __fastcall sub_13BD70(__int64 a1, double a2, __m128 a3)
{
  int v3; // ebp
  __int64 v4; // rbx
  bool v5; // al

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 520);
  if ( !v4 )
    goto LABEL_4;
  do
  {
    v5 = sub_13B6E0((_QWORD *)v4, a2, a3);
    *(_DWORD *)(v4 + 24) |= 0x20u;
    v4 = *(_QWORD *)(v4 + 8);
    v3 += v5;
  }
  while ( v4 );
  if ( v3 > 0 )
  {
    sub_66FA0(a1, 1);
    *(_DWORD *)a1 |= 0x800u;
    return (unsigned int)v3;
  }
  else
  {
LABEL_4:
    *(_DWORD *)a1 |= 0x800u;
    return (unsigned int)v3;
  }
}

