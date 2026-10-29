__int64 __fastcall sub_C5E0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  bool v5; // cf
  __int64 v6; // rdx
  __int16 v7; // ax

  v3 = 0;
  v4 = a3 & 7;
  if ( (_DWORD)v4 != 1 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
    if ( (a3 & 7) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 248);
      v7 = *((char *)&qword_17850 + v4);
    }
    else
    {
      v5 = (a3 & 8) == 0;
      v6 = *(_QWORD *)(a1 + 248);
      v7 = v5 ? 10 : 6;
    }
    *(_WORD *)(v6 + 6) = v7;
    *(_QWORD *)(a1 + 248) += 40LL;
    return 1;
  }
  return v3;
}

