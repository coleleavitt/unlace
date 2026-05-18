__int64 __fastcall sub_118CC0(__int64 a1, unsigned int a2, int a3, char *a4)
{
  char v6; // al
  __int64 result; // rax

  v6 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 2u )
  {
    result = sub_1171C0(a1);
    if ( (_DWORD)result )
      return result;
    v6 = *(_BYTE *)a1;
  }
  if ( v6 )
    return 4;
  sub_115FA0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), *(unsigned int *)(a1 + 80), a1);
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    return sub_1159D0(a1, a2, a3, a4, 1);
  else
    return 8;
}
