unsigned __int64 __fastcall sub_30DE60(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  unsigned __int64 v3; // r12
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v1 = *(_DWORD *)a1;
  v30 = __readfsqword(0x28u);
  v2 = v1 & 0xF;
  if ( v2 <= 4 )
  {
    if ( v2 > 2 )
    {
      v13 = *(_QWORD *)(a1 + 24);
      if ( ((v13 + 1) & 0xFFFFFFFFFFFFFFFDLL) == 0 )
      {
        v3 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(a1 + 16);
        if ( v7 < v3 )
        {
          v27 = *(_QWORD *)(a1 + 8);
          v13 = -v13;
          v3 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 24) = v13;
          v7 = v27;
        }
        sub_30DA80(a1);
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        if ( v13 != -1 )
          goto LABEL_7;
        v28 = 0;
        v29 = v3 + 1;
        sub_311AB0(a1 + 8, &v28, v8, v9, v10, v11);
        v17 = *(unsigned int *)(a1 + 4);
        v18 = -1;
        if ( (_DWORD)v17 != 8 )
        {
          v17 = (unsigned int)(8 * v17);
          v18 = (1LL << v17) - 1;
        }
        v28 = v7;
        v29 = v18 - v7 + 1;
        sub_311AB0(a1 + 8, &v28, v14, v17, v15, v16);
      }
    }
  }
  else if ( v2 == 5 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 4);
    v5 = v3 | *(_QWORD *)(a1 + 8);
    if ( v4 != 8 )
      v5 |= -1LL << (8 * (unsigned __int8)v4);
    v6 = ~v5;
    if ( (~v5 & -v5) == 0 )
    {
      v7 = v3 + v6;
      sub_30DA80(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
LABEL_7:
      v28 = v3;
      v29 = v7 + 1 - v3;
      sub_311AB0(a1 + 8, &v28, v8, v9, v10, v11);
      return v30 - __readfsqword(0x28u);
    }
    if ( (~v5 & (-v5 - 2)) == 0 )
    {
      sub_30DA80(a1);
      v28 = v3;
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v29 = 1;
      sub_311AB0(a1 + 8, &v28, v19, v20, v21, v22);
      v28 = v3 + v6;
      v29 = 1;
      sub_311AB0(a1 + 8, &v28, v23, v24, v25, v26);
    }
  }
  return v30 - __readfsqword(0x28u);
}

