__int64 __fastcall sub_124E70(__int64 a1, _BYTE *a2, __int64 a3, char a4, double a5)
{
  *(_BYTE *)(a1 + 40) = 1;
  if ( a4 && ((*a2 - 4) & 0xFB) != 0 )
    return 0;
  sub_123EA0(*(_QWORD *)(a1 + 16), *(__int64 **)(a1 + 48), (__int64)a2, *(unsigned int *)(a1 + 56), 0xFFFF0000, a5);
  return 0;
}

