__int64 __fastcall sub_395F70(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_339220(*(_QWORD *)(a3 + 128), 0x6Au, a3, a2);
  if ( result )
    return 1;
  if ( (a2 & 0xFFFFFFC3) == 0 )
    return sub_3958C0(a3, 1, (2 * (_BYTE)a2) & 8);
  return result;
}

