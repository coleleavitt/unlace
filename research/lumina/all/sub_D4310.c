void __fastcall sub_D4310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi

  if ( a1 )
  {
    v7 = *(unsigned int *)(a1 + 52);
    v8 = *(_QWORD *)a1;
    if ( *(_BYTE *)(v8 + 103) || (v9 = 0, (_DWORD)v7) )
    {
      v9 = sub_D42C0(v8, v7, a3, a4, a5, a6);
      v8 = *(_QWORD *)a1;
    }
    *(_DWORD *)(a1 + 52) = v9;
    v10 = *(_QWORD *)(v8 + 24);
    if ( v10 )
      xmmword_241510(v10, v7, a3);
  }
}
