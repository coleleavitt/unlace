__int64 __fastcall sub_1623E0(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4, _DWORD *a5, double a6)
{
  __int64 v9; // rdi
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebp
  __int64 v19; // rdi
  int v21; // eax
  const char *v22; // rcx
  bool v23; // zf

  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    xmmword_241500(v9);
  v12 = 12;
  if ( a2 )
  {
    if ( *a2 )
    {
      v21 = sub_CA320(a1, a2);
      v12 = (unsigned int)v21;
      if ( v21 < 0 )
      {
        v22 = (const char *)a2;
        v18 = 1;
        sub_F63C0(a1, 1, "unknown database: %s", v22);
        goto LABEL_8;
      }
    }
  }
  *(_DWORD *)(a1 + 648) = 0;
  v13 = sub_162160(a1, (const char *)v12, a3, a4, a5, a6);
  v18 = v13;
  *(_DWORD *)(a1 + 80) = v13;
  if ( v13 )
  {
    sub_CA220((__int64 *)a1, v13, v14, v15, v16, v17);
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a1 + 392) )
  {
    v12 = 0;
    sub_CA220((__int64 *)a1, 0, v14, v15, v16, v17);
    if ( !*(_BYTE *)(a1 + 103) )
      goto LABEL_9;
    goto LABEL_8;
  }
  v23 = *(_BYTE *)(a1 + 103) == 0;
  *(_DWORD *)(a1 + 84) = -1;
  if ( !v23 )
  {
LABEL_8:
    v12 = v18;
    v18 = sub_D42C0(a1, v18, v14, v15, v16, v17);
  }
LABEL_9:
  if ( !*(_DWORD *)(a1 + 208) )
    *(_DWORD *)(a1 + 400) = 0;
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    xmmword_241510(v19, v12, v14);
  return v18;
}
