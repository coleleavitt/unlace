__int64 __fastcall sub_26460(_QWORD *a1, _DWORD *a2, unsigned __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // rax
  void *v11; // rbp
  _QWORD *v12; // [rsp+8h] [rbp-70h]
  _QWORD v13[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v3 = a1 + 66;
  v16 = __readfsqword(0x28u);
  qmutex_lock();
  v5 = (_QWORD *)a1[67];
  v13[1] = 0;
  v15 = 0;
  v13[0] = a3;
  if ( v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v5[2];
        v7 = v5[3];
        if ( v5[4] < a3 )
          break;
        v3 = v5;
        v5 = (_QWORD *)v5[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v5 = (_QWORD *)v5[3];
    }
    while ( v7 );
LABEL_6:
    if ( a1 + 66 != v3 && a3 >= v3[4] )
      goto LABEL_11;
  }
  v14 = 0;
  v12 = sub_25F40(a1 + 65, v3, (__int64)v13);
  v3 = v12;
  if ( v14 )
    qfree();
  v8 = sub_4FFF0(a1[2], v12 + 5, a3);
  if ( (_BYTE)v8 )
  {
LABEL_11:
    if ( a2 )
      *a2 = *((_DWORD *)v3 + 10);
    v8 = 1;
  }
  else
  {
    v10 = std::_Rb_tree_rebalance_for_erase();
    v11 = (void *)v10;
    if ( *(_QWORD *)(v10 + 48) )
    {
      *(_QWORD *)(v10 + 56) = 0;
      qfree();
    }
    operator delete(v11, 0x48u);
    --a1[70];
  }
  qmutex_unlock();
  return v8;
}

