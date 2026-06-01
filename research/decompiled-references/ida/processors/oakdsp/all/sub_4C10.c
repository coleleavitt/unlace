__int64 __fastcall sub_4C10(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int16 v4; // cx
  __int16 v5; // ax
  __int64 v6; // rdx

  v3 = a3 & 3;
  v4 = (unsigned __int8)byte_DE98[v3];
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
  v5 = *((unsigned __int8 *)&dword_DE94 + v3);
  if ( (_BYTE)v5 != 0xFF )
  {
    v6 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v6 + 40;
    *(_BYTE *)(v6 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
  }
  return 1;
}

