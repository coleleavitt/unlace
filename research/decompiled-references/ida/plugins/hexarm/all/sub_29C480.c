__int64 __fastcall sub_29C480(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 *v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // r12
  int v10; // r13d
  __int64 *v11; // rax
  __int64 v12; // rbx
  char tinfo_property; // al
  __int64 v14; // rcx
  int v15; // eax
  char v16; // al
  char v17; // al
  char v18; // al
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // al
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax

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
        v11 = *(__int64 **)(a1 + 8);
        if ( !v11[1] )
        {
          if ( !under_debugger )
            sub_3835A0(51270);
          goto LABEL_53;
        }
        v12 = *v11;
        if ( *v11 )
          v12 = *(_QWORD *)(v12 + 8);
        if ( !*(_QWORD *)(v12 + 24) )
        {
          a1 = v12 + 32;
          continue;
        }
        return 0;
      case 6:
        v9 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(v9 + 8) == 65 )
        {
          v10 = 4
              * ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 432LL) + 104LL * *(int *)(v9 + 32) + 25) & 0x40) != 0);
          goto LABEL_11;
        }
        tinfo_property = get_tinfo_property();
        v14 = *(_QWORD *)(a1 + 8);
        if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
        {
          v19 = *(_DWORD *)(v9 + 8);
          if ( (unsigned int)(v19 - 35) <= 1 || (unsigned int)(v19 - 42) <= 1 )
          {
            v20 = *(_QWORD *)(v9 + 24);
            if ( *(_DWORD *)(v20 + 8) == 65
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 432LL) + 104LL * *(int *)(v20 + 32) + 24) & 2) == 0 )
            {
              goto LABEL_32;
            }
            v21 = *(_QWORD *)(v9 + 32);
            if ( *(_DWORD *)(v21 + 8) == 65
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 432LL) + 104LL * *(int *)(v21 + 32) + 24) & 2) == 0 )
            {
              goto LABEL_32;
            }
          }
        }
        v15 = *(_DWORD *)(v14 + 8);
        if ( (unsigned int)(v15 - 51) > 1 )
          goto LABEL_20;
        v22 = *(_QWORD *)(v14 + 24);
        if ( *(_DWORD *)(v22 + 8) == 65 )
        {
          v23 = *(int *)(v22 + 32);
          v24 = *(_QWORD *)(v22 + 24);
          v9 = *(_QWORD *)(a1 + 8);
          v10 = 4 * ((*(_BYTE *)(*(_QWORD *)(v24 + 432) + 104 * v23 + 25) & 0x40) != 0);
        }
        else
        {
          v25 = get_tinfo_property();
          v14 = *(_QWORD *)(a1 + 8);
          if ( (v25 & 0x3E) != 0
            && (v25 & 0xFu) <= 8
            && ((v26 = *(_DWORD *)(v22 + 8), (unsigned int)(v26 - 42) <= 1) || (unsigned int)(v26 - 35) <= 1)
            && ((v27 = *(_QWORD *)(v22 + 24), *(_DWORD *)(v27 + 8) == 65)
             && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 24) + 432LL) + 104LL * *(int *)(v27 + 32) + 24) & 2) == 0
             || (v28 = *(_QWORD *)(v22 + 32), *(_DWORD *)(v28 + 8) == 65)
             && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) + 432LL) + 104LL * *(int *)(v28 + 32) + 24) & 2) == 0) )
          {
LABEL_32:
            v9 = v14;
            v10 = 4;
          }
          else
          {
            v15 = *(_DWORD *)(v14 + 8);
LABEL_20:
            v9 = v14;
            v10 = 0;
            if ( v15 == 61 )
            {
              v16 = get_tinfo_property();
              if ( (v16 & 0x3E) != 0 && (v16 & 0xFu) <= 8 )
              {
                v17 = get_tinfo_property();
                v9 = *(_QWORD *)(a1 + 8);
                if ( (v17 & 0xF) != 8 )
                {
                  v18 = sub_2997A0(a2, *(_QWORD *)(a1 + 8), nullptr);
                  v9 = *(_QWORD *)(a1 + 8);
                  v10 = v18 == 0 ? 136 : 128;
                }
              }
              else
              {
                v9 = *(_QWORD *)(a1 + 8);
              }
            }
          }
        }
LABEL_11:
        v3 = v10 | (*(int *)(v9 + 56) >> 3) & 4;
        return *(_DWORD *)(a1 + 4) | (unsigned int)v3;
      case 8:
        v5 = *(__int64 **)(a1 + 8);
        v6 = *((int *)v5 + 2);
        v7 = *v5;
        if ( (_DWORD)v6 == -1 )
        {
          v3 = (*(int *)(v7 + 56) >> 3) & 4;
        }
        else
        {
          v8 = *(_QWORD **)(v7 + 32);
          if ( (v6 & 0x80000000) != 0LL || v6 >= v8[1] )
          {
            if ( !under_debugger )
              sub_3835A0(51271);
LABEL_53:
            BUG();
          }
          v3 = (*(int *)(*v8 + 72 * v6 + 56) >> 3) & 4;
        }
        return *(_DWORD *)(a1 + 4) | (unsigned int)v3;
      default:
LABEL_3:
        v3 = 0;
        return *(_DWORD *)(a1 + 4) | (unsigned int)v3;
    }
  }
}

