__int64 __fastcall sub_298E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 76) )
    goto LABEL_2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 24) - v5;
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 < v6 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < v6 )
    {
      v11 = qvector_reserve();
      v7 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v11;
      v10 = v11;
    }
    memset((void *)(v10 + 16 * v7), 0, 16 * (v6 - v7));
    *(_QWORD *)(a1 + 48) = v6;
    v5 = *(_QWORD *)(a1 + 64);
  }
  else if ( v6 != v7 )
  {
    *(_QWORD *)(a1 + 48) = v6;
  }
  v8 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 72) = 0;
  if ( v8 && (v5 && !is_mul_ok(v8, v5) || !is_mul_ok(v6, v8)) )
    goto LABEL_23;
  qlseek();
  if ( qlseek() == -1 )
  {
    qlseek();
LABEL_23:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  v9 = 0;
  while ( sub_29880(a1, (_OWORD *)(*(_QWORD *)(a1 + 40) + 16 * v9)) )
  {
    if ( v6 == ++v9 )
      goto LABEL_16;
  }
  LODWORD(v6) = v9;
LABEL_16:
  qlseek();
  *(_DWORD *)(a1 + 76) = v6;
  if ( !(_DWORD)v6 )
    return 0;
  *(_QWORD *)(a1 + 64) += (unsigned int)v6;
  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < (unsigned int)v6 )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 16 * v3;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}

