__int64 __fastcall sub_AE60(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rsi
  __int64 v7; // r15
  __int64 v8; // rdi
  int v9; // edx
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // rdi
  char *v13; // r13
  _BYTE *v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v20; // [rsp+14h] [rbp-464h]
  int v21; // [rsp+28h] [rbp-450h]
  int v22; // [rsp+2Ch] [rbp-44Ch]
  char v23; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v24[1031]; // [rsp+31h] [rbp-447h] BYREF
  unsigned __int64 v25; // [rsp+438h] [rbp-40h]

  v5 = 0;
  v25 = __readfsqword(0x28u);
  LODWORD(v7) = netnode_altval(a2, 0, 65);
  v8 = (unsigned int)dword_2D4F4;
  v9 = (*(_WORD *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 ? 4 : 32;
  if ( !(_DWORD)v7 )
LABEL_20:
    sub_E6A0(v8, v5);
  v23 = 34;
  v7 = (unsigned int)v7;
  v21 = a3;
  v20 = (unsigned __int8)v9;
  while ( 1 )
  {
    v8 = a2;
    v5 = v7;
    *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = v21;
    v11 = netnode_supstr(a2, v7, v24, 1025, 83);
    if ( !v11 )
      goto LABEL_20;
    v12 = (unsigned int)dword_2D4F4;
    v24[v11 + 1 - 1] = 34;
    v24[v11 + 2 - 1] = 0;
    v13 = &v23;
    if ( (*(_BYTE *)(get_module_data(v12) + 148) & 0x20) != 0 )
    {
      v13 = strrchr(&v23, 47);
      v14 = v13 + 1;
      if ( !v13 )
      {
        v13 = &v23;
        v14 = v24;
      }
      *(v14 - 1) = 34;
    }
    v8 = a2;
    v5 = v7;
    v15 = netnode_altval(a2, v7, 65);
    if ( !v15 )
      goto LABEL_20;
    v8 = (unsigned int)dword_2D4F4;
    if ( *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33017) < v15 )
      goto LABEL_20;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v20);
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      sub_11760(a1, ".attribute ", 11);
    }
    else
    {
      v22 = sub_FB40(a1, "GenericAttribute ", 0, v16, v17);
      *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = v22;
    }
    if ( (unsigned __int8)sub_10630(a1, (unsigned __int16)v15, 13, 0) )
      return 1;
    v10 = sub_117A0(a1);
    if ( (_BYTE)v10 )
      return 1;
    if ( (unsigned __int8)sub_FDF0(a1, v13) )
      return 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, v20);
    if ( (unsigned __int8)sub_FBC0(a1, 0) )
      return 1;
    if ( !--v7 )
      return v10;
  }
}

