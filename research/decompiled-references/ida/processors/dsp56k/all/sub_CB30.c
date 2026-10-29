__int64 __fastcall sub_CB30(__int64 a1, __int64 a2, char a3)
{
  int v3; // edx
  __int64 v4; // rax

  v3 = a3 & 3;
  if ( v3 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 18;
    v4 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v4 + 40;
    *(_BYTE *)(v4 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3 + 18;
  }
  return 1;
}

