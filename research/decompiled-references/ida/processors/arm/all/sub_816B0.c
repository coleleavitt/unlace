__int64 __fastcall sub_816B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v6; // al
  __int64 v7; // rdx
  __int16 v8; // ax
  char v9; // al
  int v11; // eax
  __int16 v12; // dx
  __int64 v13; // rax
  __int16 v14; // dx

  v6 = *(_BYTE *)(a3 + 1);
  if ( ((v6 - 2) & 0xFD) != 0 )
  {
    v7 = 0;
    if ( v6 != 3 )
      return v7;
    if ( a5 && *(char *)(a4 + 28) < 0 )
    {
LABEL_5:
      v8 = *(_WORD *)(a3 + 6);
      *(_BYTE *)(a2 + 1) = 4;
      *(_QWORD *)(a2 + 16) = 0;
      *(_WORD *)(a2 + 6) = v8;
      v9 = 7;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 4 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 5) = v9;
        return a2;
      }
LABEL_6:
      v9 = 2;
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(a3 + 33) && !*(_QWORD *)(a3 + 8) )
    {
      v13 = *(unsigned __int8 *)(a3 + 32);
      v14 = *(_WORD *)(a3 + 6);
      *(_BYTE *)(a2 + 1) = 3;
      *(_QWORD *)(a2 + 8) = v13;
      *(_WORD *)(a2 + 6) = v14;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 4 )
      {
        *(_BYTE *)(a2 + 5) = 7;
        return a2;
      }
      goto LABEL_6;
    }
    return 0;
  }
  else
  {
    if ( v6 != 2 )
    {
      if ( a5 && *(char *)(a4 + 28) < 0 )
        goto LABEL_5;
      v11 = sub_29720(a4);
      if ( v11 )
      {
        v12 = *(_WORD *)(a3 + 6);
        *(_QWORD *)(a2 + 16) = v11;
        v9 = 7;
        *(_BYTE *)(a2 + 1) = 4;
        *(_WORD *)(a2 + 6) = v12;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 4 )
          goto LABEL_7;
        goto LABEL_6;
      }
    }
    return a3;
  }
}
