__int64 __fastcall sub_23E970(char a1)
{
  __int64 v1; // rbx

  qvsnprintf();
  v1 = j__qalloc_or_throw();
  *(_QWORD *)v1 = -1;
  *(_QWORD *)(v1 + 8) = -4294967228LL;
  *(_QWORD *)(v1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 24) = qstrdup();
  copy_tinfo_t();
  if ( a1 )
    *(_DWORD *)(v1 + 56) |= 8u;
  return v1;
}

