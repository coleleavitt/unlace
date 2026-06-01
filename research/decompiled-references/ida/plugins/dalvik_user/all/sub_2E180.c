__int64 __fastcall sub_2E180(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4, int a5, int a6)
{
  _QWORD *v9; // rbp
  char *v10; // rbx
  char v11; // al
  char *v12; // r14
  int v13; // eax
  char *v15; // r14
  __int64 v16; // rdx
  int *v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  _BYTE *v29; // rbx
  char v30; // bl
  int *v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rsi
  _DWORD *v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  int v42; // edx
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 i; // rsi
  __int64 v47; // r8
  __int64 v48; // rdi
  void *v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  const void *v53; // r13
  void *v54; // rdi
  __int64 v55; // rax
  struct _Unwind_Exception *v56; // rbp
  __int64 v57; // [rsp+8h] [rbp-60h]
  char v58[8]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v59; // [rsp+18h] [rbp-50h]
  unsigned __int64 v60; // [rsp+28h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v9 = a4;
  if ( a3 )
    *a3 = 0;
  v10 = (char *)a4[1];
  v11 = *v10;
  v12 = v10;
  if ( *v10 <= 41 )
  {
    if ( v11 > 0 )
    {
      switch ( *v10 )
      {
        case 1:
        case 2:
        case 40:
        case 41:
          *(_DWORD *)(a1 + 1820) = 1;
          v15 = (char *)a4[1];
          v16 = 184LL * a4[2];
          if ( !v16 )
            goto LABEL_87;
          v10 = (char *)a4[1];
          while ( *v10 != 1 )
          {
            v10 += 184;
            if ( &v15[v16] == v10 )
              goto LABEL_87;
          }
          set_debug_event_code();
          v15 = (char *)v9[1];
          if ( v10 != &v15[184 * v9[2]] )
            goto LABEL_17;
LABEL_87:
          set_debug_event_code();
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
            goto LABEL_94;
          v10 = v15;
LABEL_17:
          v9 = (_QWORD *)(a1 + 1040);
          *(_DWORD *)a2 = *(_DWORD *)(a1 + 656);
          v17 = (int *)sub_27AA0(a1, *((_QWORD *)v10 + 1));
          v18 = *(_BYTE *)(a1 + 792) == 0;
          v19 = *v17;
          *(_QWORD *)(a1 + 1840) = -1;
          *(_QWORD *)(a1 + 1832) = v19;
          if ( !v18 )
            sub_2DC40((_QWORD *)(a1 + 1040), (int)"BPT/STEP location ", (_QWORD *)v10 + 2);
          if ( !(unsigned __int8)sub_2CA10((_QWORD *)(a1 + 1040), (__int64 *)(a1 + 1840), (_QWORD *)v10 + 2) )
            return 0;
          goto LABEL_82;
        case 4:
          *(_DWORD *)(a1 + 1820) = 1;
          set_debug_event_code();
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
            goto LABEL_92;
          *(_DWORD *)a2 = *(_DWORD *)(a1 + 656);
          v31 = (int *)sub_27AA0(a1, *((_QWORD *)v10 + 1));
          v18 = *(_BYTE *)(a1 + 792) == 0;
          v32 = *v31;
          *(_QWORD *)(a1 + 1840) = -1;
          *(_QWORD *)(a1 + 1832) = v32;
          if ( !v18 )
            sub_2DC40((_QWORD *)(a1 + 1040), (int)"EXCEPTION location ", (_QWORD *)v10 + 2);
          if ( !(unsigned __int8)sub_2CA10((_QWORD *)(a1 + 1040), (__int64 *)(a1 + 1840), (_QWORD *)v10 + 2) )
            return 0;
          sub_58110(a1, (unsigned int)"EXCEPTION reg_ip=%a\n", *(_QWORD *)(a1 + 1840), v33, v34, v35);
          *(_DWORD *)(a2 + 4) = *(_QWORD *)(a1 + 1832);
          v36 = *(_QWORD *)(a1 + 1840);
          *(_BYTE *)(a2 + 16) = 0;
          *(_QWORD *)(a2 + 8) = v36;
          *(_DWORD *)(a2 + 24) = 1;
          v37 = *(_DWORD **)(a1 + 1736);
          v38 = 2LL * *(_QWORD *)(a1 + 1744);
          v39 = &v37[v38];
          if ( !(v38 * 4) )
            goto LABEL_47;
          while ( *((_DWORD *)v10 + 1) != v37[1] )
          {
            v37 += 2;
            if ( v37 == v39 )
              goto LABEL_47;
          }
          *(_DWORD *)(a2 + 24) = *v37;
LABEL_47:
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
            goto LABEL_92;
          v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *))(*(_QWORD *)a1 + 56LL))(
                  a1,
                  *(unsigned int *)(a2 + 24),
                  *(_QWORD *)(*(_QWORD *)a1 + 56LL),
                  v39);
          if ( !v40 )
            goto LABEL_53;
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
          {
            if ( v40 + 32 != a2 + 40 )
            {
              v41 = *(_QWORD *)(v40 + 40);
              if ( v41 > 1 )
              {
                v53 = *(const void **)(v40 + 32);
                v54 = *(void **)(a2 + 40);
                if ( *(_QWORD *)(a2 + 56) < v41 )
                {
                  v55 = qvector_reserve();
                  *(_QWORD *)(a2 + 40) = v55;
                  v54 = (void *)v55;
                }
                *(_QWORD *)(a2 + 48) = v41;
                memmove(v54, v53, v41 - 1);
                *(_BYTE *)(*(_QWORD *)(a2 + 40) + v41 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(a2 + 48) = 0;
              }
            }
LABEL_53:
            *(_BYTE *)(a2 + 28) = 1;
            *(_QWORD *)(a2 + 32) = -1;
            if ( !a3 )
              return 1;
LABEL_10:
            *a3 = 1;
            return 1;
          }
LABEL_92:
          sub_16830();
          goto LABEL_93;
        case 6:
          return sub_26D40(a1, *((void **)v10 + 1), (__int64)a3, (int)a4, a5, a6);
        case 7:
          return sub_27500(a1, *((_QWORD *)v10 + 1), (__int64)a3, (int)a4, a5, a6);
        case 8:
          v23 = a4[2];
          v57 = a1 + 1696;
          if ( !(184 * v23) )
            goto LABEL_33;
          break;
        case 9:
          return 1;
        default:
          goto LABEL_80;
      }
      while ( 1 )
      {
        v24 = *(_QWORD *)(a1 + 1704);
        v25 = *((_DWORD *)v12 + 1);
        if ( !v24 )
          goto LABEL_32;
        v26 = v57;
        do
        {
          while ( 1 )
          {
            v27 = *(_QWORD *)(v24 + 16);
            v28 = *(_QWORD *)(v24 + 24);
            if ( *(_DWORD *)(v24 + 32) < v25 )
              break;
            v26 = v24;
            v24 = *(_QWORD *)(v24 + 16);
            if ( !v27 )
              goto LABEL_27;
          }
          v24 = *(_QWORD *)(v24 + 24);
        }
        while ( v28 );
LABEL_27:
        if ( v26 == v57 || v25 < *(_DWORD *)(v26 + 32) )
          goto LABEL_32;
        v29 = *(_BYTE **)(v26 + 40);
        if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, char *, __int64))(*(_QWORD *)v29 + 16LL))(v29, v12, v28) )
          return 0;
        v30 = v29[8];
        if ( v30 )
        {
          sub_51C30(a1 + 864, (unsigned int)*v12, *((unsigned int *)v12 + 1));
          v42 = *((_DWORD *)v12 + 1);
          v43 = v57;
          if ( *(_QWORD *)(a1 + 1704) )
          {
            v44 = *(_QWORD *)(a1 + 1704);
            while ( 1 )
            {
              while ( v42 > *(_DWORD *)(v44 + 32) )
              {
                v44 = *(_QWORD *)(v44 + 24);
                if ( !v44 )
                  goto LABEL_61;
              }
              v45 = *(_QWORD *)(v44 + 16);
              if ( v42 >= *(_DWORD *)(v44 + 32) )
                break;
              v43 = v44;
              v44 = *(_QWORD *)(v44 + 16);
              if ( !v45 )
              {
LABEL_61:
                v30 = v57 == v43;
                goto LABEL_62;
              }
            }
            for ( i = *(_QWORD *)(v44 + 24); i; i = *(_QWORD *)(i + 24) )
            {
              while ( 1 )
              {
                v47 = *(_QWORD *)(i + 16);
                if ( v42 >= *(_DWORD *)(i + 32) )
                  break;
                v43 = i;
                i = *(_QWORD *)(i + 16);
                if ( !v47 )
                  goto LABEL_69;
              }
            }
LABEL_69:
            while ( v45 )
            {
              while ( 1 )
              {
                v48 = *(_QWORD *)(v45 + 16);
                if ( v42 > *(_DWORD *)(v45 + 32) )
                  break;
                v44 = v45;
                v45 = *(_QWORD *)(v45 + 16);
                if ( !v48 )
                  goto LABEL_72;
              }
              v45 = *(_QWORD *)(v45 + 24);
            }
LABEL_72:
            if ( *(_QWORD *)(a1 + 1712) == v44 && v43 == v57 )
            {
LABEL_64:
              sub_17880(*(_QWORD **)(a1 + 1704));
              *(_QWORD *)(a1 + 1704) = 0;
              *(_QWORD *)(a1 + 1728) = 0;
              *(_QWORD *)(a1 + 1712) = v57;
              *(_QWORD *)(a1 + 1720) = v57;
              v10 = (char *)v9[1];
              v23 = v9[2];
              goto LABEL_32;
            }
            while ( v43 != v44 )
            {
              v44 = std::_Rb_tree_increment();
              v49 = (void *)std::_Rb_tree_rebalance_for_erase();
              operator delete(v49, 0x30u);
              --*(_QWORD *)(a1 + 1728);
            }
          }
          else
          {
LABEL_62:
            if ( *(_QWORD *)(a1 + 1712) == v43 && v30 )
              goto LABEL_64;
          }
        }
        v10 = (char *)v9[1];
        v23 = v9[2];
LABEL_32:
        v12 += 184;
        if ( v12 == &v10[184 * v23] )
        {
LABEL_33:
          if ( *(_BYTE *)v9 && *(_DWORD *)(a1 + 1820) == 2 )
            sub_4A5E0(a1 + 864);
          return 1;
        }
      }
    }
    goto LABEL_80;
  }
  if ( v11 != 90 )
  {
    if ( v11 == 99 )
    {
      *(_DWORD *)(a1 + 1820) = 0;
      set_debug_event_code();
      if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
      {
        *(_DWORD *)(a2 + 24) = 1;
        v13 = *(_DWORD *)(a1 + 656);
        *(_QWORD *)(a2 + 8) = -1;
        *(_DWORD *)a2 = v13;
        *(_BYTE *)(a2 + 16) = 1;
        *(_DWORD *)(a2 + 4) = 0;
        if ( !a3 )
          return 1;
        goto LABEL_10;
      }
LABEL_93:
      sub_16810();
LABEL_94:
      if ( !under_debugger )
      {
        v56 = (struct _Unwind_Exception *)interr();
        qmutex_unlock();
        _Unwind_Resume(v56);
      }
LABEL_96:
      BUG();
    }
LABEL_80:
    if ( !under_debugger )
    {
      interr();
LABEL_82:
      sub_58110(a1, (unsigned int)"BPT/STEP reg_ip=%a\n", *(_QWORD *)(a1 + 1840), v20, v21, v22);
      *(_DWORD *)(a2 + 4) = *(_QWORD *)(a1 + 1832);
      v50 = *(_QWORD *)(a1 + 1840);
      v51 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      *(_QWORD *)(a2 + 8) = v50;
      if ( v51 == 5 )
      {
        *(_QWORD *)(a2 + 24) = v50;
        *(_QWORD *)(a2 + 32) = -1;
      }
      *(_BYTE *)(a2 + 16) = 0;
      if ( a3 )
        *a3 = 1;
      v52 = *((_QWORD *)v10 + 3);
      v58[0] = v10[16];
      v59 = v52;
      qmutex_lock();
      sub_28E00(v9, v58);
      qmutex_unlock();
      return 1;
    }
    goto LABEL_96;
  }
  return 0;
}

