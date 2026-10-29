__int64 __fastcall sub_210C0(__int64 a1, int a2)
{
  char v3; // dl
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  bool v13; // al
  char v14; // al
  _QWORD *i; // rax
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rbx
  void *v20; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 1412) = 1;
  }
  else
  {
    v3 = sub_15850((_QWORD *)a1);
    v4 = *(_QWORD *)(a1 + 1392);
    if ( v3 )
    {
      *(_BYTE *)(a1 + 1412) = 0;
      if ( v4 && !*(_DWORD *)(a1 + 1408) )
      {
LABEL_5:
        v5 = *(_QWORD *)(a1 + 1376);
        v6 = a1 + 520;
        v22 = a1 + 1360;
        while ( v22 != v5 )
        {
          v7 = *(_QWORD **)(a1 + 528);
          v8 = *(_QWORD *)(v5 + 32);
          v9 = (_QWORD *)(a1 + 520);
          if ( v7 )
          {
            v10 = *(_QWORD **)(a1 + 528);
            while ( 1 )
            {
              while ( 1 )
              {
                v11 = v10[4];
                if ( v11 >= v8 )
                  break;
                v10 = (_QWORD *)v10[3];
                if ( !v10 )
                  goto LABEL_12;
              }
              v12 = (_QWORD *)v10[2];
              if ( v8 >= v11 )
                break;
              v9 = v10;
              v10 = (_QWORD *)v10[2];
              if ( !v12 )
              {
LABEL_12:
                v13 = v6 == (_QWORD)v9;
                goto LABEL_13;
              }
            }
            for ( i = (_QWORD *)v10[3]; i; i = (_QWORD *)i[2] )
            {
              while ( 1 )
              {
                v17 = i[3];
                if ( v8 < i[4] )
                  break;
                i = (_QWORD *)i[3];
                if ( !v17 )
                  goto LABEL_30;
              }
              v9 = i;
            }
LABEL_30:
            while ( v12 )
            {
              while ( 1 )
              {
                v18 = v12[3];
                if ( v12[4] >= v8 )
                  break;
                v12 = (_QWORD *)v12[3];
                if ( !v18 )
                  goto LABEL_33;
              }
              v10 = v12;
              v12 = (_QWORD *)v12[2];
            }
LABEL_33:
            if ( *(_QWORD **)(a1 + 536) != v10 || v9 != (_QWORD *)v6 )
            {
              if ( v10 != v9 )
              {
                do
                {
                  v19 = std::_Rb_tree_increment();
                  v20 = (void *)std::_Rb_tree_rebalance_for_erase();
                  operator delete(v20, 0x40u);
                  --*(_QWORD *)(a1 + 552);
                }
                while ( v9 != (_QWORD *)v19 );
              }
              goto LABEL_16;
            }
          }
          else
          {
            v13 = 1;
LABEL_13:
            if ( *(_QWORD **)(a1 + 536) != v9 || !v13 )
              goto LABEL_16;
          }
          sub_11760(v7);
          *(_QWORD *)(a1 + 536) = v6;
          *(_QWORD *)(a1 + 528) = 0;
          *(_QWORD *)(a1 + 544) = v6;
          *(_QWORD *)(a1 + 552) = 0;
LABEL_16:
          v5 = std::_Rb_tree_increment();
        }
        sub_12720(*(_QWORD **)(a1 + 1368));
        *(_QWORD *)(a1 + 1368) = 0;
        *(_QWORD *)(a1 + 1392) = 0;
        *(_QWORD *)(a1 + 1376) = v22;
        *(_QWORD *)(a1 + 1384) = v22;
        if ( a2 )
          goto LABEL_18;
LABEL_21:
        v14 = sub_1F6B0(a1, 0, 1);
        return v14 & 1;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 1412) = 1;
      if ( v4 && !*(_DWORD *)(a1 + 1408) )
        goto LABEL_5;
    }
  }
  if ( !a2 )
    goto LABEL_21;
LABEL_18:
  v14 = sub_1F6B0(a1, a2, 0);
  return v14 & 1;
}

