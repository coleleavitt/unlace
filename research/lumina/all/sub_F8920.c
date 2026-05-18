_BOOL8 __fastcall sub_F8920(__int64 a1, char *a2, __int64 a3, unsigned int a4, double a5)
{
  char v7; // dl
  _BOOL8 result; // rax

  if ( !(unsigned int)sub_F80F0(a1, a2, a3, a4, a5) )
    return 1;
  v7 = *(_BYTE *)a3;
  if ( *(_BYTE *)a3 != 43 )
    goto LABEL_3;
  if ( (unsigned int)sub_F8920(a1, a2, *(_QWORD *)(a3 + 16), a4)
    || (unsigned int)sub_F8920(a1, a2, *(_QWORD *)(a3 + 24), a4) )
  {
    return 1;
  }
  v7 = *(_BYTE *)a3;
LABEL_3:
  result = 0;
  if ( v7 == 51 )
    return sub_F87B0(a1, (__int64)a2, *(_BYTE **)(a3 + 16), a4, 0, a5);
  return result;
}
