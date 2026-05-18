const __int16 *__fastcall sub_F6A60(__int64 a1, __int64 a2, __int64 a3, double a4, __int64 a5, int a6, int a7)
{
  char v7; // al
  bool v9; // cl
  __int64 v10; // rdi
  const __int16 *v11; // rbp
  __int64 v12; // rdi
  __int64 v14; // rsi
  char *v15; // rax
  __int64 v16; // rdx
  char v17; // cl
  int v18; // r8d
  int v19; // r9d

  if ( a1 )
  {
    v7 = *(_BYTE *)(a1 + 113);
    v9 = v7 != -70;
    LOBYTE(a3) = v7 != 118;
    if ( v7 != 118 && v9 && v7 != 109 )
    {
      v11 = L"bad parameter or other API misuse";
      if ( !(unsigned int)sub_EA5B0() )
        return v11;
    }
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      xmmword_241500(v10);
      v11 = L"out of memory";
      if ( *(_BYTE *)(a1 + 103) )
      {
LABEL_6:
        v12 = *(_QWORD *)(a1 + 24);
        if ( v12 )
          xmmword_241510(v12, a2, a3);
        return v11;
      }
LABEL_10:
      a2 = 2;
      v11 = (const __int16 *)sub_D9DB0(*(_QWORD *)(a1 + 392), 2u, a4, a3, v9, a6, a7);
      if ( !v11 )
      {
        v14 = *(unsigned int *)(a1 + 80);
        v15 = (char *)sub_D1BA0(*(_DWORD *)(a1 + 80));
        sub_F63C0(a1, v14, v15);
        a2 = 2;
        v11 = (const __int16 *)sub_D9DB0(*(_QWORD *)(a1 + 392), 2u, a4, v16, v17, v18, v19);
      }
      if ( *(_BYTE *)(a1 + 103) && !*(_DWORD *)(a1 + 220) )
        sub_D4260(a1);
      goto LABEL_6;
    }
    if ( !*(_BYTE *)(a1 + 103) )
      goto LABEL_10;
  }
  return L"out of memory";
}
