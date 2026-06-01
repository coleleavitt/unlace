__int64 __fastcall sub_113A60(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // ebp
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  _DWORD *v14; // rax
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = a4;
  v11 = *(_QWORD *)(a1 + 8);
  v15[0] = a2;
  v12 = sub_124F80(v11, a4, v15, 1);
  if ( !v12 )
    return 0;
  result = sub_113B10(a1, 0, v15[0], v9, v15[0], v12, a5, a6);
  if ( !(_BYTE)result )
    return 0;
  if ( a3 )
  {
    if ( *(_BYTE *)a3 == 4 )
    {
      v14 = *((_DWORD **)a3 + 1);
      if ( *v14 == 8 )
        a3 = v14 + 8;
    }
    return sub_1216A0(a1 + 32, a3, 0);
  }
  return result;
}

