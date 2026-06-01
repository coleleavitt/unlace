__int64 __fastcall sub_3F8E00(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+10h] [rbp-28h]
  __int64 v13; // [rsp+10h] [rbp-28h]
  __int64 v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+18h] [rbp-20h]

  if ( a2 == 62 )
    return sub_3F86E0(a1, 0x3Eu, (unsigned __int8 *)a3, (unsigned __int8 *)a4, a5);
  if ( a3 && *(_BYTE *)a3 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 428LL) == *(_DWORD *)(a3 + 8) )
  {
    v15 = a4;
    v13 = a3;
    v11 = sub_3F5420(a1, a6);
    a3 = v13;
    a4 = v15;
    *(_DWORD *)(v13 + 8) = v11;
  }
  if ( a4 && *(_BYTE *)a4 == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 428LL) == *(_DWORD *)(a4 + 8) )
  {
    v14 = a4;
    v12 = a3;
    v10 = sub_3F5420(a1, a6);
    a4 = v14;
    a3 = v12;
    *(_DWORD *)(v14 + 8) = v10;
  }
  v8 = sub_3F86E0(a1, a2, (unsigned __int8 *)a3, (unsigned __int8 *)a4, a5);
  if ( a5 )
  {
    v9 = *(_QWORD *)(a1 + 832);
    if ( *(_DWORD *)(v9 + 80) == 8 && *(_BYTE *)a5 == 1 && *(_DWORD *)(v9 + 428) == *(_DWORD *)(a5 + 8) )
      sub_3F51B0(a1);
  }
  return v8;
}

