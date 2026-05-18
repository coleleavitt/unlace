__int64 *__fastcall sub_DC4A0(__int64 a1, __int16 a2, int a3, _QWORD *a4)
{
  __int64 v5; // r13
  signed int v6; // r12d
  __int64 *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx

  v5 = a2 + 1;
  v6 = ((a2 + 2 * (a2 + (_DWORD)v5) + 7) & 0xFFFFFFF8) + 8 * a2 + 112;
  result = sub_DC1C0(a1, v6 + a3);
  if ( result )
  {
    *((_WORD *)result + 48) = a2;
    result[8] = (__int64)(result + 14);
    v8 = (__int64)&result[a2 + 14];
    *((_WORD *)result + 47) = a2 - 1;
    result[2] = v8;
    v9 = v8 + 2 * v5;
    result[1] = v9;
    result[7] = v9 + 2LL * a2;
    *a4 = (char *)result + v6;
  }
  return result;
}
