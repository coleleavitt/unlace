__int64 __fastcall sub_1EDBA0(_QWORD *a1, int a2, int a3, double a4)
{
  unsigned __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  int *v10; // rdi
  unsigned __int64 v11; // rbp
  _DWORD *v12; // rbx
  int v13; // r12d
  int v14; // ecx
  int v15; // edx
  __int64 (*v16)(); // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  int *v19; // rdi
  char v21; // al
  int v22; // [rsp+Ch] [rbp-5Ch]
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v6 = 1;
  v25 = __readfsqword(0x28u);
  v24 = 0;
  if ( a3 != -1 )
    v6 = a3;
  v7 = a1[55] == 0;
  LODWORD(v24) = a2;
  v23 = 3;
  if ( v7 )
  {
    cleanup_argloc();
LABEL_9:
    LODWORD(v11) = -1;
LABEL_10:
    v12 = (_DWORD *)a1[188];
    if ( a3 >= v12[22] )
      return (unsigned int)v11;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 184LL))(a1[188], (unsigned int)a2);
    v14 = a2 - v13;
    v15 = *(unsigned __int8 *)(a1[187] + 130LL);
    if ( a3 >= v15 || a2 <= 7 )
    {
      if ( !v14 )
        return (unsigned int)v11;
    }
    else
    {
      v16 = *(__int64 (**)())(*(_QWORD *)v12 + 208LL);
      if ( v16 == sub_11B420
        || (v22 = *(unsigned __int8 *)(a1[187] + 130LL),
            v21 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))v16)(v12, (unsigned int)a2),
            v15 = v22,
            !v21) )
      {
        v24 = 0;
LABEL_15:
        v17 = 0;
        v11 = 0;
        v7 = a1[55] == 0;
        LODWORD(v24) = v13;
        LODWORD(v23) = 3;
        v18 = v15;
        if ( v7 )
        {
LABEL_19:
          LODWORD(v11) = -1;
        }
        else
        {
          while ( 1 )
          {
            v19 = (int *)(v17 + a1[54]);
            if ( !v19[23] )
            {
              if ( (unsigned __int8)sub_1C4AE0(v19, v19[22], (int *)&v23, v18, a4) )
                break;
            }
            ++v11;
            v17 += 104;
            if ( v11 >= a1[55] )
              goto LABEL_19;
          }
        }
        cleanup_argloc();
        return (unsigned int)v11;
      }
      v14 = a2 - v13;
      if ( a2 == v13 )
        return (unsigned int)v11;
    }
    v15 = a3 + v14;
    v24 = 0;
    if ( a3 + v14 == -1 )
      v15 = 1;
    goto LABEL_15;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = (int *)(v8 + a1[54]);
    if ( !v10[23] )
    {
      if ( (unsigned __int8)sub_1C4AE0(v10, v10[22], (int *)&v23, v6, a4) )
        break;
    }
    ++v9;
    v8 += 104;
    if ( v9 >= a1[55] )
    {
      cleanup_argloc();
      goto LABEL_9;
    }
  }
  LODWORD(v11) = v9;
  cleanup_argloc();
  if ( (v9 & 0x80000000) != 0LL )
    goto LABEL_10;
  return (unsigned int)v11;
}

