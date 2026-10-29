__int64 __fastcall sub_D6B80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rax
  __int64 v10; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 48) != a2 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( a2 >= *(_DWORD *)(v2 + 64) )
      sub_D6750();
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 528) + 8LL * a2);
    v5 = *(_QWORD *)(v4 + 56);
    if ( !v5 || !sub_11BEC0(*(_QWORD *)(v4 + 56), 0) )
      return 0;
    if ( (unsigned int)(*(_DWORD *)v5 - 56) <= 1 && !*(_BYTE *)(v5 + 64) )
    {
      if ( *(_DWORD *)(a1 + 52) != 1 )
        *(_DWORD *)(a1 + 52) = -1;
      *(_BYTE *)(a1 + 24) = 1;
      return 0;
    }
    v6 = *(_QWORD **)(a1 + 40);
    if ( (unsigned __int8)sub_60500(v6) && !v6[3] )
      return 0;
    sub_123560(v11, v4, v5, 8193);
    v7 = *(_QWORD **)(a1 + 40);
    if ( !(unsigned __int8)sub_60400(v11, v7) && !(unsigned __int8)sub_313370(&v12, v7 + 2)
      || (v8 = sub_11BEC0(v5, 0)) != 0 && (*(_BYTE *)(*(_QWORD *)(v8 + 72) + 280LL) & 0x40) == 0 )
    {
      if ( v12 )
      {
        v13 = 0;
        qfree();
      }
      qfree();
      return 0;
    }
    v10 = v12;
    *(_DWORD *)(a1 + 52) = 1;
    if ( v10 )
    {
      v13 = 0;
      qfree();
    }
    qfree();
  }
  return 1;
}

