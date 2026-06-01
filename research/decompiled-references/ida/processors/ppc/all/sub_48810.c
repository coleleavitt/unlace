__int64 __fastcall sub_48810(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  result = netnode_altval(*(_QWORD *)(a1[77] + 120LL), a1[30], 833);
  if ( result == -1 )
  {
    if ( (*((_BYTE *)a1 + 253) & 2) != 0 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 376LL))(a1);
  }
  else
  {
    v2 = result;
    result = get_flags_ex(result, 4);
    if ( (result & 0xC000) != 0 )
    {
      a1[19] = v2;
    }
    else
    {
      v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v3 == sub_48150 )
      {
        v4 = a1[4];
        if ( v4 )
        {
          v5 = v4 + 1;
          v6 = a1[4];
          --v4;
        }
        else
        {
          v6 = 1;
          v5 = 2;
        }
        v7 = a1[3];
        if ( a1[5] < v5 )
        {
          v16 = qvector_reserve(a1 + 3, v7, v5, 1);
          a1[3] = v16;
          v7 = v16;
        }
        a1[4] = v5;
        *(_BYTE *)(v7 + v4) = 32;
        *(_BYTE *)(a1[3] + v6) = 0;
      }
      else
      {
        v3(a1, 32);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 4);
      v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v8 == sub_48150 )
      {
        v9 = a1[4];
        if ( v9 )
        {
          v10 = v9 + 1;
          v11 = a1[4];
          --v9;
        }
        else
        {
          v11 = 1;
          v10 = 2;
        }
        v12 = a1[3];
        if ( a1[5] < v10 )
        {
          v15 = qvector_reserve(a1 + 3, v12, v10, 1);
          a1[3] = v15;
          v12 = v15;
        }
        a1[4] = v10;
        *(_BYTE *)(v12 + v9) = 32;
        *(_BYTE *)(a1[3] + v11) = 0;
      }
      else
      {
        v8(a1, 32);
      }
      v13 = sub_4CF90(a1[77], v2);
      v14 = *a1;
      if ( v13 && *(_QWORD *)(v13 + 16) > 1u )
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v14 + 56))(a1, *(_QWORD *)(v13 + 8), 0);
      else
        return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v14 + 112))(a1, v2, 16);
    }
  }
  return result;
}

