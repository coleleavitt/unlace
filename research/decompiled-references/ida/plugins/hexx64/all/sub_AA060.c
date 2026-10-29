__int64 __fastcall sub_AA060(__int128 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-88h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int8 v27[4]; // [rsp+30h] [rbp-58h] BYREF
  int v28; // [rsp+34h] [rbp-54h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) + *(_DWORD *)(a2 + 68) > 16 )
    return 0;
  v7 = *((_QWORD *)&a1 + 1);
  v10 = sub_11C8A0(a2, &v26);
  if ( !v10 || *(_DWORD *)a2 == 13 && v10 != a2 + 48 )
    return 0;
  v23 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), *(_DWORD *)(v10 + 4), 1);
  v11 = v23;
  v12 = *(unsigned int *)(v26 + 4);
  if ( (int)v12 <= 3 )
    goto LABEL_13;
  LOBYTE(v11) = v23 != -1;
  if ( ((unsigned __int8)v11 & (v23 != 1)) == 0 || *(_BYTE *)v26 == 4 )
    goto LABEL_13;
  v11 = (unsigned int)(8 * v12 - 1);
  v13 = 0;
  v12 = (int)v11;
  if ( (unsigned __int64)(int)v11 <= 0x1F )
    v13 = 1 << v11;
  if ( v23 == v13 )
  {
LABEL_13:
    sub_123A40((__int64)v27, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v12, v11);
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    if ( !(unsigned __int8)sub_132E20(a1, (__int64)v27, *(_QWORD *)(a2 + 8), a2 + 64, 5u)
      || a2 && sub_122240(v7, *(_QWORD *)(a2 + 8), 0) && (unsigned __int8)sub_A9BE0(a1, v7, a2, v7)
      || ((v24 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), !a4) || (v17 = sub_A9F90(a1, v7, a2)) == 0)
      && (v17 = sub_1205A0((_BYTE *)v7, v24, 0, v14, v15, v16)) != 0
      || (*((_QWORD *)&a1 + 1) = a2, v5 = sub_133220(a1, v26, (_BYTE *)v7, v7), !(_BYTE)v5) )
    {
      v5 = 0;
    }
    else
    {
      if ( *(_DWORD *)a2 == 13 )
      {
        v23 = -v23;
        *(_DWORD *)a2 = 12;
      }
      else if ( *(_DWORD *)a2 != 12 )
      {
        if ( !under_debugger )
          sub_383060(0xC786u, a5);
        BUG();
      }
      if ( v28 > 15 )
      {
        v22 = (_QWORD *)j__qalloc_or_throw(32, a2, v18, v19);
        v22[1] = 0;
        v22[3] = 0;
        *v22 = 0xFFFFFFFF00000000LL;
        v22[2] = 0xFFFFFFFF00000000LL;
        v25 = (__int64)v22;
        sub_120A10((__int64)(v22 + 2), v24, v23, *(_DWORD *)(v10 + 4), **(_QWORD **)(v10 + 8), 0);
        sub_120A10(v25, v24, 0, *(_DWORD *)(v10 + 4), **(_QWORD **)(v10 + 8), 0);
        sub_11CDA0(v10);
        *(_BYTE *)v10 = 14;
        *(_QWORD *)(v10 + 8) = v25;
        *(_DWORD *)(v10 + 4) = v28;
      }
      else
      {
        v20 = 8 * *(_DWORD *)(v10 + 4);
        v21 = 0;
        if ( (unsigned __int64)v20 < 0x40 )
          v21 = v23 << v20;
        sub_120A10(v10, v24, v21, v28, **(_QWORD **)(v10 + 8), 0);
      }
      sub_12AB50(v27, v24, v28, 2);
      sub_11CA10((char *)(a2 + 64), (char *)v27);
      sub_A1280(v24, a2, *(_DWORD *)(v7 + 4));
      if ( v17 )
        sub_11D5A0(v7);
    }
    sub_11CDA0((__int64)v27);
  }
  else
  {
    return 0;
  }
  return v5;
}

