void __fastcall sub_23350(__int64 a1, __int64 a2, int **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  int *v9; // rax
  __int64 v10; // r13
  int *v11; // r14
  int *v12; // rcx
  int *v13; // rdx
  char *v14; // r15
  int *v15; // rdi
  unsigned __int64 v16; // rdx
  int *v17; // rax
  int *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  int *v21; // rax

  if ( a1 != a2 )
  {
    v7 = a1;
    while ( 1 )
    {
      v9 = *a3;
      v10 = *(_QWORD *)(v7 + 48);
      v11 = a3[2];
      if ( !*a3 )
        goto LABEL_7;
      if ( *v9 > 1 )
        break;
      v15 = a3[1];
      v16 = ((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v11 == (int *)(*((_QWORD *)v9 + 1) - ((__int64)((__int64)v15 - v16) >> 3)) )
      {
        if ( v11 || (int *)v16 == v15 )
          goto LABEL_6;
        *((_QWORD *)v15 - 1) = v10;
        a3[1] -= 2;
        a3[2] = (int *)((char *)a3[2] + 1);
      }
      else
      {
        *(_QWORD *)&v15[2 * (_QWORD)v11] = v10;
        a3[2] = (int *)((char *)a3[2] + 1);
      }
LABEL_12:
      if ( !*a3 || **a3 > 1 )
        sub_22F70((__int64)a3, 0, 0, 0, a5, a6);
      v7 = std::_Rb_tree_increment(v7);
      if ( v7 == a2 )
        return;
    }
    if ( v9 )
    {
LABEL_6:
      if ( *v9 <= 1 )
      {
        v17 = *a3;
        if ( *a3 )
        {
          v18 = a3[1];
          v19 = *((_QWORD *)v17 + 1);
          v13 = a3[2];
          a5 = (__int64)v18 - (((unsigned __int64)v17 + 31) & 0xFFFFFFFFFFFFFFF0LL);
          v20 = a5 >> 3;
          if ( v19 - (__int64)v13 - (a5 >> 3) > 0 )
          {
            v14 = (char *)&v18[2 * (_QWORD)v11];
            goto LABEL_9;
          }
          if ( a5 > 0 )
          {
            a5 = 0;
            if ( 3 * (__int64)v13 < 2 * v19 )
            {
              v12 = &v18[-2 * v20];
              if ( v13 && v12 != v18 && v18 && v12 )
              {
                v21 = (int *)memmove(&v18[-2 * v20], v18, 8LL * (_QWORD)v13);
                v13 = a3[2];
                a5 = 0;
                v12 = v21;
              }
              a3[1] = v12;
              goto LABEL_8;
            }
          }
        }
      }
    }
LABEL_7:
    sub_22F70((__int64)a3, 0, 1, 0, 0, a6);
    v12 = a3[1];
    v13 = a3[2];
    a5 = 0;
LABEL_8:
    v14 = (char *)&v12[2 * (_QWORD)v11];
LABEL_9:
    if ( (__int64)v11 < (__int64)v13 )
    {
      memmove(v14 + 8, v14, 8 * ((char *)v13 - (char *)v11));
      v13 = a3[2];
    }
    a3[2] = (int *)((char *)v13 + 1);
    *(_QWORD *)v14 = v10;
    goto LABEL_12;
  }
}

