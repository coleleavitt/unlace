__int64 __fastcall sub_3F6E70(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        int a8,
        char a9)
{
  unsigned __int8 v10; // r12
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  int v16; // eax
  int v18; // [rsp+14h] [rbp-44h]
  unsigned __int8 v19; // [rsp+18h] [rbp-40h]
  unsigned int v20; // [rsp+1Ch] [rbp-3Ch]

  v10 = a3;
  v12 = *(_QWORD *)(a1 + 832);
  v18 = *(_DWORD *)(v12 + 428);
  if ( a2 != 62 )
  {
    v13 = *(_DWORD *)(v12 + 632);
    if ( a2 != 3 )
    {
      v20 = *(_DWORD *)(v12 + 632);
      v19 = a3;
      v16 = sub_3F6740(a1, a4, a3, v13, a9 & 1, a7);
      v13 = v20;
      a3 = v19;
      a4 = v16;
    }
    a5 = (int)sub_3F6740(a1, a5, a3, v13, a9 & 1, a7);
  }
  v14 = sub_3F56D0(a1, a2, v10, a4, a5, a6, a8);
  if ( (a9 & 2) != 0 )
    *(_DWORD *)(v14 + 4) |= 0x10000u;
  if ( (a9 & 1) != 0 && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 && a2 != 62 && v18 == a6 )
    sub_3F51B0(a1);
  return v14;
}

