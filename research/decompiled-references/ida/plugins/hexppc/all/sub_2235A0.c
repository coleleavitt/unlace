__int64 __fastcall sub_2235A0(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  _QWORD **v7; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 (__fastcall **v20)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+20h] [rbp-38h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( *a2 != 5 )
    return 0;
  v7 = *(_QWORD ***)(a1 + 48);
  v9 = (__int64)a2;
  v10 = sub_1F8090(v7, (unsigned __int64)a2);
  v13 = v10;
  if ( !v10 )
    return 0;
  v14 = *v10;
  v15 = *((int *)v10 + 4);
  if ( *(_QWORD *)(v14 + 440) < v15 )
    goto LABEL_14;
  if ( *(_DWORD *)(*(_QWORD *)(v14 + 432) + 104 * v15) != 1 )
    return 0;
  a2 = (_BYTE *)v13[1];
  if ( !(_DWORD)a2 )
    return 0;
  v7 = (_QWORD **)*(unsigned int *)(v9 + 4);
  if ( (_DWORD)v7 == -1 )
    return 0;
  v4 = (int)a2 % (int)v7;
  if ( (int)a2 % (int)v7 )
    return 0;
  v16 = *(_QWORD *)(a1 + 32);
  if ( v16 != *(_QWORD *)(a1 + 24) )
    return 0;
  v17 = *(_QWORD *)(a1 + 8);
  v23 = *(_QWORD *)(a1 + 32);
  v24 = v16;
  v21 = v17;
  v18 = *(_QWORD *)(a1 + 16);
  v20 = off_4CBE90;
  v22 = v18;
  v14 = *v13;
  v19 = *((int *)v13 + 4);
  if ( *(_QWORD *)(*v13 + 440LL) < v19 )
LABEL_14:
    sub_223240(v7, a2, v14, v13, v11, v12, v20, v21, v22, v23, v24);
  if ( (unsigned __int8)sub_2048C0((__int64)&v20, v9, a4, (int)a2, *(_QWORD *)(v14 + 432) + 104 * v19) )
  {
    ++*(_DWORD *)(a1 + 56);
    return 1;
  }
  return v4;
}

