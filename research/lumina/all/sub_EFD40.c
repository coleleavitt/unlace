__int64 __fastcall sub_EFD40(__int64 a1, double a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 result; // rax
  char **v11; // rdi
  double v12; // xmm0_8
  char v13; // dl
  bool v14; // of

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
    ++v9[2];
    v11 = (char **)*a4;
    if ( (_DWORD)result == 1 )
    {
      result = sub_CD0F0(v11);
      v13 = *((_BYTE *)v9 + 24) | *((_BYTE *)v9 + 25);
      *(double *)v9 = (double)(int)result + *(double *)v9;
      if ( !v13 )
      {
        v14 = __OFADD__(v9[1], result);
        result += v9[1];
        v9[1] = result;
        if ( v14 )
        {
          *((_WORD *)v9 + 12) = 257;
          return 257;
        }
      }
    }
    else
    {
      result = sub_CD1F0((__int64)v11);
      v12 = a2 + *(double *)v9;
      *((_BYTE *)v9 + 25) = 1;
      *(double *)v9 = v12;
    }
  }
  return result;
}
