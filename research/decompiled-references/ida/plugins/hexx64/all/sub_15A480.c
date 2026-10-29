__int64 __fastcall sub_15A480(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int *v7; // rax
  int v14; // edx
  int *v15; // rdi
  int v16; // eax
  int v18; // edi
  char v19; // cl
  int v20; // esi
  char *v21; // r8
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int8 *v29; // rsi
  __int64 v30; // [rsp+8h] [rbp-70h]
  char *v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+10h] [rbp-68h] BYREF
  __int64 v33; // [rsp+18h] [rbp-60h] BYREF
  __int64 v34[11]; // [rsp+20h] [rbp-58h] BYREF

  v34[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a4 != 4 )
  {
    if ( !under_debugger )
      sub_383060(0xC53Cu, a7);
    BUG();
  }
  v7 = *(int **)(a4 + 8);
  v14 = *v7;
  if ( (unsigned int)(*v7 - 12) > 1 || *(_BYTE *)a5 != 2 || !a3 )
    goto LABEL_5;
  v18 = *(_DWORD *)(a3[4].m128i_i64[0] + 1184);
  v19 = *((_BYTE *)v7 + 32);
  if ( v19 == 1 && ((v22 = v7[10], *(_DWORD *)(a2 + 60) == v22) || v18 == v22) )
  {
    v21 = (char *)(v7 + 12);
    v19 = *((_BYTE *)v7 + 48);
  }
  else
  {
    if ( *((_BYTE *)v7 + 48) != 1 )
      goto LABEL_5;
    v20 = v7[14];
    if ( *(_DWORD *)(a2 + 60) != v20 && v18 != v20 )
      goto LABEL_5;
    v21 = (char *)(v7 + 8);
  }
  if ( v19 == 2 )
  {
    if ( v14 == 12 || v21 == (char *)(v7 + 12) )
    {
      v31 = v21;
      if ( (unsigned __int8)sub_11FD80((char *)a5, &v33, 1) )
      {
        if ( (unsigned __int8)netnode_charval() == 1 && (unsigned __int8)sub_11FD80(v31, &v32, 1) )
        {
          v24 = *((_DWORD *)v31 + 1);
          if ( **(_DWORD **)(a4 + 8) == 12 )
            v25 = sub_15A410(v33, v32, v24);
          else
            v25 = sub_15A440(v33, v32, v24);
          sub_14E870(*(_DWORD *)(a5 + 4), *(__m128i **)(a5 + 8), v25);
          v28 = *(_QWORD *)(a4 + 8);
          v29 = (unsigned __int8 *)(v28 + 32);
          if ( (char *)(v28 + 32) == v31 )
            v29 = (unsigned __int8 *)(v28 + 48);
          sub_123A40((__int64)v34, v29, v26, v27);
          sub_11CA10((char *)a4, (char *)v34);
          sub_11CDA0((__int64)v34);
          return 1;
        }
      }
    }
LABEL_5:
    if ( (unsigned __int8)sub_1205A0((_BYTE *)a1, a2, 0) )
      return 0;
    v15 = *(int **)(a4 + 8);
    v16 = *v15;
    if ( *v15 == 22 )
    {
      if ( *((_BYTE *)v15 + 48) != 2 )
      {
LABEL_8:
        if ( a3 )
          return sub_119850((_DWORD *)a1, a3, a6);
        return 0;
      }
      v30 = *(_QWORD *)(*((_QWORD *)v15 + 7) + 16LL);
      if ( sub_125B60((unsigned __int8 *)a5, (__int64)(v15 + 8), 0, a7) )
      {
        *(_DWORD *)a1 = 14;
        v23 = 1;
        if ( (v30 & 0xC0) == 0 )
          v23 = (1LL << v30) + 1;
        sub_120A10(a4, (unsigned __int64 *)a2, v23, *(_DWORD *)(a5 + 4), *(_QWORD *)(a1 + 24), 0);
        return 1;
      }
      v15 = *(int **)(a4 + 8);
      v16 = *v15;
    }
    if ( v16 == 14
      && ((unsigned __int8)sub_11FD80((char *)v15 + 48, v34, 0)
       && sub_125B60((unsigned __int8 *)a5, *(_QWORD *)(a4 + 8) + 32LL, 0, a7)
       || (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a4 + 8) + 32LL), v34, 0)
       && sub_125B60((unsigned __int8 *)a5, *(_QWORD *)(a4 + 8) + 48LL, 0, a7)) )
    {
      *(_DWORD *)a1 = 14;
      sub_120A10(a4, (unsigned __int64 *)a2, v34[0] + 1, *(_DWORD *)(a4 + 4), *(_QWORD *)(a1 + 24), 0);
      return 1;
    }
    goto LABEL_8;
  }
  if ( v14 != 12 )
    goto LABEL_5;
  sub_11CA10(v21, (char *)a5);
  return 1;
}

