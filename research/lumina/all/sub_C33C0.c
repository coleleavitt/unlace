__int64 __fastcall sub_C33C0(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v9; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v9 = v1;
  if ( !v1 )
    return a1;
  v2 = 1;
  v3 = &v9;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(v1 + 16) = a1;
    v9 = v4;
    v5 = sub_C3340(v3, v2);
    *(_QWORD *)(v6 + 8) = v5;
    v2 = v7 + 1;
    a1 = v6;
    if ( !v9 )
      break;
    v1 = v9;
  }
  return v6;
}
