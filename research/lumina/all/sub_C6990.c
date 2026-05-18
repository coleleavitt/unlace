__int64 __fastcall sub_C6990(__int64 a1, void *a2, int a3, __int64 a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rdi
  const void *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  const void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi

  v7 = *(__int64 **)(a1 + 8);
  v8 = v7[4];
  if ( v8 )
    xmmword_241500(v8);
  if ( a3 + a4 <= *v7 )
  {
    v13 = (const void *)(a4 + v7[3]);
    memcpy(a2, v13, a3);
    v15 = v7[4];
    if ( v15 )
      xmmword_241510(v15, v13, v14);
    return 0;
  }
  else
  {
    v9 = nullptr;
    memset(a2, 0, a3);
    v10 = *v7;
    if ( *v7 > a4 )
    {
      v9 = (const void *)(a4 + v7[3]);
      memcpy(a2, v9, v10 - a4);
      v11 = v7[4];
      if ( v11 )
        goto LABEL_6;
    }
    else
    {
      v11 = v7[4];
      if ( v11 )
      {
LABEL_6:
        xmmword_241510(v11, v9, v10);
        return 522;
      }
    }
    return 522;
  }
}
