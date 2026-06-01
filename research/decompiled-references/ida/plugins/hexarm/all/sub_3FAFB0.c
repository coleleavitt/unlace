__int64 __fastcall sub_3FAFB0(__int64 a1, double a2)
{
  __int64 result; // rax
  int v3; // ebp
  unsigned __int64 v4; // rax

  if ( *(_WORD *)(a1 + 48) == 435 )
    return 0;
  if ( *(_QWORD *)(a1 + 40) < *(_QWORD *)(a1 + 856) )
    return 0;
  v3 = sub_3FAA90(a1, *(_BYTE *)(a1 + 56) & 0xF, a2);
  v4 = sub_3FA8C0(a1);
  sub_3F56D0(a1, 0x2Au, 0, v3, 0x3BEA45E214ADDC55LL, v4, 0);
  result = 1;
  if ( *(_WORD *)(a1 + 48) != 278 )
  {
    *(_QWORD *)(a1 + 16) = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    return 0;
  }
  return result;
}

