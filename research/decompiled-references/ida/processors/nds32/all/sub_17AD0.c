__int64 __fastcall sub_17AD0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 tinfo_size; // rbx
  __int64 result; // rax
  int v5; // eax
  int v6; // ebp
  unsigned int v7; // eax
  signed int v8; // ebp

  tinfo_size = get_tinfo_size(0, *a3, 0);
  result = 0;
  if ( tinfo_size != -1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v6 = v5 + 3;
    v7 = (v5 + 7) & 0xFFFFFFF8;
    v8 = v6 & 0xFFFFFFFC;
    if ( tinfo_size == 8 )
      v8 = v7;
    *(_DWORD *)(a1 + 4) = v8;
    cleanup_argloc(a2);
    *(_QWORD *)(a2 + 8) = v8;
    *(_DWORD *)a2 = 1;
    *(_DWORD *)(a1 + 4) += (tinfo_size + 3) & 0xFFFFFFFC;
    return 1;
  }
  return result;
}

