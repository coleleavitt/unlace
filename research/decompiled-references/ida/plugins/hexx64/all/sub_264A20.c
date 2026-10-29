__int64 *__fastcall sub_264A20(__int64 *a1, __int64 a2, signed int a3, double a4)
{
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v11; // rbx
  const void *v12; // r13
  void *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __m128 v17; // xmm0
  __int64 v18; // rax
  int v19; // [rsp+4h] [rbp-54h]
  __int128 v20; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !a2 )
    return sub_6B870(a1);
  v6 = **(_QWORD ***)(a2 + 64);
  if ( v6 )
  {
    v7 = 24;
    v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
      goto LABEL_14;
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = v8 + 24;
          if ( *(_DWORD *)(v8 + 24) <= a3 )
            break;
          v8 = *(_QWORD *)(v8 + 8);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_5;
        }
        if ( *(_DWORD *)(v8 + 24) >= a3 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_5;
      }
      if ( v6 != (_QWORD *)v8 )
      {
LABEL_14:
        if ( a1 != (__int64 *)(v8 + 32) )
        {
          v11 = *(_QWORD *)(v7 + 16);
          if ( v11 > 1 )
          {
            v12 = *(const void **)(v7 + 8);
            v13 = (void *)*a1;
            if ( a1[2] < v11 )
            {
              v18 = qvector_reserve((__int64)a1, *a1, v11, 1);
              *a1 = v18;
              v13 = (void *)v18;
            }
            a1[1] = v11;
            memmove(v13, v12, v11 - 1);
            *(_BYTE *)(*a1 + v11 - 1) = 0;
          }
          else
          {
            a1[1] = 0;
          }
        }
        return (__int64 *)(v21 - __readfsqword(0x28u));
      }
    }
  }
LABEL_5:
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 64LL);
  if ( (int)v9 <= a3 )
    return sub_6B870(a1);
  if ( a3 >= v9 )
  {
    if ( !under_debugger )
      sub_383060(0xCDEFu, a4);
    BUG();
  }
  if ( (get_flags_ex() & 0xC000) == 0x4000 )
  {
    v20 = 0;
    if ( get_ea_name() > 0 )
    {
      if ( strncmp(nullptr, "def_", 4u) || (unsigned int)qsscanf() != 1 )
        goto LABEL_32;
      v14 = v20 - 5;
      if ( !(_QWORD)v20 )
        v14 = -4;
      if ( v19 != v14 || get_switch_info() <= 0 )
      {
LABEL_32:
        v15 = *a1;
        v16 = a1[2];
        *a1 = 0;
        v17 = _mm_loadh_ps((const double *)&v20 + 1);
        *((_QWORD *)&v20 + 1) = v16;
        *(__m128 *)(a1 + 1) = v17;
        if ( v15 )
          qfree(v15);
        return (__int64 *)(v21 - __readfsqword(0x28u));
      }
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 216) + 717LL) )
    return sub_6B870(a1);
  sub_23FC40(a2);
  return sub_6B870(a1);
}

