_BYTE *__fastcall sub_EDFF0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // rdi
  _BYTE *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rsi
  bool v19; // cc

  v8 = *a3;
  v9 = byte_1BAD40[*(_WORD *)(*a3 + 20) & 0x3F];
  if ( v9 == 3 )
  {
    result = (_BYTE *)sub_D9DB0(v8, 1u, a7, (__int64)byte_1BAD40, a4, a5, a6);
    if ( !result )
      return result;
    v12 = (unsigned __int8)*result;
    v18 = (__int64)result;
    while ( (_BYTE)v12 )
    {
      v13 = (unsigned __int8)*++result;
      v19 = (unsigned __int8)v12 <= 0xBFu;
      v12 = v13;
      if ( !v19 )
      {
        if ( (v13 & 0xC0) == 0x80 )
        {
          do
          {
            v12 = (unsigned __int8)*++result;
            ++v18;
            v13 = *result & 0xC0;
          }
          while ( (*result & 0xC0) == 0x80 );
        }
        else
        {
          v12 = (unsigned int)v13;
        }
      }
    }
    v16 = *a1;
    result -= v18;
    v17 = (int)result;
    if ( (*(_WORD *)(*a1 + 20) & 0x9000) == 0 )
    {
LABEL_9:
      *(_QWORD *)v16 = v17;
      *(_WORD *)(v16 + 20) = 4;
      return result;
    }
    return (_BYTE *)sub_C9430(v16, v17, v12, v13, v14, v15);
  }
  if ( v9 <= 3u )
  {
    if ( !v9 )
      goto LABEL_4;
LABEL_8:
    result = (_BYTE *)sub_D9CE0(v8, 1u, a7, (__int64)byte_1BAD40, a4, a5, a6);
    v16 = *a1;
    v17 = (int)result;
    if ( (*(_WORD *)(*a1 + 20) & 0x9000) == 0 )
      goto LABEL_9;
    return (_BYTE *)sub_C9430(v16, v17, v12, v13, v14, v15);
  }
  if ( v9 == 4 )
    goto LABEL_8;
LABEL_4:
  v10 = *a1;
  if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
    return (_BYTE *)sub_C93F0(v10, a2, (__int64)byte_1BAD40, a4, a5, a6);
  result = (_BYTE *)(&dword_0 + 1);
  *(_WORD *)(v10 + 20) = 1;
  return result;
}
