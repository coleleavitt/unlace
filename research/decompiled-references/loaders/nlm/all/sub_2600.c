__int64 __fastcall sub_2600(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // r12
  _QWORD *v3; // r13
  _QWORD *v4; // r13
  _QWORD *v5; // r12
  _QWORD *v6; // r13
  _QWORD *v7; // r13
  __int64 v8; // rbp
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  _QWORD *v11; // r13
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  _QWORD *v14; // r13

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      v3 = *(_QWORD **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *v3 )
        {
          ((void (*)(void))sub_2600)();
          sub_2600(v3[1]);
        }
        qfree(v3);
        v4 = *(_QWORD **)(v2 + 8);
        if ( *v4 )
        {
          sub_2600(*v4);
          sub_2600(v4[1]);
        }
        qfree(v4);
      }
      qfree(v2);
      v5 = (_QWORD *)v1[1];
      v6 = (_QWORD *)*v5;
      if ( *v5 )
      {
        if ( *v6 )
        {
          sub_2600(*v6);
          sub_2600(v6[1]);
        }
        qfree(v6);
        v7 = (_QWORD *)v5[1];
        if ( *v7 )
        {
          sub_2600(*v7);
          sub_2600(v7[1]);
        }
        qfree(v7);
      }
      qfree(v5);
    }
    qfree(v1);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD **)v8;
    if ( *(_QWORD *)v8 )
    {
      v10 = (_QWORD *)*v9;
      if ( *v9 )
      {
        if ( *v10 )
        {
          sub_2600(*v10);
          sub_2600(v10[1]);
        }
        qfree(v10);
        v11 = (_QWORD *)v9[1];
        if ( *v11 )
        {
          sub_2600(*v11);
          sub_2600(v11[1]);
        }
        qfree(v11);
      }
      qfree(v9);
      v12 = *(_QWORD **)(v8 + 8);
      v13 = (_QWORD *)*v12;
      if ( *v12 )
      {
        if ( *v13 )
        {
          sub_2600(*v13);
          sub_2600(v13[1]);
        }
        qfree(v13);
        v14 = (_QWORD *)v12[1];
        if ( *v14 )
        {
          sub_2600(*v14);
          sub_2600(v14[1]);
        }
        qfree(v14);
      }
      qfree(v12);
    }
    qfree(v8);
  }
  return qfree(a1);
}
