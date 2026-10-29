__int64 __fastcall sub_EE1A0(__int64 a1, unsigned int a2, int a3, int a4, int a5, int a6, double a7)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 v11; // rdi
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi

  v7 = 0;
  v8 = *(_QWORD *)a1;
  if ( a1 )
  {
    v9 = *(unsigned __int16 *)(a1 + 192);
    if ( v9 > a2 )
    {
      v11 = *(_QWORD *)(v8 + 24);
      v13 = v9 * a4;
      v14 = v13 + a2;
      if ( v11 )
        xmmword_241500(v11);
      v15 = *(_QWORD *)(a1 + 152);
      v16 = v15 + 56LL * (int)v14;
      if ( a3 )
      {
        v17 = 2;
        v7 = sub_D9DB0(v16, 2u, a7, v15, v13, a5, a6);
      }
      else
      {
        v17 = 1;
        v7 = sub_D9DB0(v16, 1u, a7, v15, v13, a5, a6);
      }
      if ( *(_BYTE *)(v8 + 103) )
      {
        v7 = 0;
        if ( !*(_DWORD *)(v8 + 220) )
          sub_D4260(v8);
      }
      v19 = *(_QWORD *)(v8 + 24);
      if ( v19 )
        xmmword_241510(v19, v17, v18);
    }
  }
  return v7;
}
