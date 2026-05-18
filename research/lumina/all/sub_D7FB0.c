void __fastcall sub_D7FB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r13
  char v6; // al
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  int v9; // ebp
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int8 *v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rcx

  v3 = a2[2];
  if ( v3 )
  {
    do
    {
      v5 = *(_QWORD *)(v3 + 40);
      if ( (!a1 || !*(_QWORD *)(a1 + 760)) && *((_BYTE *)a2 + 63) != 1 )
        sub_D1F90(*(_QWORD *)(v3 + 48) + 32LL, *(unsigned __int8 **)v3, 0);
      v4 = v3;
      v3 = v5;
      sub_D7C50(a1, v4);
    }
    while ( v5 );
  }
  v6 = *((_BYTE *)a2 + 63);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( !a1 || !*(_QWORD *)(a1 + 760) )
      {
        v17 = (__int64 *)a2[10];
        a2[10] = 0;
        if ( v17 )
        {
          do
          {
            v18 = *v17;
            v19 = (__int64 *)v17[5];
            if ( *v17 )
            {
              v17[5] = *(_QWORD *)(v18 + 576);
              *(_QWORD *)(v18 + 576) = v17;
            }
            else
            {
              a2[10] = v17;
              v17[5] = 0;
            }
            v17 = v19;
          }
          while ( v19 );
        }
      }
      v8 = (_QWORD *)a2[9];
      if ( v8 )
      {
        if ( *((int *)a2 + 16) <= 0 )
          goto LABEL_27;
        v9 = 0;
        do
        {
          if ( v9 != 1 )
          {
            v10 = (_QWORD *)v8[v9];
            if ( v10 )
            {
              sub_C9250(a1, v10);
              v8 = (_QWORD *)a2[9];
            }
          }
          ++v9;
        }
        while ( v9 < *((_DWORD *)a2 + 16) );
        if ( v8 )
LABEL_27:
          sub_C9250(a1, v8);
      }
    }
    else
    {
      sub_D7700(a1, (_QWORD *)a2[8]);
    }
  }
  else
  {
    v11 = a2[9];
    if ( v11 )
    {
      do
      {
        if ( !a1 || !*(_QWORD *)(a1 + 760) )
        {
          v13 = *(_QWORD *)(v11 + 32);
          v14 = *(_QWORD *)(v11 + 24);
          if ( v13 )
          {
            *(_QWORD *)(v13 + 24) = v14;
          }
          else
          {
            v16 = v14 ? *(unsigned __int8 **)(v14 + 16) : *(unsigned __int8 **)(v11 + 16);
            sub_D1F90(a2[12] + 80LL, v16, v14);
          }
          v15 = *(_QWORD *)(v11 + 24);
          if ( v15 )
            *(_QWORD *)(v15 + 32) = *(_QWORD *)(v11 + 32);
        }
        sub_D7F30(a1, *(_QWORD **)(v11 + 48));
        sub_D7F30(a1, *(_QWORD **)(v11 + 56));
        v12 = *(_QWORD *)(v11 + 8);
        sub_C9250(a1, (_QWORD *)v11);
        v11 = v12;
      }
      while ( v12 );
    }
  }
  sub_D78A0(a1, (__int64)a2);
  if ( *a2 )
    sub_C9250(a1, (_QWORD *)*a2);
  v7 = (_QWORD *)a2[3];
  if ( v7 )
    sub_C9250(a1, v7);
  sub_D7880(a1, (_QWORD *)a2[4]);
  if ( a2 )
    sub_C9250(a1, a2);
}
