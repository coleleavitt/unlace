_QWORD *__fastcall sub_3E000(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r8
  _QWORD *result; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = a2 & 0xFFF;
  v5 = a2 & 0xFFFFFFFFFFFFF000LL;
  if ( (unsigned __int64)(v4 + a3) > 0x1000 )
    return nullptr;
  result = *(_QWORD **)(a1 + 16);
  v7 = (_QWORD *)(a1 + 8);
  if ( result )
  {
    v8 = (_QWORD *)(a1 + 8);
    do
    {
      while ( 1 )
      {
        v9 = result[2];
        v10 = result[3];
        if ( result[4] >= v5 )
          break;
        result = (_QWORD *)result[3];
        if ( !v10 )
          goto LABEL_7;
      }
      v8 = result;
      result = (_QWORD *)result[2];
    }
    while ( v9 );
LABEL_7:
    if ( v7 != v8 && v5 >= v8[4] )
      return (_QWORD *)((char *)v8 + v4 + 40);
  }
  return result;
}

