__int64 __fastcall sub_29C0C0(__int64 a1, __int64 a2, double a3)
{
  int v4; // eax
  __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // r12
  int v11; // r13d
  __int64 *v12; // rax
  __int64 v13; // rbx
  char tinfo_property; // al
  __int64 v15; // rcx
  int v16; // eax
  char v17; // al
  char v18; // al
  char v19; // al
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // al
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax

  while ( 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 2:
      case 4:
        a1 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)a1 > 8u )
          goto LABEL_3;
        continue;
      case 3:
        v12 = *(__int64 **)(a1 + 8);
        if ( !v12[1] )
        {
          if ( !under_debugger )
            sub_383060(0xC846u, a3);
          goto LABEL_53;
        }
        v13 = *v12;
        if ( *v12 )
          v13 = *(_QWORD *)(v13 + 8);
        if ( !*(_QWORD *)(v13 + 24) )
        {
          a1 = v13 + 32;
          continue;
        }
        return 0;
      case 6:
        v10 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(v10 + 8) == 65 )
        {
          v11 = 4
              * ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 432LL) + 104LL * *(int *)(v10 + 32) + 25) & 0x40) != 0);
          goto LABEL_11;
        }
        tinfo_property = get_tinfo_property();
        v15 = *(_QWORD *)(a1 + 8);
        if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
        {
          v20 = *(_DWORD *)(v10 + 8);
          if ( (unsigned int)(v20 - 35) <= 1 || (unsigned int)(v20 - 42) <= 1 )
          {
            v21 = *(_QWORD *)(v10 + 24);
            if ( *(_DWORD *)(v21 + 8) == 65
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 432LL) + 104LL * *(int *)(v21 + 32) + 24) & 2) == 0 )
            {
              goto LABEL_32;
            }
            v22 = *(_QWORD *)(v10 + 32);
            if ( *(_DWORD *)(v22 + 8) == 65
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 432LL) + 104LL * *(int *)(v22 + 32) + 24) & 2) == 0 )
            {
              goto LABEL_32;
            }
          }
        }
        v16 = *(_DWORD *)(v15 + 8);
        if ( (unsigned int)(v16 - 51) > 1 )
          goto LABEL_20;
        v23 = *(_QWORD *)(v15 + 24);
        if ( *(_DWORD *)(v23 + 8) == 65 )
        {
          v24 = *(int *)(v23 + 32);
          v25 = *(_QWORD *)(v23 + 24);
          v10 = *(_QWORD *)(a1 + 8);
          v11 = 4 * ((*(_BYTE *)(*(_QWORD *)(v25 + 432) + 104 * v24 + 25) & 0x40) != 0);
        }
        else
        {
          v26 = get_tinfo_property();
          v15 = *(_QWORD *)(a1 + 8);
          if ( (v26 & 0x3E) != 0
            && (v26 & 0xFu) <= 8
            && ((v27 = *(_DWORD *)(v23 + 8), (unsigned int)(v27 - 42) <= 1) || (unsigned int)(v27 - 35) <= 1)
            && ((v28 = *(_QWORD *)(v23 + 24), *(_DWORD *)(v28 + 8) == 65)
             && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) + 432LL) + 104LL * *(int *)(v28 + 32) + 24) & 2) == 0
             || (v29 = *(_QWORD *)(v23 + 32), *(_DWORD *)(v29 + 8) == 65)
             && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 24) + 432LL) + 104LL * *(int *)(v29 + 32) + 24) & 2) == 0) )
          {
LABEL_32:
            v10 = v15;
            v11 = 4;
          }
          else
          {
            v16 = *(_DWORD *)(v15 + 8);
LABEL_20:
            v10 = v15;
            v11 = 0;
            if ( v16 == 61 )
            {
              v17 = get_tinfo_property();
              if ( (v17 & 0x3E) != 0 && (v17 & 0xFu) <= 8 )
              {
                v18 = get_tinfo_property();
                v10 = *(_QWORD *)(a1 + 8);
                if ( (v18 & 0xF) != 8 )
                {
                  v19 = sub_2993E0(a2, *(_QWORD *)(a1 + 8), nullptr);
                  v10 = *(_QWORD *)(a1 + 8);
                  v11 = v19 == 0 ? 136 : 128;
                }
              }
              else
              {
                v10 = *(_QWORD *)(a1 + 8);
              }
            }
          }
        }
LABEL_11:
        v4 = v11 | (*(int *)(v10 + 56) >> 3) & 4;
        return *(_DWORD *)(a1 + 4) | (unsigned int)v4;
      case 8:
        v6 = *(__int64 **)(a1 + 8);
        v7 = *((int *)v6 + 2);
        v8 = *v6;
        if ( (_DWORD)v7 == -1 )
        {
          v4 = (*(int *)(v8 + 56) >> 3) & 4;
        }
        else
        {
          v9 = *(_QWORD **)(v8 + 32);
          if ( (v7 & 0x80000000) != 0LL || v7 >= v9[1] )
          {
            if ( !under_debugger )
              sub_383060(0xC847u, a3);
LABEL_53:
            BUG();
          }
          v4 = (*(int *)(*v9 + 72 * v7 + 56) >> 3) & 4;
        }
        return *(_DWORD *)(a1 + 4) | (unsigned int)v4;
      default:
LABEL_3:
        v4 = 0;
        return *(_DWORD *)(a1 + 4) | (unsigned int)v4;
    }
  }
}

