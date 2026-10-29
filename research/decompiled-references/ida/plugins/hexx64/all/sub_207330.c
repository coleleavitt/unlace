unsigned __int64 __fastcall sub_207330(__int64 a1, _QWORD *a2, int a3, double a4)
{
  __int64 v4; // r9
  __int64 v5; // rbp
  __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // r10
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int *v18; // rdi
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rcx
  int v22; // eax
  int v23; // esi
  __int64 v24; // [rsp+0h] [rbp-38h] BYREF
  char v25; // [rsp+8h] [rbp-30h]
  int v26; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v27; // [rsp+18h] [rbp-20h]

  v4 = a3;
  v5 = (int)a2;
  v27 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(unsigned __int64 **)(v7 + 88);
  v9 = &v8[*(_QWORD *)(v7 + 96)];
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v10 = **(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
      if ( !v10 )
        break;
      v11 = *v8;
      v12 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v12 )
      {
        if ( (*(_BYTE *)(*v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          break;
        v13 = *(_QWORD *)(v12 + 24);
        v14 = v12 + 24;
        if ( v11 < v13 )
        {
LABEL_8:
          v12 = *(_QWORD *)(v12 + 8);
          goto LABEL_9;
        }
        while ( v13 < v11 )
        {
          v12 = *(_QWORD *)(v12 + 16);
LABEL_9:
          if ( (*(_BYTE *)v12 & 2) != 0 )
            goto LABEL_5;
          v13 = *(_QWORD *)(v12 + 24);
          v14 = v12 + 24;
          if ( v11 < v13 )
            goto LABEL_8;
        }
        if ( (_QWORD *)v12 == v10 )
          break;
      }
      else
      {
        v14 = 24;
      }
      if ( *(_DWORD *)(v14 + 24) != *(_DWORD *)(*(_QWORD *)(a1 + 72) + 44LL) )
      {
        if ( !under_debugger )
          sub_383060(0xCE86u, a4);
LABEL_32:
        BUG();
      }
      *(_QWORD *)(v14 + 16) += v4;
      *(_DWORD *)(v14 + 24) = v5;
      if ( *(_BYTE *)v11 == 9 )
      {
        v15 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v15 + 8) = *(_QWORD *)(v14 + 16);
        *(_DWORD *)(v15 + 16) = *(_DWORD *)(v14 + 24);
      }
      if ( v9 == ++v8 )
        goto LABEL_18;
    }
LABEL_5:
    if ( !under_debugger )
      sub_383060(0xCE85u, a4);
    goto LABEL_32;
  }
LABEL_18:
  v16 = *(_QWORD *)(a1 + 72);
  if ( *(_DWORD *)(v16 + 44) != (_DWORD)v5 )
  {
    *(_DWORD *)(v16 + 44) = v5;
    sub_107060(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 72), *(_QWORD **)(a1 + 48), *(_QWORD **)(a1 + 56));
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 184) + 40LL) != 58 )
  {
    v18 = (int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v5);
    v19 = *(_QWORD *)(a1 + 72);
    v20 = *(_BYTE *)(v19 + 32);
    if ( v20 == 1 )
    {
      v21 = *(int *)(v19 + 24);
    }
    else
    {
      if ( v20 != 5 )
        sub_201340(a4);
      v21 = *(_QWORD *)(v19 + 24);
    }
    v22 = *(_DWORD *)(v19 + 40);
    v23 = v18[22];
    v24 = v21;
    v25 = v20;
    v26 = v22;
    if ( (unsigned __int8)sub_1C3E70(v18, v23, &v24, nullptr) )
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 40LL) = 58;
  }
  return v27 - __readfsqword(0x28u);
}

