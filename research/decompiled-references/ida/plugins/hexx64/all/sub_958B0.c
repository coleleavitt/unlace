__int64 __fastcall sub_958B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v7[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-40h]
  __int64 v9; // [rsp+18h] [rbp-38h]
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 16);
  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 72) )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = *(_QWORD *)(a1 + 64);
    if ( !v3 )
      v3 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = v1;
  }
  sub_124680((__int64)v7, *(_QWORD *)(a1 + 8), v1, 1u);
  v4 = sub_129150(*(_QWORD *)(a1 + 8), v7, *(_QWORD *)(v3 + 16), *(_QWORD *)(v2 + 16), 0, 0, 0x101u);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 64) && *(_QWORD *)(a1 + 24) == v4 && *(_DWORD *)(a1 + 72) == 1 )
    v5 = sub_129150(*(_QWORD *)(a1 + 8), v7, *(_QWORD *)(v4 + 16), *(_QWORD *)(v2 + 16), 0, 0, 0x101u);
  if ( v8 )
  {
    v9 = 0;
    qfree(v8);
  }
  qfree(v7[0]);
  return v5;
}

