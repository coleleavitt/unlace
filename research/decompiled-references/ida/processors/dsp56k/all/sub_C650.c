__int64 __fastcall sub_C650(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rcx

  v3 = a3 & 7;
  v4 = *(_DWORD *)(a1 + 600) == 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  v5 = *(_QWORD *)(a1 + 248);
  if ( v4 )
  {
    *(_WORD *)(v5 + 6) = *((unsigned __int8 *)&qword_17848 + v3);
    v8 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v8 + 40;
    *(_BYTE *)(v8 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)&qword_17840 + v3);
  }
  else
  {
    *(_WORD *)(v5 + 6) = *((unsigned __int8 *)&qword_17838 + v3);
    v6 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v6 + 40;
    *(_BYTE *)(v6 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)&qword_17830 + v3);
  }
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

