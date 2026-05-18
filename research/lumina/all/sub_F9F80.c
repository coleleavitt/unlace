__int64 __fastcall sub_F9F80(__int64 a1, unsigned __int64 a2, unsigned int *a3, __int64 a4, int a5, double a6)
{
  __int64 result; // rax

  if ( *(_BYTE *)a4 == 0xB1 )
  {
    if ( (unsigned int)(a5 - 54) > 3 )
      goto LABEL_3;
    a4 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL);
    if ( *(_BYTE *)a4 != 0xA7 )
      goto LABEL_3;
LABEL_9:
    *a3 = *(_DWORD *)(a4 + 44);
    a3[1] = *(__int16 *)(a4 + 48);
    return 1;
  }
  if ( *(_BYTE *)a4 == 0xA7 )
    goto LABEL_9;
LABEL_3:
  if ( !a2 )
    return 0;
  result = 0;
  if ( (a2 & (a2 - 1)) == 0 )
    return sub_F9EB0(a1, a2, a3, a4, a6);
  return result;
}
