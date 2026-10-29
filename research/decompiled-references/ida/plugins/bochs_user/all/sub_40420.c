_QWORD *__fastcall sub_40420(__int64 a1, signed int a2)
{
  _QWORD *result; // rax
  int v3; // r9d
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  result = (_QWORD *)sub_3F960(a1, a2);
  if ( result )
  {
    v4 = result[2];
    if ( !v4 )
      goto LABEL_9;
    v5 = result + 1;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 16);
        v7 = *(_QWORD *)(v4 + 24);
        if ( v3 <= *(_DWORD *)(v4 + 32) )
          break;
        v4 = *(_QWORD *)(v4 + 24);
        if ( !v7 )
          goto LABEL_7;
      }
      v5 = (_QWORD *)v4;
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v6 );
LABEL_7:
    if ( v5 != result + 1 && v3 >= *((_DWORD *)v5 + 8) )
    {
      return (_QWORD *)((char *)v5 + 36);
    }
    else
    {
LABEL_9:
      v8[0] = v3;
      v8[1] = 0;
      return (_QWORD *)(sub_40300(result, v8) + 36);
    }
  }
  return result;
}

