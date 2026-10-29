__int64 __fastcall sub_3ED6E0(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v4; // r13d
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // r8
  int v13; // r12d
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  void *v21; // [rsp+8h] [rbp-50h]
  void *v22; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int8)sub_7D640(a1, a2, a3) )
  {
    if ( (unsigned __int8)sub_7D6B0((__int64)a2, (_QWORD *)(a1 + 56), a3) )
    {
      v4 = sub_7D9D0((__int64)a2, (__int64 *)(a1 + 104), a3);
      if ( (_BYTE)v4 )
      {
        v6 = a1 + 136;
        sub_3ED510(*(_QWORD **)(a1 + 144));
        *(_QWORD *)(a1 + 152) = a1 + 136;
        *(_QWORD *)(a1 + 144) = 0;
        *(_QWORD *)(a1 + 160) = a1 + 136;
        *(_QWORD *)(a1 + 168) = 0;
        v7 = (int)sub_7D4F0(a2, a3);
        if ( a2[1] - *a2 >= v7 )
        {
          v8 = v7 - 1;
          if ( (int)v7 - 1 < 0 )
          {
LABEL_28:
            *(_DWORD *)(a1 + 176) = sub_7CD20(a2, a3);
            return v4;
          }
          while ( 1 )
          {
            v13 = sub_7CD20(a2, a3);
            v14 = operator new(0x28u);
            *(_DWORD *)(v14 + 32) = v13;
            v11 = (void *)v14;
            if ( a1 + 136 == v6 )
              break;
            v15 = *(_DWORD *)(v6 + 32);
            if ( v13 < v15 )
            {
              v9 = *(_QWORD *)(a1 + 152);
              if ( v6 == v9 )
                goto LABEL_13;
              v19 = (void *)v14;
              v10 = std::_Rb_tree_decrement();
              v11 = v19;
              v9 = v10;
              if ( v13 > *(_DWORD *)(v10 + 32) )
              {
                if ( *(_QWORD *)(v10 + 24) )
                  v9 = v6;
                else
LABEL_30:
                  v6 = 0;
LABEL_13:
                if ( !v9 )
                  goto LABEL_26;
                goto LABEL_14;
              }
              goto LABEL_25;
            }
            if ( v13 <= v15 )
              goto LABEL_26;
            v9 = *(_QWORD *)(a1 + 160);
            if ( v6 == v9 )
              goto LABEL_30;
            v22 = (void *)v14;
            v16 = std::_Rb_tree_increment();
            v11 = v22;
            v9 = v16;
            if ( v13 >= *(_DWORD *)(v16 + 32) )
              goto LABEL_25;
            if ( *(_QWORD *)(v6 + 24) )
            {
              v6 = v16;
              goto LABEL_13;
            }
            if ( !v6 )
            {
LABEL_26:
              if ( v11 )
                operator delete(v11, 0x28u);
              goto LABEL_15;
            }
LABEL_14:
            v20 = (__int64)v11;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(a1 + 168);
            v6 = v20;
LABEL_15:
            if ( v8-- == 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 168) )
          {
            v9 = *(_QWORD *)(a1 + 160);
            v6 = 0;
            if ( v13 > *(_DWORD *)(v9 + 32) )
              goto LABEL_13;
          }
LABEL_25:
          v21 = v11;
          v17 = sub_3EBA80(a1 + 128, v13);
          v11 = v21;
          v6 = v17;
          if ( !v18 )
            goto LABEL_26;
          goto LABEL_14;
        }
      }
    }
  }
  return 0;
}

