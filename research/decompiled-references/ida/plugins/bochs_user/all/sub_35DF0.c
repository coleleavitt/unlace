__int64 __fastcall sub_35DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int8 (__fastcall **v8)(__int64, __int64, __int64); // rax
  __int64 (*v9)(); // rdx
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-470h]
  __int16 v12; // [rsp+2Eh] [rbp-46Ah]

  v12 = *(_WORD *)(a1 + 96);
  v11 = 4;
  if ( v12 == 523 )
    v11 = 8;
  v6 = a4;
  *(_DWORD *)(a5 + 12) = v11;
  if ( *(_BYTE *)(a5 + 8) )
  {
    if ( *(_WORD *)(a1 + 96) == 523 )
      v7 = *(_QWORD *)(a1 + 120);
    else
      v7 = *(unsigned int *)(a1 + 124);
    v6 = a4 - v7;
  }
  v8 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, __int64))a1;
  if ( v12 == 523 )
  {
    if ( (*v8)(a1, a2, v6) )
      qlread();
  }
  else if ( (*v8)(a1, a2, v6) )
  {
    qlread();
  }
  v9 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
  result = 0;
  if ( v9 != sub_34510 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v9)(a5, 0);
  return result;
}

