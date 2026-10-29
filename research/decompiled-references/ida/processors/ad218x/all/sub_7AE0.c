__int64 __fastcall sub_7AE0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int16 v5; // dx

  v3 = a3 & 3;
  v4 = *(_QWORD *)(a1 + 248);
  if ( (_DWORD)v3 == 3 )
  {
    *(_BYTE *)(v4 + 1) = 5;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 1) = 1;
    v5 = *((unsigned __int8 *)&dword_F444 + v3);
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
  }
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

