__int64 __fastcall sub_185180(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  while ( *(_QWORD *)(a1 + 272) )
    sub_17C8A0(a1);
  *(_QWORD *)(a1 + 224) = a1;
  *(_QWORD *)(a1 + 216) = sub_17CF50;
  *(_DWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 340) = 0;
  if ( !a2 )
  {
    sub_18FA40(1);
    *__errno_location() = 2;
  }
  j__free(*(void **)(a1 + 296));
  v3 = sub_198700(a2);
  *(_QWORD *)(a1 + 296) = v3;
  v4 = v3;
  if ( !v3 )
    return sub_18FA20(v4, a2);
  v5 = sub_1969C0(v3);
  *(_QWORD *)(a1 + 288) = v5;
  if ( !v5 )
    return sub_18FA20(v4, a2);
  if ( *(_BYTE *)(a1 + 648) )
    return sub_184AA0(a1, 0, 0);
  return 0;
}
