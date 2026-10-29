__int64 __fastcall sub_3EBA0(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        char a5,
        unsigned __int64 *a6)
{
  unsigned int v9; // r12d
  __int64 v10; // r15
  unsigned __int64 *v11; // rax
  __int64 v12; // r11
  unsigned __int64 *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  void (__fastcall ***v16)(_QWORD, __int64, unsigned __int64 *, __int64); // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  void *v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v33; // [rsp+8h] [rbp-60h]
  void *v35; // [rsp+10h] [rbp-58h]
  _QWORD *v36; // [rsp+10h] [rbp-58h]
  void *v37; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v38; // [rsp+10h] [rbp-58h]
  void *v39; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v40[9]; // [rsp+20h] [rbp-48h] BYREF

  v40[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( !a4 || (v9 = 4, (*(_WORD *)a4 & 0xFFF) == 0) )
  {
    v40[0] = nullptr;
    v9 = sub_3E8C0((__int64)a1, v40, a2);
    if ( !v9 )
    {
      if ( !a6 )
        a6 = a1 + 530;
      v10 = ((a2 >> 9) & 0xFF8) + (~(-1LL << a1[522]) & *v40[0] & 0xFFFFFFFFFFFFF000LL);
      v11 = sub_3E000((__int64)a1, v10, 8);
      v13 = v11;
      if ( !v11 )
        return 6;
      if ( (*(_BYTE *)v11 & 1) == 0 )
      {
        v14 = *a6;
        *v13 = *a6;
        *(_BYTE *)v13 = v14 | 1;
        if ( a4 )
        {
          v15 = *a4;
        }
        else
        {
          v38 = v13;
          v28 = sub_3E840(a1);
          v13 = v38;
          v15 = v28;
        }
        if ( a3 )
          *a3 = v15;
        *v13 = v15 & 0xFFFFFFFFFFFFF000LL
             | *v13 & ~(((1LL << ((unsigned __int8)*((_DWORD *)a1 + 1044) - 12)) - 1) << 12);
        v16 = (void (__fastcall ***)(_QWORD, __int64, unsigned __int64 *, __int64))a1[523];
        if ( v16 )
          (**v16)(v16, v10, v13, 8);
        v17 = (_QWORD *)a1[526];
        if ( !v17 )
          goto LABEL_44;
        v18 = a1 + 525;
        do
        {
          while ( 1 )
          {
            v19 = v17[2];
            v20 = v17[3];
            if ( v17[4] < a2 )
              break;
            v18 = v17;
            v17 = (_QWORD *)v17[2];
            if ( !v19 )
              goto LABEL_19;
          }
          v17 = (_QWORD *)v17[3];
        }
        while ( v20 );
LABEL_19:
        if ( a1 + 525 == v18 )
        {
LABEL_44:
          v33 = (__int64)(a1 + 524);
          v29 = operator new(0x30u);
          v30 = a1[529] == 0;
          *(_QWORD *)(v29 + 32) = a2;
          v22 = (void *)v29;
          *(_QWORD *)(v29 + 40) = 0;
          if ( v30 || (v25 = (_QWORD *)a1[528], v18 = nullptr, v25[4] >= a2) )
          {
LABEL_46:
            v39 = v22;
            v31 = sub_3D9C0(v33, a2);
            v22 = v39;
            v18 = v31;
          }
        }
        else
        {
          if ( a2 >= v18[4] )
          {
LABEL_29:
            v18[5] = v15;
            return v9;
          }
          v33 = (__int64)(a1 + 524);
          v21 = operator new(0x30u);
          *(_QWORD *)(v21 + 32) = a2;
          v22 = (void *)v21;
          *(_QWORD *)(v21 + 40) = 0;
          v23 = v18[4];
          if ( a2 >= v23 )
          {
            if ( v23 >= a2 )
              goto LABEL_42;
            if ( (_QWORD *)a1[528] == v18 )
              goto LABEL_47;
            v35 = (void *)v21;
            v24 = std::_Rb_tree_increment();
            v22 = v35;
            v25 = (_QWORD *)v24;
            if ( a2 < *(_QWORD *)(v24 + 32) )
            {
              if ( v18[3] )
              {
                v18 = (_QWORD *)v24;
                goto LABEL_27;
              }
LABEL_47:
              if ( v18 )
                goto LABEL_28;
              goto LABEL_42;
            }
            goto LABEL_46;
          }
          v25 = v18;
          if ( (_QWORD *)a1[527] == v18 )
            goto LABEL_27;
          v37 = (void *)v21;
          v27 = std::_Rb_tree_decrement();
          v22 = v37;
          v25 = (_QWORD *)v27;
          if ( *(_QWORD *)(v27 + 32) >= a2 )
            goto LABEL_46;
          if ( *(_QWORD *)(v27 + 24) )
            v25 = v18;
          else
            v18 = nullptr;
        }
LABEL_27:
        if ( v25 )
        {
LABEL_28:
          v36 = v22;
          std::_Rb_tree_insert_and_rebalance();
          v18 = v36;
          ++*(_QWORD *)(v33 + 40);
          goto LABEL_29;
        }
LABEL_42:
        if ( v22 )
          operator delete(v22, 0x30u);
        goto LABEL_29;
      }
      if ( a3 )
        *a3 = *v11 & v12 & 0xFFFFFFFFFFFFF000LL;
      if ( !a5 )
        return 3;
    }
  }
  return v9;
}

