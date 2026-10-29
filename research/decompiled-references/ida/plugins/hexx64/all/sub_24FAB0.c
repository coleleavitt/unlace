__int64 *__fastcall sub_24FAB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  char v6; // r15
  __int64 *v7; // r12
  __int64 *v8; // rbp
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  int v23; // esi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rax
  char v33; // [rsp+14h] [rbp-54h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  _QWORD v35[9]; // [rsp+20h] [rbp-48h] BYREF

  v33 = a4;
  v35[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(0xC4EAu, a5);
LABEL_44:
    BUG();
  }
  v6 = a4;
  v7 = nullptr;
  v34 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL);
  v8 = *(__int64 **)(a2 + 48);
  if ( v8 )
  {
    while ( 1 )
    {
      v35[0] = 0;
      v10 = sub_24EE70(a1, v8, (__int64)v35, 1u, a5);
      clear_tinfo_t();
      v8 = (__int64 *)v8[1];
      if ( v6 )
        break;
      if ( v10 )
      {
        v7 = v10;
        v9 = sub_2413C0(a3, *v10, v11, v12, a5);
        if ( *((_DWORD *)v10 + 2) == 66 )
        {
          v20 = v10[3];
          v7 = nullptr;
          v21 = *(_QWORD *)v20;
          *(_QWORD *)v20 = *v9;
          v22 = *((_DWORD *)v9 + 2);
          *v9 = v21;
          LODWORD(v21) = *(_DWORD *)(v20 + 8);
          *(_DWORD *)(v20 + 8) = v22;
          v23 = *((_DWORD *)v9 + 3);
          *((_DWORD *)v9 + 2) = v21;
          LODWORD(v21) = *(_DWORD *)(v20 + 12);
          *(_DWORD *)(v20 + 12) = v23;
          v24 = v9[3];
          *((_DWORD *)v9 + 3) = v21;
          v25 = *(_QWORD *)(v20 + 24);
          *(_QWORD *)(v20 + 24) = v24;
          v9[3] = v25;
          sub_255630((__int64)v10);
          clear_tinfo_t();
          j__qfree((__int64)v10);
          goto LABEL_8;
        }
LABEL_6:
        *((_DWORD *)v9 + 2) = 72;
        v9[3] = (__int64)v7;
      }
LABEL_7:
      v7 = v10;
LABEL_8:
      if ( !v8 )
        goto LABEL_13;
    }
    if ( !v7 )
      goto LABEL_7;
    v9 = sub_2413C0(a3, *v7, v11, v12, a5);
    goto LABEL_6;
  }
  v13 = *(_DWORD *)(a2 + 76);
  v14 = v13 & 0xFFFFFFFB;
  if ( (_DWORD)v14 != 2 )
  {
LABEL_13:
    if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
      goto LABEL_22;
    goto LABEL_14;
  }
  if ( (_BYTE)a4 )
  {
    if ( !under_debugger )
      sub_383060(0xCA3Bu, a5);
    goto LABEL_44;
  }
  v27 = *(_QWORD *)(a2 + 32);
  if ( v27 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCA3Cu, a5);
    goto LABEL_44;
  }
  if ( v13 == 2 )
    v7 = (__int64 *)sub_23E3A0(*(_QWORD *)(a2 + 32), v27, v14, a4);
  else
    v7 = sub_246080(*(_QWORD *)(a1 + 176), v27, *(_QWORD *)(a2 + 32), a4);
  v30 = sub_2413C0(a3, *v7, v28, v29, a5);
  *((_DWORD *)v30 + 2) = 72;
  v30[3] = (__int64)v7;
  if ( (*(_BYTE *)(a2 + 24) & 4) == 0 )
  {
    if ( *(_QWORD *)a3 == -1 )
    {
      v31 = *(_QWORD *)(a2 + 32);
      if ( v31 != -1 )
        *(_QWORD *)a3 = v31;
    }
    return nullptr;
  }
LABEL_14:
  v15 = *(_QWORD *)(a3 + 24);
  if ( (int)v34 == *(_QWORD *)(v15 + 16) )
  {
    sub_2413C0(a3, *(_QWORD *)(a2 + 32), (int)v34, v34, a5);
    v15 = *(_QWORD *)(a3 + 24);
  }
  v16 = *(_QWORD **)v15;
  if ( (int)v34 > 0 )
  {
    v17 = 0;
    if ( (v34 & 1) == 0 || (v16 = (_QWORD *)*v16, v17 = 1, (_DWORD)v34 != 1) )
    {
      do
      {
        v17 += 2;
        v16 = *(_QWORD **)*v16;
      }
      while ( (_DWORD)v34 != v17 );
    }
  }
  *((_DWORD *)v16 + 7) = *(_DWORD *)(a2 + 72);
  v18 = *(_QWORD *)(a2 + 32);
  if ( v18 != -1 )
    v16[2] = v18;
LABEL_22:
  if ( *(_QWORD *)a3 != -1 || (v26 = *(_QWORD *)(a2 + 32), v26 == -1) )
  {
    if ( !v33 )
      return nullptr;
  }
  else
  {
    *(_QWORD *)a3 = v26;
    if ( !v33 )
      return nullptr;
  }
  return v7;
}

