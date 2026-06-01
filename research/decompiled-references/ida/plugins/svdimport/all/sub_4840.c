__int64 __fastcall sub_4840(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 4280);
  v3 = v2 + 80;
  v4 = *(_QWORD *)(v2 + 88);
  if ( !v4 )
    return -1;
  v5 = v3;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 16);
      v7 = *(_QWORD *)(v4 + 24);
      if ( a2 <= *(_DWORD *)(v4 + 32) )
        break;
      v4 = *(_QWORD *)(v4 + 24);
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 16);
  }
  while ( v6 );
LABEL_6:
  result = -1;
  if ( v3 != v5 && a2 >= *(_DWORD *)(v5 + 32) )
    return *(_QWORD *)(v5 + 40);
  return result;
}

