__int64 __fastcall sub_4F100(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v8; // eax
  unsigned __int64 **v9; // rdx
  unsigned __int64 *v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rsi
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 *v26; // rax
  unsigned int v27; // eax
  _DWORD *v28; // rdx
  __int64 i; // rbx
  char v30; // al
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned __int64 **v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rsi
  _DWORD *v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rax
  __int64 *v46; // rdx
  __int64 *v47; // rax
  _QWORD *v48; // rdx
  _DWORD *v49; // rax
  __int64 *v50; // rdx
  __int64 *v51; // rdx
  char v52; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v53; // [rsp+8h] [rbp-20h]

  v53 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
    case 1LL:
      sub_4C430(*(_QWORD *)(a1 + 16));
      return 0;
    case 3LL:
      for ( i = netnode_supfirst(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), 68);
            i != -1;
            i = netnode_supnext(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), i, 68) )
      {
        v30 = netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), i, 68);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
        if ( v30 == 1 )
        {
          v52 = 2;
          netnode_supset(v31, i, &v52, 1, 68);
          v32 = node2ea(i);
          auto_mark_range(v32, v32 + 1, 40);
        }
        else
        {
          netnode_supdel(v31, i, 68);
        }
      }
      if ( (unsigned __int8)auto_is_ok() )
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 472LL) &= ~0x8000u;
      return 0;
    case 11LL:
      if ( (unsigned int)getinf(5) )
      {
        v27 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0x2Fu )
        {
          v28 = *(_DWORD **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v28 + 2;
        }
        else
        {
          v28 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v27);
          *(_DWORD *)a3 = v27 + 8;
        }
        sub_4EA80(*(_QWORD *)(a1 + 16), *v28 != 0);
      }
      goto LABEL_4;
    case 30LL:
      v35 = *(_DWORD *)a3;
      if ( v35 > 0x2F )
      {
        v44 = *(__int64 **)(a3 + 8);
        v45 = v44 + 1;
        *(_QWORD *)(a3 + 8) = v44 + 1;
        v38 = *v44;
      }
      else
      {
        v36 = *(_QWORD *)(a3 + 16);
        v37 = v35 + 8;
        *(_DWORD *)a3 = v37;
        v38 = *(_QWORD *)(v36 + v35);
        if ( (unsigned int)v37 <= 0x2F )
        {
          v39 = v35 + 16;
          *(_DWORD *)a3 = v39;
          v40 = *(_QWORD *)(v36 + v37);
          if ( (unsigned int)v39 <= 0x2F )
          {
            v41 = v35 + 24;
            *(_DWORD *)a3 = v41;
            v42 = *(_QWORD *)(v36 + v39);
            if ( (unsigned int)v41 <= 0x2F )
            {
              v43 = (_DWORD *)(v41 + v36);
              *(_DWORD *)a3 = v35 + 32;
              goto LABEL_41;
            }
            v43 = *(_DWORD **)(a3 + 8);
LABEL_47:
            *(_QWORD *)(a3 + 8) = v43 + 2;
LABEL_41:
            sub_35040(*(_QWORD **)(a1 + 16), v38, v40, v42, *v43 != 0);
            return 0;
          }
          v46 = *(__int64 **)(a3 + 8);
LABEL_46:
          v43 = v46 + 1;
          *(_QWORD *)(a3 + 8) = v46 + 1;
          v42 = *v46;
          goto LABEL_47;
        }
        v45 = *(__int64 **)(a3 + 8);
      }
      v46 = v45 + 1;
      *(_QWORD *)(a3 + 8) = v45 + 1;
      v40 = *v45;
      goto LABEL_46;
    case 32LL:
      v33 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v34 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 1;
      }
      else
      {
        v34 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v33);
        *(_DWORD *)a3 = v33 + 8;
      }
      sub_396C0(*(_QWORD *)(a1 + 16), **v34, (*v34)[1]);
      goto LABEL_4;
    case 34LL:
    case 36LL:
    case 37LL:
      v8 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v9 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v9 + 1;
      }
      else
      {
        v9 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v8);
        *(_DWORD *)a3 = v8 + 8;
      }
      v10 = *v9;
      v5 = a2 - 32;
      sub_4F080(*(_QWORD *)(a1 + 16), *v9);
      netnode_delblob(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), *v10, 371);
      netnode_supdel(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), *v10, 327);
      goto LABEL_3;
    case 48LL:
      v11 = *(_DWORD *)a3;
      if ( v11 > 0x2F )
      {
        v47 = *(__int64 **)(a3 + 8);
        v48 = v47 + 1;
        *(_QWORD *)(a3 + 8) = v47 + 1;
        v14 = *v47;
LABEL_50:
        v49 = v48 + 1;
        *(_QWORD *)(a3 + 8) = v48 + 1;
        v16 = *v48;
LABEL_51:
        v50 = (__int64 *)(v49 + 2);
        *(_QWORD *)(a3 + 8) = v49 + 2;
        v18 = *v49;
LABEL_52:
        v21 = v50 + 1;
        *(_QWORD *)(a3 + 8) = v50 + 1;
        v20 = *v50;
        goto LABEL_53;
      }
      v12 = *(_QWORD *)(a3 + 16);
      v13 = v11 + 8;
      *(_DWORD *)a3 = v13;
      v14 = *(_QWORD *)(v12 + v11);
      if ( (unsigned int)v13 > 0x2F )
      {
        v48 = *(_QWORD **)(a3 + 8);
        goto LABEL_50;
      }
      v15 = v11 + 16;
      *(_DWORD *)a3 = v15;
      v16 = *(_QWORD *)(v12 + v13);
      if ( (unsigned int)v15 > 0x2F )
      {
        v49 = *(_DWORD **)(a3 + 8);
        goto LABEL_51;
      }
      v17 = v11 + 24;
      *(_DWORD *)a3 = v17;
      v18 = *(_DWORD *)(v12 + v15);
      if ( (unsigned int)v17 > 0x2F )
      {
        v50 = *(__int64 **)(a3 + 8);
        goto LABEL_52;
      }
      v19 = v11 + 32;
      *(_DWORD *)a3 = v19;
      v20 = *(_QWORD *)(v12 + v17);
      if ( (unsigned int)v19 <= 0x2F )
      {
        v21 = (_QWORD *)(v19 + v12);
        *(_DWORD *)a3 = v11 + 40;
        goto LABEL_16;
      }
      v21 = *(_QWORD **)(a3 + 8);
LABEL_53:
      *(_QWORD *)(a3 + 8) = v21 + 1;
LABEL_16:
      if ( v18 == 32 && *v21 != v20 )
      {
        set_sreg_at_next_code(v14, v16, 32);
        revert_ida_decisions(v14, v16);
        auto_mark_range(v14, v16, 200);
      }
      return 0;
    case 51LL:
      v22 = *(_DWORD *)a3;
      if ( v22 > 0x2F )
      {
        v51 = *(__int64 **)(a3 + 8);
        v26 = v51 + 1;
        *(_QWORD *)(a3 + 8) = v51 + 1;
        v25 = *v51;
      }
      else
      {
        v23 = *(_QWORD *)(a3 + 16);
        v24 = v22 + 8;
        *(_DWORD *)a3 = v24;
        v25 = *(_QWORD *)(v23 + v22);
        if ( (unsigned int)v24 <= 0x2F )
        {
          v26 = (__int64 *)(v24 + v23);
          *(_DWORD *)a3 = v22 + 16;
          goto LABEL_22;
        }
        v26 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v26 + 1;
LABEL_22:
      sub_42120(*(_QWORD *)(a1 + 16), v25, *v26);
      return 0;
    default:
      v5 = a2 - 32;
      if ( (unsigned __int64)(a2 - 32) <= 0x20 )
      {
LABEL_3:
        v6 = 0x1000006ADLL;
        if ( _bittest64(&v6, v5) )
LABEL_4:
          invalidate_regfinder_cache(-1, -1, 0);
      }
      return 0;
  }
}

