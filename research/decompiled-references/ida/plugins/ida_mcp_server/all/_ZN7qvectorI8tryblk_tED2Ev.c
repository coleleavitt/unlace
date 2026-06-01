// Alternative name is '_ZN7qvectorI8tryblk_tED1Ev'
void __fastcall qvector<tryblk_t>::~qvector(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 *v6; // rbx
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = (__int64 *)(v2 + v4);
        v7 = *(_BYTE *)(v2 + v4 + 97);
        if ( v7 == 2 )
          break;
        if ( v7 == 1 )
        {
          if ( v6[8] )
          {
            v6[9] = 0;
            qfree();
          }
          if ( v6[3] )
            goto LABEL_23;
        }
LABEL_8:
        v8 = *v6;
        *((_BYTE *)v6 + 97) = 0;
        if ( v8 )
        {
          v6[1] = 0;
          ++v5;
          qfree();
          v2 = *a1;
          if ( v3 == v5 )
            goto LABEL_10;
        }
        else
        {
          ++v5;
          v2 = *a1;
          if ( v3 == v5 )
            goto LABEL_10;
        }
        v4 += 104;
      }
      v9 = v6[3];
      if ( !v9 )
        goto LABEL_8;
      v10 = v6[4];
      if ( v10 )
      {
        v11 = 0;
        v12 = 0;
        while ( !*(_QWORD *)(v9 + v11) )
        {
LABEL_18:
          if ( v10 == ++v12 )
            goto LABEL_23;
          v11 += 56;
        }
        while ( 1 )
        {
          *(_QWORD *)(v9 + v11 + 8) = 0;
          ++v12;
          v13 = v11;
          qfree();
          v9 = v6[3];
          if ( v10 == v12 )
            break;
          v11 = v13 + 56;
          if ( !*(_QWORD *)(v9 + v13 + 56) )
            goto LABEL_18;
        }
      }
LABEL_23:
      v6[4] = 0;
      qfree();
      goto LABEL_8;
    }
LABEL_10:
    a1[1] = 0;
    qfree();
  }
}

