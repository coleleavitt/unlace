__int64 __fastcall sub_290E30(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax
  int tinfo_size; // r12d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 48 && (*(_BYTE *)(a3 + 56) & 1) == 0 )
  {
    tinfo_size = get_tinfo_size();
    v7 = get_tinfo_size();
    v10 = *(_QWORD *)(a1 + 24);
    if ( tinfo_size == -1 || tinfo_size != v7 )
    {
      *(_QWORD *)(a1 + 24) = sub_247510(*(_QWORD *)(a2 + 112), v10, v8, v9, a4);
      v13 = j__qalloc_or_throw(64, v10, v11, v12);
      v14 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)v13 = -1;
      *(_QWORD *)(v13 + 24) = v14;
      *(_DWORD *)(v13 + 8) = 48;
      *(_QWORD *)(v13 + 12) = -1;
      *(_QWORD *)(v13 + 32) = 0;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0;
      *(_DWORD *)(v13 + 56) = 0;
      *(_QWORD *)(a1 + 24) = v13;
      sub_32C540(v15, *(_QWORD *)(a2 + 112), (_QWORD *)(a1 + 48));
      copy_tinfo_t();
      clear_tinfo_t();
      *(_DWORD *)(a1 + 8) = 51;
      *(_DWORD *)(a1 + 40) = tinfo_size;
    }
    else
    {
      sub_255850((__int64 *)a1, v10, a4);
    }
    return 1;
  }
  return result;
}

