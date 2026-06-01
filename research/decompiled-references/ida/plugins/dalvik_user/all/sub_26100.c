__int64 __fastcall sub_26100(_QWORD *a1, __m128i *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // r15
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  int v13; // r15d
  unsigned int v14; // ebx
  __int64 v16; // rax
  void *v17; // rbx
  _QWORD v18[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v5 = a1 + 66;
  v21 = __readfsqword(0x28u);
  qmutex_lock();
  v18[0] = a3;
  v7 = (_QWORD *)a1[67];
  v18[1] = 0;
  v20 = 0;
  if ( !v7 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v8 = v7[2];
      v9 = v7[3];
      if ( v7[4] < a3 )
        break;
      v5 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v7 = (_QWORD *)v7[3];
  }
  while ( v9 );
LABEL_6:
  if ( a1 + 66 == v5 || a3 < v5[4] )
  {
LABEL_10:
    v19 = 0;
    v10 = sub_25F40(a1 + 65, v5, (__int64)v18);
    v5 = v10;
    if ( v19 )
      qfree();
    if ( !(unsigned __int8)sub_4FFF0(a1[2], v10 + 5, a3) )
    {
      v16 = std::_Rb_tree_rebalance_for_erase();
      v17 = (void *)v16;
      if ( *(_QWORD *)(v16 + 48) )
      {
        *(_QWORD *)(v16 + 56) = 0;
        qfree();
      }
      operator delete(v17, 0x48u);
      --a1[70];
      goto LABEL_19;
    }
  }
  v11 = *((int *)v5 + 10);
  if ( a4 >= v11 )
  {
LABEL_19:
    v14 = 0;
    goto LABEL_20;
  }
  v12 = *((int *)v5 + 11);
  if ( a4 >= v12 )
  {
    while ( 1 )
    {
      v13 = v11 - v12;
      if ( v13 > 50 )
        v13 = 50;
      if ( !(unsigned __int8)sub_501F0(a1[2], v5 + 6, a3, v12, (unsigned int)v13) )
        goto LABEL_19;
      v12 = (unsigned int)(v13 + *((_DWORD *)v5 + 11));
      *((_DWORD *)v5 + 11) = v12;
      if ( a4 < (int)v12 )
        break;
      LODWORD(v11) = *((_DWORD *)v5 + 10);
    }
  }
  if ( a2 )
    *a2 = _mm_loadu_si128((const __m128i *)(v5[6] + 16 * a4));
  v14 = 1;
LABEL_20:
  qmutex_unlock();
  return v14;
}

