__int64 __fastcall sub_180840(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __m128i a6)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  _DWORD *v10; // rbp
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, unsigned int); // rax
  __int64 v21; // rax
  int v22; // [rsp+4h] [rbp-64h]
  char v23[4]; // [rsp+10h] [rbp-58h] BYREF
  int v24; // [rsp+14h] [rbp-54h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 480);
  v8 = *(_DWORD *)a3;
  v25 = __readfsqword(0x28u);
  v10 = *(_DWORD **)(v7 + 112);
  if ( v8 > 9 )
  {
    if ( v8 != 56 )
      return 0;
    v17 = sub_180400(v7, a3, a5);
    if ( v17 < 0 )
      return 0;
    v18 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + 24LL);
    if ( *(_BYTE *)v18 == 10 )
    {
      sub_121740(a1, *(unsigned __int8 **)(v18 + 8));
    }
    else if ( *(_BYTE *)v18 == 2 )
    {
      sub_17FD90((__int64)v10, a1, 2, *(_DWORD *)(v18 + 4), *(_QWORD *)(v18 + 8));
    }
    else
    {
      sub_17FE80(a1, (__int64)v10, *(_QWORD *)(a3 + 24), nullptr, v18, v17);
    }
    *(_DWORD *)(a1 + 4) = v17;
  }
  else
  {
    if ( v8 > 7 )
    {
      if ( !a5 )
        return 0;
    }
    else if ( ((v8 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( v8 != 1 )
        return 0;
      if ( a4 )
      {
        if ( *(_BYTE *)(a3 + 48) != 1 )
          return 0;
        v19 = *(unsigned int *)(a3 + 56);
        v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 256LL);
        if ( v20 != sub_17F910 )
          LODWORD(v19) = v20(*(_QWORD *)(v7 + 112), v19);
        if ( (_DWORD)v19 != v10[13] && (_DWORD)v19 != v10[14] && (_DWORD)v19 != v10[16] )
          return 0;
      }
      v22 = *(_DWORD *)(a3 + 36);
      sub_120000((__int64)v23, (unsigned __int8 *)(a3 + 64));
      sub_17FBD0(*(_QWORD *)(a2 + 480), (__int64)v23);
      if ( (unsigned __int8)sub_138DA0(a2, a1, (int *)a3, a3 + 48, (__int64)v23, 0xFFFFFFFF) )
      {
        *(_DWORD *)(a1 + 4) = v22;
        sub_119360((__int64)v23);
        if ( *(_BYTE *)a1 == 2 )
          sub_17FD90((__int64)v10, a1, 2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 8));
        return 1;
      }
      sub_119360((__int64)v23);
      sub_17FE80(a1, (__int64)v10, *(_QWORD *)(a3 + 24), (unsigned __int8 *)(a3 + 48), a3 + 64, *(_DWORD *)(a3 + 36));
      goto LABEL_13;
    }
    if ( a4 )
    {
      v13 = *(_BYTE *)(a3 + 64);
      if ( v13 > 6u )
      {
        if ( v13 != 9 )
          return 0;
      }
      else if ( v13 <= 3u )
      {
        return 0;
      }
    }
    sub_121740(a1, (unsigned __int8 *)(a3 + 64));
  }
LABEL_13:
  if ( *(_BYTE *)a1 == 4 )
  {
    if ( !(unsigned __int8)sub_11CB60(*(_BYTE **)(a1 + 8), (__int64)v10, 0, v14, v15, v16) )
    {
      if ( *(_BYTE *)a1 == 4 )
      {
        if ( (unsigned int)sub_158230(*(unsigned int **)(a1 + 8), (__int64)v10, nullptr, 0, nullptr, nullptr, a6, 1u) )
        {
          v21 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)v21 == 2 && *(_BYTE *)(v21 + 48) == 10 )
          {
            sub_120000((__int64)v23, *(unsigned __int8 **)(v21 + 56));
            v24 = *(_DWORD *)(a1 + 4);
            sub_118FD0((char *)a1, v23);
            sub_119360((__int64)v23);
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 1;
}

