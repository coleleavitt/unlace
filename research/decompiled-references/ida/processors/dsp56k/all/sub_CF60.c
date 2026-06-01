__int64 __fastcall sub_CF60(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  v3 = *(_QWORD *)(a1 + 248);
  if ( a3 )
  {
    *(_WORD *)(v3 + 6) = 6;
    v4 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v4 + 40;
    *(_BYTE *)(v4 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 10;
  }
  else
  {
    *(_WORD *)(v3 + 6) = 10;
    v6 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v6 + 40;
    *(_BYTE *)(v6 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 6;
  }
  return 1;
}

