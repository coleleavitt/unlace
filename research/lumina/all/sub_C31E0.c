__int64 *__fastcall sub_C31E0(__int64 a1, unsigned int a2)
{
  __int16 v2; // ax
  __int64 *result; // rax

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*(&xmmword_241568 + 1))(
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL),
    *(_QWORD *)a1,
    *(unsigned int *)(a1 + 48),
    a2);
  v2 = *(_WORD *)(a1 + 52);
  *(_DWORD *)(a1 + 48) = a2;
  result = (__int64 *)(v2 & 0xA);
  if ( (_WORD)result == 10 )
    return sub_C2FA0(a1, 3);
  return result;
}
