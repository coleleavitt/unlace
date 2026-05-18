__int64 *__fastcall sub_E30E0(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 *result; // rax

  result = *(__int64 **)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 32LL * a2 + 8);
  if ( *((_BYTE *)result + 17) )
    return sub_E2FF0(a1, a2, a3, a4, a5);
  return result;
}
