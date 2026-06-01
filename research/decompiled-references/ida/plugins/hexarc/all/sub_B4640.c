__int64 __fastcall sub_B4640(__int64 a1, __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  _DWORD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  _QWORD *v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v29[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 14 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 800LL);
    v7 = (_QWORD *)sub_1F4990(v6, v5);
    v11 = v7;
    if ( v7 )
    {
      v12 = *v7;
      v13 = *((int *)v11 + 4);
      if ( *(_QWORD *)(v12 + 440) < v13 )
        sub_B1500(v6, v5, v8, v9, v10);
      v14 = *(_QWORD *)(v12 + 432);
      v15 = sub_1F4990(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 800LL), *(_QWORD *)(a2 + 8) + 16LL);
      v16 = v15;
      if ( v15 )
      {
        if ( *((_DWORD *)v11 + 4) == *(_DWORD *)(v15 + 16) )
        {
          v17 = (_DWORD *)(v14 + 104 * v13);
          if ( v17[22] >= *(_DWORD *)(a2 + 4) )
          {
            v18 = *(_QWORD *)(a1 + 8);
            v19 = *(_QWORD *)(v18 + 1496);
            v20 = *(_QWORD *)(v18 + 1504);
            if ( *(_BYTE *)(v19 + 145)
              && ((unsigned int)(*v17 - 3) > 1 || (unsigned __int8)sub_116590(*(_QWORD *)(a2 + 8), v19, 0)) )
            {
              v21 = v11;
              v11 = (_QWORD *)v16;
              v16 = (__int64)v21;
            }
            if ( *(_QWORD *)(v16 + 8) == v11[1] + *(int *)(*(_QWORD *)(a2 + 8) + 4LL) )
            {
              v29[1] = 0;
              v29[0] = 0xFFFFFFFF00000000LL;
              if ( *v17 == 2 )
              {
                v28 = 0;
                copy_tinfo_t();
                sub_116A90(v29, *(_QWORD *)(a1 + 8), &unk_3EF793, &v28, v17);
                clear_tinfo_t();
                if ( !(unsigned __int8)sub_1202C0(v29, *((unsigned int *)v11 + 2), *(unsigned int *)(a2 + 4), 0) )
                {
LABEL_22:
                  sub_1166E0(v29);
                  return 0;
                }
                v23 = *(_QWORD *)(a1 + 16);
                v24 = *(_DWORD *)(v23 + 24);
                BYTE1(v24) &= ~2u;
                LOBYTE(v24) = v24 | 0x80;
                v25 = LOBYTE(v29[0]) == 15;
                *(_DWORD *)(v23 + 24) = v24;
                if ( !v25 || (get_tinfo_property() & 0x2F) != 0xD )
                {
LABEL_20:
                  sub_116350(a2, v29);
                  v22 = *(_DWORD **)(a1 + 32);
                  ++*(_DWORD *)(a1 + 44);
                  if ( (unsigned int)(*v22 - 8) <= 1 && (unsigned __int8)sub_120D60(v22 + 8, v20, v22 + 16) )
                  {
                    v26 = *(_QWORD *)(a1 + 16);
                    v27 = *(_DWORD *)(v26 + 24);
                    BYTE1(v27) &= ~2u;
                    LOBYTE(v27) = v27 | 0x80;
                    *(_DWORD *)(v26 + 24) = v27;
                  }
                  *(_BYTE *)(a1 + 40) = 1;
                  goto LABEL_22;
                }
              }
              else
              {
                if ( (*v17 & 0xFFFFFFFD) != 1 )
                  goto LABEL_22;
                sub_11EAC0(v29);
                if ( !(unsigned __int8)sub_11B340(v29)
                  || !(unsigned __int8)sub_11B340(*(_QWORD *)(a2 + 8) + 16LL)
                  || LOBYTE(v29[0]) != *(_BYTE *)(*(_QWORD *)(a2 + 8) + 16LL) )
                {
                  if ( !under_debugger )
                    sub_37B760(51914);
                  BUG();
                }
                if ( !(unsigned __int8)sub_12B170(v29, v20, 128) )
                  goto LABEL_22;
                if ( (*(_BYTE *)(a2 + 1) & 2) == 0 )
                  goto LABEL_20;
              }
              BYTE1(v29[0]) |= 2u;
              goto LABEL_20;
            }
          }
        }
      }
    }
  }
  return 0;
}

