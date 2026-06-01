__int64 __fastcall sub_3A7C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v13 = 0;
  v12 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v13 = 2;
  *v12 = 103;
  v12[1] = 0;
  if ( (unsigned int)sub_39C70(a1, &v12) != 1 )
  {
    if ( !v12 )
      return 0;
LABEL_4:
    *(_QWORD *)&v13 = 0;
    qfree();
    return 0;
  }
  v6 = sub_39BC0(a1);
  *(_BYTE *)(a1 + 16) = 0;
  if ( v6 != 1 )
  {
    if ( !v12 )
      return 0;
    goto LABEL_4;
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  v7 = *(_QWORD *)(a1 + 192);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v7 < v8 )
    v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 192) = v7;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = 0;
    while ( *(_BYTE *)(v9 + v10) )
    {
      if ( v8 == ++v10 )
        goto LABEL_20;
    }
    if ( v8 < v10 )
    {
      if ( *(_QWORD *)(a1 + 40) < v10 )
      {
        v11 = qvector_reserve();
        v8 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = v11;
        v9 = v11;
      }
      memset((void *)(v9 + v8), 0, v10 - v8);
      *(_QWORD *)(a1 + 32) = v10;
    }
    else if ( v8 != v10 )
    {
      *(_QWORD *)(a1 + 32) = v10;
    }
  }
LABEL_20:
  a2[1] = 0;
  a3[1] = 0;
  return sub_37CA0(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), a3);
}

