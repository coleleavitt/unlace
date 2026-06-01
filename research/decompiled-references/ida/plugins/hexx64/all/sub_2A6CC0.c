__int64 __fastcall sub_2A6CC0(__int64 *a1, unsigned __int64 *a2, __int64 *a3, double a4)
{
  unsigned __int64 v4; // r12
  char v5; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  int v11; // eax
  char v12; // al
  unsigned __int64 v13; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 tinfo_property; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (*(_DWORD *)(a2[4] + 32) & 3) != 0 )
    return v18 - __readfsqword(0x28u);
  v4 = a2[3];
  v5 = 0;
  v9 = *(_DWORD *)(v4 + 8);
  if ( v9 > 0x3C )
  {
    if ( v9 == 65 )
    {
      v10 = a2[3];
      goto LABEL_20;
    }
  }
  else
  {
    if ( v9 > 0x3A )
    {
      if ( (unsigned __int8)sub_29A3A0(*a1, (__int64 *)(v4 + 48), a3, 0, a4) )
      {
        copy_tinfo_t();
        copy_tinfo_t();
        if ( *(_DWORD *)(v4 + 8) == 60 )
        {
          tinfo_property = get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          if ( !under_debugger )
            sub_383060(0xC529u, a4);
          BUG();
        }
        clear_tinfo_t();
      }
      return v18 - __readfsqword(0x28u);
    }
    if ( v9 == 51 )
    {
      v10 = a2[3];
      do
      {
        v10 = *(_QWORD *)(v10 + 24);
        v11 = *(_DWORD *)(v10 + 8);
      }
      while ( v11 == 51 );
      if ( v11 == 48 )
      {
        v5 = 1;
        goto LABEL_28;
      }
      if ( (unsigned int)(v11 - 35) <= 1 && *(_DWORD *)(*(_QWORD *)(v10 + 24) + 8LL) == 48 )
      {
        v12 = get_tinfo_property();
        if ( (v12 & 0x3E) != 0 && (v12 & 0xFu) <= 8 )
        {
          v13 = a2[3];
          if ( *(_DWORD *)(v10 + 8) != 65 )
          {
            v5 = 1;
LABEL_28:
            copy_tinfo_t();
            v16 = *a2;
            if ( *a2 == -1 )
              goto LABEL_31;
            if ( *(_DWORD *)(v4 + 8) == 51 )
            {
              sub_2A69F0((__int64)a1, v16, (__int64 *)(v4 + 48), v5, a4);
LABEL_31:
              while ( *(_DWORD *)(v4 + 8) == 51 )
              {
                sub_32C540(&tinfo_property, *(_QWORD *)(*a1 + 112), (_QWORD *)(v4 + 48));
                copy_tinfo_t();
                clear_tinfo_t();
                v4 = *(_QWORD *)(v4 + 24);
              }
            }
            return v18 - __readfsqword(0x28u);
          }
          v15 = *a1;
LABEL_23:
          if ( !(unsigned __int8)sub_29A3A0(v15, (__int64 *)(v13 + 48), a3, 0, a4) )
            return v18 - __readfsqword(0x28u);
          goto LABEL_28;
        }
      }
LABEL_20:
      if ( *(_DWORD *)(v10 + 8) != 65
        || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 432LL) + 104LL * *(int *)(v10 + 32) + 24) & 2) != 0 )
      {
        return v18 - __readfsqword(0x28u);
      }
      v15 = *a1;
      v13 = a2[3];
      goto LABEL_23;
    }
  }
  if ( !(unsigned __int8)sub_29A3A0(*a1, (__int64 *)(v4 + 48), a3, 0, a4) )
    return v18 - __readfsqword(0x28u);
  return copy_tinfo_t();
}

