__int64 __fastcall sub_CD60(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  int v13; // r13d
  void *v14; // rsi
  _BYTE *v16; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 504);
  if ( v2 )
  {
    v3 = (_QWORD *)(a1 + 496);
    v4 = *a2;
    v6 = *(_QWORD **)(a1 + 504);
    v7 = a1 + 496;
    do
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6[3];
        if ( v6[4] >= v4 )
          break;
        v6 = (_QWORD *)v6[3];
        if ( !v9 )
          goto LABEL_8;
      }
      v7 = (__int64)v6;
      v6 = (_QWORD *)v6[2];
    }
    while ( v8 );
    do
    {
LABEL_8:
      while ( 1 )
      {
        v10 = v2[2];
        v11 = v2[3];
        if ( a2[1] < v2[4] )
          break;
        v2 = (_QWORD *)v2[3];
        if ( !v11 )
          goto LABEL_10;
      }
      v3 = v2;
      v2 = (_QWORD *)v2[2];
    }
    while ( v10 );
LABEL_10:
    if ( v3 != (_QWORD *)v7 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v7 + 32);
        if ( v12 < v4 )
          goto LABEL_12;
        v13 = *(_DWORD *)(v7 + 40);
        v17 = 0;
        v16 = nullptr;
        v16 = (_BYTE *)qvector_reserve(&v16, 0, 2, 1);
        *(_QWORD *)&v17 = 2;
        *v16 = 76;
        v16[1] = 0;
        sub_CCA0((__int64 *)&v16, (__int64)"%u", v13);
        v14 = &unk_1DA78;
        if ( (_QWORD)v17 )
          v14 = v16;
        set_name(v12, v14, 2560);
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v16);
          v7 = std::_Rb_tree_increment(v7);
          if ( (_QWORD *)v7 == v3 )
            return 1;
        }
        else
        {
LABEL_12:
          v7 = std::_Rb_tree_increment(v7);
          if ( (_QWORD *)v7 == v3 )
            return 1;
        }
        v4 = *a2;
      }
    }
  }
  return 1;
}

