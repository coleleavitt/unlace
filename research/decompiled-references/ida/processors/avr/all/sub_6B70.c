__int64 __fastcall sub_6B70(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  v1 = getinf();
  if ( (unsigned int)v1 > 0xD )
    return *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 348LL);
  v2 = -8293;
  if ( _bittest64(&v2, v1) )
    return *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 348LL);
  else
    return 1;
}

