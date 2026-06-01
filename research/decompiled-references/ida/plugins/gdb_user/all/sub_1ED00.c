__int64 __fastcall sub_1ED00(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r12
  int v7; // r13d
  unsigned int v8; // r14d
  int v9; // kr00_4
  _QWORD *v10; // kr18_8
  int v11; // r12d
  __int64 v13; // r13
  __int64 sreg; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _UNKNOWN **v29; // r12
  int v30; // edx
  int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-50h]
  _QWORD *v38; // [rsp+10h] [rbp-48h]
  _QWORD *v39; // [rsp+10h] [rbp-48h]
  _QWORD *v40; // [rsp+10h] [rbp-48h]
  _QWORD *v41; // [rsp+10h] [rbp-48h]
  int v42; // [rsp+10h] [rbp-48h]
  int v43; // [rsp+10h] [rbp-48h]

  v37 = a2;
  v9 = v7;
  v10 = v6;
  v11 = a3;
  LODWORD(v13) = a5;
  switch ( (int)a3 )
  {
    case 1:
      v8 = 2;
      goto LABEL_7;
    case 2:
      v8 = 3;
      goto LABEL_7;
    case 3:
      v8 = 4;
      goto LABEL_7;
    case 4:
      if ( *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120) != 13 )
      {
        if ( (_DWORD)a5 == -1 )
        {
          v8 = 0;
          v13 = *(unsigned __int8 *)(sub_F590(a1, a2, a3, a4, a5, a6) + 80);
          v15 = v13;
          goto LABEL_8;
        }
        v8 = 0;
LABEL_7:
        v15 = (int)a5;
        goto LABEL_8;
      }
      v8 = 0;
LABEL_3:
      if ( (((_DWORD)a5 - 2) & 0xFFFFFFFD) == 0 )
        goto LABEL_7;
      LODWORD(v13) = 4;
      sreg = get_sreg();
      v15 = 4;
      if ( sreg == 1 )
      {
        v15 = 2;
        LODWORD(v13) = 2;
      }
LABEL_8:
      if ( (unsigned __int8)sub_3CC30(*(_QWORD *)(a1 + 864), a4, v8, v15) )
        goto LABEL_14;
      v16 = *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120);
      if ( v16 != 13 )
      {
        if ( v11 != 4 )
          return 0;
        v29 = *(_UNKNOWN ***)(a1 + 488);
        v30 = *(_DWORD *)(a1 + 496);
LABEL_31:
        if ( v16 == 12 && (v43 = v30, v36 = get_sreg(), v30 = v43, v36) )
        {
          v31 = v13;
          if ( (unsigned __int8)getinf_flag() )
          {
            LODWORD(v13) = 2;
            v29 = (_UNKNOWN **)&unk_5971C;
            if ( !a2 )
            {
              if ( *(_DWORD *)(a1 + 1360) != 6 )
              {
                v32 = 2;
                LODWORD(v13) = 2;
                v29 = (_UNKNOWN **)&unk_5971C;
                goto LABEL_37;
              }
LABEL_84:
              LODWORD(v13) = 2;
              goto LABEL_13;
            }
          }
          else
          {
            LODWORD(v13) = 2;
            v29 = (_UNKNOWN **)&unk_5971E;
            if ( !a2 )
            {
              if ( *(_DWORD *)(a1 + 1360) != 6 )
              {
                v32 = 2;
                LODWORD(v13) = 2;
                v29 = (_UNKNOWN **)&unk_5971E;
LABEL_37:
                if ( (unsigned __int8)sub_3C820(*(_QWORD *)(a1 + 864), a4, v29, v32) )
                  goto LABEL_38;
                goto LABEL_13;
              }
              goto LABEL_84;
            }
          }
        }
        else
        {
          v31 = v13;
          LODWORD(v13) = v30;
          if ( !a2 )
            goto LABEL_34;
        }
LABEL_33:
        if ( (int)sub_49640(a1, a2, a4, (unsigned int)v13) < 0 )
          goto LABEL_13;
LABEL_34:
        if ( *(_DWORD *)(a1 + 1360) == 6 || (int)v13 <= 0 )
        {
          if ( (_DWORD)v13 == -1 )
          {
LABEL_38:
            v8 = 999;
            goto LABEL_14;
          }
          goto LABEL_13;
        }
        v32 = (int)v13;
        goto LABEL_37;
      }
      if ( v11 != 4 )
        return 0;
      if ( (_DWORD)v13 != 2 && *(_BYTE *)(a1 + 1180) )
      {
        if ( (unsigned __int8)sub_3CC30(*(_QWORD *)(a1 + 864), a4, v8, 2) )
        {
          LODWORD(v13) = 2;
          goto LABEL_14;
        }
        v29 = *(_UNKNOWN ***)(a1 + 488);
        v30 = *(_DWORD *)(a1 + 496);
        v16 = *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120);
        if ( v16 != 13 )
        {
          LODWORD(v13) = 2;
          goto LABEL_31;
        }
        v31 = 2;
      }
      else
      {
        v29 = *(_UNKNOWN ***)(a1 + 488);
        v30 = *(_DWORD *)(a1 + 496);
        v31 = v13;
      }
      v42 = v30;
      if ( get_sreg() != 1 )
      {
        v30 = v42;
        LODWORD(v13) = v31;
        v16 = *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120);
        goto LABEL_31;
      }
      LODWORD(v13) = 2;
      v29 = &off_59720;
      if ( a2 )
        goto LABEL_33;
      if ( *(_DWORD *)(a1 + 1360) != 6 )
      {
        v32 = 2;
        goto LABEL_37;
      }
LABEL_13:
      v18 = v31;
      v8 = 1;
      if ( !(unsigned __int8)sub_3CC30(*(_QWORD *)(a1 + 864), a4, 1, v18) )
        return 0;
LABEL_14:
      v19 = *(_QWORD **)(a1 + 1648);
      if ( !v19 )
        goto LABEL_57;
      v20 = (_QWORD *)(a1 + 1640);
      do
      {
        while ( 1 )
        {
          v21 = v19[2];
          v22 = v19[3];
          if ( v19[4] < a4 )
            break;
          v20 = v19;
          v19 = (_QWORD *)v19[2];
          if ( !v21 )
            goto LABEL_19;
        }
        v19 = (_QWORD *)v19[3];
      }
      while ( v22 );
LABEL_19:
      if ( v20 == (_QWORD *)(a1 + 1640) )
      {
LABEL_57:
        v37 = a1 + 1632;
        v34 = operator new(0x48u);
        v35 = *(_QWORD *)(a1 + 1672) == 0;
        *(_QWORD *)(v34 + 32) = a4;
        v24 = (_QWORD *)v34;
        *(_QWORD *)(v34 + 40) = 0;
        *(_QWORD *)(v34 + 64) = 0;
        *(_OWORD *)(v34 + 48) = 0;
        if ( !v35 )
        {
          v26 = *(_QWORD *)(a1 + 1664);
          v20 = nullptr;
          if ( *(_QWORD *)(v26 + 32) < a4 )
            goto LABEL_25;
        }
        goto LABEL_24;
      }
      if ( a4 < v20[4] )
      {
        v37 = a1 + 1632;
        v23 = operator new(0x48u);
        *(_QWORD *)(v23 + 32) = a4;
        v24 = (_QWORD *)v23;
        *(_QWORD *)(v23 + 40) = 0;
        *(_QWORD *)(v23 + 64) = 0;
        *(_OWORD *)(v23 + 48) = 0;
        v25 = v20[4];
        if ( a4 < v25 )
        {
          v26 = (__int64)v20;
          if ( v20 == *(_QWORD **)(a1 + 1656) )
            goto LABEL_25;
          v38 = (_QWORD *)v23;
          v27 = std::_Rb_tree_decrement();
          v24 = v38;
          v26 = v27;
          if ( *(_QWORD *)(v27 + 32) >= a4 )
            goto LABEL_24;
LABEL_61:
          if ( *(_QWORD *)(v27 + 24) )
            v26 = (__int64)v20;
          else
            v20 = nullptr;
LABEL_25:
          if ( v26 )
          {
LABEL_26:
            v40 = v24;
            std::_Rb_tree_insert_and_rebalance();
            v20 = v40;
            ++*(_QWORD *)(v37 + 40);
            goto LABEL_27;
          }
LABEL_55:
          if ( v24 )
            operator delete(v24, 0x48u);
          goto LABEL_27;
        }
        if ( v25 >= a4 )
          goto LABEL_55;
        if ( v20 == *(_QWORD **)(a1 + 1664) )
        {
LABEL_63:
          if ( v20 )
            goto LABEL_26;
          goto LABEL_55;
        }
        v41 = (_QWORD *)v23;
        v33 = std::_Rb_tree_increment();
        v24 = v41;
        v26 = v33;
        if ( a4 < *(_QWORD *)(v33 + 32) )
        {
          if ( v20[3] )
          {
            v20 = (_QWORD *)v33;
            goto LABEL_25;
          }
          goto LABEL_63;
        }
LABEL_24:
        v39 = v24;
        v28 = sub_1B2C0(v37, a4);
        v24 = v39;
        v20 = v28;
        goto LABEL_25;
      }
LABEL_27:
      if ( v20[5] )
      {
        v20[6] = 0;
        qfree();
      }
      *((_DWORD *)v20 + 16) = v8;
      v20[5] = 0;
      *((_DWORD *)v20 + 17) = v13;
      *((_OWORD *)v20 + 3) = 0;
      return 1;
    case 8:
      v8 = 1;
      if ( *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120) == 13 )
        goto LABEL_3;
      goto LABEL_7;
    default:
      v20 = v10;
      LODWORD(v13) = v9;
      v27 = sub_1A9E0(a1, a2);
      goto LABEL_61;
  }
}

