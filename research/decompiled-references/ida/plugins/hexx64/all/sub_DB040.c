__int64 __fastcall sub_DB040(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  _BYTE *v6; // rbp
  _QWORD *v7; // r13
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // r12
  _BYTE *v11; // rax
  unsigned __int64 *v13; // rdi
  __int64 v14[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 *v15; // [rsp+10h] [rbp-48h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 48) != a2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( a2 >= *(_DWORD *)(v3 + 64) )
      sub_DAC10(a3);
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2);
    v6 = *(_BYTE **)(v5 + 56);
    if ( !v6 || !sub_120380(*(_BYTE **)(v5 + 56), 0) )
      return 0;
    if ( (unsigned int)(*(_DWORD *)v6 - 56) <= 1 && !v6[64] )
    {
      if ( *(_DWORD *)(a1 + 52) != 1 )
        *(_DWORD *)(a1 + 52) = -1;
      *(_BYTE *)(a1 + 24) = 1;
      return 0;
    }
    v7 = *(_QWORD **)(a1 + 40);
    if ( (unsigned __int8)sub_64880(v7) && !v7[3] )
      return 0;
    sub_127A20((__int64)v14, v5, (__int64)v6, 8193, v8, v9);
    v10 = *(_QWORD **)(a1 + 40);
    if ( !(unsigned __int8)sub_64780(v14, v10) && !(unsigned __int8)sub_318470(&v15, (__int64)(v10 + 2))
      || (v11 = sub_120380(v6, 0)) != nullptr && (*(_BYTE *)(*((_QWORD *)v11 + 9) + 280LL) & 0x40) == 0 )
    {
      if ( v15 )
      {
        v16 = 0;
        qfree((__int64)v15);
      }
      qfree(v14[0]);
      return 0;
    }
    v13 = v15;
    *(_DWORD *)(a1 + 52) = 1;
    if ( v13 )
    {
      v16 = 0;
      qfree((__int64)v13);
    }
    qfree(v14[0]);
  }
  return 1;
}

