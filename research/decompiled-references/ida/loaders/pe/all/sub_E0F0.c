__int64 __fastcall sub_E0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int8 (__fastcall **v8)(__int64, __int64, __int64); // rax
  int v10; // [rsp+28h] [rbp-470h]
  __int16 v11; // [rsp+2Eh] [rbp-46Ah]

  v11 = *(_WORD *)(a1 + 96);
  v10 = 4;
  if ( v11 == 523 )
    v10 = 8;
  v6 = a4;
  *(_DWORD *)(a5 + 12) = v10;
  if ( *(_BYTE *)(a5 + 8) )
  {
    if ( *(_WORD *)(a1 + 96) == 523 )
      v7 = *(_QWORD *)(a1 + 120);
    else
      v7 = *(unsigned int *)(a1 + 124);
    v6 = a4 - v7;
  }
  v8 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, __int64))a1;
  if ( v11 == 523 )
  {
    if ( (*v8)(a1, a2, v6) )
      qlread();
  }
  else if ( (*v8)(a1, a2, v6) )
  {
    qlread();
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a5 + 8LL))(a5, 0);
}
