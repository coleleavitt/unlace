_WORD *__fastcall sub_CEC0(__int64 a1)
{
  _WORD *result; // rax
  _WORD *v2; // rdi

  *(_QWORD *)(a1 + 16) = -1;
  result = (_WORD *)(a1 + 40);
  v2 = (_WORD *)(a1 + 360);
  *((_QWORD *)v2 - 42) = 0;
  *((_QWORD *)v2 - 41) = 0;
  *(_OWORD *)(v2 - 180) = -1;
  do
  {
    *result = 0;
    result += 20;
    *(result - 19) = 0;
    *(result - 18) = 0;
    *((_DWORD *)result - 2) = 0;
    *(result - 17) = 0;
    *((_OWORD *)result - 2) = 0;
    *((_QWORD *)result - 2) = 0;
  }
  while ( v2 != result );
  return result;
}

