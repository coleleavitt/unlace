__int64 __fastcall boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *i; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 result; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi

  v2 = (_QWORD *)*a2;
  *((_DWORD *)a2 + 6) = 0;
  if ( a1 != v2 )
  {
    for ( i = (_QWORD *)*v2; *((_DWORD *)v2 + 6) != 1 && a1 != i; i = *(_QWORD **)*i )
    {
      v5 = (_QWORD *)i[1];
      *((_DWORD *)i + 6) = 0;
      v6 = v5;
      if ( v5 == v2 )
      {
        v6 = (_QWORD *)i[2];
        if ( !v6 )
        {
LABEL_11:
          v7 = (_QWORD *)v2[1];
          if ( v5 == v2 )
          {
            if ( v7 != a2 )
            {
              v12 = (_QWORD *)a2[1];
              v2[2] = v12;
              if ( v12 )
                *v12 = v2;
              a2[1] = v2;
              *v2 = a2;
              v2 = a2;
            }
            v13 = (_QWORD *)*i;
            v14 = (_QWORD *)v2[2];
            v15 = *(_QWORD **)(*i + 8LL);
            i[1] = v14;
            if ( v14 )
              *v14 = i;
            v2[2] = i;
            *i = v2;
            *v2 = v13;
            if ( a1 != v13 )
            {
              if ( v15 == i )
                v13[1] = v2;
              else
                v13[2] = v2;
              goto LABEL_18;
            }
          }
          else
          {
            if ( v7 == a2 )
            {
              v11 = (_QWORD *)a2[2];
              v2[1] = v11;
              if ( v11 )
                *v11 = v2;
              a2[2] = v2;
              v7 = (_QWORD *)a2[1];
              *v2 = a2;
              v2 = a2;
            }
            v8 = (_QWORD *)*i;
            v9 = *(_QWORD **)(*i + 8LL);
            i[2] = v7;
            if ( v7 )
              *v7 = i;
            v2[1] = i;
            *i = v2;
            *v2 = v8;
            if ( a1 != v8 )
            {
              if ( v9 == i )
                v8[1] = v2;
              else
                v8[2] = v2;
              goto LABEL_18;
            }
          }
          *a1 = v2;
LABEL_18:
          *((_DWORD *)v2 + 6) = 1;
          break;
        }
      }
      else if ( !v5 )
      {
        goto LABEL_11;
      }
      if ( *((_DWORD *)v6 + 6) )
        goto LABEL_11;
      *((_DWORD *)v6 + 6) = 1;
      a2 = i;
      *((_DWORD *)v2 + 6) = 1;
      v2 = (_QWORD *)*i;
      if ( a1 == (_QWORD *)*i )
        break;
    }
  }
  result = *a1;
  *(_DWORD *)(*a1 + 24LL) = 1;
  return result;
}

