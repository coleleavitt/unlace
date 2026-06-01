void __fastcall sub_3BB20(int a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  volatile signed __int32 **v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdi
  volatile signed __int32 ***v16; // rax
  int *v17; // rax
  __int64 v18; // r8
  __int64 *v19; // r14
  __int64 *v20; // rax
  int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  int *v25; // rax
  QT::QListWidget *v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  if ( a1 )
  {
    if ( a1 != 1 )
      return;
    v7 = sub_1E4C0(*(_QWORD **)(a2[2] + 48), 511, 0, a4, a5, a6);
    v10 = *(_QWORD **)(a2[2] + 48);
    v11 = v10[219];
    v12 = v10[218];
    v13 = 8 * v11;
    v14 = (8 * v11) >> 5;
    v15 = (8 * v11) >> 3;
    if ( v14 > 0 )
    {
      v16 = (volatile signed __int32 ***)v10[218];
      v14 = v12 + 32 * v14;
      while ( v7 != *v16 )
      {
        if ( v7 == v16[1] )
        {
          v13 = (__int64)v16 - v12 + 8;
          v15 = v13 >> 3;
          goto LABEL_11;
        }
        if ( v7 == v16[2] )
        {
          v13 = (__int64)v16 - v12 + 16;
          v15 = v13 >> 3;
          goto LABEL_11;
        }
        if ( v7 == v16[3] )
        {
          v13 = (__int64)v16 - v12 + 24;
          v15 = v13 >> 3;
          goto LABEL_11;
        }
        v16 += 4;
        if ( v16 == (volatile signed __int32 ***)v14 )
        {
          v28 = (v12 + 8 * v11 - (__int64)v16) >> 3;
          goto LABEL_45;
        }
      }
      goto LABEL_10;
    }
    v28 = (8 * v11) >> 3;
    v16 = (volatile signed __int32 ***)v10[218];
LABEL_45:
    if ( v28 != 2 )
    {
      if ( v28 != 3 )
      {
        if ( v28 != 1 )
          goto LABEL_11;
        goto LABEL_48;
      }
      if ( v7 == *v16 )
      {
LABEL_10:
        v13 = (__int64)v16 - v12;
        v15 = ((__int64)v16 - v12) >> 3;
LABEL_11:
        if ( v11 != v15 )
        {
          v17 = (int *)v10[217];
          if ( !v17 || (v14 = (unsigned int)*v17, (int)v14 > 1) )
          {
            sub_1B8E0((__int64)(v10 + 217), 0, 0, 0, v8, v9);
            v12 = v10[218];
            v11 = v10[219];
            v17 = (int *)v10[217];
          }
          v18 = v12 + 8 * v11;
          if ( !v17 || *v17 > 1 )
          {
            v11 = 0;
            v29 = v18;
            sub_1B8E0((__int64)(v10 + 217), 0, 0, 0, v18, v9);
            v12 = v10[218];
            v18 = v29;
          }
          v19 = (__int64 *)(v13 + v12);
          v20 = v19 + 1;
          if ( (__int64 *)v18 != v19 + 1 )
          {
            do
            {
              v14 = *v20;
              if ( v7 != (volatile signed __int32 **)*v20 )
                *v19++ = v14;
              ++v20;
            }
            while ( v20 != (__int64 *)v18 );
            v13 = (__int64)v19 - v10[218];
          }
          if ( (__int64 *)v18 != v19 )
          {
            v21 = (int *)v10[217];
            if ( !v21 || *v21 > 1 )
            {
              v30 = v18;
              sub_1B8E0((__int64)(v10 + 217), 0, 0, 0, v18, v9);
              v18 = v30;
            }
            v22 = v10[218];
            v23 = v10[219];
            v24 = v18 - (_QWORD)v19;
            v14 = v22 + 8 * v23;
            v11 = v22 + v13 + v24;
            if ( v22 == v22 + v13 )
            {
              if ( v11 != v14 )
                v10[218] = v11;
            }
            else if ( v11 != v14 )
            {
              v31 = v24;
              memmove((void *)(v22 + v13), (const void *)v11, v14 - v11);
              v23 = v10[219];
              v24 = v31;
            }
            v18 = v24 >> 3;
            v10[219] = v23 - v18;
          }
          v25 = (int *)v10[217];
          if ( !v25 || *v25 > 1 )
          {
            v11 = 0;
            sub_1B8E0((__int64)(v10 + 217), 0, 0, 0, v18, v9);
          }
        }
        if ( v7 )
          (*((void (__fastcall **)(volatile signed __int32 **, __int64, __int64))*v7 + 4))(v7, v11, v14);
        sub_3AD00(a2[2]);
        if ( (int)QT::QListWidget::count(*(QT::QListWidget **)(a2[2] + 40)) > 0 )
        {
          v26 = *(QT::QListWidget **)(a2[2] + 40);
          v27 = QT::QListWidget::count(v26);
          QT::QListWidget::setCurrentRow(v26, v27 - 1);
        }
        return;
      }
      ++v16;
    }
    if ( v7 != *v16 )
    {
      ++v16;
LABEL_48:
      if ( v7 != *v16 )
        goto LABEL_11;
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  if ( a2 )
    operator delete(a2, 0x18u);
}

