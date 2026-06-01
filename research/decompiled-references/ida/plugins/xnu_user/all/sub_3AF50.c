__int64 __fastcall sub_3AF50(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  int v5; // eax
  size_t v6; // rax
  size_t v7; // r12
  void *v9; // rdi
  size_t v10; // r13
  __int64 v11; // rax

  v5 = *(_DWORD *)(a2 + 24);
  if ( (v5 & 2) != 0 && (*(_BYTE *)(a4 + 24) & 4) == 0
    || (v5 & 1) != 0
    && (unsigned int)sub_3A840(
                       a3,
                       (_DWORD *)a4,
                       (__int64 (__fastcall *)(__m128i *, __int64, const char *, __int64))sub_2A610,
                       0) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( a3 && (v6 = strlen(a3), (v7 = v6) != 0) )
  {
    v9 = *(void **)a2;
    v10 = v6 + 1;
    if ( *(_QWORD *)(a2 + 16) < v6 + 1 )
    {
      v11 = qvector_reserve();
      *(_QWORD *)a2 = v11;
      v9 = (void *)v11;
    }
    *(_QWORD *)(a2 + 8) = v10;
    memmove(v9, a3, v7);
    *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return 0;
}

