unsigned __int64 __fastcall sub_EFC90(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  unsigned __int64 result; // rax
  char **v11; // rdi

  v8 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v8 + 20) >= 0 )
    v9 = sub_EF2D0((_QWORD *)(a1 + 8), v8, 32, a5, a6, a7);
  else
    v9 = *(_QWORD **)(v8 + 8);
  result = byte_1BAD40[*(_WORD *)(*a4 + 20) & 0x3F];
  if ( (_DWORD)result == 3 )
    result = sub_D5960(*a4);
  if ( v9 && (_DWORD)result != 5 )
  {
    --v9[2];
    v11 = (char **)*a4;
    if ( (_DWORD)result == 1 && !*((_BYTE *)v9 + 25) )
    {
      result = sub_CD0F0(v11);
      v9[1] -= result;
      *(double *)v9 = *(double *)v9 - (double)(int)result;
    }
    else
    {
      result = sub_CD1F0((__int64)v11);
      *(double *)v9 = *(double *)v9 - a2;
    }
  }
  return result;
}
